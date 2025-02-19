import sys
import os
import platform
from distutils.util import get_platform;
from os import path

def isDirESDK(testpath):
   if path.isfile(path.join(testpath, 'crossplatform.mk')):
      if path.isfile(path.join(testpath, 'default.cf')):
         return True
   return False

def getDirESDK(startpath):
   itpath = startpath
   while 1:
      if isDirESDK(itpath) == True:
         return itpath
      itpath, removed = path.split(itpath)
      if removed == '':
         break
   return 'badpath'

esdkDir = getDirESDK(os.getcwd())
if esdkDir.find('pip-req-build-') == -1 or esdkDir.find('pip-install-of') == -1:
   inPipInstallBuild = False #True
else:
   inPipInstallBuild = False

# print(' -- before ecere extension build -- ')
pver = platform.python_version()
# print('arg zero: ', sys.argv[0])
# print('count: ', len(sys.argv))
# print('args: ', str(sys.argv))
if inPipInstallBuild == True:
   blddir = 'build/lib.%s-%s' % (get_platform(), pver[0:pver.rfind('.')])
else:
   blddir = 'bindings/py'

dnf = path.dirname(__file__)
dir = path.abspath(path.dirname(__file__))
owd = os.getcwd()
cpath = path.join('..', 'c')
if os.path.isdir(cpath) != True:
   cpath = path.join(esdkDir, 'bindings', 'c')
   if os.path.isdir(cpath) != True:
      print('error: unable to find path to C bindings!')
rel = '' if os.path.isfile(os.path.join(owd, 'build_ecere.py')) == True else path.join('bindings', 'py')
sysdir = 'win32' if sys.platform == 'win32' else 'linux'
syslibdir = 'bin' if sys.platform == 'win32' else 'lib'
incdir = path.join(esdkDir, 'bindings', 'c')
if rel == '':
   libdir = path.join('..', '..', 'obj', sysdir, syslibdir)
else:
   libdir = path.join('obj', sysdir, syslibdir)

if os.path.isfile(path.join(rel, 'cffi-ecere.h')) != True:
   print('problem! -- owd:', owd, ' rel:', rel)

if dnf != '':
   os.chdir(dir)

_CF_DIR = str(os.getenv('_CF_DIR'))
_cf_dir = False if _CF_DIR == '' else True
if _cf_dir == True:
   _c_bindings_path, _ = os.path.split(dir)
   _c_bindings_path, _ = os.path.split(_c_bindings_path)
   sys.path.append(path.realpath(path.join(dir, '../../', _CF_DIR, 'bindings/py')))
if rel != '':
   sys.path.append(dir)

def cdefpath(filename):
   fullpath = path.realpath(path.join(owd, rel, filename))
   if path.isfile(fullpath):
      return fullpath
   if _cf_dir == True:
      fullpath = path.join(dir, _CF_DIR, 'bindings/py', filename)
      fullpath = path.realpath(fullpath)
      if path.isfile(fullpath):
         return fullpath
   return 'badpath'

from build_eC import FFI, ffi_eC
from distutils.sysconfig import get_config_var

ext = '.so' if get_config_var('EXT_SUFFIX') is None else get_config_var('EXT_SUFFIX')

ffi_ecere = FFI()
ffi_ecere.include(ffi_eC)
ffi_ecere.cdef(open(cdefpath('cffi-ecere.h')).read())
PY_BINDINGS_EMBEDDED_C_DISABLE = os.getenv('PY_BINDINGS_EMBEDDED_C_DISABLE')
_embedded_c = False if PY_BINDINGS_EMBEDDED_C_DISABLE == '' else True

srcs = []
if _embedded_c == True:
   srcs.append(path.join(cpath, 'eC.c'))
   srcs.append(path.join(cpath, 'ecere.c'))

libs = []

libs.append('ecere')
if _embedded_c == False:
   libs.append('ecere_c')
ffi_ecere.set_source('_pyecere',
               '#include "ecere.h"',
               sources=srcs,
               define_macros=[('BINDINGS_SHARED', None), ('ECERE_EXPORT', None)],
               extra_compile_args=['-DECPRFX=eC_', '-DMS_WIN64', '-Wl,--export-dynamic', '-O2'],
               include_dirs=[path.join(owd, rel), incdir],
               libraries=libs,
               extra_link_args=["-Wl,-rpath,$ORIGIN/lib,-rpath,$ORIGIN/EcereSDK/lib",path.join(esdkDir, blddir, '_pyeC' + ext), '-DMS_WIN64', '-O2'],
               library_dirs=[path.join(owd, libdir)],
               py_limited_api=False)
if __name__ == '__main__':
   V = os.getenv('V')
   v = True if V == '1' or V == 'y' else False
   ffi_ecere.compile(verbose=v,tmpdir='.',debug=True)

if dnf != '':
   os.chdir(owd)
