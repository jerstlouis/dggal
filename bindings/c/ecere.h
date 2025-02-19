//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
////                                                                        //// ////////////////////////
////    ecere Module                                                        //// ////////////////////////
////                                                                        //// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////////////


#if !defined(__ECERE_H__)
#define __ECERE_H__

#define CPP11 (defined(__cplusplus) && __cplusplus >= 201103L)

#ifdef __cplusplus

extern "C" {

#endif

////////////////////////////////////////////////////////////// includes //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////

#include "eC.h"



#undef THIS_LIB_IMPORT
#ifdef ECERE_EXPORT
#define THIS_LIB_IMPORT LIB_EXPORT
#elif defined(BINDINGS_SHARED)
#define THIS_LIB_IMPORT LIB_IMPORT
#else
#define THIS_LIB_IMPORT
#endif


#define ECERE_APP_INTRO(c) \
      APP_INTRO(true) \
      ecere_init(app); \
      loadTranslatedStrings(null, MODULE_NAME); \
      Instance_evolve(&app, class_ ## c);

#define ECERE_APP_OUTRO \
      unloadTranslatedStrings(MODULE_NAME); \
      APP_OUTRO

#define GUIAPP_INTRO ECERE_APP_INTRO(GuiApplication)


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////    //////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


#define jsonIndentWidth (3)

typedef C(LinkElement) T(LinkElement, FMFont);
typedef C(Array) T(Array, BlockEntry);
typedef C(Array) T(Array, String);
typedef C(Array) T(Array, SkinVert);
typedef C(Array) T(Array, SkinBone);
typedef C(Array) T(Array, MeshPart);
typedef C(Array) T(Array, MeshMorph);
typedef C(Array) T(Array, int);
typedef C(Array) T(Array, Window);
typedef C(Map) T(Map, String, JSONTypeOptions);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gfx||drivers  ///////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef C(Instance) C(Bitmap);
typedef uint32 C(ColorAlpha);
typedef C(Instance) C(DisplaySystem);
#if CPP11
enum C(PixelFormat) : int
#else
typedef int C(PixelFormat);
enum C(PixelFormat)
#endif
{
   PixelFormat_pixelFormat4 = 0x0,
   PixelFormat_pixelFormat8 = 0x1,
   PixelFormat_pixelFormat444 = 0x2,
   PixelFormat_pixelFormat555 = 0x3,
   PixelFormat_pixelFormat565 = 0x4,
   PixelFormat_pixelFormat888 = 0x5,
   PixelFormat_pixelFormatAlpha = 0x6,
   PixelFormat_pixelFormatText = 0x7,
   PixelFormat_pixelFormatRGBA = 0x8,
   PixelFormat_pixelFormatA16 = 0x9,
   PixelFormat_pixelFormatRGBAGL = 0xA,
   PixelFormat_pixelFormatETC2RGBA8 = 0xB
};

struct CM(Bitmap)
{
   int width;
   int height;
   C(PixelFormat) pixelFormat;
   byte * picture;
   uint stride;
   uint size;
   uint sizeBytes;
   C(ColorAlpha) * palette;
   C(bool) allocatePalette;
   C(bool) transparent;
   int shadeShift;
   byte * paletteShades;
   C(bool) alphaBlend;
   C(DisplaySystem) displaySystem;
   subclass(DisplayDriver) driver;
   void * driverData;
   C(bool) keepData;
   C(bool) mipMaps;
   C(bool) sRGB2Linear;
   int numMipMaps;
   C(Bitmap) * bitmaps;
};
struct C(Box)
{
   int left;
   int top;
   int right;
   int bottom;
};
struct C(CompiledShader)
{
   int program;
   int vertex;
   int fragment;
};
typedef uint64 C(DefaultShaderBits);
struct CM(DefaultShader)
{
   byte __ecerePrivateData0[13184];
   C(DefaultShaderBits) backLightState;
};
struct CM(Display)
{
   int width;
   int height;
   void * driverData;
   byte __ecere_padding[64];
};
struct C(Font)
{
   byte __ecere_padding[688];
};
struct C(GLB)
{
   uint buffer;
};
typedef uint64 C(BlockEntry);
typedef struct C(Box) C(Box);
typedef C(Instance) C(Camera);
#if CPP11
enum C(ClearType) : int
#else
typedef int C(ClearType);
enum C(ClearType)
#endif
{
   ClearType_colorBuffer = 0x0,
   ClearType_depthBuffer = 0x1,
   ClearType_colorAndDepth = 0x2
};

typedef uint32 C(Color);
typedef struct C(CompiledDefaultShader) C(CompiledDefaultShader);
typedef struct C(CompiledShader) C(CompiledShader);
typedef C(Instance) C(Shader);
typedef C(Shader) C(DefaultShader);
typedef C(Instance) C(Display);
typedef C(Instance) C(DisplayDriver);
typedef struct C(Font) C(Font);
typedef T(Array, BlockEntry) C(FreeBlockMap);
typedef struct C(GLAB) C(GLAB);
#if CPP11
enum C(GLAttribMode) : int
#else
typedef int C(GLAttribMode);
enum C(GLAttribMode)
#endif
{
   GLAttribMode_none = 0x0,
   GLAttribMode_normalized = 0x1,
   GLAttribMode_integer = 0x2,
   GLAttribMode_longDouble = 0x3
};

typedef struct C(GLB) C(GLB);
#if CPP11
enum C(GLBType) : int
#else
typedef int C(GLBType);
enum C(GLBType)
#endif
{
   GLBType_elements = 0x0,
   GLBType_attributes = 0x1,
   GLBType_commands = 0x2
};

#if CPP11
enum C(GLBufferContents) : int
#else
typedef int C(GLBufferContents);
enum C(GLBufferContents)
#endif
{
   GLBufferContents_vertex = 0x0,
   GLBufferContents_normal = 0x1,
   GLBufferContents_texCoord = 0x2,
   GLBufferContents_color = 0x3,
   GLBufferContents_tangent1 = 0x4,
   GLBufferContents_tangent2 = 0x5,
   GLBufferContents_lightVector = 0x6,
   GLBufferContents_boneIndices1 = 0x7,
   GLBufferContents_boneIndices2 = 0x8,
   GLBufferContents_boneIndices3 = 0x9,
   GLBufferContents_boneWeights1 = 0xA,
   GLBufferContents_boneWeights2 = 0xB,
   GLBufferContents_boneWeights3 = 0xC
};

#if CPP11
enum C(GLBufferUsage) : int
#else
typedef int C(GLBufferUsage);
enum C(GLBufferUsage)
#endif
{
   GLBufferUsage_staticDraw = 0x0,
   GLBufferUsage_dynamicDraw = 0x1,
   GLBufferUsage_streamDraw = 0x2
};

typedef struct C(GLCAB) C(GLCAB);
typedef struct C(GLEAB) C(GLEAB);
typedef struct C(GLFB) C(GLFB);
#if CPP11
enum C(GLIMTKMode) : int
#else
typedef int C(GLIMTKMode);
enum C(GLIMTKMode)
#endif
{
   GLIMTKMode_unset = -1,
   GLIMTKMode_points = 0x0,
   GLIMTKMode_lines = 0x1,
   GLIMTKMode_lineLoop = 0x2,
   GLIMTKMode_lineStrip = 0x3,
   GLIMTKMode_triangles = 0x4,
   GLIMTKMode_triangleStrip = 0x5,
   GLIMTKMode_triangleFan = 0x6,
   GLIMTKMode_quads = 0x7,
   GLIMTKMode_quadStrip = 0x8,
   GLIMTKMode_polygon = 0x9
};

typedef C(FreeBlockMap) C(GLMB);
#if CPP11
enum C(GLMSWhatToGet) : int
#else
typedef int C(GLMSWhatToGet);
enum C(GLMSWhatToGet)
#endif
{
   GLMSWhatToGet_modelViewMatrix = 0xBA6,
   GLMSWhatToGet_projectionMatrix = 0xBA7,
   GLMSWhatToGet_textureMatrix = 0xBA8
};

typedef struct C(Light) C(Light);
typedef struct C(Material) C(Material);
typedef struct C(Matrix) C(Matrix);
#if CPP11
enum C(MatrixMode) : int
#else
typedef int C(MatrixMode);
enum C(MatrixMode)
#endif
{
   MatrixMode_modelView = 0x1700,
   MatrixMode_projection = 0x1701,
   MatrixMode_texture = 0x1702
};

typedef struct C(Matrixf) C(Matrixf);
typedef uint32 C(MeshFeatures);
typedef uint32 C(ShaderModifiedUniforms);
#if CPP11
enum C(SwizzleMode) : int
#else
typedef int C(SwizzleMode);
enum C(SwizzleMode)
#endif
{
   SwizzleMode_off = 0x0,
   SwizzleMode_alpha = 0x1,
   SwizzleMode_red = 0x2
};

// end -- moved backwards outputs
#define LIGHTSHIFT (5)

#define LIGHTSTEPS (1 << LIGHTSHIFT)

#define noAB (__extension__ ({ C(GLAB) __simpleStruct0 = { 0 };  __simpleStruct0; }))

#define noEAB (__extension__ ({ C(GLEAB) __simpleStruct1 = { 0 };  __simpleStruct1; }))

typedef C(Instance) C(GLStats);
typedef struct C(LFBDisplay) C(LFBDisplay);
typedef C(DisplayDriver) C(LFBDisplayDriver);
typedef struct C(LFBSurface) C(LFBSurface);
typedef struct C(LFBSystem) C(LFBSystem);
#if CPP11
enum C(LightMode) : int
#else
typedef int C(LightMode);
enum C(LightMode)
#endif
{
   LightMode_off = 0x0,
   LightMode_dir = 0x1,
   LightMode_pos = 0x2,
   LightMode_posAtt = 0x3,
   LightMode_posSpot = 0x4,
   LightMode_posSpotAtt = 0x5
};

#define BLOCKENTRY_start_SHIFT                           32
#define BLOCKENTRY_start_MASK                            0xFFFFFFFF00000000LL
#define BLOCKENTRY_start(x)                              ((((C(BlockEntry))(x)) & BLOCKENTRY_start_MASK) >> BLOCKENTRY_start_SHIFT)
#define BLOCKENTRY_SET_start(x, start)                       (x) = ((C(BlockEntry))(x) & ~((C(BlockEntry))BLOCKENTRY_start_MASK)) | (((C(BlockEntry))(start)) << BLOCKENTRY_start_SHIFT)
#define BLOCKENTRY_end_SHIFT                             0
#define BLOCKENTRY_end_MASK                              0xFFFFFFFF
#define BLOCKENTRY_end(x)                                ((((C(BlockEntry))(x)) & BLOCKENTRY_end_MASK) >> BLOCKENTRY_end_SHIFT)
#define BLOCKENTRY_SET_end(x, end)                         (x) = ((C(BlockEntry))(x) & ~((C(BlockEntry))BLOCKENTRY_end_MASK)) | (((C(BlockEntry))(end)) << BLOCKENTRY_end_SHIFT)
#define BLOCKENTRY(start, end)                                ((((C(BlockEntry))(start)) << BLOCKENTRY_start_SHIFT) | ((C(BlockEntry))(end)) << BLOCKENTRY_end_SHIFT)


struct C(CompiledDefaultShader)
{
   int program;
   int vertex;
   int fragment;
   int uPrjMatrix;
   int uMVMatrix;
   int uTextureMatrix;
   int uNormalsMatrix;
   int uNormalsInvScale2;
   int uFogDensity;
   int uFogColor;
   int uGlobalAmbient;
   int uNearPlane;
   int uLightsPos[8];
   int uLightsDiffuse[8];
   int uLightsAmbient[8];
   int uLightsSpecular[8];
   int uLightsAtt[8];
   int uLightsSpotDir[8];
   int uLightsSpotCutOffCos[8];
   int uLightsSpotExp[8];
   int uMatDiffuse;
   int uMatAmbient;
   int uMatSpecular;
   int uMatEmissive;
   int uMatPower;
   int uMatOpacity;
   int uDiffuseTex;
   int uBumpTex;
   int uSpecularTex;
   int uEnvTex;
   int uReflectTex;
   int uRefractionETA;
   int uMatReflectivity;
   int uCubeMapMatrix;
   int uAlphaFuncValue;
   int uBlackTint;
   int uBoneMatrices;
   int uBoneOffsets;
   C(bool) initialSetup;
   C(bool) useNearPlane;
};
extern THIS_LIB_IMPORT void (* CompiledDefaultShader_registerUniforms)(C(CompiledDefaultShader) * __this, int program, C(DefaultShaderBits) state);

extern THIS_LIB_IMPORT void (* CompiledShader_free)(C(CompiledShader) * __this);

extern THIS_LIB_IMPORT void (* DefaultShader_debugging)(C(DefaultShader) __this, C(bool) on);

extern THIS_LIB_IMPORT void (* DefaultShader_fog)(C(DefaultShader) __this, C(bool) on);

extern THIS_LIB_IMPORT void (* DefaultShader_lighting)(C(DefaultShader) __this, C(bool) on);

extern THIS_LIB_IMPORT void (* DefaultShader_setBoneMatrices)(C(DefaultShader) __this, int n, const C(Matrixf) * matrices);

extern THIS_LIB_IMPORT void (* DefaultShader_setCamera)(C(DefaultShader) __this, C(Camera) camera);

extern THIS_LIB_IMPORT void (* DefaultShader_setColor)(C(DefaultShader) __this, float r, float g, float b, float a);

extern THIS_LIB_IMPORT void (* DefaultShader_setFogColor)(C(DefaultShader) __this, float r, float g, float b);

extern THIS_LIB_IMPORT void (* DefaultShader_setFogDensity)(C(DefaultShader) __this, float density);

extern THIS_LIB_IMPORT void (* DefaultShader_setGlobalAmbient)(C(DefaultShader) __this, float r, float g, float b, float a);

extern THIS_LIB_IMPORT void (* DefaultShader_setLight)(C(DefaultShader) __this, C(Display) display, uint id, C(Light) * light);

extern THIS_LIB_IMPORT void (* DefaultShader_setPerVertexColor)(C(DefaultShader) __this, C(bool) perVertexColor);

extern THIS_LIB_IMPORT void (* DefaultShader_setSimpleMaterial)(C(DefaultShader) __this, C(ColorAlpha) color, C(bool) twoSided);

extern THIS_LIB_IMPORT C(DefaultShader) (* DefaultShader_shader)(void);

extern THIS_LIB_IMPORT void (* DefaultShader_swizzle)(C(DefaultShader) __this, C(SwizzleMode) swizzle);

extern THIS_LIB_IMPORT void (* DefaultShader_texturing)(C(DefaultShader) __this, C(bool) on);

extern THIS_LIB_IMPORT void (* DefaultShader_useExternalTexture)(C(DefaultShader) __this, C(bool) on);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DefaultShader, blackTint);
extern THIS_LIB_IMPORT void (* DefaultShader_set_blackTint)(const C(DefaultShader) d, C(Color) value);

#define DEFAULTSHADERBITS_lighting_SHIFT                 0
#define DEFAULTSHADERBITS_lighting_MASK                  0x1
#define DEFAULTSHADERBITS_lighting(x)                    ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_lighting_MASK) >> DEFAULTSHADERBITS_lighting_SHIFT)
#define DEFAULTSHADERBITS_SET_lighting(x, lighting)             (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_lighting_MASK)) | (((C(DefaultShaderBits))(lighting)) << DEFAULTSHADERBITS_lighting_SHIFT)
#define DEFAULTSHADERBITS_nonLocalViewer_SHIFT           1
#define DEFAULTSHADERBITS_nonLocalViewer_MASK            0x2
#define DEFAULTSHADERBITS_nonLocalViewer(x)              ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_nonLocalViewer_MASK) >> DEFAULTSHADERBITS_nonLocalViewer_SHIFT)
#define DEFAULTSHADERBITS_SET_nonLocalViewer(x, nonLocalViewer)       (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_nonLocalViewer_MASK)) | (((C(DefaultShaderBits))(nonLocalViewer)) << DEFAULTSHADERBITS_nonLocalViewer_SHIFT)
#define DEFAULTSHADERBITS_twoSided_SHIFT                 2
#define DEFAULTSHADERBITS_twoSided_MASK                  0x4
#define DEFAULTSHADERBITS_twoSided(x)                    ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_twoSided_MASK) >> DEFAULTSHADERBITS_twoSided_SHIFT)
#define DEFAULTSHADERBITS_SET_twoSided(x, twoSided)             (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_twoSided_MASK)) | (((C(DefaultShaderBits))(twoSided)) << DEFAULTSHADERBITS_twoSided_SHIFT)
#define DEFAULTSHADERBITS_specular_SHIFT                 3
#define DEFAULTSHADERBITS_specular_MASK                  0x8
#define DEFAULTSHADERBITS_specular(x)                    ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_specular_MASK) >> DEFAULTSHADERBITS_specular_SHIFT)
#define DEFAULTSHADERBITS_SET_specular(x, specular)             (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_specular_MASK)) | (((C(DefaultShaderBits))(specular)) << DEFAULTSHADERBITS_specular_SHIFT)
#define DEFAULTSHADERBITS_separateSpecular_SHIFT         4
#define DEFAULTSHADERBITS_separateSpecular_MASK          0x10
#define DEFAULTSHADERBITS_separateSpecular(x)            ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_separateSpecular_MASK) >> DEFAULTSHADERBITS_separateSpecular_SHIFT)
#define DEFAULTSHADERBITS_SET_separateSpecular(x, separateSpecular)     (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_separateSpecular_MASK)) | (((C(DefaultShaderBits))(separateSpecular)) << DEFAULTSHADERBITS_separateSpecular_SHIFT)
#define DEFAULTSHADERBITS_blinnSpecular_SHIFT            5
#define DEFAULTSHADERBITS_blinnSpecular_MASK             0x20
#define DEFAULTSHADERBITS_blinnSpecular(x)               ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_blinnSpecular_MASK) >> DEFAULTSHADERBITS_blinnSpecular_SHIFT)
#define DEFAULTSHADERBITS_SET_blinnSpecular(x, blinnSpecular)        (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_blinnSpecular_MASK)) | (((C(DefaultShaderBits))(blinnSpecular)) << DEFAULTSHADERBITS_blinnSpecular_SHIFT)
#define DEFAULTSHADERBITS_lightBits_SHIFT                6
#define DEFAULTSHADERBITS_lightBits_MASK                 0x3FFFFFC0
#define DEFAULTSHADERBITS_lightBits(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_lightBits_MASK) >> DEFAULTSHADERBITS_lightBits_SHIFT)
#define DEFAULTSHADERBITS_SET_lightBits(x, lightBits)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_lightBits_MASK)) | (((C(DefaultShaderBits))(lightBits)) << DEFAULTSHADERBITS_lightBits_SHIFT)
#define DEFAULTSHADERBITS_perVertexColor_SHIFT           30
#define DEFAULTSHADERBITS_perVertexColor_MASK            0x40000000
#define DEFAULTSHADERBITS_perVertexColor(x)              ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_perVertexColor_MASK) >> DEFAULTSHADERBITS_perVertexColor_SHIFT)
#define DEFAULTSHADERBITS_SET_perVertexColor(x, perVertexColor)       (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_perVertexColor_MASK)) | (((C(DefaultShaderBits))(perVertexColor)) << DEFAULTSHADERBITS_perVertexColor_SHIFT)
#define DEFAULTSHADERBITS_swizzle_SHIFT                  31
#define DEFAULTSHADERBITS_swizzle_MASK                   0x180000000LL
#define DEFAULTSHADERBITS_swizzle(x)                     ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_swizzle_MASK) >> DEFAULTSHADERBITS_swizzle_SHIFT)
#define DEFAULTSHADERBITS_SET_swizzle(x, swizzle)              (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_swizzle_MASK)) | (((C(DefaultShaderBits))(swizzle)) << DEFAULTSHADERBITS_swizzle_SHIFT)
#define DEFAULTSHADERBITS_textureMatrix_SHIFT            33
#define DEFAULTSHADERBITS_textureMatrix_MASK             0x200000000LL
#define DEFAULTSHADERBITS_textureMatrix(x)               ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_textureMatrix_MASK) >> DEFAULTSHADERBITS_textureMatrix_SHIFT)
#define DEFAULTSHADERBITS_SET_textureMatrix(x, textureMatrix)        (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_textureMatrix_MASK)) | (((C(DefaultShaderBits))(textureMatrix)) << DEFAULTSHADERBITS_textureMatrix_SHIFT)
#define DEFAULTSHADERBITS_texturing_SHIFT                34
#define DEFAULTSHADERBITS_texturing_MASK                 0x400000000LL
#define DEFAULTSHADERBITS_texturing(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_texturing_MASK) >> DEFAULTSHADERBITS_texturing_SHIFT)
#define DEFAULTSHADERBITS_SET_texturing(x, texturing)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_texturing_MASK)) | (((C(DefaultShaderBits))(texturing)) << DEFAULTSHADERBITS_texturing_SHIFT)
#define DEFAULTSHADERBITS_alphaTest_SHIFT                35
#define DEFAULTSHADERBITS_alphaTest_MASK                 0x800000000LL
#define DEFAULTSHADERBITS_alphaTest(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_alphaTest_MASK) >> DEFAULTSHADERBITS_alphaTest_SHIFT)
#define DEFAULTSHADERBITS_SET_alphaTest(x, alphaTest)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_alphaTest_MASK)) | (((C(DefaultShaderBits))(alphaTest)) << DEFAULTSHADERBITS_alphaTest_SHIFT)
#define DEFAULTSHADERBITS_cubeMap_SHIFT                  36
#define DEFAULTSHADERBITS_cubeMap_MASK                   0x1000000000LL
#define DEFAULTSHADERBITS_cubeMap(x)                     ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_cubeMap_MASK) >> DEFAULTSHADERBITS_cubeMap_SHIFT)
#define DEFAULTSHADERBITS_SET_cubeMap(x, cubeMap)              (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_cubeMap_MASK)) | (((C(DefaultShaderBits))(cubeMap)) << DEFAULTSHADERBITS_cubeMap_SHIFT)
#define DEFAULTSHADERBITS_modelView_SHIFT                37
#define DEFAULTSHADERBITS_modelView_MASK                 0x2000000000LL
#define DEFAULTSHADERBITS_modelView(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_modelView_MASK) >> DEFAULTSHADERBITS_modelView_SHIFT)
#define DEFAULTSHADERBITS_SET_modelView(x, modelView)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_modelView_MASK)) | (((C(DefaultShaderBits))(modelView)) << DEFAULTSHADERBITS_modelView_SHIFT)
#define DEFAULTSHADERBITS_fog_SHIFT                      38
#define DEFAULTSHADERBITS_fog_MASK                       0x4000000000LL
#define DEFAULTSHADERBITS_fog(x)                         ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_fog_MASK) >> DEFAULTSHADERBITS_fog_SHIFT)
#define DEFAULTSHADERBITS_SET_fog(x, fog)                  (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_fog_MASK)) | (((C(DefaultShaderBits))(fog)) << DEFAULTSHADERBITS_fog_SHIFT)
#define DEFAULTSHADERBITS_normalsMapping_SHIFT           39
#define DEFAULTSHADERBITS_normalsMapping_MASK            0x8000000000LL
#define DEFAULTSHADERBITS_normalsMapping(x)              ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_normalsMapping_MASK) >> DEFAULTSHADERBITS_normalsMapping_SHIFT)
#define DEFAULTSHADERBITS_SET_normalsMapping(x, normalsMapping)       (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_normalsMapping_MASK)) | (((C(DefaultShaderBits))(normalsMapping)) << DEFAULTSHADERBITS_normalsMapping_SHIFT)
#define DEFAULTSHADERBITS_specularMapping_SHIFT          40
#define DEFAULTSHADERBITS_specularMapping_MASK           0x10000000000LL
#define DEFAULTSHADERBITS_specularMapping(x)             ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_specularMapping_MASK) >> DEFAULTSHADERBITS_specularMapping_SHIFT)
#define DEFAULTSHADERBITS_SET_specularMapping(x, specularMapping)      (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_specularMapping_MASK)) | (((C(DefaultShaderBits))(specularMapping)) << DEFAULTSHADERBITS_specularMapping_SHIFT)
#define DEFAULTSHADERBITS_environmentMapping_SHIFT       41
#define DEFAULTSHADERBITS_environmentMapping_MASK        0x20000000000LL
#define DEFAULTSHADERBITS_environmentMapping(x)          ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_environmentMapping_MASK) >> DEFAULTSHADERBITS_environmentMapping_SHIFT)
#define DEFAULTSHADERBITS_SET_environmentMapping(x, environmentMapping)   (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_environmentMapping_MASK)) | (((C(DefaultShaderBits))(environmentMapping)) << DEFAULTSHADERBITS_environmentMapping_SHIFT)
#define DEFAULTSHADERBITS_reflection_SHIFT               42
#define DEFAULTSHADERBITS_reflection_MASK                0x40000000000LL
#define DEFAULTSHADERBITS_reflection(x)                  ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_reflection_MASK) >> DEFAULTSHADERBITS_reflection_SHIFT)
#define DEFAULTSHADERBITS_SET_reflection(x, reflection)           (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_reflection_MASK)) | (((C(DefaultShaderBits))(reflection)) << DEFAULTSHADERBITS_reflection_SHIFT)
#define DEFAULTSHADERBITS_reflectionMap_SHIFT            43
#define DEFAULTSHADERBITS_reflectionMap_MASK             0x80000000000LL
#define DEFAULTSHADERBITS_reflectionMap(x)               ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_reflectionMap_MASK) >> DEFAULTSHADERBITS_reflectionMap_SHIFT)
#define DEFAULTSHADERBITS_SET_reflectionMap(x, reflectionMap)        (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_reflectionMap_MASK)) | (((C(DefaultShaderBits))(reflectionMap)) << DEFAULTSHADERBITS_reflectionMap_SHIFT)
#define DEFAULTSHADERBITS_refraction_SHIFT               44
#define DEFAULTSHADERBITS_refraction_MASK                0x100000000000LL
#define DEFAULTSHADERBITS_refraction(x)                  ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_refraction_MASK) >> DEFAULTSHADERBITS_refraction_SHIFT)
#define DEFAULTSHADERBITS_SET_refraction(x, refraction)           (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_refraction_MASK)) | (((C(DefaultShaderBits))(refraction)) << DEFAULTSHADERBITS_refraction_SHIFT)
#define DEFAULTSHADERBITS_debugging_SHIFT                45
#define DEFAULTSHADERBITS_debugging_MASK                 0x200000000000LL
#define DEFAULTSHADERBITS_debugging(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_debugging_MASK) >> DEFAULTSHADERBITS_debugging_SHIFT)
#define DEFAULTSHADERBITS_SET_debugging(x, debugging)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_debugging_MASK)) | (((C(DefaultShaderBits))(debugging)) << DEFAULTSHADERBITS_debugging_SHIFT)
#define DEFAULTSHADERBITS_constantColor_SHIFT            46
#define DEFAULTSHADERBITS_constantColor_MASK             0x400000000000LL
#define DEFAULTSHADERBITS_constantColor(x)               ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_constantColor_MASK) >> DEFAULTSHADERBITS_constantColor_SHIFT)
#define DEFAULTSHADERBITS_SET_constantColor(x, constantColor)        (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_constantColor_MASK)) | (((C(DefaultShaderBits))(constantColor)) << DEFAULTSHADERBITS_constantColor_SHIFT)
#define DEFAULTSHADERBITS_normalsInvScale2_SHIFT         47
#define DEFAULTSHADERBITS_normalsInvScale2_MASK          0x800000000000LL
#define DEFAULTSHADERBITS_normalsInvScale2(x)            ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_normalsInvScale2_MASK) >> DEFAULTSHADERBITS_normalsInvScale2_SHIFT)
#define DEFAULTSHADERBITS_SET_normalsInvScale2(x, normalsInvScale2)     (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_normalsInvScale2_MASK)) | (((C(DefaultShaderBits))(normalsInvScale2)) << DEFAULTSHADERBITS_normalsInvScale2_SHIFT)
#define DEFAULTSHADERBITS_externalTexture_SHIFT          48
#define DEFAULTSHADERBITS_externalTexture_MASK           0x1000000000000LL
#define DEFAULTSHADERBITS_externalTexture(x)             ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_externalTexture_MASK) >> DEFAULTSHADERBITS_externalTexture_SHIFT)
#define DEFAULTSHADERBITS_SET_externalTexture(x, externalTexture)      (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_externalTexture_MASK)) | (((C(DefaultShaderBits))(externalTexture)) << DEFAULTSHADERBITS_externalTexture_SHIFT)
#define DEFAULTSHADERBITS_blackTint_SHIFT                49
#define DEFAULTSHADERBITS_blackTint_MASK                 0x2000000000000LL
#define DEFAULTSHADERBITS_blackTint(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_blackTint_MASK) >> DEFAULTSHADERBITS_blackTint_SHIFT)
#define DEFAULTSHADERBITS_SET_blackTint(x, blackTint)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_blackTint_MASK)) | (((C(DefaultShaderBits))(blackTint)) << DEFAULTSHADERBITS_blackTint_SHIFT)
#define DEFAULTSHADERBITS_textureArray_SHIFT             50
#define DEFAULTSHADERBITS_textureArray_MASK              0x4000000000000LL
#define DEFAULTSHADERBITS_textureArray(x)                ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_textureArray_MASK) >> DEFAULTSHADERBITS_textureArray_SHIFT)
#define DEFAULTSHADERBITS_SET_textureArray(x, textureArray)         (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_textureArray_MASK)) | (((C(DefaultShaderBits))(textureArray)) << DEFAULTSHADERBITS_textureArray_SHIFT)
#define DEFAULTSHADERBITS_multiDraw_SHIFT                51
#define DEFAULTSHADERBITS_multiDraw_MASK                 0x8000000000000LL
#define DEFAULTSHADERBITS_multiDraw(x)                   ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_multiDraw_MASK) >> DEFAULTSHADERBITS_multiDraw_SHIFT)
#define DEFAULTSHADERBITS_SET_multiDraw(x, multiDraw)            (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_multiDraw_MASK)) | (((C(DefaultShaderBits))(multiDraw)) << DEFAULTSHADERBITS_multiDraw_SHIFT)
#define DEFAULTSHADERBITS_transform3D_SHIFT              52
#define DEFAULTSHADERBITS_transform3D_MASK               0x10000000000000LL
#define DEFAULTSHADERBITS_transform3D(x)                 ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_transform3D_MASK) >> DEFAULTSHADERBITS_transform3D_SHIFT)
#define DEFAULTSHADERBITS_SET_transform3D(x, transform3D)          (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_transform3D_MASK)) | (((C(DefaultShaderBits))(transform3D)) << DEFAULTSHADERBITS_transform3D_SHIFT)
#define DEFAULTSHADERBITS_squishFactor_SHIFT             53
#define DEFAULTSHADERBITS_squishFactor_MASK              0x20000000000000LL
#define DEFAULTSHADERBITS_squishFactor(x)                ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_squishFactor_MASK) >> DEFAULTSHADERBITS_squishFactor_SHIFT)
#define DEFAULTSHADERBITS_SET_squishFactor(x, squishFactor)         (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_squishFactor_MASK)) | (((C(DefaultShaderBits))(squishFactor)) << DEFAULTSHADERBITS_squishFactor_SHIFT)
#define DEFAULTSHADERBITS_bones_SHIFT                    54
#define DEFAULTSHADERBITS_bones_MASK                     0x40000000000000LL
#define DEFAULTSHADERBITS_bones(x)                       ((((C(DefaultShaderBits))(x)) & DEFAULTSHADERBITS_bones_MASK) >> DEFAULTSHADERBITS_bones_SHIFT)
#define DEFAULTSHADERBITS_SET_bones(x, bones)                (x) = ((C(DefaultShaderBits))(x) & ~((C(DefaultShaderBits))DEFAULTSHADERBITS_bones_MASK)) | (((C(DefaultShaderBits))(bones)) << DEFAULTSHADERBITS_bones_SHIFT)


extern THIS_LIB_IMPORT C(BlockEntry) (* FreeBlockMap_allocate)(C(FreeBlockMap) __this, C(GLBType) type, uint size);

extern THIS_LIB_IMPORT void (* FreeBlockMap_freeBlock)(C(FreeBlockMap) __this, C(BlockEntry) block);

extern THIS_LIB_IMPORT int M_VTBLID(FreeBlockMap, onExpand);
// uint FreeBlockMap_onExpand(C(FreeBlockMap) __i, C(GLBType) type, uint required);
#define FreeBlockMap_onExpand(__i, type, required) \
   VMETHOD(CO(FreeBlockMap), FreeBlockMap, onExpand, __i, uint, \
      C(FreeBlockMap) _ARG C(GLBType) _ARG uint, \
      __i _ARG type _ARG required)
extern THIS_LIB_IMPORT C(Method) * METHOD(FreeBlockMap, onExpand);

struct C(GLAB)
{
   uint buffer;
};
extern THIS_LIB_IMPORT void (* GLAB_use)(C(GLAB) * __this, C(GLBufferContents) contents, int n, int type, uint stride, C(GLAttribMode) mode, const void * pointer);

extern THIS_LIB_IMPORT void (* GLAB_useVertTrans)(C(GLAB) * __this, uint count, int n, int type, uint stride, C(GLAttribMode) mode, const void * pointer);

extern THIS_LIB_IMPORT C(bool) (* GLB__allocate)(C(GLB) * __this, C(GLBType) type, uint size, const void * data, C(GLBufferUsage) usage);

extern THIS_LIB_IMPORT void (* GLB__upload)(C(GLB) * __this, C(GLBType) type, uint offset, uint size, const void * data);

extern THIS_LIB_IMPORT C(bool) (* GLB_allocate)(C(GLB) * __this, uint size, const void * data, C(GLBufferUsage) usage);

extern THIS_LIB_IMPORT void (* GLB_copy)(C(GLB) * __this, C(GLB) * src, uint srcStart, uint dstStart, uint size);

extern THIS_LIB_IMPORT void (* GLB_deleteBuffers)(int count, C(GLB) * buffers);

extern THIS_LIB_IMPORT void (* GLB_free)(C(GLB) * __this);

extern THIS_LIB_IMPORT C(bool) (* GLB_resize)(C(GLB) * __this, C(GLBType) type, uint oldSize, uint newSize, C(GLBufferUsage) usage, C(bool) keepSameBufferID);

extern THIS_LIB_IMPORT void (* GLB_upload)(C(GLB) * __this, uint offset, uint size, const void * data);

struct C(GLCAB)
{
   uint buffer;
};
extern THIS_LIB_IMPORT C(bool) (* GLCAB_allocate)(C(GLCAB) * __this, uint size, const void * data, C(GLBufferUsage) usage);

extern THIS_LIB_IMPORT void (* GLCAB_upload)(C(GLCAB) * __this, uint offset, uint size, const void * data);

struct C(GLEAB)
{
   uint buffer;
};
extern THIS_LIB_IMPORT C(bool) (* GLEAB_allocate)(C(GLEAB) * __this, uint size, const void * data, C(GLBufferUsage) usage);

extern THIS_LIB_IMPORT void (* GLEAB_draw)(C(GLEAB) * __this, int primType, int count, int type, const void * indices);

extern THIS_LIB_IMPORT void (* GLEAB_draw2)(C(GLEAB) * __this, int primType, int count, int type, const void * indices, uint baseVertex);

extern THIS_LIB_IMPORT void (* GLEAB_upload)(C(GLEAB) * __this, uint offset, uint size, const void * data);

struct C(GLFB)
{
   int w;
   int h;
   uint fbo;
   uint color;
   uint depth;
   uint samples;
   uint colorRBO;
   uint depthRBO;
   int depthFormat;
   int colorFormat;
};
extern THIS_LIB_IMPORT void (* GLFB_copy)(C(GLFB) * __this, const C(GLFB) * src, const C(Box) * srcExtent, const C(Box) * dstExtent, C(ClearType) buffers, C(bool) filter);

extern THIS_LIB_IMPORT void (* GLFB_copyToTexture)(C(GLFB) * __this);

extern THIS_LIB_IMPORT void (* GLFB_free)(C(GLFB) * __this);

extern THIS_LIB_IMPORT void (* GLFB_read)(C(GLFB) * __this, C(Bitmap) bitmap, C(ClearType) buffer, C(bool) sRGB);

extern THIS_LIB_IMPORT C(bool) (* GLFB_setup)(C(GLFB) * __this, C(bool) textureFBO, C(bool) allocTextures, int samples, int colorFormat, int depthFormat, int width, int height);

struct CM(GLMB)
{
   C(GLB) ab;
   C(bool) keepSameBufferID;
};
extern THIS_LIB_IMPORT void (* GLMB_free)(C(GLMB) __this);

extern THIS_LIB_IMPORT void (* GLMB_printStats)(C(GLMB) __this);

extern THIS_LIB_IMPORT void (* GLStats_allocBuffer)(uint buf, uint size);

extern THIS_LIB_IMPORT void (* GLStats_allocTexture)(uint tex, uint w, uint h, C(bool) mipMaps);

extern THIS_LIB_IMPORT void (* GLStats_freeBuffers)(uint count, uint * bufs);

extern THIS_LIB_IMPORT void (* GLStats_freeTextures)(uint count, uint * texs);

extern THIS_LIB_IMPORT void (* GLStats_print)(void);

extern THIS_LIB_IMPORT void (* GLStats_printBuf)(char * output, uint size);

struct C(LFBDisplay)
{
   C(Bitmap) bitmap;
   byte rgbLookup[32768];
   byte lightTable[256][LIGHTSTEPS];
   C(OldList) updateBoxes;
   int x;
   int y;
   C(bool) selfManaged;
   void (* displayCallback)(C(Display) display, C(Box) * updateBox);
};
struct C(LFBSurface)
{
   C(Font) * font;
   C(bool) opaqueText;
   int xOffset;
   C(bool) writingText;
   C(bool) writingOutline;
   C(Bitmap) bitmap;
   uint foreground;
   uint background;
   C(ColorAlpha) foregroundRgb;
   uint16 stipple;
   byte drawingChar;
   byte * paletteShades;
   C(bool) clearing;
};
struct C(LFBSystem)
{
   int format;
   C(ColorAlpha) * palette;
   byte rgbLookup[32768];
};
struct CM(Shader)
{
   byte __ecerePrivateData0[24];
   uint64 state;
   C(ShaderModifiedUniforms) modifiedUniforms;
   byte __ecere_padding[44];
};
extern THIS_LIB_IMPORT C(bool) (* Shader_activate)(C(Shader) __this);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, bindAttribs);
// void Shader_bindAttribs(C(Shader) __i, int program);
#define Shader_bindAttribs(__i, program) \
   VMETHOD(CO(Shader), Shader, bindAttribs, __i, void, \
      C(Shader) _ARG int, \
      __i _ARG program)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, bindAttribs);

extern THIS_LIB_IMPORT void (* Shader_free)(C(Shader) __this);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, getDefinitions);
// C(ZString) Shader_getDefinitions(C(Shader) __i, uint64 state);
#define Shader_getDefinitions(__i, state) \
   VMETHOD(CO(Shader), Shader, getDefinitions, __i, C(ZString), \
      C(Shader) _ARG uint64, \
      __i _ARG state)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, getDefinitions);

extern THIS_LIB_IMPORT C(CompiledShader) * (* Shader_load)(C(Shader) __this, uint64 state);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, registerShader);
// C(CompiledShader) * Shader_registerShader(C(Shader) __i, int program, uint64 state);
#define Shader_registerShader(__i, program, state) \
   VMETHOD(CO(Shader), Shader, registerShader, __i, C(CompiledShader) *, \
      C(Shader) _ARG int _ARG uint64, \
      __i _ARG program _ARG state)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, registerShader);

extern THIS_LIB_IMPORT void (* Shader_select)(C(Shader) __this);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, setMaterial);
// void Shader_setMaterial(C(Shader) __i, C(Material) * material, C(MeshFeatures) flags);
#define Shader_setMaterial(__i, material, flags) \
   VMETHOD(CO(Shader), Shader, setMaterial, __i, void, \
      C(Shader) _ARG C(Material) * _ARG C(MeshFeatures), \
      __i _ARG material _ARG flags)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, setMaterial);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, setupDrawCommand);
// void Shader_setupDrawCommand(C(Shader) __i, C(GLAB) * ab, uint vertexStride, uint baseVertex, uint drawID, void * transform);
#define Shader_setupDrawCommand(__i, ab, vertexStride, baseVertex, drawID, transform) \
   VMETHOD(CO(Shader), Shader, setupDrawCommand, __i, void, \
      C(Shader) _ARG C(GLAB) * _ARG uint _ARG uint _ARG uint _ARG void *, \
      __i _ARG ab _ARG vertexStride _ARG baseVertex _ARG drawID _ARG transform)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, setupDrawCommand);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, updateMatrix);
// void Shader_updateMatrix(C(Shader) __i, C(MatrixMode) mode, float * matrix, C(bool) isIdentity);
#define Shader_updateMatrix(__i, mode, matrix, isIdentity) \
   VMETHOD(CO(Shader), Shader, updateMatrix, __i, void, \
      C(Shader) _ARG C(MatrixMode) _ARG float * _ARG C(bool), \
      __i _ARG mode _ARG matrix _ARG isIdentity)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, updateMatrix);

extern THIS_LIB_IMPORT int M_VTBLID(Shader, uploadUniforms);
// void Shader_uploadUniforms(C(Shader) __i, C(CompiledShader) * shader);
#define Shader_uploadUniforms(__i, shader) \
   VMETHOD(CO(Shader), Shader, uploadUniforms, __i, void, \
      C(Shader) _ARG C(CompiledShader) *, \
      __i _ARG shader)
extern THIS_LIB_IMPORT C(Method) * METHOD(Shader, uploadUniforms);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Shader, vertexShaderFile);
extern THIS_LIB_IMPORT void (* Shader_set_vertexShaderFile)(const C(Shader) s, constString value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Shader, fragmentShaderFile);
extern THIS_LIB_IMPORT void (* Shader_set_fragmentShaderFile)(const C(Shader) s, constString value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Shader, vertexShader);
extern THIS_LIB_IMPORT void (* Shader_set_vertexShader)(const C(Shader) s, constString value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Shader, fragmentShader);
extern THIS_LIB_IMPORT void (* Shader_set_fragmentShader)(const C(Shader) s, constString value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Shader, activeCompiledShader);
extern THIS_LIB_IMPORT C(CompiledShader) * (* Shader_get_activeCompiledShader)(const C(Shader) s);

#define SHADERMODIFIEDUNIFORMS_matMV_SHIFT               0
#define SHADERMODIFIEDUNIFORMS_matMV_MASK                0x1
#define SHADERMODIFIEDUNIFORMS_matMV(x)                  ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_matMV_MASK) >> SHADERMODIFIEDUNIFORMS_matMV_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_matMV(x, matMV)           (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_matMV_MASK)) | (((C(ShaderModifiedUniforms))(matMV)) << SHADERMODIFIEDUNIFORMS_matMV_SHIFT)
#define SHADERMODIFIEDUNIFORMS_light_SHIFT               1
#define SHADERMODIFIEDUNIFORMS_light_MASK                0x2
#define SHADERMODIFIEDUNIFORMS_light(x)                  ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_light_MASK) >> SHADERMODIFIEDUNIFORMS_light_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_light(x, light)           (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_light_MASK)) | (((C(ShaderModifiedUniforms))(light)) << SHADERMODIFIEDUNIFORMS_light_SHIFT)
#define SHADERMODIFIEDUNIFORMS_material_SHIFT            2
#define SHADERMODIFIEDUNIFORMS_material_MASK             0x4
#define SHADERMODIFIEDUNIFORMS_material(x)               ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_material_MASK) >> SHADERMODIFIEDUNIFORMS_material_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_material(x, material)        (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_material_MASK)) | (((C(ShaderModifiedUniforms))(material)) << SHADERMODIFIEDUNIFORMS_material_SHIFT)
#define SHADERMODIFIEDUNIFORMS_matPrj_SHIFT              3
#define SHADERMODIFIEDUNIFORMS_matPrj_MASK               0x8
#define SHADERMODIFIEDUNIFORMS_matPrj(x)                 ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_matPrj_MASK) >> SHADERMODIFIEDUNIFORMS_matPrj_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_matPrj(x, matPrj)          (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_matPrj_MASK)) | (((C(ShaderModifiedUniforms))(matPrj)) << SHADERMODIFIEDUNIFORMS_matPrj_SHIFT)
#define SHADERMODIFIEDUNIFORMS_matTex_SHIFT              4
#define SHADERMODIFIEDUNIFORMS_matTex_MASK               0x10
#define SHADERMODIFIEDUNIFORMS_matTex(x)                 ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_matTex_MASK) >> SHADERMODIFIEDUNIFORMS_matTex_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_matTex(x, matTex)          (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_matTex_MASK)) | (((C(ShaderModifiedUniforms))(matTex)) << SHADERMODIFIEDUNIFORMS_matTex_SHIFT)
#define SHADERMODIFIEDUNIFORMS_pos_SHIFT                 5
#define SHADERMODIFIEDUNIFORMS_pos_MASK                  0x20
#define SHADERMODIFIEDUNIFORMS_pos(x)                    ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_pos_MASK) >> SHADERMODIFIEDUNIFORMS_pos_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_pos(x, pos)             (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_pos_MASK)) | (((C(ShaderModifiedUniforms))(pos)) << SHADERMODIFIEDUNIFORMS_pos_SHIFT)
#define SHADERMODIFIEDUNIFORMS_layer_SHIFT               6
#define SHADERMODIFIEDUNIFORMS_layer_MASK                0x40
#define SHADERMODIFIEDUNIFORMS_layer(x)                  ((((C(ShaderModifiedUniforms))(x)) & SHADERMODIFIEDUNIFORMS_layer_MASK) >> SHADERMODIFIEDUNIFORMS_layer_SHIFT)
#define SHADERMODIFIEDUNIFORMS_SET_layer(x, layer)           (x) = ((C(ShaderModifiedUniforms))(x) & ~((C(ShaderModifiedUniforms))SHADERMODIFIEDUNIFORMS_layer_MASK)) | (((C(ShaderModifiedUniforms))(layer)) << SHADERMODIFIEDUNIFORMS_layer_SHIFT)


extern THIS_LIB_IMPORT void (* F(gLABBindBuffer))(int target, uint buffer);
extern THIS_LIB_IMPORT void (* F(gLABBindVertexArray))(uint vao);
extern THIS_LIB_IMPORT void (* F(gLSetupFog))(C(bool) enable);
extern THIS_LIB_IMPORT void (* F(gLSetupLighting))(C(bool) enable);
extern THIS_LIB_IMPORT void (* F(gLSetupTexturing))(C(bool) enable);
extern THIS_LIB_IMPORT void (* F(useSingleGLContext))(C(bool) useSingle);
extern THIS_LIB_IMPORT void (* F(glimtkBegin))(C(GLIMTKMode) mode);
extern THIS_LIB_IMPORT void (* F(glimtkColor3f))(float r, float g, float b);
extern THIS_LIB_IMPORT void (* F(glimtkColor4f))(float r, float g, float b, float a);
extern THIS_LIB_IMPORT void (* F(glimtkColor4fv))(float * a);
extern THIS_LIB_IMPORT void (* F(glimtkColor4ub))(byte r, byte g, byte b, byte a);
extern THIS_LIB_IMPORT void (* F(glimtkEnd))(void);
extern THIS_LIB_IMPORT void (* F(glimtkNormal3d))(double x, double y, double z);
extern THIS_LIB_IMPORT void (* F(glimtkNormal3f))(float x, float y, float z);
extern THIS_LIB_IMPORT void (* F(glimtkNormal3fd))(double * coords);
extern THIS_LIB_IMPORT void (* F(glimtkNormal3fv))(float * coords);
extern THIS_LIB_IMPORT void (* F(glimtkRecti))(int a, int b, int c, int d);
extern THIS_LIB_IMPORT void (* F(glimtkTexCoord2d))(double x, double y);
extern THIS_LIB_IMPORT void (* F(glimtkTexCoord2f))(float x, float y);
extern THIS_LIB_IMPORT void (* F(glimtkTexCoord2fv))(float * a);
extern THIS_LIB_IMPORT void (* F(glimtkTexCoord2i))(int x, int y);
extern THIS_LIB_IMPORT void (* F(glimtkVertex2d))(double x, double y);
extern THIS_LIB_IMPORT void (* F(glimtkVertex2f))(float x, float y);
extern THIS_LIB_IMPORT void (* F(glimtkVertex2i))(int x, int y);
extern THIS_LIB_IMPORT void (* F(glimtkVertex3d))(double x, double y, double z);
extern THIS_LIB_IMPORT void (* F(glimtkVertex3dv))(double * coords);
extern THIS_LIB_IMPORT void (* F(glimtkVertex3f))(float x, float y, float z);
extern THIS_LIB_IMPORT void (* F(glimtkVertex3fv))(float * coords);
extern THIS_LIB_IMPORT void (* F(glmsFlushMatrices))(void);
extern THIS_LIB_IMPORT void (* F(glmsFrustum))(double l, double r, double b, double t, double n, double f);
extern THIS_LIB_IMPORT void (* F(glmsGetDoublev))(C(GLMSWhatToGet) what, double * i);
extern THIS_LIB_IMPORT double (* F(glmsGetNearPlane))(void);
extern THIS_LIB_IMPORT void (* F(glmsLoadIdentity))(void);
extern THIS_LIB_IMPORT void (* F(glmsLoadMatrix))(C(Matrix) * matrix);
extern THIS_LIB_IMPORT void (* F(glmsLoadMatrixd))(double * i);
extern THIS_LIB_IMPORT void (* F(glmsLoadMatrixf))(float * i);
extern THIS_LIB_IMPORT void (* F(glmsMatrixMode))(C(MatrixMode) mode);
extern THIS_LIB_IMPORT void (* F(glmsMultMatrixd))(double * i);
extern THIS_LIB_IMPORT void (* F(glmsMultMatrixf))(float * i);
extern THIS_LIB_IMPORT void (* F(glmsOrtho))(double l, double r, double b, double t, double n, double f);
extern THIS_LIB_IMPORT void (* F(glmsPopMatrix))(void);
extern THIS_LIB_IMPORT void (* F(glmsPushMatrix))(void);
extern THIS_LIB_IMPORT void (* F(glmsRotated))(double angle, double x, double y, double z);
extern THIS_LIB_IMPORT void (* F(glmsScaled))(double a, double b, double c);
extern THIS_LIB_IMPORT void (* F(glmsSetNearPlane))(double value);
extern THIS_LIB_IMPORT void (* F(glmsTranslated))(double a, double b, double c);
extern THIS_LIB_IMPORT void (* F(glsupLightModeli))(uint pname, int param);
extern THIS_LIB_IMPORT void (* F(glsupLineStipple))(int i, uint16 j);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||sys  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef uint32 C(FileAttribs);
typedef int64 C(SecSince1970);
struct C(FileStats)
{
   C(FileAttribs) attribs;
   uint64 size;
   C(SecSince1970) accessed;
   C(SecSince1970) modified;
   C(SecSince1970) created;
};
typedef C(Instance) C(Archive);
#if CPP11
enum C(ArchiveAddMode) : int
#else
typedef int C(ArchiveAddMode);
enum C(ArchiveAddMode)
#endif
{
   ArchiveAddMode_replace = 0x0,
   ArchiveAddMode_refresh = 0x1,
   ArchiveAddMode_update = 0x2,
   ArchiveAddMode_readOnlyDir = 0x3
};

typedef C(Instance) C(ArchiveDir);
typedef uint32 C(ArchiveOpenFlags);
typedef C(IOChannel) C(File);
typedef C(File) C(BufferedFile);
typedef C(Instance) C(Window);
typedef C(Window) C(CommonControl);
typedef C(CommonControl) C(Button);
typedef uint32 C(CharCategories);
#if CPP11
enum C(CharCategory) : int
#else
typedef int C(CharCategory);
enum C(CharCategory)
#endif
{
   CharCategory_none = 0x0,
   CharCategory_Mn = 0x1,
   CharCategory_markNonSpacing = 0x1,
   CharCategory_Mc = 0x2,
   CharCategory_markSpacing = 0x2,
   CharCategory_Me = 0x3,
   CharCategory_markEnclosing = 0x3,
   CharCategory_Nd = 0x4,
   CharCategory_numberDecimalDigit = 0x4,
   CharCategory_Nl = 0x5,
   CharCategory_numberLetter = 0x5,
   CharCategory_No = 0x6,
   CharCategory_numberOther = 0x6,
   CharCategory_Zs = 0x7,
   CharCategory_separatorSpace = 0x7,
   CharCategory_Zl = 0x8,
   CharCategory_separatorLine = 0x8,
   CharCategory_Zp = 0x9,
   CharCategory_separatorParagraph = 0x9,
   CharCategory_Cc = 0xA,
   CharCategory_otherControl = 0xA,
   CharCategory_Cf = 0xB,
   CharCategory_otherFormat = 0xB,
   CharCategory_Cs = 0xC,
   CharCategory_otherSurrogate = 0xC,
   CharCategory_Co = 0xD,
   CharCategory_otherPrivateUse = 0xD,
   CharCategory_Cn = 0xE,
   CharCategory_otherNotAssigned = 0xE,
   CharCategory_Lu = 0xF,
   CharCategory_letterUpperCase = 0xF,
   CharCategory_Ll = 0x10,
   CharCategory_letterLowerCase = 0x10,
   CharCategory_Lt = 0x11,
   CharCategory_letterTitleCase = 0x11,
   CharCategory_Lm = 0x12,
   CharCategory_letterModifier = 0x12,
   CharCategory_Lo = 0x13,
   CharCategory_letterOther = 0x13,
   CharCategory_Pc = 0x14,
   CharCategory_punctuationConnector = 0x14,
   CharCategory_Pd = 0x15,
   CharCategory_punctuationDash = 0x15,
   CharCategory_Ps = 0x16,
   CharCategory_punctuationOpen = 0x16,
   CharCategory_Pe = 0x17,
   CharCategory_punctuationClose = 0x17,
   CharCategory_Pi = 0x18,
   CharCategory_punctuationInitial = 0x18,
   CharCategory_Pf = 0x19,
   CharCategory_punctuationFinal = 0x19,
   CharCategory_Po = 0x1A,
   CharCategory_punctuationOther = 0x1A,
   CharCategory_Sm = 0x1B,
   CharCategory_symbolMath = 0x1B,
   CharCategory_Sc = 0x1C,
   CharCategory_symbolCurrency = 0x1C,
   CharCategory_Sk = 0x1D,
   CharCategory_symbolModifier = 0x1D,
   CharCategory_So = 0x1E,
   CharCategory_symbolOther = 0x1E
};

typedef struct C(Condition) C(Condition);
typedef struct C(Date) C(Date);
typedef struct C(DateTime) C(DateTime);
#if CPP11
enum C(DayOfTheWeek) : int
#else
typedef int C(DayOfTheWeek);
enum C(DayOfTheWeek)
#endif
{
   DayOfTheWeek_sunday = 0x0,
   DayOfTheWeek_monday = 0x1,
   DayOfTheWeek_tuesday = 0x2,
   DayOfTheWeek_wednesday = 0x3,
   DayOfTheWeek_thursday = 0x4,
   DayOfTheWeek_friday = 0x5,
   DayOfTheWeek_saturday = 0x6
};

typedef C(File) C(DualPipe);
typedef uint32 C(ErrorCode);
#if CPP11
enum C(ErrorLevel) : int
#else
typedef int C(ErrorLevel);
enum C(ErrorLevel)
#endif
{
   ErrorLevel_veryFatal = 0x0,
   ErrorLevel_fatal = 0x1,
   ErrorLevel_major = 0x2,
   ErrorLevel_minor = 0x3
};

typedef uint32 C(FileChange);
typedef struct C(FileListing) C(FileListing);
#if CPP11
enum C(FileLock) : int
#else
typedef int C(FileLock);
enum C(FileLock)
#endif
{
   FileLock_unlocked = 0x0,
   FileLock_shared = 0x1,
   FileLock_exclusive = 0x2
};

typedef C(Instance) C(FileMonitor);
#if CPP11
enum C(FileOpenMode) : int
#else
typedef int C(FileOpenMode);
enum C(FileOpenMode)
#endif
{
   FileOpenMode_read = 0x1,
   FileOpenMode_write = 0x2,
   FileOpenMode_append = 0x3,
   FileOpenMode_readWrite = 0x4,
   FileOpenMode_writeRead = 0x5,
   FileOpenMode_appendRead = 0x6
};

#if CPP11
enum C(FileSeekMode) : int
#else
typedef int C(FileSeekMode);
enum C(FileSeekMode)
#endif
{
   FileSeekMode_start = 0x0,
   FileSeekMode_current = 0x1,
   FileSeekMode_end = 0x2
};

typedef uint C(FileSize);
typedef uint64 C(FileSize64);
typedef struct C(FileStats) C(FileStats);
typedef C(Instance) C(GlobalSettings);
typedef C(GlobalSettings) C(GlobalAppSettings);
#if CPP11
enum C(GlobalSettingType) : int
#else
typedef int C(GlobalSettingType);
enum C(GlobalSettingType)
#endif
{
   GlobalSettingType_integer = 0x0,
   GlobalSettingType_singleString = 0x1,
   GlobalSettingType_stringList = 0x2
};

typedef C(Instance) C(GlobalSettingsData);
typedef C(Instance) C(GlobalSettingsDriver);
#if CPP11
enum C(JSONFirstLetterCapitalization) : int
#else
typedef int C(JSONFirstLetterCapitalization);
enum C(JSONFirstLetterCapitalization)
#endif
{
   JSONFirstLetterCapitalization_keepCase = 0x0,
   JSONFirstLetterCapitalization_upperCase = 0x1,
   JSONFirstLetterCapitalization_lowerCase = 0x2
};

typedef C(Instance) C(JSONParser);
#if CPP11
enum C(JSONResult) : int
#else
typedef int C(JSONResult);
enum C(JSONResult)
#endif
{
   JSONResult_syntaxError = 0x0,
   JSONResult_success = 0x1,
   JSONResult_typeMismatch = 0x2,
   JSONResult_noItem = 0x3
};

#if CPP11
enum C(LoggingMode) : int
#else
typedef int C(LoggingMode);
enum C(LoggingMode)
#endif
{
   LoggingMode_noLogging = 0x0,
   LoggingMode_stdOut = 0x1,
   LoggingMode_stdErr = 0x2,
   LoggingMode_debug = 0x3,
   LoggingMode_logFile = 0x4,
   LoggingMode_msgBox = 0x5,
   LoggingMode_buffer = 0x6
};

#if CPP11
enum C(Month) : int
#else
typedef int C(Month);
enum C(Month)
#endif
{
   Month_january = 0x0,
   Month_february = 0x1,
   Month_march = 0x2,
   Month_april = 0x3,
   Month_may = 0x4,
   Month_june = 0x5,
   Month_july = 0x6,
   Month_august = 0x7,
   Month_september = 0x8,
   Month_october = 0x9,
   Month_november = 0xA,
   Month_december = 0xB
};

typedef uint32 C(MoveFileOptions);
typedef T(Map, String, JSONTypeOptions) C(OptionsMap);
typedef uint32 C(PipeOpenMode);
typedef struct C(Point) C(Point);
typedef struct C(Semaphore) C(Semaphore);
#if CPP11
enum C(SettingsIOResult) : int
#else
typedef int C(SettingsIOResult);
enum C(SettingsIOResult)
#endif
{
   SettingsIOResult_error = 0x0,
   SettingsIOResult_success = 0x1,
   SettingsIOResult_fileNotFound = 0x2,
   SettingsIOResult_fileNotCompatibleWithDriver = 0x3
};

typedef C(File) C(TempFile);
typedef C(Instance) C(Thread);
#if CPP11
enum C(ThreadPriority) : int
#else
typedef int C(ThreadPriority);
enum C(ThreadPriority)
#endif
{
   ThreadPriority_normal = 0x0,
   ThreadPriority_aboveNormal = 0x1,
   ThreadPriority_belowNormal = -1,
   ThreadPriority_highest = 0x2,
   ThreadPriority_lowest = -2,
   ThreadPriority_idle = -15,
   ThreadPriority_timeCritical = 0xF
};

typedef double C(Time);
typedef C(Instance) C(Timer);
typedef uint32 C(UnicodeDecomposition);
// end -- moved backwards outputs
#define AllErrors (ErrorLevel_minor)

#define AnyFileChange ((((unsigned int)(true)) | (((unsigned int)(true)) << 1) | (((unsigned int)(true)) << 2) | (((unsigned int)(true)) << 3) | (((unsigned int)(true)) << 4)))

#define Pi (((C(Angle))(3.1415926535897932384626433832795028841971)))

#define unicodeCompatibilityMappings (MAXDWORD)

typedef C(File) C(ConsoleFile);
typedef double C(Distance);
typedef C(GlobalSettingsDriver) C(ECONGlobalSettings);
typedef C(JSONParser) C(ECONParser);
#if CPP11
enum C(GuiErrorCode) : uint
#else
typedef C(ErrorCode) C(GuiErrorCode);
enum C(GuiErrorCode)
#endif
{
   GuiErrorCode_driverNotSupported = 0x101,
   GuiErrorCode_windowCreationFailed = 0x102,
   GuiErrorCode_graphicsLoadingFailed = 0x103,
   GuiErrorCode_modeSwitchFailed = 0x104
};

typedef C(GlobalSettingsDriver) C(JSONGlobalSettings);
typedef uint32 C(JSONTypeOptions);
typedef struct C(Pointd) C(Pointd);
typedef struct C(Pointf) C(Pointf);
#if CPP11
enum C(PredefinedCharCategories) : uint
#else
typedef C(CharCategories) C(PredefinedCharCategories);
enum C(PredefinedCharCategories)
#endif
{
   PredefinedCharCategories_none = 0x1,
   PredefinedCharCategories_marks = 0xE,
   PredefinedCharCategories_numbers = 0x70,
   PredefinedCharCategories_separators = 0x380,
   PredefinedCharCategories_others = 0x7C00,
   PredefinedCharCategories_letters = 0xF8000,
   PredefinedCharCategories_punctuation = 0x7F00000,
   PredefinedCharCategories_symbols = 0x78000000,
   PredefinedCharCategories_connector = 0x100000
};

typedef C(Button) C(RepButton);
#if CPP11
enum C(SetBool) : uint
#else
typedef uint C(SetBool);
enum C(SetBool)
#endif
{
   SetBool_unset = 0x0,
   SetBool_false = 0x1,
   SetBool_true = 0x2
};

#if CPP11
enum C(SysErrorCode) : uint
#else
typedef C(ErrorCode) C(SysErrorCode);
enum C(SysErrorCode)
#endif
{
   SysErrorCode_allocationFailed = 0x1001,
   SysErrorCode_nameInexistant = 0x1002,
   SysErrorCode_nameExists = 0x1003,
   SysErrorCode_missingLibrary = 0x1004,
   SysErrorCode_fileNotFound = 0x3005,
   SysErrorCode_writeFailed = 0x2006
};

typedef uint C(TimeStamp32);
extern THIS_LIB_IMPORT int M_VTBLID(Archive, clear);
// C(bool) Archive_clear(C(Archive) __i);
#define Archive_clear(__i) \
   VMETHOD(CO(Archive), Archive, clear, __i, C(bool), \
      C(Archive), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, clear);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, fileExists);
// C(FileAttribs) Archive_fileExists(C(Archive) __i, const char * fileName);
#define Archive_fileExists(__i, fileName) \
   VMETHOD(CO(Archive), Archive, fileExists, __i, C(FileAttribs), \
      C(Archive) _ARG const char *, \
      __i _ARG fileName)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, fileExists);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, fileOpen);
// C(File) Archive_fileOpen(C(Archive) __i, const char * fileName);
#define Archive_fileOpen(__i, fileName) \
   VMETHOD(CO(Archive), Archive, fileOpen, __i, C(File), \
      C(Archive) _ARG const char *, \
      __i _ARG fileName)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, fileOpen);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, fileOpenAtPosition);
// C(File) Archive_fileOpenAtPosition(C(Archive) __i, uint position);
#define Archive_fileOpenAtPosition(__i, position) \
   VMETHOD(CO(Archive), Archive, fileOpenAtPosition, __i, C(File), \
      C(Archive) _ARG uint, \
      __i _ARG position)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, fileOpenAtPosition);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, fileOpenCompressed);
// C(File) Archive_fileOpenCompressed(C(Archive) __i, const char * fileName, C(bool) * isCompressed, uint64 * ucSize);
#define Archive_fileOpenCompressed(__i, fileName, isCompressed, ucSize) \
   VMETHOD(CO(Archive), Archive, fileOpenCompressed, __i, C(File), \
      C(Archive) _ARG const char * _ARG C(bool) * _ARG uint64 *, \
      __i _ARG fileName _ARG isCompressed _ARG ucSize)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, fileOpenCompressed);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, openDirectory);
// C(ArchiveDir) Archive_openDirectory(C(Archive) __i, const char * name, C(FileStats) * stats, C(ArchiveAddMode) addMode);
#define Archive_openDirectory(__i, name, stats, addMode) \
   VMETHOD(CO(Archive), Archive, openDirectory, __i, C(ArchiveDir), \
      C(Archive) _ARG const char * _ARG C(FileStats) * _ARG C(ArchiveAddMode), \
      __i _ARG name _ARG stats _ARG addMode)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, openDirectory);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, setBufferRead);
// void Archive_setBufferRead(C(Archive) __i, uint bufferRead);
#define Archive_setBufferRead(__i, bufferRead) \
   VMETHOD(CO(Archive), Archive, setBufferRead, __i, void, \
      C(Archive) _ARG uint, \
      __i _ARG bufferRead)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, setBufferRead);

extern THIS_LIB_IMPORT int M_VTBLID(Archive, setBufferSize);
// void Archive_setBufferSize(C(Archive) __i, uint bufferSize);
#define Archive_setBufferSize(__i, bufferSize) \
   VMETHOD(CO(Archive), Archive, setBufferSize, __i, void, \
      C(Archive) _ARG uint, \
      __i _ARG bufferSize)
extern THIS_LIB_IMPORT C(Method) * METHOD(Archive, setBufferSize);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Archive, totalSize);
extern THIS_LIB_IMPORT void (* Archive_set_totalSize)(const C(Archive) a, C(FileSize) value);
extern THIS_LIB_IMPORT C(FileSize) (* Archive_get_totalSize)(const C(Archive) a);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Archive, bufferSize);
extern THIS_LIB_IMPORT void (* Archive_set_bufferSize)(const C(Archive) a, uint value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Archive, bufferRead);
extern THIS_LIB_IMPORT void (* Archive_set_bufferRead)(const C(Archive) a, uint value);

extern THIS_LIB_IMPORT C(bool) (* ArchiveDir_add)(C(ArchiveDir) __this, const char * name, const char * path, C(ArchiveAddMode) addMode, int compression, int * ratio, uint * newPosition);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, addFromFile);
// C(bool) ArchiveDir_addFromFile(C(ArchiveDir) __i, const char * name, C(File) input, C(FileStats) * stats, C(ArchiveAddMode) addMode, int compression, int * ratio, uint * newPosition);
#define ArchiveDir_addFromFile(__i, name, input, stats, addMode, compression, ratio, newPosition) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, addFromFile, __i, C(bool), \
      C(ArchiveDir) _ARG const char * _ARG C(File) _ARG C(FileStats) * _ARG C(ArchiveAddMode) _ARG int _ARG int * _ARG uint *, \
      __i _ARG name _ARG input _ARG stats _ARG addMode _ARG compression _ARG ratio _ARG newPosition)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, addFromFile);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, addFromFileAtPosition);
// C(bool) ArchiveDir_addFromFileAtPosition(C(ArchiveDir) __i, uint position, const char * name, C(File) input, C(FileStats) * stats, C(ArchiveAddMode) addMode, int compression, int * ratio, uint * newPosition);
#define ArchiveDir_addFromFileAtPosition(__i, position, name, input, stats, addMode, compression, ratio, newPosition) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, addFromFileAtPosition, __i, C(bool), \
      C(ArchiveDir) _ARG uint _ARG const char * _ARG C(File) _ARG C(FileStats) * _ARG C(ArchiveAddMode) _ARG int _ARG int * _ARG uint *, \
      __i _ARG position _ARG name _ARG input _ARG stats _ARG addMode _ARG compression _ARG ratio _ARG newPosition)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, addFromFileAtPosition);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, delete);
// C(bool) ArchiveDir_delete(C(ArchiveDir) __i, const char * fileName);
#define ArchiveDir_delete(__i, fileName) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, delete, __i, C(bool), \
      C(ArchiveDir) _ARG const char *, \
      __i _ARG fileName)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, delete);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, fileExists);
// C(FileAttribs) ArchiveDir_fileExists(C(ArchiveDir) __i, const char * fileName);
#define ArchiveDir_fileExists(__i, fileName) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, fileExists, __i, C(FileAttribs), \
      C(ArchiveDir) _ARG const char *, \
      __i _ARG fileName)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, fileExists);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, fileOpen);
// C(File) ArchiveDir_fileOpen(C(ArchiveDir) __i, const char * fileName);
#define ArchiveDir_fileOpen(__i, fileName) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, fileOpen, __i, C(File), \
      C(ArchiveDir) _ARG const char *, \
      __i _ARG fileName)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, fileOpen);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, move);
// C(bool) ArchiveDir_move(C(ArchiveDir) __i, const char * name, C(ArchiveDir) to);
#define ArchiveDir_move(__i, name, to) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, move, __i, C(bool), \
      C(ArchiveDir) _ARG const char * _ARG C(ArchiveDir), \
      __i _ARG name _ARG to)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, move);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, openDirectory);
// C(ArchiveDir) ArchiveDir_openDirectory(C(ArchiveDir) __i, const char * name, C(FileStats) * stats, C(ArchiveAddMode) addMode);
#define ArchiveDir_openDirectory(__i, name, stats, addMode) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, openDirectory, __i, C(ArchiveDir), \
      C(ArchiveDir) _ARG const char * _ARG C(FileStats) * _ARG C(ArchiveAddMode), \
      __i _ARG name _ARG stats _ARG addMode)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, openDirectory);

extern THIS_LIB_IMPORT int M_VTBLID(ArchiveDir, rename);
// C(bool) ArchiveDir_rename(C(ArchiveDir) __i, const char * name, const char * newName);
#define ArchiveDir_rename(__i, name, newName) \
   VMETHOD(CO(ArchiveDir), ArchiveDir, rename, __i, C(bool), \
      C(ArchiveDir) _ARG const char * _ARG const char *, \
      __i _ARG name _ARG newName)
extern THIS_LIB_IMPORT C(Method) * METHOD(ArchiveDir, rename);

#define ARCHIVEOPENFLAGS_writeAccess_SHIFT               0
#define ARCHIVEOPENFLAGS_writeAccess_MASK                0x1
#define ARCHIVEOPENFLAGS_writeAccess(x)                  ((((C(ArchiveOpenFlags))(x)) & ARCHIVEOPENFLAGS_writeAccess_MASK) >> ARCHIVEOPENFLAGS_writeAccess_SHIFT)
#define ARCHIVEOPENFLAGS_SET_writeAccess(x, writeAccess)           (x) = ((C(ArchiveOpenFlags))(x) & ~((C(ArchiveOpenFlags))ARCHIVEOPENFLAGS_writeAccess_MASK)) | (((C(ArchiveOpenFlags))(writeAccess)) << ARCHIVEOPENFLAGS_writeAccess_SHIFT)
#define ARCHIVEOPENFLAGS_buffered_SHIFT                  1
#define ARCHIVEOPENFLAGS_buffered_MASK                   0x2
#define ARCHIVEOPENFLAGS_buffered(x)                     ((((C(ArchiveOpenFlags))(x)) & ARCHIVEOPENFLAGS_buffered_MASK) >> ARCHIVEOPENFLAGS_buffered_SHIFT)
#define ARCHIVEOPENFLAGS_SET_buffered(x, buffered)              (x) = ((C(ArchiveOpenFlags))(x) & ~((C(ArchiveOpenFlags))ARCHIVEOPENFLAGS_buffered_MASK)) | (((C(ArchiveOpenFlags))(buffered)) << ARCHIVEOPENFLAGS_buffered_SHIFT)
#define ARCHIVEOPENFLAGS_exclusive_SHIFT                 2
#define ARCHIVEOPENFLAGS_exclusive_MASK                  0x4
#define ARCHIVEOPENFLAGS_exclusive(x)                    ((((C(ArchiveOpenFlags))(x)) & ARCHIVEOPENFLAGS_exclusive_MASK) >> ARCHIVEOPENFLAGS_exclusive_SHIFT)
#define ARCHIVEOPENFLAGS_SET_exclusive(x, exclusive)             (x) = ((C(ArchiveOpenFlags))(x) & ~((C(ArchiveOpenFlags))ARCHIVEOPENFLAGS_exclusive_MASK)) | (((C(ArchiveOpenFlags))(exclusive)) << ARCHIVEOPENFLAGS_exclusive_SHIFT)
#define ARCHIVEOPENFLAGS_waitLock_SHIFT                  3
#define ARCHIVEOPENFLAGS_waitLock_MASK                   0x8
#define ARCHIVEOPENFLAGS_waitLock(x)                     ((((C(ArchiveOpenFlags))(x)) & ARCHIVEOPENFLAGS_waitLock_MASK) >> ARCHIVEOPENFLAGS_waitLock_SHIFT)
#define ARCHIVEOPENFLAGS_SET_waitLock(x, waitLock)              (x) = ((C(ArchiveOpenFlags))(x) & ~((C(ArchiveOpenFlags))ARCHIVEOPENFLAGS_waitLock_MASK)) | (((C(ArchiveOpenFlags))(waitLock)) << ARCHIVEOPENFLAGS_waitLock_SHIFT)
#define ARCHIVEOPENFLAGS(writeAccess, buffered, exclusive, waitLock)                      ((((((C(ArchiveOpenFlags))(writeAccess)) << ARCHIVEOPENFLAGS_writeAccess_SHIFT) | ((C(ArchiveOpenFlags))(buffered)) << ARCHIVEOPENFLAGS_buffered_SHIFT) | ((C(ArchiveOpenFlags))(exclusive)) << ARCHIVEOPENFLAGS_exclusive_SHIFT) | ((C(ArchiveOpenFlags))(waitLock)) << ARCHIVEOPENFLAGS_waitLock_SHIFT)


extern THIS_LIB_IMPORT void (* Box_clip)(C(Box) * __this, C(Box) * against);

extern THIS_LIB_IMPORT void (* Box_clipOffset)(C(Box) * __this, C(Box) * against, int x, int y);

extern THIS_LIB_IMPORT C(bool) (* Box_isPointInside)(C(Box) * __this, C(Point) * point);

extern THIS_LIB_IMPORT C(bool) (* Box_overlap)(C(Box) * __this, C(Box) * box);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Box, width);
extern THIS_LIB_IMPORT void (* Box_set_width)(const C(Box) * b, int value);
extern THIS_LIB_IMPORT int (* Box_get_width)(const C(Box) * b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Box, height);
extern THIS_LIB_IMPORT void (* Box_set_height)(const C(Box) * b, int value);
extern THIS_LIB_IMPORT int (* Box_get_height)(const C(Box) * b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BufferedFile, handle);
extern THIS_LIB_IMPORT void (* BufferedFile_set_handle)(const C(BufferedFile) b, C(File) value);
extern THIS_LIB_IMPORT C(File) (* BufferedFile_get_handle)(const C(BufferedFile) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BufferedFile, bufferSize);
extern THIS_LIB_IMPORT void (* BufferedFile_set_bufferSize)(const C(BufferedFile) b, uintsize value);
extern THIS_LIB_IMPORT uintsize (* BufferedFile_get_bufferSize)(const C(BufferedFile) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BufferedFile, bufferRead);
extern THIS_LIB_IMPORT void (* BufferedFile_set_bufferRead)(const C(BufferedFile) b, uintsize value);
extern THIS_LIB_IMPORT uintsize (* BufferedFile_get_bufferRead)(const C(BufferedFile) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Centimeters, Meters);
extern THIS_LIB_IMPORT double (* Centimeters_from_Meters)(const C(Distance) meters);
extern THIS_LIB_IMPORT C(Distance) (* Centimeters_to_Meters)(const double centimeters);
#define Centimeters(x) CENTIMETERS(x)
#define CENTIMETERS(x)  ((C(Distance))((x) * 0.01))
#define Distance_in_Centimeters(x)  ((double)((x) * 100))

#define CHARCATEGORIES_none_SHIFT                        0
#define CHARCATEGORIES_none_MASK                         0x1
#define CHARCATEGORIES_none(x)                           ((((C(CharCategories))(x)) & CHARCATEGORIES_none_MASK) >> CHARCATEGORIES_none_SHIFT)
#define CHARCATEGORIES_SET_none(x, none)                    (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_none_MASK)) | (((C(CharCategories))(none)) << CHARCATEGORIES_none_SHIFT)
#define CHARCATEGORIES_markNonSpacing_SHIFT              1
#define CHARCATEGORIES_markNonSpacing_MASK               0x2
#define CHARCATEGORIES_markNonSpacing(x)                 ((((C(CharCategories))(x)) & CHARCATEGORIES_markNonSpacing_MASK) >> CHARCATEGORIES_markNonSpacing_SHIFT)
#define CHARCATEGORIES_SET_markNonSpacing(x, markNonSpacing)          (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_markNonSpacing_MASK)) | (((C(CharCategories))(markNonSpacing)) << CHARCATEGORIES_markNonSpacing_SHIFT)
#define CHARCATEGORIES_markSpacing_SHIFT                 2
#define CHARCATEGORIES_markSpacing_MASK                  0x4
#define CHARCATEGORIES_markSpacing(x)                    ((((C(CharCategories))(x)) & CHARCATEGORIES_markSpacing_MASK) >> CHARCATEGORIES_markSpacing_SHIFT)
#define CHARCATEGORIES_SET_markSpacing(x, markSpacing)             (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_markSpacing_MASK)) | (((C(CharCategories))(markSpacing)) << CHARCATEGORIES_markSpacing_SHIFT)
#define CHARCATEGORIES_markEnclosing_SHIFT               3
#define CHARCATEGORIES_markEnclosing_MASK                0x8
#define CHARCATEGORIES_markEnclosing(x)                  ((((C(CharCategories))(x)) & CHARCATEGORIES_markEnclosing_MASK) >> CHARCATEGORIES_markEnclosing_SHIFT)
#define CHARCATEGORIES_SET_markEnclosing(x, markEnclosing)           (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_markEnclosing_MASK)) | (((C(CharCategories))(markEnclosing)) << CHARCATEGORIES_markEnclosing_SHIFT)
#define CHARCATEGORIES_numberDecimalDigit_SHIFT          4
#define CHARCATEGORIES_numberDecimalDigit_MASK           0x10
#define CHARCATEGORIES_numberDecimalDigit(x)             ((((C(CharCategories))(x)) & CHARCATEGORIES_numberDecimalDigit_MASK) >> CHARCATEGORIES_numberDecimalDigit_SHIFT)
#define CHARCATEGORIES_SET_numberDecimalDigit(x, numberDecimalDigit)      (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_numberDecimalDigit_MASK)) | (((C(CharCategories))(numberDecimalDigit)) << CHARCATEGORIES_numberDecimalDigit_SHIFT)
#define CHARCATEGORIES_numberLetter_SHIFT                5
#define CHARCATEGORIES_numberLetter_MASK                 0x20
#define CHARCATEGORIES_numberLetter(x)                   ((((C(CharCategories))(x)) & CHARCATEGORIES_numberLetter_MASK) >> CHARCATEGORIES_numberLetter_SHIFT)
#define CHARCATEGORIES_SET_numberLetter(x, numberLetter)            (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_numberLetter_MASK)) | (((C(CharCategories))(numberLetter)) << CHARCATEGORIES_numberLetter_SHIFT)
#define CHARCATEGORIES_numberOther_SHIFT                 6
#define CHARCATEGORIES_numberOther_MASK                  0x40
#define CHARCATEGORIES_numberOther(x)                    ((((C(CharCategories))(x)) & CHARCATEGORIES_numberOther_MASK) >> CHARCATEGORIES_numberOther_SHIFT)
#define CHARCATEGORIES_SET_numberOther(x, numberOther)             (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_numberOther_MASK)) | (((C(CharCategories))(numberOther)) << CHARCATEGORIES_numberOther_SHIFT)
#define CHARCATEGORIES_separatorSpace_SHIFT              7
#define CHARCATEGORIES_separatorSpace_MASK               0x80
#define CHARCATEGORIES_separatorSpace(x)                 ((((C(CharCategories))(x)) & CHARCATEGORIES_separatorSpace_MASK) >> CHARCATEGORIES_separatorSpace_SHIFT)
#define CHARCATEGORIES_SET_separatorSpace(x, separatorSpace)          (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_separatorSpace_MASK)) | (((C(CharCategories))(separatorSpace)) << CHARCATEGORIES_separatorSpace_SHIFT)
#define CHARCATEGORIES_separatorLine_SHIFT               8
#define CHARCATEGORIES_separatorLine_MASK                0x100
#define CHARCATEGORIES_separatorLine(x)                  ((((C(CharCategories))(x)) & CHARCATEGORIES_separatorLine_MASK) >> CHARCATEGORIES_separatorLine_SHIFT)
#define CHARCATEGORIES_SET_separatorLine(x, separatorLine)           (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_separatorLine_MASK)) | (((C(CharCategories))(separatorLine)) << CHARCATEGORIES_separatorLine_SHIFT)
#define CHARCATEGORIES_separatorParagraph_SHIFT          9
#define CHARCATEGORIES_separatorParagraph_MASK           0x200
#define CHARCATEGORIES_separatorParagraph(x)             ((((C(CharCategories))(x)) & CHARCATEGORIES_separatorParagraph_MASK) >> CHARCATEGORIES_separatorParagraph_SHIFT)
#define CHARCATEGORIES_SET_separatorParagraph(x, separatorParagraph)      (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_separatorParagraph_MASK)) | (((C(CharCategories))(separatorParagraph)) << CHARCATEGORIES_separatorParagraph_SHIFT)
#define CHARCATEGORIES_otherControl_SHIFT                10
#define CHARCATEGORIES_otherControl_MASK                 0x400
#define CHARCATEGORIES_otherControl(x)                   ((((C(CharCategories))(x)) & CHARCATEGORIES_otherControl_MASK) >> CHARCATEGORIES_otherControl_SHIFT)
#define CHARCATEGORIES_SET_otherControl(x, otherControl)            (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_otherControl_MASK)) | (((C(CharCategories))(otherControl)) << CHARCATEGORIES_otherControl_SHIFT)
#define CHARCATEGORIES_otherFormat_SHIFT                 11
#define CHARCATEGORIES_otherFormat_MASK                  0x800
#define CHARCATEGORIES_otherFormat(x)                    ((((C(CharCategories))(x)) & CHARCATEGORIES_otherFormat_MASK) >> CHARCATEGORIES_otherFormat_SHIFT)
#define CHARCATEGORIES_SET_otherFormat(x, otherFormat)             (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_otherFormat_MASK)) | (((C(CharCategories))(otherFormat)) << CHARCATEGORIES_otherFormat_SHIFT)
#define CHARCATEGORIES_otherSurrogate_SHIFT              12
#define CHARCATEGORIES_otherSurrogate_MASK               0x1000
#define CHARCATEGORIES_otherSurrogate(x)                 ((((C(CharCategories))(x)) & CHARCATEGORIES_otherSurrogate_MASK) >> CHARCATEGORIES_otherSurrogate_SHIFT)
#define CHARCATEGORIES_SET_otherSurrogate(x, otherSurrogate)          (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_otherSurrogate_MASK)) | (((C(CharCategories))(otherSurrogate)) << CHARCATEGORIES_otherSurrogate_SHIFT)
#define CHARCATEGORIES_otherPrivateUse_SHIFT             13
#define CHARCATEGORIES_otherPrivateUse_MASK              0x2000
#define CHARCATEGORIES_otherPrivateUse(x)                ((((C(CharCategories))(x)) & CHARCATEGORIES_otherPrivateUse_MASK) >> CHARCATEGORIES_otherPrivateUse_SHIFT)
#define CHARCATEGORIES_SET_otherPrivateUse(x, otherPrivateUse)         (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_otherPrivateUse_MASK)) | (((C(CharCategories))(otherPrivateUse)) << CHARCATEGORIES_otherPrivateUse_SHIFT)
#define CHARCATEGORIES_otherNotAssigned_SHIFT            14
#define CHARCATEGORIES_otherNotAssigned_MASK             0x4000
#define CHARCATEGORIES_otherNotAssigned(x)               ((((C(CharCategories))(x)) & CHARCATEGORIES_otherNotAssigned_MASK) >> CHARCATEGORIES_otherNotAssigned_SHIFT)
#define CHARCATEGORIES_SET_otherNotAssigned(x, otherNotAssigned)        (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_otherNotAssigned_MASK)) | (((C(CharCategories))(otherNotAssigned)) << CHARCATEGORIES_otherNotAssigned_SHIFT)
#define CHARCATEGORIES_letterUpperCase_SHIFT             15
#define CHARCATEGORIES_letterUpperCase_MASK              0x8000
#define CHARCATEGORIES_letterUpperCase(x)                ((((C(CharCategories))(x)) & CHARCATEGORIES_letterUpperCase_MASK) >> CHARCATEGORIES_letterUpperCase_SHIFT)
#define CHARCATEGORIES_SET_letterUpperCase(x, letterUpperCase)         (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_letterUpperCase_MASK)) | (((C(CharCategories))(letterUpperCase)) << CHARCATEGORIES_letterUpperCase_SHIFT)
#define CHARCATEGORIES_letterLowerCase_SHIFT             16
#define CHARCATEGORIES_letterLowerCase_MASK              0x10000
#define CHARCATEGORIES_letterLowerCase(x)                ((((C(CharCategories))(x)) & CHARCATEGORIES_letterLowerCase_MASK) >> CHARCATEGORIES_letterLowerCase_SHIFT)
#define CHARCATEGORIES_SET_letterLowerCase(x, letterLowerCase)         (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_letterLowerCase_MASK)) | (((C(CharCategories))(letterLowerCase)) << CHARCATEGORIES_letterLowerCase_SHIFT)
#define CHARCATEGORIES_letterTitleCase_SHIFT             17
#define CHARCATEGORIES_letterTitleCase_MASK              0x20000
#define CHARCATEGORIES_letterTitleCase(x)                ((((C(CharCategories))(x)) & CHARCATEGORIES_letterTitleCase_MASK) >> CHARCATEGORIES_letterTitleCase_SHIFT)
#define CHARCATEGORIES_SET_letterTitleCase(x, letterTitleCase)         (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_letterTitleCase_MASK)) | (((C(CharCategories))(letterTitleCase)) << CHARCATEGORIES_letterTitleCase_SHIFT)
#define CHARCATEGORIES_letterModifier_SHIFT              18
#define CHARCATEGORIES_letterModifier_MASK               0x40000
#define CHARCATEGORIES_letterModifier(x)                 ((((C(CharCategories))(x)) & CHARCATEGORIES_letterModifier_MASK) >> CHARCATEGORIES_letterModifier_SHIFT)
#define CHARCATEGORIES_SET_letterModifier(x, letterModifier)          (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_letterModifier_MASK)) | (((C(CharCategories))(letterModifier)) << CHARCATEGORIES_letterModifier_SHIFT)
#define CHARCATEGORIES_letterOther_SHIFT                 19
#define CHARCATEGORIES_letterOther_MASK                  0x80000
#define CHARCATEGORIES_letterOther(x)                    ((((C(CharCategories))(x)) & CHARCATEGORIES_letterOther_MASK) >> CHARCATEGORIES_letterOther_SHIFT)
#define CHARCATEGORIES_SET_letterOther(x, letterOther)             (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_letterOther_MASK)) | (((C(CharCategories))(letterOther)) << CHARCATEGORIES_letterOther_SHIFT)
#define CHARCATEGORIES_punctuationConnector_SHIFT        20
#define CHARCATEGORIES_punctuationConnector_MASK         0x100000
#define CHARCATEGORIES_punctuationConnector(x)           ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationConnector_MASK) >> CHARCATEGORIES_punctuationConnector_SHIFT)
#define CHARCATEGORIES_SET_punctuationConnector(x, punctuationConnector)    (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationConnector_MASK)) | (((C(CharCategories))(punctuationConnector)) << CHARCATEGORIES_punctuationConnector_SHIFT)
#define CHARCATEGORIES_punctuationDash_SHIFT             21
#define CHARCATEGORIES_punctuationDash_MASK              0x200000
#define CHARCATEGORIES_punctuationDash(x)                ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationDash_MASK) >> CHARCATEGORIES_punctuationDash_SHIFT)
#define CHARCATEGORIES_SET_punctuationDash(x, punctuationDash)         (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationDash_MASK)) | (((C(CharCategories))(punctuationDash)) << CHARCATEGORIES_punctuationDash_SHIFT)
#define CHARCATEGORIES_punctuationOpen_SHIFT             22
#define CHARCATEGORIES_punctuationOpen_MASK              0x400000
#define CHARCATEGORIES_punctuationOpen(x)                ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationOpen_MASK) >> CHARCATEGORIES_punctuationOpen_SHIFT)
#define CHARCATEGORIES_SET_punctuationOpen(x, punctuationOpen)         (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationOpen_MASK)) | (((C(CharCategories))(punctuationOpen)) << CHARCATEGORIES_punctuationOpen_SHIFT)
#define CHARCATEGORIES_punctuationClose_SHIFT            23
#define CHARCATEGORIES_punctuationClose_MASK             0x800000
#define CHARCATEGORIES_punctuationClose(x)               ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationClose_MASK) >> CHARCATEGORIES_punctuationClose_SHIFT)
#define CHARCATEGORIES_SET_punctuationClose(x, punctuationClose)        (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationClose_MASK)) | (((C(CharCategories))(punctuationClose)) << CHARCATEGORIES_punctuationClose_SHIFT)
#define CHARCATEGORIES_punctuationInitial_SHIFT          24
#define CHARCATEGORIES_punctuationInitial_MASK           0x1000000
#define CHARCATEGORIES_punctuationInitial(x)             ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationInitial_MASK) >> CHARCATEGORIES_punctuationInitial_SHIFT)
#define CHARCATEGORIES_SET_punctuationInitial(x, punctuationInitial)      (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationInitial_MASK)) | (((C(CharCategories))(punctuationInitial)) << CHARCATEGORIES_punctuationInitial_SHIFT)
#define CHARCATEGORIES_punctuationFinal_SHIFT            25
#define CHARCATEGORIES_punctuationFinal_MASK             0x2000000
#define CHARCATEGORIES_punctuationFinal(x)               ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationFinal_MASK) >> CHARCATEGORIES_punctuationFinal_SHIFT)
#define CHARCATEGORIES_SET_punctuationFinal(x, punctuationFinal)        (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationFinal_MASK)) | (((C(CharCategories))(punctuationFinal)) << CHARCATEGORIES_punctuationFinal_SHIFT)
#define CHARCATEGORIES_punctuationOther_SHIFT            26
#define CHARCATEGORIES_punctuationOther_MASK             0x4000000
#define CHARCATEGORIES_punctuationOther(x)               ((((C(CharCategories))(x)) & CHARCATEGORIES_punctuationOther_MASK) >> CHARCATEGORIES_punctuationOther_SHIFT)
#define CHARCATEGORIES_SET_punctuationOther(x, punctuationOther)        (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_punctuationOther_MASK)) | (((C(CharCategories))(punctuationOther)) << CHARCATEGORIES_punctuationOther_SHIFT)
#define CHARCATEGORIES_symbolMath_SHIFT                  27
#define CHARCATEGORIES_symbolMath_MASK                   0x8000000
#define CHARCATEGORIES_symbolMath(x)                     ((((C(CharCategories))(x)) & CHARCATEGORIES_symbolMath_MASK) >> CHARCATEGORIES_symbolMath_SHIFT)
#define CHARCATEGORIES_SET_symbolMath(x, symbolMath)              (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_symbolMath_MASK)) | (((C(CharCategories))(symbolMath)) << CHARCATEGORIES_symbolMath_SHIFT)
#define CHARCATEGORIES_symbolCurrency_SHIFT              28
#define CHARCATEGORIES_symbolCurrency_MASK               0x10000000
#define CHARCATEGORIES_symbolCurrency(x)                 ((((C(CharCategories))(x)) & CHARCATEGORIES_symbolCurrency_MASK) >> CHARCATEGORIES_symbolCurrency_SHIFT)
#define CHARCATEGORIES_SET_symbolCurrency(x, symbolCurrency)          (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_symbolCurrency_MASK)) | (((C(CharCategories))(symbolCurrency)) << CHARCATEGORIES_symbolCurrency_SHIFT)
#define CHARCATEGORIES_symbolModifier_SHIFT              29
#define CHARCATEGORIES_symbolModifier_MASK               0x20000000
#define CHARCATEGORIES_symbolModifier(x)                 ((((C(CharCategories))(x)) & CHARCATEGORIES_symbolModifier_MASK) >> CHARCATEGORIES_symbolModifier_SHIFT)
#define CHARCATEGORIES_SET_symbolModifier(x, symbolModifier)          (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_symbolModifier_MASK)) | (((C(CharCategories))(symbolModifier)) << CHARCATEGORIES_symbolModifier_SHIFT)
#define CHARCATEGORIES_symbolOther_SHIFT                 30
#define CHARCATEGORIES_symbolOther_MASK                  0x40000000
#define CHARCATEGORIES_symbolOther(x)                    ((((C(CharCategories))(x)) & CHARCATEGORIES_symbolOther_MASK) >> CHARCATEGORIES_symbolOther_SHIFT)
#define CHARCATEGORIES_SET_symbolOther(x, symbolOther)             (x) = ((C(CharCategories))(x) & ~((C(CharCategories))CHARCATEGORIES_symbolOther_MASK)) | (((C(CharCategories))(symbolOther)) << CHARCATEGORIES_symbolOther_SHIFT)


struct C(Condition)
{
   byte __ecere_padding[40];
};
extern THIS_LIB_IMPORT void (* Condition_signal)(C(Condition) * __this);

extern THIS_LIB_IMPORT void (* Condition_wait)(C(Condition) * __this, C(Mutex) * mutex);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Condition, name);
extern THIS_LIB_IMPORT void (* Condition_set_name)(const C(Condition) * c, const char * value);
extern THIS_LIB_IMPORT const char * (* Condition_get_name)(const C(Condition) * c);

struct C(Date)
{
   int year;
   C(Month) month;
   int day;
};
extern THIS_LIB_IMPORT const char * (* Date_onGetStringEn)(C(Date) * __this, char * stringOutput, void * fieldData, C(ObjectNotationType) * onType);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Date, dayOfTheWeek);
extern THIS_LIB_IMPORT C(DayOfTheWeek) (* Date_get_dayOfTheWeek)(const C(Date) * d);

struct C(DateTime)
{
   int year;
   C(Month) month;
   int day;
   int hour;
   int minute;
   int second;
   C(DayOfTheWeek) dayOfTheWeek;
   int dayInTheYear;
};
extern THIS_LIB_IMPORT C(bool) (* DateTime_fixDayOfYear)(C(DateTime) * __this);

extern THIS_LIB_IMPORT C(bool) (* DateTime_getLocalTime)(C(DateTime) * __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DateTime, global);
extern THIS_LIB_IMPORT void (* DateTime_set_global)(const C(DateTime) * d, const C(DateTime) * value);
extern THIS_LIB_IMPORT void (* DateTime_get_global)(const C(DateTime) * d, C(DateTime) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DateTime, local);
extern THIS_LIB_IMPORT void (* DateTime_set_local)(const C(DateTime) * d, const C(DateTime) * value);
extern THIS_LIB_IMPORT void (* DateTime_get_local)(const C(DateTime) * d, C(DateTime) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DateTime, daysSince1970);
extern THIS_LIB_IMPORT int64 (* DateTime_get_daysSince1970)(const C(DateTime) * d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DateTime, SecSince1970);
extern THIS_LIB_IMPORT void (* DateTime_from_SecSince1970)(const C(DateTime) * d, C(SecSince1970) value);
extern THIS_LIB_IMPORT C(SecSince1970) (* DateTime_to_SecSince1970)(const C(DateTime) * d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DateTime, Date);
extern THIS_LIB_IMPORT void (* DateTime_from_Date)(const C(DateTime) * d, const C(Date) * value);
extern THIS_LIB_IMPORT void (* DateTime_to_Date)(const C(DateTime) * d, C(Date) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Degrees, Radians);
extern THIS_LIB_IMPORT double (* Degrees_from_Radians)(const C(Angle) radians);
extern THIS_LIB_IMPORT C(Angle) (* Degrees_to_Radians)(const double degrees);
#define Degrees(x) DEGREES(x)
#define DEGREES(x)  ((C(Angle))((x) * 0.0174532925199433))
#define Angle_in_Degrees(x)  ((double)((x) * 57.2957795130823))

extern THIS_LIB_IMPORT int (* DualPipe_getExitCode)(C(DualPipe) __this);

extern THIS_LIB_IMPORT C(bool) (* DualPipe_getLinePeek)(C(DualPipe) __this, char * s, int max, int * charsRead);

extern THIS_LIB_IMPORT int (* DualPipe_getProcessID)(C(DualPipe) __this);

extern THIS_LIB_IMPORT C(bool) (* DualPipe_peek)(C(DualPipe) __this);

extern THIS_LIB_IMPORT void (* DualPipe_terminate)(C(DualPipe) __this);

extern THIS_LIB_IMPORT void (* DualPipe_wait)(C(DualPipe) __this);

#define ERRORCODE_level_SHIFT                            12
#define ERRORCODE_level_MASK                             0x3000
#define ERRORCODE_level(x)                               ((((C(ErrorCode))(x)) & ERRORCODE_level_MASK) >> ERRORCODE_level_SHIFT)
#define ERRORCODE_SET_level(x, level)                        (x) = ((C(ErrorCode))(x) & ~((C(ErrorCode))ERRORCODE_level_MASK)) | (((C(ErrorCode))(level)) << ERRORCODE_level_SHIFT)
#define ERRORCODE_code_SHIFT                             0
#define ERRORCODE_code_MASK                              0xFFF
#define ERRORCODE_code(x)                                ((((C(ErrorCode))(x)) & ERRORCODE_code_MASK) >> ERRORCODE_code_SHIFT)
#define ERRORCODE_SET_code(x, code)                         (x) = ((C(ErrorCode))(x) & ~((C(ErrorCode))ERRORCODE_code_MASK)) | (((C(ErrorCode))(code)) << ERRORCODE_code_SHIFT)
#define ERRORCODE(level, code)                                 ((((C(ErrorCode))(level)) << ERRORCODE_level_SHIFT) | ((C(ErrorCode))(code)) << ERRORCODE_code_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(Feet, Meters);
extern THIS_LIB_IMPORT double (* Feet_from_Meters)(const C(Distance) meters);
extern THIS_LIB_IMPORT C(Distance) (* Feet_to_Meters)(const double feet);
#define Feet(x) FEET(x)
#define FEET(x)  ((C(Distance))((x) * 0.304800003767014))
#define Distance_in_Feet(x)  ((double)((x) * 3.28083985446533))

extern THIS_LIB_IMPORT int M_VTBLID(File, close);
// void File_close(C(File) __i);
#define File_close(__i) \
   VMETHOD(CO(File), File, close, __i, void, \
      C(File), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, close);

extern THIS_LIB_IMPORT int M_VTBLID(File, closeInput);
// void File_closeInput(C(File) __i);
#define File_closeInput(__i) \
   VMETHOD(CO(File), File, closeInput, __i, void, \
      C(File), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, closeInput);

extern THIS_LIB_IMPORT int M_VTBLID(File, closeOutput);
// void File_closeOutput(C(File) __i);
#define File_closeOutput(__i) \
   VMETHOD(CO(File), File, closeOutput, __i, void, \
      C(File), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, closeOutput);

extern THIS_LIB_IMPORT C(bool) (* File_copyTo)(C(File) __this, const char * outputFileName);

extern THIS_LIB_IMPORT C(bool) (* File_copyToFile)(C(File) __this, C(File) f);

extern THIS_LIB_IMPORT int M_VTBLID(File, eof);
// C(bool) File_eof(C(File) __i);
#define File_eof(__i) \
   VMETHOD(CO(File), File, eof, __i, C(bool), \
      C(File), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, eof);

extern THIS_LIB_IMPORT C(bool) (* File_flush)(C(File) __this);

extern THIS_LIB_IMPORT double (* File_getDouble)(C(File) __this);

extern THIS_LIB_IMPORT float (* File_getFloat)(C(File) __this);

extern THIS_LIB_IMPORT uint (* File_getHexValue)(C(File) __this);

extern THIS_LIB_IMPORT C(bool) (* File_getLine)(C(File) __this, char * s, int max);

extern THIS_LIB_IMPORT int (* File_getLineEx)(C(File) __this, char * s, int max, C(bool) * hasNewLineChar);

extern THIS_LIB_IMPORT int M_VTBLID(File, getSize);
// uint64 File_getSize(C(File) __i);
#define File_getSize(__i) \
   VMETHOD(CO(File), File, getSize, __i, uint64, \
      C(File), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, getSize);

extern THIS_LIB_IMPORT C(bool) (* File_getString)(C(File) __this, char * string, int max);

extern THIS_LIB_IMPORT int (* File_getValue)(C(File) __this);

extern THIS_LIB_IMPORT int M_VTBLID(File, getc);
// C(bool) File_getc(C(File) __i, char * ch);
#define File_getc(__i, ch) \
   VMETHOD(CO(File), File, getc, __i, C(bool), \
      C(File) _ARG char *, \
      __i _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, getc);

extern THIS_LIB_IMPORT int M_VTBLID(File, lock);
// C(bool) File_lock(C(File) __i, C(FileLock) type, uint64 start, uint64 length, C(bool) wait);
#define File_lock(__i, type, start, length, wait) \
   VMETHOD(CO(File), File, lock, __i, C(bool), \
      C(File) _ARG C(FileLock) _ARG uint64 _ARG uint64 _ARG C(bool), \
      __i _ARG type _ARG start _ARG length _ARG wait)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, lock);

extern THIS_LIB_IMPORT void (* File_print)(C(File) __this, typed_object_class_ptr class_object, const void * object, ...);

extern THIS_LIB_IMPORT void (* File_printLn)(C(File) __this, typed_object_class_ptr class_object, const void * object, ...);

extern THIS_LIB_IMPORT int (* File_printf)(C(File) __this, const char * format, ...);

extern THIS_LIB_IMPORT int M_VTBLID(File, putc);
// C(bool) File_putc(C(File) __i, char ch);
#define File_putc(__i, ch) \
   VMETHOD(CO(File), File, putc, __i, C(bool), \
      C(File) _ARG char, \
      __i _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, putc);

extern THIS_LIB_IMPORT int M_VTBLID(File, puts);
// C(bool) File_puts(C(File) __i, const char * string);
#define File_puts(__i, string) \
   VMETHOD(CO(File), File, puts, __i, C(bool), \
      C(File) _ARG const char *, \
      __i _ARG string)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, puts);

extern THIS_LIB_IMPORT int M_VTBLID(File, read);
// uintsize File_read(C(File) __i, void * buffer, uintsize size, uintsize count);
#define File_read(__i, buffer, size, count) \
   VMETHOD(CO(File), File, read, __i, uintsize, \
      C(File) _ARG void * _ARG uintsize _ARG uintsize, \
      __i _ARG buffer _ARG size _ARG count)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, read);

extern THIS_LIB_IMPORT int M_VTBLID(File, seek);
// C(bool) File_seek(C(File) __i, int64 pos, C(FileSeekMode) mode);
#define File_seek(__i, pos, mode) \
   VMETHOD(CO(File), File, seek, __i, C(bool), \
      C(File) _ARG int64 _ARG C(FileSeekMode), \
      __i _ARG pos _ARG mode)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, seek);

extern THIS_LIB_IMPORT int M_VTBLID(File, tell);
// uint64 File_tell(C(File) __i);
#define File_tell(__i) \
   VMETHOD(CO(File), File, tell, __i, uint64, \
      C(File), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, tell);

extern THIS_LIB_IMPORT int M_VTBLID(File, truncate);
// C(bool) File_truncate(C(File) __i, uint64 size);
#define File_truncate(__i, size) \
   VMETHOD(CO(File), File, truncate, __i, C(bool), \
      C(File) _ARG uint64, \
      __i _ARG size)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, truncate);

extern THIS_LIB_IMPORT int M_VTBLID(File, unlock);
// C(bool) File_unlock(C(File) __i, uint64 start, uint64 length, C(bool) wait);
#define File_unlock(__i, start, length, wait) \
   VMETHOD(CO(File), File, unlock, __i, C(bool), \
      C(File) _ARG uint64 _ARG uint64 _ARG C(bool), \
      __i _ARG start _ARG length _ARG wait)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, unlock);

extern THIS_LIB_IMPORT int M_VTBLID(File, write);
// uintsize File_write(C(File) __i, const void * buffer, uintsize size, uintsize count);
#define File_write(__i, buffer, size, count) \
   VMETHOD(CO(File), File, write, __i, uintsize, \
      C(File) _ARG const void * _ARG uintsize _ARG uintsize, \
      __i _ARG buffer _ARG size _ARG count)
extern THIS_LIB_IMPORT C(Method) * METHOD(File, write);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(File, input);
extern THIS_LIB_IMPORT void (* File_set_input)(const C(File) f, void * value);
extern THIS_LIB_IMPORT void * (* File_get_input)(const C(File) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(File, output);
extern THIS_LIB_IMPORT void (* File_set_output)(const C(File) f, void * value);
extern THIS_LIB_IMPORT void * (* File_get_output)(const C(File) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(File, buffered);
extern THIS_LIB_IMPORT void (* File_set_buffered)(const C(File) f, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(File, eof);
extern THIS_LIB_IMPORT C(bool) (* File_get_eof)(const C(File) f);

#define FILEATTRIBS_isFile_SHIFT                         0
#define FILEATTRIBS_isFile_MASK                          0x1
#define FILEATTRIBS_isFile(x)                            ((((C(FileAttribs))(x)) & FILEATTRIBS_isFile_MASK) >> FILEATTRIBS_isFile_SHIFT)
#define FILEATTRIBS_SET_isFile(x, isFile)                     (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isFile_MASK)) | (((C(FileAttribs))(isFile)) << FILEATTRIBS_isFile_SHIFT)
#define FILEATTRIBS_isArchive_SHIFT                      1
#define FILEATTRIBS_isArchive_MASK                       0x2
#define FILEATTRIBS_isArchive(x)                         ((((C(FileAttribs))(x)) & FILEATTRIBS_isArchive_MASK) >> FILEATTRIBS_isArchive_SHIFT)
#define FILEATTRIBS_SET_isArchive(x, isArchive)                  (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isArchive_MASK)) | (((C(FileAttribs))(isArchive)) << FILEATTRIBS_isArchive_SHIFT)
#define FILEATTRIBS_isHidden_SHIFT                       2
#define FILEATTRIBS_isHidden_MASK                        0x4
#define FILEATTRIBS_isHidden(x)                          ((((C(FileAttribs))(x)) & FILEATTRIBS_isHidden_MASK) >> FILEATTRIBS_isHidden_SHIFT)
#define FILEATTRIBS_SET_isHidden(x, isHidden)                   (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isHidden_MASK)) | (((C(FileAttribs))(isHidden)) << FILEATTRIBS_isHidden_SHIFT)
#define FILEATTRIBS_isReadOnly_SHIFT                     3
#define FILEATTRIBS_isReadOnly_MASK                      0x8
#define FILEATTRIBS_isReadOnly(x)                        ((((C(FileAttribs))(x)) & FILEATTRIBS_isReadOnly_MASK) >> FILEATTRIBS_isReadOnly_SHIFT)
#define FILEATTRIBS_SET_isReadOnly(x, isReadOnly)                 (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isReadOnly_MASK)) | (((C(FileAttribs))(isReadOnly)) << FILEATTRIBS_isReadOnly_SHIFT)
#define FILEATTRIBS_isSystem_SHIFT                       4
#define FILEATTRIBS_isSystem_MASK                        0x10
#define FILEATTRIBS_isSystem(x)                          ((((C(FileAttribs))(x)) & FILEATTRIBS_isSystem_MASK) >> FILEATTRIBS_isSystem_SHIFT)
#define FILEATTRIBS_SET_isSystem(x, isSystem)                   (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isSystem_MASK)) | (((C(FileAttribs))(isSystem)) << FILEATTRIBS_isSystem_SHIFT)
#define FILEATTRIBS_isTemporary_SHIFT                    5
#define FILEATTRIBS_isTemporary_MASK                     0x20
#define FILEATTRIBS_isTemporary(x)                       ((((C(FileAttribs))(x)) & FILEATTRIBS_isTemporary_MASK) >> FILEATTRIBS_isTemporary_SHIFT)
#define FILEATTRIBS_SET_isTemporary(x, isTemporary)                (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isTemporary_MASK)) | (((C(FileAttribs))(isTemporary)) << FILEATTRIBS_isTemporary_SHIFT)
#define FILEATTRIBS_isDirectory_SHIFT                    6
#define FILEATTRIBS_isDirectory_MASK                     0x40
#define FILEATTRIBS_isDirectory(x)                       ((((C(FileAttribs))(x)) & FILEATTRIBS_isDirectory_MASK) >> FILEATTRIBS_isDirectory_SHIFT)
#define FILEATTRIBS_SET_isDirectory(x, isDirectory)                (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isDirectory_MASK)) | (((C(FileAttribs))(isDirectory)) << FILEATTRIBS_isDirectory_SHIFT)
#define FILEATTRIBS_isDrive_SHIFT                        7
#define FILEATTRIBS_isDrive_MASK                         0x80
#define FILEATTRIBS_isDrive(x)                           ((((C(FileAttribs))(x)) & FILEATTRIBS_isDrive_MASK) >> FILEATTRIBS_isDrive_SHIFT)
#define FILEATTRIBS_SET_isDrive(x, isDrive)                    (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isDrive_MASK)) | (((C(FileAttribs))(isDrive)) << FILEATTRIBS_isDrive_SHIFT)
#define FILEATTRIBS_isCDROM_SHIFT                        8
#define FILEATTRIBS_isCDROM_MASK                         0x100
#define FILEATTRIBS_isCDROM(x)                           ((((C(FileAttribs))(x)) & FILEATTRIBS_isCDROM_MASK) >> FILEATTRIBS_isCDROM_SHIFT)
#define FILEATTRIBS_SET_isCDROM(x, isCDROM)                    (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isCDROM_MASK)) | (((C(FileAttribs))(isCDROM)) << FILEATTRIBS_isCDROM_SHIFT)
#define FILEATTRIBS_isRemote_SHIFT                       9
#define FILEATTRIBS_isRemote_MASK                        0x200
#define FILEATTRIBS_isRemote(x)                          ((((C(FileAttribs))(x)) & FILEATTRIBS_isRemote_MASK) >> FILEATTRIBS_isRemote_SHIFT)
#define FILEATTRIBS_SET_isRemote(x, isRemote)                   (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isRemote_MASK)) | (((C(FileAttribs))(isRemote)) << FILEATTRIBS_isRemote_SHIFT)
#define FILEATTRIBS_isRemovable_SHIFT                    10
#define FILEATTRIBS_isRemovable_MASK                     0x400
#define FILEATTRIBS_isRemovable(x)                       ((((C(FileAttribs))(x)) & FILEATTRIBS_isRemovable_MASK) >> FILEATTRIBS_isRemovable_SHIFT)
#define FILEATTRIBS_SET_isRemovable(x, isRemovable)                (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isRemovable_MASK)) | (((C(FileAttribs))(isRemovable)) << FILEATTRIBS_isRemovable_SHIFT)
#define FILEATTRIBS_isServer_SHIFT                       11
#define FILEATTRIBS_isServer_MASK                        0x800
#define FILEATTRIBS_isServer(x)                          ((((C(FileAttribs))(x)) & FILEATTRIBS_isServer_MASK) >> FILEATTRIBS_isServer_SHIFT)
#define FILEATTRIBS_SET_isServer(x, isServer)                   (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isServer_MASK)) | (((C(FileAttribs))(isServer)) << FILEATTRIBS_isServer_SHIFT)
#define FILEATTRIBS_isShare_SHIFT                        12
#define FILEATTRIBS_isShare_MASK                         0x1000
#define FILEATTRIBS_isShare(x)                           ((((C(FileAttribs))(x)) & FILEATTRIBS_isShare_MASK) >> FILEATTRIBS_isShare_SHIFT)
#define FILEATTRIBS_SET_isShare(x, isShare)                    (x) = ((C(FileAttribs))(x) & ~((C(FileAttribs))FILEATTRIBS_isShare_MASK)) | (((C(FileAttribs))(isShare)) << FILEATTRIBS_isShare_SHIFT)


#define FILECHANGE_created_SHIFT                         0
#define FILECHANGE_created_MASK                          0x1
#define FILECHANGE_created(x)                            ((((C(FileChange))(x)) & FILECHANGE_created_MASK) >> FILECHANGE_created_SHIFT)
#define FILECHANGE_SET_created(x, created)                     (x) = ((C(FileChange))(x) & ~((C(FileChange))FILECHANGE_created_MASK)) | (((C(FileChange))(created)) << FILECHANGE_created_SHIFT)
#define FILECHANGE_renamed_SHIFT                         1
#define FILECHANGE_renamed_MASK                          0x2
#define FILECHANGE_renamed(x)                            ((((C(FileChange))(x)) & FILECHANGE_renamed_MASK) >> FILECHANGE_renamed_SHIFT)
#define FILECHANGE_SET_renamed(x, renamed)                     (x) = ((C(FileChange))(x) & ~((C(FileChange))FILECHANGE_renamed_MASK)) | (((C(FileChange))(renamed)) << FILECHANGE_renamed_SHIFT)
#define FILECHANGE_modified_SHIFT                        2
#define FILECHANGE_modified_MASK                         0x4
#define FILECHANGE_modified(x)                           ((((C(FileChange))(x)) & FILECHANGE_modified_MASK) >> FILECHANGE_modified_SHIFT)
#define FILECHANGE_SET_modified(x, modified)                    (x) = ((C(FileChange))(x) & ~((C(FileChange))FILECHANGE_modified_MASK)) | (((C(FileChange))(modified)) << FILECHANGE_modified_SHIFT)
#define FILECHANGE_deleted_SHIFT                         3
#define FILECHANGE_deleted_MASK                          0x8
#define FILECHANGE_deleted(x)                            ((((C(FileChange))(x)) & FILECHANGE_deleted_MASK) >> FILECHANGE_deleted_SHIFT)
#define FILECHANGE_SET_deleted(x, deleted)                     (x) = ((C(FileChange))(x) & ~((C(FileChange))FILECHANGE_deleted_MASK)) | (((C(FileChange))(deleted)) << FILECHANGE_deleted_SHIFT)
#define FILECHANGE_attribs_SHIFT                         4
#define FILECHANGE_attribs_MASK                          0x10
#define FILECHANGE_attribs(x)                            ((((C(FileChange))(x)) & FILECHANGE_attribs_MASK) >> FILECHANGE_attribs_SHIFT)
#define FILECHANGE_SET_attribs(x, attribs)                     (x) = ((C(FileChange))(x) & ~((C(FileChange))FILECHANGE_attribs_MASK)) | (((C(FileChange))(attribs)) << FILECHANGE_attribs_SHIFT)
#define FILECHANGE(created, renamed, modified, deleted, attribs)                          (((((((C(FileChange))(created)) << FILECHANGE_created_SHIFT) | ((C(FileChange))(renamed)) << FILECHANGE_renamed_SHIFT) | ((C(FileChange))(modified)) << FILECHANGE_modified_SHIFT) | ((C(FileChange))(deleted)) << FILECHANGE_deleted_SHIFT) | ((C(FileChange))(attribs)) << FILECHANGE_attribs_SHIFT)


struct C(FileListing)
{
   const char * directory;
   const char * extensions;
   byte __ecere_padding[8];
};
extern THIS_LIB_IMPORT C(bool) (* FileListing_find)(C(FileListing) * __this);

extern THIS_LIB_IMPORT void (* FileListing_stop)(C(FileListing) * __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileListing, name);
extern THIS_LIB_IMPORT const char * (* FileListing_get_name)(const C(FileListing) * f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileListing, path);
extern THIS_LIB_IMPORT const char * (* FileListing_get_path)(const C(FileListing) * f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileListing, stats);
extern THIS_LIB_IMPORT void (* FileListing_get_stats)(const C(FileListing) * f, C(FileStats) * value);

extern THIS_LIB_IMPORT int M_VTBLID(FileMonitor, onDirNotify);
// C(bool) FileMonitor_onDirNotify(C(FileMonitor) __i, any_object __t, C(FileChange) action, const char * fileName, const char * param);
#define FileMonitor_onDirNotify(__i, __t, action, fileName, param) \
   VMETHOD(CO(FileMonitor), FileMonitor, onDirNotify, __i, C(bool), \
      any_object _ARG C(FileChange) _ARG const char * _ARG const char *, \
      __t _ARG action _ARG fileName _ARG param)
extern THIS_LIB_IMPORT C(Method) * METHOD(FileMonitor, onDirNotify);

extern THIS_LIB_IMPORT int M_VTBLID(FileMonitor, onFileNotify);
// C(bool) FileMonitor_onFileNotify(C(FileMonitor) __i, any_object __t, C(FileChange) action, const char * param);
#define FileMonitor_onFileNotify(__i, __t, action, param) \
   VMETHOD(CO(FileMonitor), FileMonitor, onFileNotify, __i, C(bool), \
      any_object _ARG C(FileChange) _ARG const char *, \
      __t _ARG action _ARG param)
extern THIS_LIB_IMPORT C(Method) * METHOD(FileMonitor, onFileNotify);

extern THIS_LIB_IMPORT void (* FileMonitor_startMonitoring)(C(FileMonitor) __this);

extern THIS_LIB_IMPORT void (* FileMonitor_stopMonitoring)(C(FileMonitor) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileMonitor, userData);
extern THIS_LIB_IMPORT void (* FileMonitor_set_userData)(const C(FileMonitor) f, void * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileMonitor, fileChange);
extern THIS_LIB_IMPORT void (* FileMonitor_set_fileChange)(const C(FileMonitor) f, C(FileChange) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileMonitor, fileName);
extern THIS_LIB_IMPORT void (* FileMonitor_set_fileName)(const C(FileMonitor) f, const char * value);
extern THIS_LIB_IMPORT const char * (* FileMonitor_get_fileName)(const C(FileMonitor) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileMonitor, directoryName);
extern THIS_LIB_IMPORT void (* FileMonitor_set_directoryName)(const C(FileMonitor) f, const char * value);
extern THIS_LIB_IMPORT const char * (* FileMonitor_get_directoryName)(const C(FileMonitor) f);

extern THIS_LIB_IMPORT C(bool) (* GlobalAppSettings_getGlobalValue)(C(GlobalAppSettings) __this, const char * section, const char * name, C(GlobalSettingType) type, void * value);

extern THIS_LIB_IMPORT C(bool) (* GlobalAppSettings_putGlobalValue)(C(GlobalAppSettings) __this, const char * section, const char * name, C(GlobalSettingType) type, const void * value);

struct CM(GlobalSettings)
{
   C(GlobalSettingsData) data;
   C(GlobalSettingsData) * dataOwner;
   subclass(GlobalSettingsData) dataClass;
   byte __ecere_padding[96];
};
extern THIS_LIB_IMPORT void (* GlobalSettings_close)(C(GlobalSettings) __this);

extern THIS_LIB_IMPORT void (* GlobalSettings_closeAndMonitor)(C(GlobalSettings) __this);

extern THIS_LIB_IMPORT int M_VTBLID(GlobalSettings, load);
// C(SettingsIOResult) GlobalSettings_load(C(GlobalSettings) __i);
#define GlobalSettings_load(__i) \
   VMETHOD(CO(GlobalSettings), GlobalSettings, load, __i, C(SettingsIOResult), \
      C(GlobalSettings), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(GlobalSettings, load);

extern THIS_LIB_IMPORT int M_VTBLID(GlobalSettings, onAskReloadSettings);
// void GlobalSettings_onAskReloadSettings(C(GlobalSettings) __i);
#define GlobalSettings_onAskReloadSettings(__i) \
   VMETHOD(CO(GlobalSettings), GlobalSettings, onAskReloadSettings, __i, void, \
      C(GlobalSettings), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(GlobalSettings, onAskReloadSettings);

extern THIS_LIB_IMPORT C(bool) (* GlobalSettings_openAndLock)(C(GlobalSettings) __this, C(FileSize) * fileSize);

extern THIS_LIB_IMPORT int M_VTBLID(GlobalSettings, save);
// C(SettingsIOResult) GlobalSettings_save(C(GlobalSettings) __i);
#define GlobalSettings_save(__i) \
   VMETHOD(CO(GlobalSettings), GlobalSettings, save, __i, C(SettingsIOResult), \
      C(GlobalSettings), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(GlobalSettings, save);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, settingsName);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_settingsName)(const C(GlobalSettings) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GlobalSettings_get_settingsName)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, settingsExtension);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_settingsExtension)(const C(GlobalSettings) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GlobalSettings_get_settingsExtension)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, settingsDirectory);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_settingsDirectory)(const C(GlobalSettings) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GlobalSettings_get_settingsDirectory)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, settingsLocation);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_settingsLocation)(const C(GlobalSettings) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GlobalSettings_get_settingsLocation)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, settingsFilePath);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_settingsFilePath)(const C(GlobalSettings) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GlobalSettings_get_settingsFilePath)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, allowDefaultLocations);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_allowDefaultLocations)(const C(GlobalSettings) g, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* GlobalSettings_get_allowDefaultLocations)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, allUsers);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_allUsers)(const C(GlobalSettings) g, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* GlobalSettings_get_allUsers)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, portable);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_portable)(const C(GlobalSettings) g, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* GlobalSettings_get_portable)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, driver);
extern THIS_LIB_IMPORT void (* GlobalSettings_set_driver)(const C(GlobalSettings) g, constString value);
extern THIS_LIB_IMPORT constString (* GlobalSettings_get_driver)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GlobalSettings, isGlobalPath);
extern THIS_LIB_IMPORT C(bool) (* GlobalSettings_get_isGlobalPath)(const C(GlobalSettings) g);

extern THIS_LIB_IMPORT int M_VTBLID(GlobalSettingsDriver, load);
// C(SettingsIOResult) GlobalSettingsDriver_load(C(GlobalSettingsDriver) __i, C(File) f, C(GlobalSettings) globalSettings);
#define GlobalSettingsDriver_load(__i, f, globalSettings) \
   VMETHOD(CO(GlobalSettingsDriver), GlobalSettingsDriver, load, __i, C(SettingsIOResult), \
      C(File) _ARG C(GlobalSettings), \
      f _ARG globalSettings)
extern THIS_LIB_IMPORT C(Method) * METHOD(GlobalSettingsDriver, load);

extern THIS_LIB_IMPORT int M_VTBLID(GlobalSettingsDriver, save);
// C(SettingsIOResult) GlobalSettingsDriver_save(C(GlobalSettingsDriver) __i, C(File) f, C(GlobalSettings) globalSettings);
#define GlobalSettingsDriver_save(__i, f, globalSettings) \
   VMETHOD(CO(GlobalSettingsDriver), GlobalSettingsDriver, save, __i, C(SettingsIOResult), \
      C(File) _ARG C(GlobalSettings), \
      f _ARG globalSettings)
extern THIS_LIB_IMPORT C(Method) * METHOD(GlobalSettingsDriver, save);

struct CM(JSONParser)
{
   C(File) f;
   C(OptionsMap) customJsonOptions;
   byte __ecere_padding[32];
};
extern THIS_LIB_IMPORT C(JSONResult) (* JSONParser_getObject)(C(JSONParser) __this, C(Class) * objectType, void ** object);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(JSONParser, debug);
extern THIS_LIB_IMPORT void (* JSONParser_set_debug)(const C(JSONParser) j, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* JSONParser_get_debug)(const C(JSONParser) j);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(JSONParser, warnings);
extern THIS_LIB_IMPORT void (* JSONParser_set_warnings)(const C(JSONParser) j, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* JSONParser_get_warnings)(const C(JSONParser) j);

#define JSONTYPEOPTIONS_numbersUseOGDFS_SHIFT            0
#define JSONTYPEOPTIONS_numbersUseOGDFS_MASK             0x1
#define JSONTYPEOPTIONS_numbersUseOGDFS(x)               ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_numbersUseOGDFS_MASK) >> JSONTYPEOPTIONS_numbersUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_numbersUseOGDFS(x, numbersUseOGDFS)        (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_numbersUseOGDFS_MASK)) | (((C(JSONTypeOptions))(numbersUseOGDFS)) << JSONTYPEOPTIONS_numbersUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_boolUseOGDFS_SHIFT               1
#define JSONTYPEOPTIONS_boolUseOGDFS_MASK                0x2
#define JSONTYPEOPTIONS_boolUseOGDFS(x)                  ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_boolUseOGDFS_MASK) >> JSONTYPEOPTIONS_boolUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_boolUseOGDFS(x, boolUseOGDFS)           (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_boolUseOGDFS_MASK)) | (((C(JSONTypeOptions))(boolUseOGDFS)) << JSONTYPEOPTIONS_boolUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_nullUseOGDFS_SHIFT               2
#define JSONTYPEOPTIONS_nullUseOGDFS_MASK                0x4
#define JSONTYPEOPTIONS_nullUseOGDFS(x)                  ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_nullUseOGDFS_MASK) >> JSONTYPEOPTIONS_nullUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_nullUseOGDFS(x, nullUseOGDFS)           (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_nullUseOGDFS_MASK)) | (((C(JSONTypeOptions))(nullUseOGDFS)) << JSONTYPEOPTIONS_nullUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_stringUseOGDFS_SHIFT             3
#define JSONTYPEOPTIONS_stringUseOGDFS_MASK              0x8
#define JSONTYPEOPTIONS_stringUseOGDFS(x)                ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_stringUseOGDFS_MASK) >> JSONTYPEOPTIONS_stringUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_stringUseOGDFS(x, stringUseOGDFS)         (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_stringUseOGDFS_MASK)) | (((C(JSONTypeOptions))(stringUseOGDFS)) << JSONTYPEOPTIONS_stringUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_arrayUseOGDFS_SHIFT              4
#define JSONTYPEOPTIONS_arrayUseOGDFS_MASK               0x10
#define JSONTYPEOPTIONS_arrayUseOGDFS(x)                 ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_arrayUseOGDFS_MASK) >> JSONTYPEOPTIONS_arrayUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_arrayUseOGDFS(x, arrayUseOGDFS)          (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_arrayUseOGDFS_MASK)) | (((C(JSONTypeOptions))(arrayUseOGDFS)) << JSONTYPEOPTIONS_arrayUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_objectUseOGDFS_SHIFT             5
#define JSONTYPEOPTIONS_objectUseOGDFS_MASK              0x20
#define JSONTYPEOPTIONS_objectUseOGDFS(x)                ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_objectUseOGDFS_MASK) >> JSONTYPEOPTIONS_objectUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_objectUseOGDFS(x, objectUseOGDFS)         (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_objectUseOGDFS_MASK)) | (((C(JSONTypeOptions))(objectUseOGDFS)) << JSONTYPEOPTIONS_objectUseOGDFS_SHIFT)
#define JSONTYPEOPTIONS_stripQuotesForOGDFS_SHIFT        6
#define JSONTYPEOPTIONS_stripQuotesForOGDFS_MASK         0x40
#define JSONTYPEOPTIONS_stripQuotesForOGDFS(x)           ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_stripQuotesForOGDFS_MASK) >> JSONTYPEOPTIONS_stripQuotesForOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_stripQuotesForOGDFS(x, stripQuotesForOGDFS)    (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_stripQuotesForOGDFS_MASK)) | (((C(JSONTypeOptions))(stripQuotesForOGDFS)) << JSONTYPEOPTIONS_stripQuotesForOGDFS_SHIFT)
#define JSONTYPEOPTIONS_strictOGDFS_SHIFT                7
#define JSONTYPEOPTIONS_strictOGDFS_MASK                 0x80
#define JSONTYPEOPTIONS_strictOGDFS(x)                   ((((C(JSONTypeOptions))(x)) & JSONTYPEOPTIONS_strictOGDFS_MASK) >> JSONTYPEOPTIONS_strictOGDFS_SHIFT)
#define JSONTYPEOPTIONS_SET_strictOGDFS(x, strictOGDFS)            (x) = ((C(JSONTypeOptions))(x) & ~((C(JSONTypeOptions))JSONTYPEOPTIONS_strictOGDFS_MASK)) | (((C(JSONTypeOptions))(strictOGDFS)) << JSONTYPEOPTIONS_strictOGDFS_SHIFT)


#define Meters(x) METERS(x)
#define METERS(x)  ((C(Distance))(x))
#define Distance_in_Meters(x)  ((double)(x))

extern THIS_LIB_IMPORT int (* Month_getNumDays)(C(Month) __this, int year);

#define MOVEFILEOPTIONS_overwrite_SHIFT                  0
#define MOVEFILEOPTIONS_overwrite_MASK                   0x1
#define MOVEFILEOPTIONS_overwrite(x)                     ((((C(MoveFileOptions))(x)) & MOVEFILEOPTIONS_overwrite_MASK) >> MOVEFILEOPTIONS_overwrite_SHIFT)
#define MOVEFILEOPTIONS_SET_overwrite(x, overwrite)              (x) = ((C(MoveFileOptions))(x) & ~((C(MoveFileOptions))MOVEFILEOPTIONS_overwrite_MASK)) | (((C(MoveFileOptions))(overwrite)) << MOVEFILEOPTIONS_overwrite_SHIFT)
#define MOVEFILEOPTIONS_sync_SHIFT                       1
#define MOVEFILEOPTIONS_sync_MASK                        0x2
#define MOVEFILEOPTIONS_sync(x)                          ((((C(MoveFileOptions))(x)) & MOVEFILEOPTIONS_sync_MASK) >> MOVEFILEOPTIONS_sync_SHIFT)
#define MOVEFILEOPTIONS_SET_sync(x, sync)                   (x) = ((C(MoveFileOptions))(x) & ~((C(MoveFileOptions))MOVEFILEOPTIONS_sync_MASK)) | (((C(MoveFileOptions))(sync)) << MOVEFILEOPTIONS_sync_SHIFT)
#define MOVEFILEOPTIONS(overwrite, sync)                           ((((C(MoveFileOptions))(overwrite)) << MOVEFILEOPTIONS_overwrite_SHIFT) | ((C(MoveFileOptions))(sync)) << MOVEFILEOPTIONS_sync_SHIFT)


#define PIPEOPENMODE_output_SHIFT                        0
#define PIPEOPENMODE_output_MASK                         0x1
#define PIPEOPENMODE_output(x)                           ((((C(PipeOpenMode))(x)) & PIPEOPENMODE_output_MASK) >> PIPEOPENMODE_output_SHIFT)
#define PIPEOPENMODE_SET_output(x, output)                    (x) = ((C(PipeOpenMode))(x) & ~((C(PipeOpenMode))PIPEOPENMODE_output_MASK)) | (((C(PipeOpenMode))(output)) << PIPEOPENMODE_output_SHIFT)
#define PIPEOPENMODE_error_SHIFT                         1
#define PIPEOPENMODE_error_MASK                          0x2
#define PIPEOPENMODE_error(x)                            ((((C(PipeOpenMode))(x)) & PIPEOPENMODE_error_MASK) >> PIPEOPENMODE_error_SHIFT)
#define PIPEOPENMODE_SET_error(x, error)                     (x) = ((C(PipeOpenMode))(x) & ~((C(PipeOpenMode))PIPEOPENMODE_error_MASK)) | (((C(PipeOpenMode))(error)) << PIPEOPENMODE_error_SHIFT)
#define PIPEOPENMODE_input_SHIFT                         2
#define PIPEOPENMODE_input_MASK                          0x4
#define PIPEOPENMODE_input(x)                            ((((C(PipeOpenMode))(x)) & PIPEOPENMODE_input_MASK) >> PIPEOPENMODE_input_SHIFT)
#define PIPEOPENMODE_SET_input(x, input)                     (x) = ((C(PipeOpenMode))(x) & ~((C(PipeOpenMode))PIPEOPENMODE_input_MASK)) | (((C(PipeOpenMode))(input)) << PIPEOPENMODE_input_SHIFT)
#define PIPEOPENMODE_showWindow_SHIFT                    3
#define PIPEOPENMODE_showWindow_MASK                     0x8
#define PIPEOPENMODE_showWindow(x)                       ((((C(PipeOpenMode))(x)) & PIPEOPENMODE_showWindow_MASK) >> PIPEOPENMODE_showWindow_SHIFT)
#define PIPEOPENMODE_SET_showWindow(x, showWindow)                (x) = ((C(PipeOpenMode))(x) & ~((C(PipeOpenMode))PIPEOPENMODE_showWindow_MASK)) | (((C(PipeOpenMode))(showWindow)) << PIPEOPENMODE_showWindow_SHIFT)
#define PIPEOPENMODE(output, error, input, showWindow)                          ((((((C(PipeOpenMode))(output)) << PIPEOPENMODE_output_SHIFT) | ((C(PipeOpenMode))(error)) << PIPEOPENMODE_error_SHIFT) | ((C(PipeOpenMode))(input)) << PIPEOPENMODE_input_SHIFT) | ((C(PipeOpenMode))(showWindow)) << PIPEOPENMODE_showWindow_SHIFT)


struct C(Point)
{
   int x;
   int y;
};
struct C(Pointd)
{
   double x;
   double y;
};
struct C(Pointf)
{
   float x;
   float y;
};
#define Radians(x) RADIANS(x)
#define RADIANS(x)  ((C(Angle))(x))
#define Angle_in_Radians(x)  ((double)(x))

struct CM(RepButton)
{
   C(bool) pressing;
   C(Timer) timer;
   C(Timer) timer2;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(RepButton, delay);
extern THIS_LIB_IMPORT void (* RepButton_set_delay)(const C(RepButton) r, C(Time) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(RepButton, delay0);
extern THIS_LIB_IMPORT void (* RepButton_set_delay0)(const C(RepButton) r, C(Time) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SecSince1970, global);
extern THIS_LIB_IMPORT C(SecSince1970) (* SecSince1970_get_global)(const int64 s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SecSince1970, local);
extern THIS_LIB_IMPORT C(SecSince1970) (* SecSince1970_get_local)(const int64 s);

#define Seconds(x) SECONDS(x)
#define SECONDS(x)  ((C(Time))(x))
#define Time_in_Seconds(x)  ((double)(x))

struct C(Semaphore)
{
   byte __ecere_padding[40];
};
extern THIS_LIB_IMPORT void (* Semaphore_release)(C(Semaphore) * __this);

extern THIS_LIB_IMPORT C(bool) (* Semaphore_tryWait)(C(Semaphore) * __this);

extern THIS_LIB_IMPORT void (* Semaphore_wait)(C(Semaphore) * __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Semaphore, initCount);
extern THIS_LIB_IMPORT void (* Semaphore_set_initCount)(const C(Semaphore) * s, int value);
extern THIS_LIB_IMPORT int (* Semaphore_get_initCount)(const C(Semaphore) * s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Semaphore, maxCount);
extern THIS_LIB_IMPORT void (* Semaphore_set_maxCount)(const C(Semaphore) * s, int value);
extern THIS_LIB_IMPORT int (* Semaphore_get_maxCount)(const C(Semaphore) * s);

extern THIS_LIB_IMPORT byte * (* TempFile_stealBuffer)(C(TempFile) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TempFile, openMode);
extern THIS_LIB_IMPORT void (* TempFile_set_openMode)(const C(TempFile) t, C(FileOpenMode) value);
extern THIS_LIB_IMPORT C(FileOpenMode) (* TempFile_get_openMode)(const C(TempFile) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TempFile, buffer);
extern THIS_LIB_IMPORT void (* TempFile_set_buffer)(const C(TempFile) t, byte * value);
extern THIS_LIB_IMPORT byte * (* TempFile_get_buffer)(const C(TempFile) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TempFile, size);
extern THIS_LIB_IMPORT void (* TempFile_set_size)(const C(TempFile) t, uintsize value);
extern THIS_LIB_IMPORT uintsize (* TempFile_get_size)(const C(TempFile) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TempFile, allocated);
extern THIS_LIB_IMPORT void (* TempFile_set_allocated)(const C(TempFile) t, uintsize value);
extern THIS_LIB_IMPORT uintsize (* TempFile_get_allocated)(const C(TempFile) t);

extern THIS_LIB_IMPORT void (* Thread_create)(C(Thread) __this);

extern THIS_LIB_IMPORT void (* Thread_kill)(C(Thread) __this);

extern THIS_LIB_IMPORT int M_VTBLID(Thread, main);
// uint Thread_main(C(Thread) __i);
#define Thread_main(__i) \
   VMETHOD(CO(Thread), Thread, main, __i, uint, \
      C(Thread), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Thread, main);

extern THIS_LIB_IMPORT void (* Thread_setPriority)(C(Thread) __this, C(ThreadPriority) priority);

extern THIS_LIB_IMPORT void (* Thread_wait)(C(Thread) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Thread, created);
extern THIS_LIB_IMPORT C(bool) (* Thread_get_created)(const C(Thread) t);

#define TimeStamp(x) TIMESTAMP(x)
#define TIMESTAMP(x)  ((C(SecSince1970))(x))
#define SecSince1970_in_TimeStamp(x)  ((int64)(x))

#define UNICODEDECOMPOSITION_canonical_SHIFT             0
#define UNICODEDECOMPOSITION_canonical_MASK              0x1
#define UNICODEDECOMPOSITION_canonical(x)                ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_canonical_MASK) >> UNICODEDECOMPOSITION_canonical_SHIFT)
#define UNICODEDECOMPOSITION_SET_canonical(x, canonical)         (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_canonical_MASK)) | (((C(UnicodeDecomposition))(canonical)) << UNICODEDECOMPOSITION_canonical_SHIFT)
#define UNICODEDECOMPOSITION_compat_SHIFT                1
#define UNICODEDECOMPOSITION_compat_MASK                 0x2
#define UNICODEDECOMPOSITION_compat(x)                   ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_compat_MASK) >> UNICODEDECOMPOSITION_compat_SHIFT)
#define UNICODEDECOMPOSITION_SET_compat(x, compat)            (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_compat_MASK)) | (((C(UnicodeDecomposition))(compat)) << UNICODEDECOMPOSITION_compat_SHIFT)
#define UNICODEDECOMPOSITION_fraction_SHIFT              2
#define UNICODEDECOMPOSITION_fraction_MASK               0x4
#define UNICODEDECOMPOSITION_fraction(x)                 ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_fraction_MASK) >> UNICODEDECOMPOSITION_fraction_SHIFT)
#define UNICODEDECOMPOSITION_SET_fraction(x, fraction)          (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_fraction_MASK)) | (((C(UnicodeDecomposition))(fraction)) << UNICODEDECOMPOSITION_fraction_SHIFT)
#define UNICODEDECOMPOSITION_font_SHIFT                  3
#define UNICODEDECOMPOSITION_font_MASK                   0x8
#define UNICODEDECOMPOSITION_font(x)                     ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_font_MASK) >> UNICODEDECOMPOSITION_font_SHIFT)
#define UNICODEDECOMPOSITION_SET_font(x, font)              (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_font_MASK)) | (((C(UnicodeDecomposition))(font)) << UNICODEDECOMPOSITION_font_SHIFT)
#define UNICODEDECOMPOSITION_noBreak_SHIFT               4
#define UNICODEDECOMPOSITION_noBreak_MASK                0x10
#define UNICODEDECOMPOSITION_noBreak(x)                  ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_noBreak_MASK) >> UNICODEDECOMPOSITION_noBreak_SHIFT)
#define UNICODEDECOMPOSITION_SET_noBreak(x, noBreak)           (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_noBreak_MASK)) | (((C(UnicodeDecomposition))(noBreak)) << UNICODEDECOMPOSITION_noBreak_SHIFT)
#define UNICODEDECOMPOSITION_initial_SHIFT               5
#define UNICODEDECOMPOSITION_initial_MASK                0x20
#define UNICODEDECOMPOSITION_initial(x)                  ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_initial_MASK) >> UNICODEDECOMPOSITION_initial_SHIFT)
#define UNICODEDECOMPOSITION_SET_initial(x, initial)           (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_initial_MASK)) | (((C(UnicodeDecomposition))(initial)) << UNICODEDECOMPOSITION_initial_SHIFT)
#define UNICODEDECOMPOSITION_final_SHIFT                 6
#define UNICODEDECOMPOSITION_final_MASK                  0x40
#define UNICODEDECOMPOSITION_final(x)                    ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_final_MASK) >> UNICODEDECOMPOSITION_final_SHIFT)
#define UNICODEDECOMPOSITION_SET_final(x, final)             (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_final_MASK)) | (((C(UnicodeDecomposition))(final)) << UNICODEDECOMPOSITION_final_SHIFT)
#define UNICODEDECOMPOSITION_medial_SHIFT                7
#define UNICODEDECOMPOSITION_medial_MASK                 0x80
#define UNICODEDECOMPOSITION_medial(x)                   ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_medial_MASK) >> UNICODEDECOMPOSITION_medial_SHIFT)
#define UNICODEDECOMPOSITION_SET_medial(x, medial)            (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_medial_MASK)) | (((C(UnicodeDecomposition))(medial)) << UNICODEDECOMPOSITION_medial_SHIFT)
#define UNICODEDECOMPOSITION_isolated_SHIFT              8
#define UNICODEDECOMPOSITION_isolated_MASK               0x100
#define UNICODEDECOMPOSITION_isolated(x)                 ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_isolated_MASK) >> UNICODEDECOMPOSITION_isolated_SHIFT)
#define UNICODEDECOMPOSITION_SET_isolated(x, isolated)          (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_isolated_MASK)) | (((C(UnicodeDecomposition))(isolated)) << UNICODEDECOMPOSITION_isolated_SHIFT)
#define UNICODEDECOMPOSITION_circle_SHIFT                9
#define UNICODEDECOMPOSITION_circle_MASK                 0x200
#define UNICODEDECOMPOSITION_circle(x)                   ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_circle_MASK) >> UNICODEDECOMPOSITION_circle_SHIFT)
#define UNICODEDECOMPOSITION_SET_circle(x, circle)            (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_circle_MASK)) | (((C(UnicodeDecomposition))(circle)) << UNICODEDECOMPOSITION_circle_SHIFT)
#define UNICODEDECOMPOSITION_square_SHIFT                10
#define UNICODEDECOMPOSITION_square_MASK                 0x400
#define UNICODEDECOMPOSITION_square(x)                   ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_square_MASK) >> UNICODEDECOMPOSITION_square_SHIFT)
#define UNICODEDECOMPOSITION_SET_square(x, square)            (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_square_MASK)) | (((C(UnicodeDecomposition))(square)) << UNICODEDECOMPOSITION_square_SHIFT)
#define UNICODEDECOMPOSITION_sub_SHIFT                   11
#define UNICODEDECOMPOSITION_sub_MASK                    0x800
#define UNICODEDECOMPOSITION_sub(x)                      ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_sub_MASK) >> UNICODEDECOMPOSITION_sub_SHIFT)
#define UNICODEDECOMPOSITION_SET_sub(x, sub)               (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_sub_MASK)) | (((C(UnicodeDecomposition))(sub)) << UNICODEDECOMPOSITION_sub_SHIFT)
#define UNICODEDECOMPOSITION_super_SHIFT                 12
#define UNICODEDECOMPOSITION_super_MASK                  0x1000
#define UNICODEDECOMPOSITION_super(x)                    ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_super_MASK) >> UNICODEDECOMPOSITION_super_SHIFT)
#define UNICODEDECOMPOSITION_SET_super(x, super)             (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_super_MASK)) | (((C(UnicodeDecomposition))(super)) << UNICODEDECOMPOSITION_super_SHIFT)
#define UNICODEDECOMPOSITION_small_SHIFT                 13
#define UNICODEDECOMPOSITION_small_MASK                  0x2000
#define UNICODEDECOMPOSITION_small(x)                    ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_small_MASK) >> UNICODEDECOMPOSITION_small_SHIFT)
#define UNICODEDECOMPOSITION_SET_small(x, small)             (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_small_MASK)) | (((C(UnicodeDecomposition))(small)) << UNICODEDECOMPOSITION_small_SHIFT)
#define UNICODEDECOMPOSITION_vertical_SHIFT              14
#define UNICODEDECOMPOSITION_vertical_MASK               0x4000
#define UNICODEDECOMPOSITION_vertical(x)                 ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_vertical_MASK) >> UNICODEDECOMPOSITION_vertical_SHIFT)
#define UNICODEDECOMPOSITION_SET_vertical(x, vertical)          (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_vertical_MASK)) | (((C(UnicodeDecomposition))(vertical)) << UNICODEDECOMPOSITION_vertical_SHIFT)
#define UNICODEDECOMPOSITION_wide_SHIFT                  15
#define UNICODEDECOMPOSITION_wide_MASK                   0x8000
#define UNICODEDECOMPOSITION_wide(x)                     ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_wide_MASK) >> UNICODEDECOMPOSITION_wide_SHIFT)
#define UNICODEDECOMPOSITION_SET_wide(x, wide)              (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_wide_MASK)) | (((C(UnicodeDecomposition))(wide)) << UNICODEDECOMPOSITION_wide_SHIFT)
#define UNICODEDECOMPOSITION_narrow_SHIFT                16
#define UNICODEDECOMPOSITION_narrow_MASK                 0x10000
#define UNICODEDECOMPOSITION_narrow(x)                   ((((C(UnicodeDecomposition))(x)) & UNICODEDECOMPOSITION_narrow_MASK) >> UNICODEDECOMPOSITION_narrow_SHIFT)
#define UNICODEDECOMPOSITION_SET_narrow(x, narrow)            (x) = ((C(UnicodeDecomposition))(x) & ~((C(UnicodeDecomposition))UNICODEDECOMPOSITION_narrow_MASK)) | (((C(UnicodeDecomposition))(narrow)) << UNICODEDECOMPOSITION_narrow_SHIFT)


extern THIS_LIB_IMPORT C(Archive) (* F(archiveOpen))(const char * fileName, C(ArchiveOpenFlags) flags);
extern THIS_LIB_IMPORT C(bool) (* F(archiveQuerySize))(const char * fileName, C(FileSize) * size);
extern THIS_LIB_IMPORT C(bool) (* F(changeWorkingDir))(const char * buf);
extern THIS_LIB_IMPORT C(bool) (* F(charMatchCategories))(unichar ch, C(CharCategories) categories);
extern THIS_LIB_IMPORT void (* F(copyBytes))(void * dest, const void * source, uint64 count);
extern THIS_LIB_IMPORT void (* F(copyBytesBy2))(void * dest, const void * source, uint count);
extern THIS_LIB_IMPORT void (* F(copyBytesBy4))(void * dest, const void * source, uint count);
extern THIS_LIB_IMPORT char * (* F(copySystemPath))(const char * p);
extern THIS_LIB_IMPORT char * (* F(copyUnixPath))(const char * p);
extern THIS_LIB_IMPORT void (* F(createTemporaryDir))(char * tempFileName, const char * _template);
extern THIS_LIB_IMPORT C(File) (* F(createTemporaryFile))(char * tempFileName, const char * _template);
extern THIS_LIB_IMPORT C(bool) (* F(deleteFile))(const char * fileName);
extern THIS_LIB_IMPORT C(DualPipe) (* F(dualPipeOpen))(C(PipeOpenMode) mode, const char * commandLine);
extern THIS_LIB_IMPORT C(DualPipe) (* F(dualPipeOpenEnv))(C(PipeOpenMode) mode, const char * env, const char * commandLine);
extern THIS_LIB_IMPORT C(DualPipe) (* F(dualPipeOpenEnvf))(C(PipeOpenMode) mode, const char * env, const char * command, ...);
extern THIS_LIB_IMPORT C(DualPipe) (* F(dualPipeOpenf))(C(PipeOpenMode) mode, const char * command, ...);
extern THIS_LIB_IMPORT void (* F(dumpErrors))(C(bool) display);
extern THIS_LIB_IMPORT C(bool) (* F(execute))(const char * command, ...);
extern THIS_LIB_IMPORT C(bool) (* F(executeEnv))(const char * env, const char * command, ...);
extern THIS_LIB_IMPORT C(bool) (* F(executeWait))(const char * command, ...);
extern THIS_LIB_IMPORT C(FileAttribs) (* F(fileExists))(const char * fileName);
extern THIS_LIB_IMPORT void (* F(fileFixCase))(char * file);
extern THIS_LIB_IMPORT C(bool) (* F(fileGetSize))(const char * fileName, C(FileSize) * size);
extern THIS_LIB_IMPORT C(bool) (* F(fileGetStats))(const char * fileName, C(FileStats) * stats);
extern THIS_LIB_IMPORT C(File) (* F(fileOpen))(const char * fileName, C(FileOpenMode) mode);
extern THIS_LIB_IMPORT C(BufferedFile) (* F(fileOpenBuffered))(const char * fileName, C(FileOpenMode) mode);
extern THIS_LIB_IMPORT C(bool) (* F(fileSetAttribs))(const char * fileName, C(FileAttribs) attribs);
extern THIS_LIB_IMPORT C(bool) (* F(fileSetTime))(const char * fileName, C(SecSince1970) created, C(SecSince1970) accessed, C(SecSince1970) modified);
extern THIS_LIB_IMPORT C(bool) (* F(fileTruncate))(const char * fileName, uint64 size);
extern THIS_LIB_IMPORT void (* F(fillBytes))(void * area, byte value, uint count);
extern THIS_LIB_IMPORT void (* F(fillBytesBy2))(void * area, uint16 value, uint count);
extern THIS_LIB_IMPORT void (* F(fillBytesBy4))(void * area, uint value, uint count);
extern THIS_LIB_IMPORT C(bool) (* F(getAlNum))(const char ** input, char * string, int max);
extern THIS_LIB_IMPORT C(CharCategory) (* F(getCharCategory))(unichar ch);
extern THIS_LIB_IMPORT uint (* F(getCombiningClass))(unichar ch);
extern THIS_LIB_IMPORT char * (* F(getEnvironment))(const char * envName, char * envValue, int max);
extern THIS_LIB_IMPORT void (* F(getFreeSpace))(const char * path, C(FileSize64) * size);
extern THIS_LIB_IMPORT uint (* F(getLastErrorCode))(void);
extern THIS_LIB_IMPORT int (* F(getRandom))(int lo, int hi);
extern THIS_LIB_IMPORT char * (* F(getSlashPathBuffer))(char * d, const char * p);
extern THIS_LIB_IMPORT char * (* F(getSystemPathBuffer))(char * d, const char * p);
extern THIS_LIB_IMPORT C(Time) (* F(getTime))(void);
extern THIS_LIB_IMPORT char * (* F(getWorkingDir))(char * buf, int size);
extern THIS_LIB_IMPORT void (* F(__e_log))(const char * text);
extern THIS_LIB_IMPORT void (* F(logErrorCode))(C(ErrorCode) errorCode, const char * details);
extern THIS_LIB_IMPORT void (* F(__e_logf))(const char * format, ...);
extern THIS_LIB_IMPORT C(bool) (* F(makeDir))(const char * path);
extern THIS_LIB_IMPORT void (* F(makeSlashPath))(char * p);
extern THIS_LIB_IMPORT void (* F(makeSystemPath))(char * p);
extern THIS_LIB_IMPORT void (* F(moveBytes))(void * dest, const void * source, uint count);
extern THIS_LIB_IMPORT C(bool) (* F(moveFile))(const char * source, const char * dest);
extern THIS_LIB_IMPORT C(bool) (* F(moveFileEx))(const char * source, const char * dest, C(MoveFileOptions) options);
extern THIS_LIB_IMPORT C(String) (* F(printECONObject))(C(Class) * objectType, void * object, int indent);
extern THIS_LIB_IMPORT C(String) (* F(printObjectNotationString))(C(Class) * objectType, void * object, C(ObjectNotationType) onType, int indent, C(bool) indentFirst, C(JSONFirstLetterCapitalization) capitalize);
extern THIS_LIB_IMPORT void (* F(randomSeed))(uint seed);
extern THIS_LIB_IMPORT C(bool) (* F(removeDir))(const char * path);
extern THIS_LIB_IMPORT C(bool) (* F(renameFile))(const char * oldName, const char * newName);
extern THIS_LIB_IMPORT void (* F(resetError))(void);
extern THIS_LIB_IMPORT void (* F(setEnvironment))(const char * envName, const char * envValue);
extern THIS_LIB_IMPORT void (* F(setErrorLevel))(C(ErrorLevel) level);
extern THIS_LIB_IMPORT void (* F(setLoggingMode))(C(LoggingMode) mode, void * where);
extern THIS_LIB_IMPORT C(bool) (* F(shellOpen))(const char * fileName, ...);
extern THIS_LIB_IMPORT void (* F(__sleep))(C(Time) seconds);
extern THIS_LIB_IMPORT C(String) (* F(stringIndent))(constString base, int nSpaces, C(bool) indentFirst);
extern THIS_LIB_IMPORT int (* F(uTF16BEtoUTF8Buffer))(const uint16 * source, byte * dest, int max);
extern THIS_LIB_IMPORT int (* F(uTF8toISO8859_1))(const char * source, char * dest, int max);
extern THIS_LIB_IMPORT int (* F(uTF8toUTF16BufferLen))(const char * source, uint16 * dest, int max, int len);
extern THIS_LIB_IMPORT uint16 * (* F(uTF8toUTF16Len))(const char * source, int byteCount, int * wordCount);
extern THIS_LIB_IMPORT void (* F(unsetEnvironment))(const char * envName);
extern THIS_LIB_IMPORT C(bool) (* F(writeECONObject))(C(File) f, C(Class) * objectType, void * object, int indent);
extern THIS_LIB_IMPORT C(bool) (* F(writeJSONObject))(C(File) f, C(Class) * objectType, void * object, int indent);
extern THIS_LIB_IMPORT C(bool) (* F(writeJSONObject2))(C(File) f, C(Class) * objectType, void * object, int indent, C(JSONFirstLetterCapitalization) capitalize);
extern THIS_LIB_IMPORT C(bool) (* F(writeJSONObjectMapped))(C(File) f, C(Class) * objectType, void * object, int indent, C(Map) stringMap);
extern THIS_LIB_IMPORT C(bool) (* F(writeONString))(C(File) f, constString s, C(bool) eCON, int indent);
extern THIS_LIB_IMPORT C(String) (* F(accenti))(constString string);
extern THIS_LIB_IMPORT C(String) (* F(casei))(constString string);
extern THIS_LIB_IMPORT void (* F(debugBreakpoint))(void);
extern THIS_LIB_IMPORT C(String) (* F(encodeArrayToString))(C(Array) array);
extern THIS_LIB_IMPORT C(String) (* F(normalizeNFC))(constString string);
extern THIS_LIB_IMPORT C(String) (* F(normalizeNFD))(constString string);
extern THIS_LIB_IMPORT C(String) (* F(normalizeNFKC))(constString string);
extern THIS_LIB_IMPORT C(String) (* F(normalizeNFKD))(constString string);
extern THIS_LIB_IMPORT C(Array) (* F(normalizeNFKDArray))(constString string);
extern THIS_LIB_IMPORT C(String) (* F(normalizeUnicode))(constString string, C(UnicodeDecomposition) type, C(bool) compose);
extern THIS_LIB_IMPORT C(Array) (* F(normalizeUnicodeArray))(constString string, C(UnicodeDecomposition) type, C(bool) compose);
extern THIS_LIB_IMPORT C(String) (* F(stripUnicodeCategory))(constString string, C(CharCategory) c);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gfx3D  //////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
struct C(Vector3D)
{
   double x;
   double y;
   double z;
};
typedef struct C(Vector3D) C(Vector3D);
struct CM(Camera)
{
   byte __ecerePrivateData0[24];
   C(Vector3D) position;
   byte __ecere_padding[1056];
};
struct C(ColorRGB)
{
   float r;
   float g;
   float b;
};
typedef uint32 C(DisplayFlags);
struct CM(DisplaySystem)
{
   byte __ecerePrivateData0[24];
   C(PixelFormat) pixelFormat;
   C(DisplayFlags) flags;
   byte __ecere_padding[160];
};
struct C(Euler)
{
   C(Angle) yaw;
   C(Angle) pitch;
   C(Angle) roll;
};
struct C(Quaternion)
{
   double w;
   double x;
   double y;
   double z;
};
struct C(Vector3Df)
{
   float x;
   float y;
   float z;
};
typedef struct C(Quaternion) C(Quaternion);
typedef struct C(Vector3Df) C(Vector3Df);
struct C(Transform)
{
   C(Vector3D) position;
   C(Quaternion) orientation;
   C(Vector3Df) scaling;
};
typedef struct C(Transform) C(Transform);
struct C(Object)
{
   byte __ecerePrivateData0[128];
   C(Transform) transform;
   byte __ecere_padding[680];
};
typedef struct C(ColorRGB) C(ColorRGB);
typedef uint32 C(LightFlags);
typedef struct C(Object) C(Object);
struct C(Light)
{
   C(LightFlags) flags;
   C(ColorRGB) ambient;
   C(ColorRGB) diffuse;
   C(ColorRGB) specular;
   C(Vector3D) direction;
   C(Quaternion) orientation;
   C(Object) * lightObject;
   C(Object) * target;
   C(Angle) fallOff;
   C(Angle) hotSpot;
   float Kc;
   float Kl;
   float Kq;
   C(Angle) start;
   C(Angle) end;
   float multiplier;
};
typedef C(Bitmap) C(CubeMap);
typedef uint32 C(MaterialFlags);
struct C(Material)
{
   C(Material) * prev;
   C(Material) * next;
   char * name;
   float opacity;
   C(ColorRGB) diffuse;
   C(ColorRGB) ambient;
   C(ColorRGB) specular;
   C(ColorRGB) emissive;
   float power;
   C(Bitmap) baseMap;
   C(Bitmap) bumpMap;
   C(Bitmap) specularMap;
   C(Bitmap) reflectMap;
   C(CubeMap) envMap;
   float reflectivity;
   float refractiveIndex;
   float refractiveIndexContainer;
   C(MaterialFlags) flags;
   float uScale;
   float vScale;
   byte __ecere_padding[8];
};
struct C(Matrix)
{
   union
   {
      double array[16];
      double m[4][4];
   };
};
struct C(Mesh)
{
   byte __ecerePrivateData0[56];
   C(OldList) groups;
   byte __ecere_padding[184];
};
struct CM(MeshSkin)
{
   C(Matrix) bindShapeMatrix;
   C(Array) bones;
   C(Array) skinVerts;
   C(Matrix) invShape;
   C(bool) bsIsIdentity;
   byte __ecere_padding[28];
};
struct C(Plane)
{
   union
   {
      struct
      {
         double a;
         double b;
         double c;
      };
      C(Vector3D) normal;
   };
   double d;
};
typedef struct C(PrimitiveGroup) C(PrimitiveGroup);
typedef uint32 C(PrimitiveGroupType);
struct C(PrimitiveGroup)
{
   C(PrimitiveGroup) * prev;
   C(PrimitiveGroup) * next;
   C(PrimitiveGroupType) type;
   int baseIndexMesh;
   int baseIndexBuffer;
   union
   {
      struct
      {
         union
         {
            uint16 * indices;
            uint * indices32;
         };
         int nIndices;
      };
      struct
      {
         int first;
         int nVertices;
      };
   };
   C(Material) * material;
};
#if CPP11
enum C(CameraType) : int
#else
typedef int C(CameraType);
enum C(CameraType)
#endif
{
   CameraType_fixed = 0x0,
   CameraType_fixedQuaternion = 0x1,
   CameraType_attached = 0x2,
   CameraType_attachedQuaternion = 0x3,
   CameraType_lookAt = 0x4,
   CameraType_lookAtObject = 0x5
};

typedef struct C(ColorRGBAf) C(ColorRGBAf);
typedef struct C(Euler) C(Euler);
#if CPP11
enum C(EulerRotationOrder) : int
#else
typedef int C(EulerRotationOrder);
enum C(EulerRotationOrder)
#endif
{
   EulerRotationOrder_xyz = 0x0,
   EulerRotationOrder_xzy = 0x1,
   EulerRotationOrder_yxz = 0x2,
   EulerRotationOrder_yzx = 0x3,
   EulerRotationOrder_zxy = 0x4,
   EulerRotationOrder_zyx = 0x5
};

#if CPP11
enum C(FovDirection) : int
#else
typedef int C(FovDirection);
enum C(FovDirection)
#endif
{
   FovDirection_widest = 0x0,
   FovDirection_horizontal = 0x1,
   FovDirection_vertical = 0x2
};

typedef struct C(FrameKey) C(FrameKey);
typedef struct C(FrameTrack) C(FrameTrack);
typedef uint32 C(FrameTrackBits);
#if CPP11
enum C(FrustumPlacement) : int
#else
typedef int C(FrustumPlacement);
enum C(FrustumPlacement)
#endif
{
   FrustumPlacement_outside = 0x0,
   FrustumPlacement_inside = 0x1,
   FrustumPlacement_intersecting = 0x2
};

typedef struct C(GLArrayTexture) C(GLArrayTexture);
typedef struct C(Line) C(Line);
typedef struct C(Mesh) C(Mesh);
typedef C(Instance) C(MeshSkin);
typedef uint32 C(ObjectFlags);
typedef C(Instance) C(ObjectFormat);
typedef struct C(Plane) C(Plane);
typedef struct C(PrimitiveSingle) C(PrimitiveSingle);
typedef struct C(SkinBone) C(SkinBone);
// end -- moved backwards outputs
#define MAX_BONES (10)

#define NO_BONE (255)

#if CPP11
enum C(ClippingPlane) : int
#else
typedef int C(ClippingPlane);
enum C(ClippingPlane)
#endif
{
   ClippingPlane_left = 0x0,
   ClippingPlane_right = 0x1,
   ClippingPlane_top = 0x2,
   ClippingPlane_bottom = 0x3,
   ClippingPlane_near = 0x4,
   ClippingPlane_far = 0x5
};

#if CPP11
enum C(FrameTrackType) : uint16
#else
typedef uint16 C(FrameTrackType);
enum C(FrameTrackType)
#endif
{
   FrameTrackType_position = 0x1,
   FrameTrackType_rotation = 0x2,
   FrameTrackType_scaling = 0x3,
   FrameTrackType_fov = 0x4,
   FrameTrackType_roll = 0x5,
   FrameTrackType_colorChange = 0x6,
   FrameTrackType_morph = 0x7,
   FrameTrackType_hotSpot = 0x8,
   FrameTrackType_fallOff = 0x9,
   FrameTrackType_hide = 0xA,
   FrameTrackType_rYaw = 0xB,
   FrameTrackType_rPitch = 0xC,
   FrameTrackType_rRoll = 0xD
};

typedef struct C(MeshMorph) C(MeshMorph);
typedef struct C(MeshPart) C(MeshPart);
#if CPP11
enum C(RenderPrimitiveType) : uint
#else
typedef C(PrimitiveGroupType) C(RenderPrimitiveType);
enum C(RenderPrimitiveType)
#endif
{
   RenderPrimitiveType_dot = 0x0,
   RenderPrimitiveType_lines = 0x1,
   RenderPrimitiveType_triangles = 0x2,
   RenderPrimitiveType_triStrip = 0x3,
   RenderPrimitiveType_triFan = 0x4,
   RenderPrimitiveType_quads = 0x5,
   RenderPrimitiveType_quadStrip = 0x6,
   RenderPrimitiveType_lineStrip = 0x7
};

typedef struct C(SkinVert) C(SkinVert);
extern THIS_LIB_IMPORT void (* Camera_adjustAngle)(C(Camera) __this, C(Quaternion) * angle);

extern THIS_LIB_IMPORT void (* Camera_adjustPosition)(C(Camera) __this, C(Vector3D) * position);

extern THIS_LIB_IMPORT void (* Camera_move)(C(Camera) __this, C(Vector3D) * direction);

extern THIS_LIB_IMPORT C(bool) (* Camera_pointsVisible)(C(Camera) __this, C(Vector3D) * points, int numPoints, double threshold);

extern THIS_LIB_IMPORT C(bool) (* Camera_project)(C(Camera) __this, C(Vector3D) * vector, C(Vector3D) * point);

extern THIS_LIB_IMPORT C(bool) (* Camera_projectSize)(C(Camera) __this, C(Vector3D) * vector, C(Point) * point);

extern THIS_LIB_IMPORT void (* Camera_rotatePitch)(C(Camera) __this, C(Angle) amount, C(Angle) min, C(Angle) max);

extern THIS_LIB_IMPORT void (* Camera_rotateRoll)(C(Camera) __this, C(Angle) amount, C(Angle) min, C(Angle) max);

extern THIS_LIB_IMPORT void (* Camera_rotateYaw)(C(Camera) __this, C(Angle) amount, C(Angle) min, C(Angle) max);

extern THIS_LIB_IMPORT void (* Camera_setup)(C(Camera) __this, int width, int height, const C(Point) * origin);

extern THIS_LIB_IMPORT void (* Camera_setupVR)(C(Camera) __this, int width, int height, const C(Matrix) * prjMatrix);

extern THIS_LIB_IMPORT void (* Camera_slerp)(C(Camera) __this, float amount);

extern THIS_LIB_IMPORT C(bool) (* Camera_sphereVisible)(C(Camera) __this, C(Vector3D) * center, float radius);

extern THIS_LIB_IMPORT void (* Camera_transformMatrix)(C(Camera) __this, C(Matrix) * dest, C(Matrix) * src);

extern THIS_LIB_IMPORT void (* Camera_transformNormal)(C(Camera) __this, C(Vector3D) * dest, C(Vector3D) * src);

extern THIS_LIB_IMPORT void (* Camera_transformPoint)(C(Camera) __this, C(Vector3D) * dest, C(Vector3D) * src);

extern THIS_LIB_IMPORT void (* Camera_unproject)(C(Camera) __this, C(Vector3D) * point, C(Vector3D) * vector);

extern THIS_LIB_IMPORT void (* Camera_untransform)(C(Camera) __this, C(Vector3D) * src, C(Vector3D) * result);

extern THIS_LIB_IMPORT C(bool) (* Camera_update)(C(Camera) __this);

extern THIS_LIB_IMPORT void (* Camera_setCPosition)(C(Camera) __this, C(Vector3D) * value);

extern THIS_LIB_IMPORT void (* Camera_setViewMatrix)(C(Camera) __this, C(Matrix) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, type);
extern THIS_LIB_IMPORT void (* Camera_set_type)(const C(Camera) c, C(CameraType) value);
extern THIS_LIB_IMPORT C(CameraType) (* Camera_get_type)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, position);
extern THIS_LIB_IMPORT void (* Camera_set_position)(const C(Camera) c, const C(Vector3D) * value);
extern THIS_LIB_IMPORT void (* Camera_get_position)(const C(Camera) c, C(Vector3D) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, orientation);
extern THIS_LIB_IMPORT void (* Camera_set_orientation)(const C(Camera) c, const C(Quaternion) * value);
extern THIS_LIB_IMPORT void (* Camera_get_orientation)(const C(Camera) c, C(Quaternion) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, eulerOrientation);
extern THIS_LIB_IMPORT void (* Camera_set_eulerOrientation)(const C(Camera) c, const C(Euler) * value);
extern THIS_LIB_IMPORT void (* Camera_get_eulerOrientation)(const C(Camera) c, C(Euler) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, cPosition);
extern THIS_LIB_IMPORT void (* Camera_get_cPosition)(const C(Camera) c, C(Vector3D) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, cOrientation);
extern THIS_LIB_IMPORT void (* Camera_get_cOrientation)(const C(Camera) c, C(Quaternion) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, fov);
extern THIS_LIB_IMPORT void (* Camera_set_fov)(const C(Camera) c, C(Angle) value);
extern THIS_LIB_IMPORT C(Angle) (* Camera_get_fov)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, zMin);
extern THIS_LIB_IMPORT void (* Camera_set_zMin)(const C(Camera) c, float value);
extern THIS_LIB_IMPORT float (* Camera_get_zMin)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, zMax);
extern THIS_LIB_IMPORT void (* Camera_set_zMax)(const C(Camera) c, float value);
extern THIS_LIB_IMPORT float (* Camera_get_zMax)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, target);
extern THIS_LIB_IMPORT void (* Camera_set_target)(const C(Camera) c, C(Object) * value);
extern THIS_LIB_IMPORT C(Object) * (* Camera_get_target)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, fovDirection);
extern THIS_LIB_IMPORT void (* Camera_set_fovDirection)(const C(Camera) c, C(FovDirection) value);
extern THIS_LIB_IMPORT C(FovDirection) (* Camera_get_fovDirection)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, aspectRatio);
extern THIS_LIB_IMPORT void (* Camera_set_aspectRatio)(const C(Camera) c, float value);
extern THIS_LIB_IMPORT float (* Camera_get_aspectRatio)(const C(Camera) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Camera, focal);
extern THIS_LIB_IMPORT void (* Camera_set_focal)(const C(Camera) c, const C(Size) * value);
extern THIS_LIB_IMPORT void (* Camera_get_focal)(const C(Camera) c, C(Size) * value);

extern THIS_LIB_IMPORT void (* Euler_add)(C(Euler) * __this, const C(Euler) * e1, const C(Euler) * e2);

extern THIS_LIB_IMPORT void (* Euler_fromMatrix)(C(Euler) * __this, const C(Matrix) * m, C(EulerRotationOrder) order);

extern THIS_LIB_IMPORT void (* Euler_fromQuaternion)(C(Euler) * __this, const C(Quaternion) * q, C(EulerRotationOrder) order);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Euler, Quaternion);
extern THIS_LIB_IMPORT void (* Euler_from_Quaternion)(const C(Euler) * e, const C(Quaternion) * value);
extern THIS_LIB_IMPORT void (* Euler_to_Quaternion)(const C(Euler) * e, C(Quaternion) * value);

struct C(FrameKey)
{
   uint frame;
   float tension;
   float continuity;
   float bias;
   float easeFrom;
   float easeTo;
   union
   {
      C(Vector3Df) position;
      C(Quaternion) orientation;
      C(Vector3Df) scaling;
      float roll;
      float fov;
      C(ColorRGB) color;
      float hotSpot;
      float fallOff;
      float weight;
      C(bool) hide;
   };
};
struct C(FrameTrack)
{
   byte __ecerePrivateData0[16];
   C(FrameTrackBits) type;
   uint numKeys;
   C(FrameKey) * keys;
   int morphIndex;
};
#define FRAMETRACKBITS_type_SHIFT                        0
#define FRAMETRACKBITS_type_MASK                         0xFFFF
#define FRAMETRACKBITS_type(x)                           ((((C(FrameTrackBits))(x)) & FRAMETRACKBITS_type_MASK) >> FRAMETRACKBITS_type_SHIFT)
#define FRAMETRACKBITS_SET_type(x, type)                    (x) = ((C(FrameTrackBits))(x) & ~((C(FrameTrackBits))FRAMETRACKBITS_type_MASK)) | (((C(FrameTrackBits))(type)) << FRAMETRACKBITS_type_SHIFT)
#define FRAMETRACKBITS_loop_SHIFT                        16
#define FRAMETRACKBITS_loop_MASK                         0x10000
#define FRAMETRACKBITS_loop(x)                           ((((C(FrameTrackBits))(x)) & FRAMETRACKBITS_loop_MASK) >> FRAMETRACKBITS_loop_SHIFT)
#define FRAMETRACKBITS_SET_loop(x, loop)                    (x) = ((C(FrameTrackBits))(x) & ~((C(FrameTrackBits))FRAMETRACKBITS_loop_MASK)) | (((C(FrameTrackBits))(loop)) << FRAMETRACKBITS_loop_SHIFT)
#define FRAMETRACKBITS_rotationOrder_SHIFT               17
#define FRAMETRACKBITS_rotationOrder_MASK                0x1FE0000
#define FRAMETRACKBITS_rotationOrder(x)                  ((((C(FrameTrackBits))(x)) & FRAMETRACKBITS_rotationOrder_MASK) >> FRAMETRACKBITS_rotationOrder_SHIFT)
#define FRAMETRACKBITS_SET_rotationOrder(x, rotationOrder)           (x) = ((C(FrameTrackBits))(x) & ~((C(FrameTrackBits))FRAMETRACKBITS_rotationOrder_MASK)) | (((C(FrameTrackBits))(rotationOrder)) << FRAMETRACKBITS_rotationOrder_SHIFT)
#define FRAMETRACKBITS(type, loop, rotationOrder)                          (((((C(FrameTrackBits))(type)) << FRAMETRACKBITS_type_SHIFT) | ((C(FrameTrackBits))(loop)) << FRAMETRACKBITS_loop_SHIFT) | ((C(FrameTrackBits))(rotationOrder)) << FRAMETRACKBITS_rotationOrder_SHIFT)


struct C(Line)
{
   C(Vector3D) p0;
   C(Vector3D) delta;
};
extern THIS_LIB_IMPORT C(bool) (* Line_intersectSphere)(C(Line) * __this, double radius, double * t);

extern THIS_LIB_IMPORT void (* Material_free)(C(Material) * __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Material, shader);
extern THIS_LIB_IMPORT void (* Material_set_shader)(const C(Material) * m, C(Shader) value);
extern THIS_LIB_IMPORT C(Shader) (* Material_get_shader)(const C(Material) * m);

#define MATERIALFLAGS_doubleSided_SHIFT                  0
#define MATERIALFLAGS_doubleSided_MASK                   0x1
#define MATERIALFLAGS_doubleSided(x)                     ((((C(MaterialFlags))(x)) & MATERIALFLAGS_doubleSided_MASK) >> MATERIALFLAGS_doubleSided_SHIFT)
#define MATERIALFLAGS_SET_doubleSided(x, doubleSided)              (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_doubleSided_MASK)) | (((C(MaterialFlags))(doubleSided)) << MATERIALFLAGS_doubleSided_SHIFT)
#define MATERIALFLAGS_translucent_SHIFT                  1
#define MATERIALFLAGS_translucent_MASK                   0x2
#define MATERIALFLAGS_translucent(x)                     ((((C(MaterialFlags))(x)) & MATERIALFLAGS_translucent_MASK) >> MATERIALFLAGS_translucent_SHIFT)
#define MATERIALFLAGS_SET_translucent(x, translucent)              (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_translucent_MASK)) | (((C(MaterialFlags))(translucent)) << MATERIALFLAGS_translucent_SHIFT)
#define MATERIALFLAGS_tile_SHIFT                         2
#define MATERIALFLAGS_tile_MASK                          0x4
#define MATERIALFLAGS_tile(x)                            ((((C(MaterialFlags))(x)) & MATERIALFLAGS_tile_MASK) >> MATERIALFLAGS_tile_SHIFT)
#define MATERIALFLAGS_SET_tile(x, tile)                     (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_tile_MASK)) | (((C(MaterialFlags))(tile)) << MATERIALFLAGS_tile_SHIFT)
#define MATERIALFLAGS_noFog_SHIFT                        3
#define MATERIALFLAGS_noFog_MASK                         0x8
#define MATERIALFLAGS_noFog(x)                           ((((C(MaterialFlags))(x)) & MATERIALFLAGS_noFog_MASK) >> MATERIALFLAGS_noFog_SHIFT)
#define MATERIALFLAGS_SET_noFog(x, noFog)                    (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_noFog_MASK)) | (((C(MaterialFlags))(noFog)) << MATERIALFLAGS_noFog_SHIFT)
#define MATERIALFLAGS_singleSideLight_SHIFT              4
#define MATERIALFLAGS_singleSideLight_MASK               0x10
#define MATERIALFLAGS_singleSideLight(x)                 ((((C(MaterialFlags))(x)) & MATERIALFLAGS_singleSideLight_MASK) >> MATERIALFLAGS_singleSideLight_SHIFT)
#define MATERIALFLAGS_SET_singleSideLight(x, singleSideLight)          (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_singleSideLight_MASK)) | (((C(MaterialFlags))(singleSideLight)) << MATERIALFLAGS_singleSideLight_SHIFT)
#define MATERIALFLAGS_separateSpecular_SHIFT             5
#define MATERIALFLAGS_separateSpecular_MASK              0x20
#define MATERIALFLAGS_separateSpecular(x)                ((((C(MaterialFlags))(x)) & MATERIALFLAGS_separateSpecular_MASK) >> MATERIALFLAGS_separateSpecular_SHIFT)
#define MATERIALFLAGS_SET_separateSpecular(x, separateSpecular)         (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_separateSpecular_MASK)) | (((C(MaterialFlags))(separateSpecular)) << MATERIALFLAGS_separateSpecular_SHIFT)
#define MATERIALFLAGS_cubeMap_SHIFT                      6
#define MATERIALFLAGS_cubeMap_MASK                       0x40
#define MATERIALFLAGS_cubeMap(x)                         ((((C(MaterialFlags))(x)) & MATERIALFLAGS_cubeMap_MASK) >> MATERIALFLAGS_cubeMap_SHIFT)
#define MATERIALFLAGS_SET_cubeMap(x, cubeMap)                  (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_cubeMap_MASK)) | (((C(MaterialFlags))(cubeMap)) << MATERIALFLAGS_cubeMap_SHIFT)
#define MATERIALFLAGS_noLighting_SHIFT                   7
#define MATERIALFLAGS_noLighting_MASK                    0x80
#define MATERIALFLAGS_noLighting(x)                      ((((C(MaterialFlags))(x)) & MATERIALFLAGS_noLighting_MASK) >> MATERIALFLAGS_noLighting_SHIFT)
#define MATERIALFLAGS_SET_noLighting(x, noLighting)               (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_noLighting_MASK)) | (((C(MaterialFlags))(noLighting)) << MATERIALFLAGS_noLighting_SHIFT)
#define MATERIALFLAGS_partlyTransparent_SHIFT            8
#define MATERIALFLAGS_partlyTransparent_MASK             0x100
#define MATERIALFLAGS_partlyTransparent(x)               ((((C(MaterialFlags))(x)) & MATERIALFLAGS_partlyTransparent_MASK) >> MATERIALFLAGS_partlyTransparent_SHIFT)
#define MATERIALFLAGS_SET_partlyTransparent(x, partlyTransparent)        (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_partlyTransparent_MASK)) | (((C(MaterialFlags))(partlyTransparent)) << MATERIALFLAGS_partlyTransparent_SHIFT)
#define MATERIALFLAGS_setupTextures_SHIFT                9
#define MATERIALFLAGS_setupTextures_MASK                 0x200
#define MATERIALFLAGS_setupTextures(x)                   ((((C(MaterialFlags))(x)) & MATERIALFLAGS_setupTextures_MASK) >> MATERIALFLAGS_setupTextures_SHIFT)
#define MATERIALFLAGS_SET_setupTextures(x, setupTextures)            (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_setupTextures_MASK)) | (((C(MaterialFlags))(setupTextures)) << MATERIALFLAGS_setupTextures_SHIFT)
#define MATERIALFLAGS_update_SHIFT                       10
#define MATERIALFLAGS_update_MASK                        0x400
#define MATERIALFLAGS_update(x)                          ((((C(MaterialFlags))(x)) & MATERIALFLAGS_update_MASK) >> MATERIALFLAGS_update_SHIFT)
#define MATERIALFLAGS_SET_update(x, update)                   (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_update_MASK)) | (((C(MaterialFlags))(update)) << MATERIALFLAGS_update_SHIFT)
#define MATERIALFLAGS_constantColor_SHIFT                11
#define MATERIALFLAGS_constantColor_MASK                 0x800
#define MATERIALFLAGS_constantColor(x)                   ((((C(MaterialFlags))(x)) & MATERIALFLAGS_constantColor_MASK) >> MATERIALFLAGS_constantColor_SHIFT)
#define MATERIALFLAGS_SET_constantColor(x, constantColor)            (x) = ((C(MaterialFlags))(x) & ~((C(MaterialFlags))MATERIALFLAGS_constantColor_MASK)) | (((C(MaterialFlags))(constantColor)) << MATERIALFLAGS_constantColor_SHIFT)


extern THIS_LIB_IMPORT double (* Matrix_determinant)(C(Matrix) * __this);

extern THIS_LIB_IMPORT void (* Matrix_identity)(C(Matrix) * __this);

extern THIS_LIB_IMPORT void (* Matrix_inverse)(C(Matrix) * __this, const C(Matrix) * source);

extern THIS_LIB_IMPORT void (* Matrix_inverseTransposeTransform)(C(Matrix) * __this, const C(Matrix) * source);

extern THIS_LIB_IMPORT void (* Matrix_multiply)(C(Matrix) * __this, const C(Matrix) * a, const C(Matrix) * b);

extern THIS_LIB_IMPORT void (* Matrix_multiply3x4)(C(Matrix) * __this, const C(Matrix) * a, const C(Matrix) * b);

extern THIS_LIB_IMPORT void (* Matrix_rotate)(C(Matrix) * __this, const C(Quaternion) * quat);

extern THIS_LIB_IMPORT void (* Matrix_rotationQuaternion)(C(Matrix) * __this, const C(Quaternion) * quat);

extern THIS_LIB_IMPORT void (* Matrix_scale)(C(Matrix) * __this, double sx, double sy, double sz);

extern THIS_LIB_IMPORT void (* Matrix_toEuler)(C(Matrix) * __this, C(Euler) * euler);

extern THIS_LIB_IMPORT void (* Matrix_translate)(C(Matrix) * __this, double tx, double ty, double tz);

extern THIS_LIB_IMPORT void (* Matrix_transpose)(C(Matrix) * __this, const C(Matrix) * source);

extern THIS_LIB_IMPORT C(bool) (* Matrix_isIdentity)(C(Matrix) * __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Matrix, Quaternion);
extern THIS_LIB_IMPORT void (* Matrix_from_Quaternion)(const C(Matrix) * m, const C(Quaternion) * value);
extern THIS_LIB_IMPORT void (* Matrix_to_Quaternion)(const C(Matrix) * m, C(Quaternion) * value);

struct C(Matrixf)
{
   union
   {
      float m[4][4];
      float array[16];
   };
};
extern THIS_LIB_IMPORT void (* Matrixf_identity)(C(Matrixf) * __this);

extern THIS_LIB_IMPORT void (* Matrixf_fromMatrix)(C(Matrixf) * __this, C(Matrix) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Matrixf, Matrix);
extern THIS_LIB_IMPORT void (* Matrixf_from_Matrix)(const C(Matrixf) * m, const C(Matrix) * value);
extern THIS_LIB_IMPORT void (* Matrixf_to_Matrix)(const C(Matrixf) * m, C(Matrix) * value);

extern THIS_LIB_IMPORT C(PrimitiveGroup) * (* Mesh_addPrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroupType) flags, int nIndices);

extern THIS_LIB_IMPORT C(bool) (* Mesh_allocate)(C(Mesh) * __this, C(MeshFeatures) what, int nVertices, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Mesh_allocatePrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive, C(PrimitiveGroupType) flags, int nIndices);

extern THIS_LIB_IMPORT void (* Mesh_applyMaterial)(C(Mesh) * __this, C(Material) * material);

extern THIS_LIB_IMPORT void (* Mesh_applyMorphs)(C(Mesh) * __this, C(bool) recomputeNormals);

extern THIS_LIB_IMPORT void (* Mesh_applySkin)(C(Mesh) * __this);

extern THIS_LIB_IMPORT C(bool) (* Mesh_applyTranslucency)(C(Mesh) * __this, C(Object) * object);

extern THIS_LIB_IMPORT void (* Mesh_combineMorphs)(C(Mesh) * __this, C(Array) combined);

extern THIS_LIB_IMPORT void (* Mesh_computeNormals)(C(Mesh) * __this);

extern THIS_LIB_IMPORT void (* Mesh_computeNormals2)(C(Mesh) * __this, C(bool) computeNormals, C(bool) computeTangents);

extern THIS_LIB_IMPORT void (* Mesh_computeNormals3)(C(Mesh) * __this, C(bool) computeNormals, C(bool) computeTangents, C(bool) unlock);

extern THIS_LIB_IMPORT C(Mesh) * (* Mesh_copy)(C(Mesh) * __this);

extern THIS_LIB_IMPORT int (* Mesh_findClosestVertex)(C(Mesh) * __this, const C(Vector3D) * local, C(Vector3Df) * actual);

extern THIS_LIB_IMPORT void (* Mesh_free)(C(Mesh) * __this, C(MeshFeatures) what);

extern THIS_LIB_IMPORT void (* Mesh_freeCPUVertexAttributes)(C(Mesh) * __this, C(MeshFeatures) what);

extern THIS_LIB_IMPORT void (* Mesh_freePrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive);

extern THIS_LIB_IMPORT void (* Mesh_freePrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroup) * group);

extern THIS_LIB_IMPORT void * (* Mesh_getData)(C(Mesh) * __this);

extern THIS_LIB_IMPORT C(bool) (* Mesh_lock)(C(Mesh) * __this, C(MeshFeatures) flags);

extern THIS_LIB_IMPORT C(bool) (* Mesh_lockPrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive);

extern THIS_LIB_IMPORT C(bool) (* Mesh_lockPrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroup) * group);

extern THIS_LIB_IMPORT void (* Mesh_setData)(C(Mesh) * __this, void * value);

extern THIS_LIB_IMPORT void (* Mesh_unapplySkin)(C(Mesh) * __this);

extern THIS_LIB_IMPORT C(bool) (* Mesh_unapplyTranslucency)(C(Mesh) * __this, C(Object) * object);

extern THIS_LIB_IMPORT void (* Mesh_unlock)(C(Mesh) * __this, C(MeshFeatures) flags);

extern THIS_LIB_IMPORT void (* Mesh_unlockPrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * primitive);

extern THIS_LIB_IMPORT void (* Mesh_unlockPrimitiveGroup)(C(Mesh) * __this, C(PrimitiveGroup) * group);

extern THIS_LIB_IMPORT C(bool) (* Mesh_upload)(C(Mesh) * __this, C(DisplaySystem) displaySystem, C(bool) uploadTextures, C(GLMB) mab, C(GLMB) meab, int nAT, C(GLArrayTexture) * mAT);

extern THIS_LIB_IMPORT void (* Mesh_uploadPrimitive)(C(Mesh) * __this, C(PrimitiveSingle) * g, C(DisplaySystem) displaySystem, C(bool) uploadTextures, int nAT, C(GLArrayTexture) * mAT, C(bool) clearData, C(bool) unlockAndDelete);

extern THIS_LIB_IMPORT void (* Mesh_uploadTexture)(C(Mesh) * __this, C(Bitmap) bitmap, C(DisplaySystem) displaySystem, C(GLArrayTexture) * at);

extern THIS_LIB_IMPORT void (* Mesh_fixMorphSkin)(C(Mesh) * __this);

extern THIS_LIB_IMPORT void (* Mesh_fixSkeletonBones)(C(Mesh) * __this, C(SkinBone) * bone, int boneIx);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, texCoords);
extern THIS_LIB_IMPORT void (* Mesh_set_texCoords)(const C(Mesh) * m, C(Pointf) * value);
extern THIS_LIB_IMPORT C(Pointf) * (* Mesh_get_texCoords)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, nVertices);
extern THIS_LIB_IMPORT void (* Mesh_set_nVertices)(const C(Mesh) * m, int value);
extern THIS_LIB_IMPORT int (* Mesh_get_nVertices)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, vertices);
extern THIS_LIB_IMPORT void (* Mesh_set_vertices)(const C(Mesh) * m, C(Vector3Df) * value);
extern THIS_LIB_IMPORT C(Vector3Df) * (* Mesh_get_vertices)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, nIndices);
extern THIS_LIB_IMPORT void (* Mesh_set_nIndices)(const C(Mesh) * m, int value);
extern THIS_LIB_IMPORT int (* Mesh_get_nIndices)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, meab);
extern THIS_LIB_IMPORT void (* Mesh_set_meab)(const C(Mesh) * m, C(GLMB) value);
extern THIS_LIB_IMPORT C(GLMB) (* Mesh_get_meab)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, baseIndex);
extern THIS_LIB_IMPORT void (* Mesh_set_baseIndex)(const C(Mesh) * m, int value);
extern THIS_LIB_IMPORT int (* Mesh_get_baseIndex)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, baseVertex);
extern THIS_LIB_IMPORT void (* Mesh_set_baseVertex)(const C(Mesh) * m, int value);
extern THIS_LIB_IMPORT int (* Mesh_get_baseVertex)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, indices);
extern THIS_LIB_IMPORT void (* Mesh_set_indices)(const C(Mesh) * m, uint * value);
extern THIS_LIB_IMPORT uint * (* Mesh_get_indices)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, normals);
extern THIS_LIB_IMPORT void (* Mesh_set_normals)(const C(Mesh) * m, C(Vector3Df) * value);
extern THIS_LIB_IMPORT C(Vector3Df) * (* Mesh_get_normals)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, tangents);
extern THIS_LIB_IMPORT void (* Mesh_set_tangents)(const C(Mesh) * m, C(Vector3Df) * value);
extern THIS_LIB_IMPORT C(Vector3Df) * (* Mesh_get_tangents)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, colors);
extern THIS_LIB_IMPORT void (* Mesh_set_colors)(const C(Mesh) * m, C(ColorRGBAf) * value);
extern THIS_LIB_IMPORT C(ColorRGBAf) * (* Mesh_get_colors)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, lightVectors);
extern THIS_LIB_IMPORT void (* Mesh_set_lightVectors)(const C(Mesh) * m, C(ColorRGB) * value);
extern THIS_LIB_IMPORT C(ColorRGB) * (* Mesh_get_lightVectors)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, groups);
extern THIS_LIB_IMPORT void (* Mesh_get_groups)(const C(Mesh) * m, C(OldList) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, flags);
extern THIS_LIB_IMPORT void (* Mesh_set_flags)(const C(Mesh) * m, C(MeshFeatures) value);
extern THIS_LIB_IMPORT C(MeshFeatures) (* Mesh_get_flags)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, skin);
extern THIS_LIB_IMPORT void (* Mesh_set_skin)(const C(Mesh) * m, C(MeshSkin) value);
extern THIS_LIB_IMPORT C(MeshSkin) (* Mesh_get_skin)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, dupVerts);
extern THIS_LIB_IMPORT void (* Mesh_set_dupVerts)(const C(Mesh) * m, C(Array) value);
extern THIS_LIB_IMPORT C(Array) (* Mesh_get_dupVerts)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, morphs);
extern THIS_LIB_IMPORT void (* Mesh_set_morphs)(const C(Mesh) * m, C(Array) value);
extern THIS_LIB_IMPORT C(Array) (* Mesh_get_morphs)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, unmorphedMesh);
extern THIS_LIB_IMPORT void (* Mesh_set_unmorphedMesh)(const C(Mesh) * m, C(Mesh) * value);
extern THIS_LIB_IMPORT C(Mesh) * (* Mesh_get_unmorphedMesh)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, translucentPrimitives);
extern THIS_LIB_IMPORT C(PrimitiveSingle) * (* Mesh_get_translucentPrimitives)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, nTranslucentPrimitives);
extern THIS_LIB_IMPORT int (* Mesh_get_nTranslucentPrimitives)(const C(Mesh) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Mesh, parts);
extern THIS_LIB_IMPORT void (* Mesh_set_parts)(const C(Mesh) * m, C(Array) value);
extern THIS_LIB_IMPORT C(Array) (* Mesh_get_parts)(const C(Mesh) * m);

#define MESHFEATURES_vertices_SHIFT                      0
#define MESHFEATURES_vertices_MASK                       0x1
#define MESHFEATURES_vertices(x)                         ((((C(MeshFeatures))(x)) & MESHFEATURES_vertices_MASK) >> MESHFEATURES_vertices_SHIFT)
#define MESHFEATURES_SET_vertices(x, vertices)                  (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_vertices_MASK)) | (((C(MeshFeatures))(vertices)) << MESHFEATURES_vertices_SHIFT)
#define MESHFEATURES_normals_SHIFT                       1
#define MESHFEATURES_normals_MASK                        0x2
#define MESHFEATURES_normals(x)                          ((((C(MeshFeatures))(x)) & MESHFEATURES_normals_MASK) >> MESHFEATURES_normals_SHIFT)
#define MESHFEATURES_SET_normals(x, normals)                   (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_normals_MASK)) | (((C(MeshFeatures))(normals)) << MESHFEATURES_normals_SHIFT)
#define MESHFEATURES_texCoords1_SHIFT                    2
#define MESHFEATURES_texCoords1_MASK                     0x4
#define MESHFEATURES_texCoords1(x)                       ((((C(MeshFeatures))(x)) & MESHFEATURES_texCoords1_MASK) >> MESHFEATURES_texCoords1_SHIFT)
#define MESHFEATURES_SET_texCoords1(x, texCoords1)                (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_texCoords1_MASK)) | (((C(MeshFeatures))(texCoords1)) << MESHFEATURES_texCoords1_SHIFT)
#define MESHFEATURES_texCoords2_SHIFT                    3
#define MESHFEATURES_texCoords2_MASK                     0x8
#define MESHFEATURES_texCoords2(x)                       ((((C(MeshFeatures))(x)) & MESHFEATURES_texCoords2_MASK) >> MESHFEATURES_texCoords2_SHIFT)
#define MESHFEATURES_SET_texCoords2(x, texCoords2)                (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_texCoords2_MASK)) | (((C(MeshFeatures))(texCoords2)) << MESHFEATURES_texCoords2_SHIFT)
#define MESHFEATURES_doubleNormals_SHIFT                 4
#define MESHFEATURES_doubleNormals_MASK                  0x10
#define MESHFEATURES_doubleNormals(x)                    ((((C(MeshFeatures))(x)) & MESHFEATURES_doubleNormals_MASK) >> MESHFEATURES_doubleNormals_SHIFT)
#define MESHFEATURES_SET_doubleNormals(x, doubleNormals)             (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_doubleNormals_MASK)) | (((C(MeshFeatures))(doubleNormals)) << MESHFEATURES_doubleNormals_SHIFT)
#define MESHFEATURES_doubleVertices_SHIFT                5
#define MESHFEATURES_doubleVertices_MASK                 0x20
#define MESHFEATURES_doubleVertices(x)                   ((((C(MeshFeatures))(x)) & MESHFEATURES_doubleVertices_MASK) >> MESHFEATURES_doubleVertices_SHIFT)
#define MESHFEATURES_SET_doubleVertices(x, doubleVertices)            (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_doubleVertices_MASK)) | (((C(MeshFeatures))(doubleVertices)) << MESHFEATURES_doubleVertices_SHIFT)
#define MESHFEATURES_colors_SHIFT                        6
#define MESHFEATURES_colors_MASK                         0x40
#define MESHFEATURES_colors(x)                           ((((C(MeshFeatures))(x)) & MESHFEATURES_colors_MASK) >> MESHFEATURES_colors_SHIFT)
#define MESHFEATURES_SET_colors(x, colors)                    (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_colors_MASK)) | (((C(MeshFeatures))(colors)) << MESHFEATURES_colors_SHIFT)
#define MESHFEATURES_lightVectors_SHIFT                  7
#define MESHFEATURES_lightVectors_MASK                   0x80
#define MESHFEATURES_lightVectors(x)                     ((((C(MeshFeatures))(x)) & MESHFEATURES_lightVectors_MASK) >> MESHFEATURES_lightVectors_SHIFT)
#define MESHFEATURES_SET_lightVectors(x, lightVectors)              (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_lightVectors_MASK)) | (((C(MeshFeatures))(lightVectors)) << MESHFEATURES_lightVectors_SHIFT)
#define MESHFEATURES_tangents_SHIFT                      8
#define MESHFEATURES_tangents_MASK                       0x100
#define MESHFEATURES_tangents(x)                         ((((C(MeshFeatures))(x)) & MESHFEATURES_tangents_MASK) >> MESHFEATURES_tangents_SHIFT)
#define MESHFEATURES_SET_tangents(x, tangents)                  (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_tangents_MASK)) | (((C(MeshFeatures))(tangents)) << MESHFEATURES_tangents_SHIFT)
#define MESHFEATURES_intVertices_SHIFT                   9
#define MESHFEATURES_intVertices_MASK                    0x200
#define MESHFEATURES_intVertices(x)                      ((((C(MeshFeatures))(x)) & MESHFEATURES_intVertices_MASK) >> MESHFEATURES_intVertices_SHIFT)
#define MESHFEATURES_SET_intVertices(x, intVertices)               (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_intVertices_MASK)) | (((C(MeshFeatures))(intVertices)) << MESHFEATURES_intVertices_SHIFT)
#define MESHFEATURES_memAllocOnly_SHIFT                  10
#define MESHFEATURES_memAllocOnly_MASK                   0x400
#define MESHFEATURES_memAllocOnly(x)                     ((((C(MeshFeatures))(x)) & MESHFEATURES_memAllocOnly_MASK) >> MESHFEATURES_memAllocOnly_SHIFT)
#define MESHFEATURES_SET_memAllocOnly(x, memAllocOnly)              (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_memAllocOnly_MASK)) | (((C(MeshFeatures))(memAllocOnly)) << MESHFEATURES_memAllocOnly_SHIFT)
#define MESHFEATURES_interleaved_SHIFT                   11
#define MESHFEATURES_interleaved_MASK                    0x800
#define MESHFEATURES_interleaved(x)                      ((((C(MeshFeatures))(x)) & MESHFEATURES_interleaved_MASK) >> MESHFEATURES_interleaved_SHIFT)
#define MESHFEATURES_SET_interleaved(x, interleaved)               (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_interleaved_MASK)) | (((C(MeshFeatures))(interleaved)) << MESHFEATURES_interleaved_SHIFT)
#define MESHFEATURES_ownMEAB_SHIFT                       12
#define MESHFEATURES_ownMEAB_MASK                        0x1000
#define MESHFEATURES_ownMEAB(x)                          ((((C(MeshFeatures))(x)) & MESHFEATURES_ownMEAB_MASK) >> MESHFEATURES_ownMEAB_SHIFT)
#define MESHFEATURES_SET_ownMEAB(x, ownMEAB)                   (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_ownMEAB_MASK)) | (((C(MeshFeatures))(ownMEAB)) << MESHFEATURES_ownMEAB_SHIFT)
#define MESHFEATURES_bones_SHIFT                         13
#define MESHFEATURES_bones_MASK                          0x2000
#define MESHFEATURES_bones(x)                            ((((C(MeshFeatures))(x)) & MESHFEATURES_bones_MASK) >> MESHFEATURES_bones_SHIFT)
#define MESHFEATURES_SET_bones(x, bones)                     (x) = ((C(MeshFeatures))(x) & ~((C(MeshFeatures))MESHFEATURES_bones_MASK)) | (((C(MeshFeatures))(bones)) << MESHFEATURES_bones_SHIFT)


struct C(MeshMorph)
{
   C(Mesh) * target;
   float weight;
   C(String) name;
   C(bool) updated;
   int firstV;
   int lastV;
};
struct C(MeshPart)
{
   uint64 id;
   uint start;
   uint count;
};
extern THIS_LIB_IMPORT void (* Object_add)(C(Object) * __this, C(Object) * object);

extern THIS_LIB_IMPORT void (* Object_addFrameTrack)(C(Object) * __this, C(FrameTrack) * track);

extern THIS_LIB_IMPORT C(bool) (* Object_addName)(C(Object) * __this, C(Object) * object, const char * name);

extern THIS_LIB_IMPORT void (* Object_animate)(C(Object) * __this, int frame);

extern THIS_LIB_IMPORT void (* Object_applyMorphs)(C(Object) * __this, C(bool) recomputeNormals);

extern THIS_LIB_IMPORT void (* Object_applySkins)(C(Object) * __this);

extern THIS_LIB_IMPORT void (* Object_combineMorphs)(C(Object) * __this);

extern THIS_LIB_IMPORT void (* Object_delete)(C(Object) * __this, C(Object) * child, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT void (* Object_doubleSided)(C(Object) * __this, C(bool) flag);

extern THIS_LIB_IMPORT void (* Object_duplicate)(C(Object) * __this, C(Object) * model);

extern THIS_LIB_IMPORT void (* Object_duplicate2)(C(Object) * __this, C(Object) * model, C(bool) takeOwnership);

extern THIS_LIB_IMPORT C(Object) * (* Object_find)(C(Object) * __this, const char * name);

extern THIS_LIB_IMPORT void (* Object_free)(C(Object) * __this, const C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT void (* Object_freeMesh)(C(Object) * __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT void (* Object_initialize)(C(Object) * __this);

extern THIS_LIB_IMPORT C(Mesh) * (* Object_initializeMesh)(C(Object) * __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(FrustumPlacement) (* Object_insideFrustum)(C(Object) * __this, C(Plane) * planes);

extern THIS_LIB_IMPORT C(bool) (* Object_intersectsGroundPolygon)(C(Object) * __this, int count, C(Pointf) * pointfs);

extern THIS_LIB_IMPORT void (* Object_inverseKinematics)(C(Object) * __this, int boneIX, C(Array) limits, int vertex, const C(Vector3D) * target, int maxDepth);

extern THIS_LIB_IMPORT C(bool) (* Object_load)(C(Object) * __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Object_loadEx)(C(Object) * __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem, void * options);

extern THIS_LIB_IMPORT C(bool) (* Object_merge)(C(Object) * __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Object_mergeEx)(C(Object) * __this, C(DisplaySystem) displaySystem, C(MeshFeatures) deleteCPUAttrOptions);

extern THIS_LIB_IMPORT void (* Object_move)(C(Object) * __this, C(Vector3D) * direction);

extern THIS_LIB_IMPORT void (* Object_remove)(C(Object) * __this, C(Object) * child);

extern THIS_LIB_IMPORT void (* Object_resetPose)(C(Object) * __this);

extern THIS_LIB_IMPORT void (* Object_rotateEuler)(C(Object) * __this, C(Euler) * rotation, C(Euler) * min, C(Euler) * max);

extern THIS_LIB_IMPORT C(bool) (* Object_save)(C(Object) * __this, const char * fileName, const char * type);

extern THIS_LIB_IMPORT C(bool) (* Object_saveEx)(C(Object) * __this, const char * fileName, const char * type, void * options);

extern THIS_LIB_IMPORT void (* Object_setMinMaxRadius)(C(Object) * __this, C(bool) processMesh);

extern THIS_LIB_IMPORT void (* Object_updateTransform)(C(Object) * __this);

extern THIS_LIB_IMPORT void (* Object_upload)(C(Object) * __this, C(DisplaySystem) displaySystem, C(GLMB) mab, C(GLMB) meab, int nAT, C(GLArrayTexture) * mAT);

extern THIS_LIB_IMPORT C(Array) (* Object_listTextures)(C(File) file, const char * fileName, const char * type, void * options);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, transform);
extern THIS_LIB_IMPORT void (* Object_set_transform)(const C(Object) * o, const C(Transform) * value);
extern THIS_LIB_IMPORT void (* Object_get_transform)(const C(Object) * o, C(Transform) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, eulerOrientation);
extern THIS_LIB_IMPORT void (* Object_set_eulerOrientation)(const C(Object) * o, const C(Euler) * value);
extern THIS_LIB_IMPORT void (* Object_get_eulerOrientation)(const C(Object) * o, C(Euler) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, material);
extern THIS_LIB_IMPORT void (* Object_set_material)(const C(Object) * o, C(Material) * value);
extern THIS_LIB_IMPORT C(Material) * (* Object_get_material)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, max);
extern THIS_LIB_IMPORT void (* Object_get_max)(const C(Object) * o, C(Vector3Df) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, min);
extern THIS_LIB_IMPORT void (* Object_get_min)(const C(Object) * o, C(Vector3Df) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, center);
extern THIS_LIB_IMPORT void (* Object_get_center)(const C(Object) * o, C(Vector3Df) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, radius);
extern THIS_LIB_IMPORT float (* Object_get_radius)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, wmax);
extern THIS_LIB_IMPORT void (* Object_get_wmax)(const C(Object) * o, C(Vector3D) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, wmin);
extern THIS_LIB_IMPORT void (* Object_get_wmin)(const C(Object) * o, C(Vector3D) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, wcenter);
extern THIS_LIB_IMPORT void (* Object_get_wcenter)(const C(Object) * o, C(Vector3D) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, wradius);
extern THIS_LIB_IMPORT double (* Object_get_wradius)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, tag);
extern THIS_LIB_IMPORT void (* Object_set_tag)(const C(Object) * o, void * value);
extern THIS_LIB_IMPORT void * (* Object_get_tag)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, frame);
extern THIS_LIB_IMPORT void (* Object_set_frame)(const C(Object) * o, int value);
extern THIS_LIB_IMPORT int (* Object_get_frame)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, startFrame);
extern THIS_LIB_IMPORT void (* Object_set_startFrame)(const C(Object) * o, int value);
extern THIS_LIB_IMPORT int (* Object_get_startFrame)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, endFrame);
extern THIS_LIB_IMPORT void (* Object_set_endFrame)(const C(Object) * o, int value);
extern THIS_LIB_IMPORT int (* Object_get_endFrame)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, mesh);
extern THIS_LIB_IMPORT void (* Object_set_mesh)(const C(Object) * o, C(Mesh) * value);
extern THIS_LIB_IMPORT C(Mesh) * (* Object_get_mesh)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, camera);
extern THIS_LIB_IMPORT C(Camera) (* Object_get_camera)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, firstChild);
extern THIS_LIB_IMPORT C(Object) * (* Object_get_firstChild)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, next);
extern THIS_LIB_IMPORT C(Object) * (* Object_get_next)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, name);
extern THIS_LIB_IMPORT void (* Object_set_name)(const C(Object) * o, const char * value);
extern THIS_LIB_IMPORT const char * (* Object_get_name)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, matrix);
extern THIS_LIB_IMPORT void (* Object_get_matrix)(const C(Object) * o, C(Matrix) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, cameraTarget);
extern THIS_LIB_IMPORT void (* Object_set_cameraTarget)(const C(Object) * o, C(Object) * value);
extern THIS_LIB_IMPORT C(Object) * (* Object_get_cameraTarget)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, tracks);
extern THIS_LIB_IMPORT C(OldList) * (* Object_get_tracks)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, flags);
extern THIS_LIB_IMPORT void (* Object_set_flags)(const C(Object) * o, C(ObjectFlags) value);
extern THIS_LIB_IMPORT C(ObjectFlags) (* Object_get_flags)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, parent);
extern THIS_LIB_IMPORT C(Object) * (* Object_get_parent)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, numChildren);
extern THIS_LIB_IMPORT uint (* Object_get_numChildren)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, localMatrixPtr);
extern THIS_LIB_IMPORT C(Matrix) * (* Object_get_localMatrixPtr)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, matrixPtr);
extern THIS_LIB_IMPORT C(Matrix) * (* Object_get_matrixPtr)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, light);
extern THIS_LIB_IMPORT void (* Object_set_light)(const C(Object) * o, const C(Light) * value);
extern THIS_LIB_IMPORT void (* Object_get_light)(const C(Object) * o, C(Light) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, rotationOrder);
extern THIS_LIB_IMPORT void (* Object_set_rotationOrder)(const C(Object) * o, C(EulerRotationOrder) value);
extern THIS_LIB_IMPORT C(EulerRotationOrder) (* Object_get_rotationOrder)(const C(Object) * o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Object, displaySystem);
extern THIS_LIB_IMPORT void (* Object_set_displaySystem)(const C(Object) * o, C(DisplaySystem) value);
extern THIS_LIB_IMPORT C(DisplaySystem) (* Object_get_displaySystem)(const C(Object) * o);

#define OBJECTFLAGS_root_SHIFT                           0
#define OBJECTFLAGS_root_MASK                            0x1
#define OBJECTFLAGS_root(x)                              ((((C(ObjectFlags))(x)) & OBJECTFLAGS_root_MASK) >> OBJECTFLAGS_root_SHIFT)
#define OBJECTFLAGS_SET_root(x, root)                       (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_root_MASK)) | (((C(ObjectFlags))(root)) << OBJECTFLAGS_root_SHIFT)
#define OBJECTFLAGS_viewSpace_SHIFT                      1
#define OBJECTFLAGS_viewSpace_MASK                       0x2
#define OBJECTFLAGS_viewSpace(x)                         ((((C(ObjectFlags))(x)) & OBJECTFLAGS_viewSpace_MASK) >> OBJECTFLAGS_viewSpace_SHIFT)
#define OBJECTFLAGS_SET_viewSpace(x, viewSpace)                  (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_viewSpace_MASK)) | (((C(ObjectFlags))(viewSpace)) << OBJECTFLAGS_viewSpace_SHIFT)
#define OBJECTFLAGS_ownMesh_SHIFT                        2
#define OBJECTFLAGS_ownMesh_MASK                         0x4
#define OBJECTFLAGS_ownMesh(x)                           ((((C(ObjectFlags))(x)) & OBJECTFLAGS_ownMesh_MASK) >> OBJECTFLAGS_ownMesh_SHIFT)
#define OBJECTFLAGS_SET_ownMesh(x, ownMesh)                    (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_ownMesh_MASK)) | (((C(ObjectFlags))(ownMesh)) << OBJECTFLAGS_ownMesh_SHIFT)
#define OBJECTFLAGS_translucent_SHIFT                    3
#define OBJECTFLAGS_translucent_MASK                     0x8
#define OBJECTFLAGS_translucent(x)                       ((((C(ObjectFlags))(x)) & OBJECTFLAGS_translucent_MASK) >> OBJECTFLAGS_translucent_SHIFT)
#define OBJECTFLAGS_SET_translucent(x, translucent)                (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_translucent_MASK)) | (((C(ObjectFlags))(translucent)) << OBJECTFLAGS_translucent_SHIFT)
#define OBJECTFLAGS_flipWindings_SHIFT                   4
#define OBJECTFLAGS_flipWindings_MASK                    0x10
#define OBJECTFLAGS_flipWindings(x)                      ((((C(ObjectFlags))(x)) & OBJECTFLAGS_flipWindings_MASK) >> OBJECTFLAGS_flipWindings_SHIFT)
#define OBJECTFLAGS_SET_flipWindings(x, flipWindings)               (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_flipWindings_MASK)) | (((C(ObjectFlags))(flipWindings)) << OBJECTFLAGS_flipWindings_SHIFT)
#define OBJECTFLAGS_keysLoaded_SHIFT                     5
#define OBJECTFLAGS_keysLoaded_MASK                      0x20
#define OBJECTFLAGS_keysLoaded(x)                        ((((C(ObjectFlags))(x)) & OBJECTFLAGS_keysLoaded_MASK) >> OBJECTFLAGS_keysLoaded_SHIFT)
#define OBJECTFLAGS_SET_keysLoaded(x, keysLoaded)                 (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_keysLoaded_MASK)) | (((C(ObjectFlags))(keysLoaded)) << OBJECTFLAGS_keysLoaded_SHIFT)
#define OBJECTFLAGS_transform_SHIFT                      6
#define OBJECTFLAGS_transform_MASK                       0x40
#define OBJECTFLAGS_transform(x)                         ((((C(ObjectFlags))(x)) & OBJECTFLAGS_transform_MASK) >> OBJECTFLAGS_transform_SHIFT)
#define OBJECTFLAGS_SET_transform(x, transform)                  (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_transform_MASK)) | (((C(ObjectFlags))(transform)) << OBJECTFLAGS_transform_SHIFT)
#define OBJECTFLAGS_mesh_SHIFT                           7
#define OBJECTFLAGS_mesh_MASK                            0x80
#define OBJECTFLAGS_mesh(x)                              ((((C(ObjectFlags))(x)) & OBJECTFLAGS_mesh_MASK) >> OBJECTFLAGS_mesh_SHIFT)
#define OBJECTFLAGS_SET_mesh(x, mesh)                       (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_mesh_MASK)) | (((C(ObjectFlags))(mesh)) << OBJECTFLAGS_mesh_SHIFT)
#define OBJECTFLAGS_light_SHIFT                          8
#define OBJECTFLAGS_light_MASK                           0x100
#define OBJECTFLAGS_light(x)                             ((((C(ObjectFlags))(x)) & OBJECTFLAGS_light_MASK) >> OBJECTFLAGS_light_SHIFT)
#define OBJECTFLAGS_SET_light(x, light)                      (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_light_MASK)) | (((C(ObjectFlags))(light)) << OBJECTFLAGS_light_SHIFT)
#define OBJECTFLAGS_camera_SHIFT                         9
#define OBJECTFLAGS_camera_MASK                          0x200
#define OBJECTFLAGS_camera(x)                            ((((C(ObjectFlags))(x)) & OBJECTFLAGS_camera_MASK) >> OBJECTFLAGS_camera_SHIFT)
#define OBJECTFLAGS_SET_camera(x, camera)                     (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_camera_MASK)) | (((C(ObjectFlags))(camera)) << OBJECTFLAGS_camera_SHIFT)
#define OBJECTFLAGS_localMatrixSet_SHIFT                 10
#define OBJECTFLAGS_localMatrixSet_MASK                  0x400
#define OBJECTFLAGS_localMatrixSet(x)                    ((((C(ObjectFlags))(x)) & OBJECTFLAGS_localMatrixSet_MASK) >> OBJECTFLAGS_localMatrixSet_SHIFT)
#define OBJECTFLAGS_SET_localMatrixSet(x, localMatrixSet)             (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_localMatrixSet_MASK)) | (((C(ObjectFlags))(localMatrixSet)) << OBJECTFLAGS_localMatrixSet_SHIFT)
#define OBJECTFLAGS_computeLightVectors_SHIFT            11
#define OBJECTFLAGS_computeLightVectors_MASK             0x800
#define OBJECTFLAGS_computeLightVectors(x)               ((((C(ObjectFlags))(x)) & OBJECTFLAGS_computeLightVectors_MASK) >> OBJECTFLAGS_computeLightVectors_SHIFT)
#define OBJECTFLAGS_SET_computeLightVectors(x, computeLightVectors)        (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_computeLightVectors_MASK)) | (((C(ObjectFlags))(computeLightVectors)) << OBJECTFLAGS_computeLightVectors_SHIFT)
#define OBJECTFLAGS_skinApplied_SHIFT                    12
#define OBJECTFLAGS_skinApplied_MASK                     0x1000
#define OBJECTFLAGS_skinApplied(x)                       ((((C(ObjectFlags))(x)) & OBJECTFLAGS_skinApplied_MASK) >> OBJECTFLAGS_skinApplied_SHIFT)
#define OBJECTFLAGS_SET_skinApplied(x, skinApplied)                (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_skinApplied_MASK)) | (((C(ObjectFlags))(skinApplied)) << OBJECTFLAGS_skinApplied_SHIFT)
#define OBJECTFLAGS_hide_SHIFT                           13
#define OBJECTFLAGS_hide_MASK                            0x2000
#define OBJECTFLAGS_hide(x)                              ((((C(ObjectFlags))(x)) & OBJECTFLAGS_hide_MASK) >> OBJECTFLAGS_hide_SHIFT)
#define OBJECTFLAGS_SET_hide(x, hide)                       (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_hide_MASK)) | (((C(ObjectFlags))(hide)) << OBJECTFLAGS_hide_SHIFT)
#define OBJECTFLAGS_skeleton_SHIFT                       14
#define OBJECTFLAGS_skeleton_MASK                        0x4000
#define OBJECTFLAGS_skeleton(x)                          ((((C(ObjectFlags))(x)) & OBJECTFLAGS_skeleton_MASK) >> OBJECTFLAGS_skeleton_SHIFT)
#define OBJECTFLAGS_SET_skeleton(x, skeleton)                   (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_skeleton_MASK)) | (((C(ObjectFlags))(skeleton)) << OBJECTFLAGS_skeleton_SHIFT)
#define OBJECTFLAGS_bone_SHIFT                           15
#define OBJECTFLAGS_bone_MASK                            0x8000
#define OBJECTFLAGS_bone(x)                              ((((C(ObjectFlags))(x)) & OBJECTFLAGS_bone_MASK) >> OBJECTFLAGS_bone_SHIFT)
#define OBJECTFLAGS_SET_bone(x, bone)                       (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_bone_MASK)) | (((C(ObjectFlags))(bone)) << OBJECTFLAGS_bone_SHIFT)
#define OBJECTFLAGS_hierarchy_SHIFT                      16
#define OBJECTFLAGS_hierarchy_MASK                       0xFFFF0000
#define OBJECTFLAGS_hierarchy(x)                         ((((C(ObjectFlags))(x)) & OBJECTFLAGS_hierarchy_MASK) >> OBJECTFLAGS_hierarchy_SHIFT)
#define OBJECTFLAGS_SET_hierarchy(x, hierarchy)                  (x) = ((C(ObjectFlags))(x) & ~((C(ObjectFlags))OBJECTFLAGS_hierarchy_MASK)) | (((C(ObjectFlags))(hierarchy)) << OBJECTFLAGS_hierarchy_SHIFT)


extern THIS_LIB_IMPORT int M_VTBLID(ObjectFormat, load);
// C(bool) ObjectFormat_load(C(ObjectFormat) __i, C(Object) * object, const char * fileName, C(DisplaySystem) displaySystem, void * options);
#define ObjectFormat_load(__i, object, fileName, displaySystem, options) \
   VMETHOD(CO(ObjectFormat), ObjectFormat, load, __i, C(bool), \
      C(Object) * _ARG const char * _ARG C(DisplaySystem) _ARG void *, \
      object _ARG fileName _ARG displaySystem _ARG options)
extern THIS_LIB_IMPORT C(Method) * METHOD(ObjectFormat, load);

extern THIS_LIB_IMPORT int M_VTBLID(ObjectFormat, save);
// C(bool) ObjectFormat_save(C(ObjectFormat) __i, C(Object) * object, const char * fileName, void * options);
#define ObjectFormat_save(__i, object, fileName, options) \
   VMETHOD(CO(ObjectFormat), ObjectFormat, save, __i, C(bool), \
      C(Object) * _ARG const char * _ARG void *, \
      object _ARG fileName _ARG options)
extern THIS_LIB_IMPORT C(Method) * METHOD(ObjectFormat, save);

extern THIS_LIB_IMPORT int M_VTBLID(ObjectFormat, listTextures);
// C(Array) ObjectFormat_listTextures(C(ObjectFormat) __i, C(File) f, const char * fileName, void * options);
#define ObjectFormat_listTextures(__i, f, fileName, options) \
   VMETHOD(CO(ObjectFormat), ObjectFormat, listTextures, __i, C(Array), \
      C(File) _ARG const char * _ARG void *, \
      f _ARG fileName _ARG options)
extern THIS_LIB_IMPORT C(Method) * METHOD(ObjectFormat, listTextures);

extern THIS_LIB_IMPORT void (* Plane_fromPointNormal)(C(Plane) * __this, const C(Vector3D) * normal, const C(Vector3D) * point);

extern THIS_LIB_IMPORT void (* Plane_fromPoints)(C(Plane) * __this, const C(Vector3D) * v1, const C(Vector3D) * v2, const C(Vector3D) * v3);

extern THIS_LIB_IMPORT void (* Plane_fromPointsf)(C(Plane) * __this, const C(Vector3Df) * v1, const C(Vector3Df) * v2, const C(Vector3Df) * v3);

extern THIS_LIB_IMPORT void (* Plane_intersectLine)(C(Plane) * __this, const C(Line) * line, C(Vector3D) * result);

extern THIS_LIB_IMPORT void (* Plane_intersectLinef)(C(Plane) * __this, const C(Line) * line, C(Vector3Df) * result);

extern THIS_LIB_IMPORT int (* Plane_intersectLinefT)(C(Plane) * __this, const C(Line) * line, C(Vector3Df) * result, double * rt);

extern THIS_LIB_IMPORT void (* Plane_multMatrix)(C(Plane) * __this, const C(Plane) * source, const C(Matrix) * inverseTranspose);

#define PRIMITIVEGROUPTYPE_primitiveType_SHIFT           0
#define PRIMITIVEGROUPTYPE_primitiveType_MASK            0xFF
#define PRIMITIVEGROUPTYPE_primitiveType(x)              ((((C(PrimitiveGroupType))(x)) & PRIMITIVEGROUPTYPE_primitiveType_MASK) >> PRIMITIVEGROUPTYPE_primitiveType_SHIFT)
#define PRIMITIVEGROUPTYPE_SET_primitiveType(x, primitiveType)       (x) = ((C(PrimitiveGroupType))(x) & ~((C(PrimitiveGroupType))PRIMITIVEGROUPTYPE_primitiveType_MASK)) | (((C(PrimitiveGroupType))(primitiveType)) << PRIMITIVEGROUPTYPE_primitiveType_SHIFT)
#define PRIMITIVEGROUPTYPE_vertexRange_SHIFT             8
#define PRIMITIVEGROUPTYPE_vertexRange_MASK              0x100
#define PRIMITIVEGROUPTYPE_vertexRange(x)                ((((C(PrimitiveGroupType))(x)) & PRIMITIVEGROUPTYPE_vertexRange_MASK) >> PRIMITIVEGROUPTYPE_vertexRange_SHIFT)
#define PRIMITIVEGROUPTYPE_SET_vertexRange(x, vertexRange)         (x) = ((C(PrimitiveGroupType))(x) & ~((C(PrimitiveGroupType))PRIMITIVEGROUPTYPE_vertexRange_MASK)) | (((C(PrimitiveGroupType))(vertexRange)) << PRIMITIVEGROUPTYPE_vertexRange_SHIFT)
#define PRIMITIVEGROUPTYPE_indices32bit_SHIFT            9
#define PRIMITIVEGROUPTYPE_indices32bit_MASK             0x200
#define PRIMITIVEGROUPTYPE_indices32bit(x)               ((((C(PrimitiveGroupType))(x)) & PRIMITIVEGROUPTYPE_indices32bit_MASK) >> PRIMITIVEGROUPTYPE_indices32bit_SHIFT)
#define PRIMITIVEGROUPTYPE_SET_indices32bit(x, indices32bit)        (x) = ((C(PrimitiveGroupType))(x) & ~((C(PrimitiveGroupType))PRIMITIVEGROUPTYPE_indices32bit_MASK)) | (((C(PrimitiveGroupType))(indices32bit)) << PRIMITIVEGROUPTYPE_indices32bit_SHIFT)
#define PRIMITIVEGROUPTYPE_sharedIndices_SHIFT           10
#define PRIMITIVEGROUPTYPE_sharedIndices_MASK            0x400
#define PRIMITIVEGROUPTYPE_sharedIndices(x)              ((((C(PrimitiveGroupType))(x)) & PRIMITIVEGROUPTYPE_sharedIndices_MASK) >> PRIMITIVEGROUPTYPE_sharedIndices_SHIFT)
#define PRIMITIVEGROUPTYPE_SET_sharedIndices(x, sharedIndices)       (x) = ((C(PrimitiveGroupType))(x) & ~((C(PrimitiveGroupType))PRIMITIVEGROUPTYPE_sharedIndices_MASK)) | (((C(PrimitiveGroupType))(sharedIndices)) << PRIMITIVEGROUPTYPE_sharedIndices_SHIFT)
#define PRIMITIVEGROUPTYPE_hide_SHIFT                    11
#define PRIMITIVEGROUPTYPE_hide_MASK                     0x800
#define PRIMITIVEGROUPTYPE_hide(x)                       ((((C(PrimitiveGroupType))(x)) & PRIMITIVEGROUPTYPE_hide_MASK) >> PRIMITIVEGROUPTYPE_hide_SHIFT)
#define PRIMITIVEGROUPTYPE_SET_hide(x, hide)                (x) = ((C(PrimitiveGroupType))(x) & ~((C(PrimitiveGroupType))PRIMITIVEGROUPTYPE_hide_MASK)) | (((C(PrimitiveGroupType))(hide)) << PRIMITIVEGROUPTYPE_hide_SHIFT)
#define PRIMITIVEGROUPTYPE(primitiveType, vertexRange, indices32bit, sharedIndices, hide)                  (((((((C(PrimitiveGroupType))(primitiveType)) << PRIMITIVEGROUPTYPE_primitiveType_SHIFT) | ((C(PrimitiveGroupType))(vertexRange)) << PRIMITIVEGROUPTYPE_vertexRange_SHIFT) | ((C(PrimitiveGroupType))(indices32bit)) << PRIMITIVEGROUPTYPE_indices32bit_SHIFT) | ((C(PrimitiveGroupType))(sharedIndices)) << PRIMITIVEGROUPTYPE_sharedIndices_SHIFT) | ((C(PrimitiveGroupType))(hide)) << PRIMITIVEGROUPTYPE_hide_SHIFT)


struct C(PrimitiveSingle)
{
   C(PrimitiveGroupType) type;
   int baseIndexMesh;
   int baseIndexBuffer;
   union
   {
      struct
      {
         union
         {
            uint16 * indices;
            uint * indices32;
         };
         int nIndices;
      };
      struct
      {
         int first;
         int nVertices;
      };
   };
   C(Material) * material;
   void * data;
   C(Vector3Df) middle;
   C(Plane) plane;
};
extern THIS_LIB_IMPORT void (* Quaternion_divide)(C(Quaternion) * __this, const C(Quaternion) * q1, const C(Quaternion) * q2);

extern THIS_LIB_IMPORT void (* Quaternion_identity)(C(Quaternion) * __this);

extern THIS_LIB_IMPORT void (* Quaternion_inverse)(C(Quaternion) * __this, const C(Quaternion) * source);

extern THIS_LIB_IMPORT void (* Quaternion_multiply)(C(Quaternion) * __this, const C(Quaternion) * q1, const C(Quaternion) * q2);

extern THIS_LIB_IMPORT void (* Quaternion_normalize)(C(Quaternion) * __this, const C(Quaternion) * source);

extern THIS_LIB_IMPORT void (* Quaternion_pitch)(C(Quaternion) * __this, C(Angle) angle);

extern THIS_LIB_IMPORT void (* Quaternion_roll)(C(Quaternion) * __this, C(Angle) angle);

extern THIS_LIB_IMPORT void (* Quaternion_rotatePitch)(C(Quaternion) * __this, C(Angle) pitch);

extern THIS_LIB_IMPORT void (* Quaternion_rotateRoll)(C(Quaternion) * __this, C(Angle) roll);

extern THIS_LIB_IMPORT void (* Quaternion_rotateYaw)(C(Quaternion) * __this, C(Angle) yaw);

extern THIS_LIB_IMPORT void (* Quaternion_rotateYawPitch)(C(Quaternion) * __this, C(Angle) yaw, C(Angle) pitch);

extern THIS_LIB_IMPORT void (* Quaternion_rotationAxis)(C(Quaternion) * __this, const C(Vector3D) * axis, C(Angle) angle);

extern THIS_LIB_IMPORT void (* Quaternion_rotationDirection)(C(Quaternion) * __this, const C(Vector3D) * direction);

extern THIS_LIB_IMPORT void (* Quaternion_rotationEuler)(C(Quaternion) * __this, const C(Euler) * euler, C(EulerRotationOrder) rotationOrder);

extern THIS_LIB_IMPORT void (* Quaternion_rotationMatrix)(C(Quaternion) * __this, const C(Matrix) * m);

extern THIS_LIB_IMPORT void (* Quaternion_rotationYawPitchRoll)(C(Quaternion) * __this, const C(Euler) * euler);

extern THIS_LIB_IMPORT void (* Quaternion_slerp)(C(Quaternion) * __this, const C(Quaternion) * from, const C(Quaternion) * to, float t);

extern THIS_LIB_IMPORT void (* Quaternion_toDirection)(C(Quaternion) * __this, C(Vector3D) * direction);

extern THIS_LIB_IMPORT void (* Quaternion_yaw)(C(Quaternion) * __this, C(Angle) angle);

extern THIS_LIB_IMPORT void (* Quaternion_yawPitch)(C(Quaternion) * __this, C(Angle) yaw, C(Angle) pitch);

extern THIS_LIB_IMPORT void (* Quaternion_rotateQuats)(C(Quaternion) * __this, const C(Quaternion) * qPitch, const C(Quaternion) * qYaw, const C(Quaternion) * qRoll, C(EulerRotationOrder) rotationOrder);

struct C(SkinBone)
{
   C(String) name;
   C(Matrix) invBindMatrix;
   C(Matrix) bsInvBindMatrix;
   C(Object) * object;
   C(Vector3Df) min;
   C(Vector3Df) max;
   C(Transform) origTransform;
};
struct C(SkinVert)
{
   byte bones[MAX_BONES];
   byte weights[MAX_BONES];
};
extern THIS_LIB_IMPORT void (* Transform_getMatrix3x4f)(C(Transform) * __this, float m[]);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Transform, Matrix);
extern THIS_LIB_IMPORT void (* Transform_from_Matrix)(const C(Transform) * t, const C(Matrix) * value);
extern THIS_LIB_IMPORT void (* Transform_to_Matrix)(const C(Transform) * t, C(Matrix) * value);

extern THIS_LIB_IMPORT void (* Vector3D_add)(C(Vector3D) * __this, const C(Vector3D) * vector1, const C(Vector3D) * vector2);

extern THIS_LIB_IMPORT void (* Vector3D_crossProduct)(C(Vector3D) * __this, const C(Vector3D) * vector1, const C(Vector3D) * vector2);

extern THIS_LIB_IMPORT void (* Vector3D_divideMatrix)(C(Vector3D) * __this, const C(Vector3D) * v, const C(Matrix) * m);

extern THIS_LIB_IMPORT double (* Vector3D_dotProduct)(C(Vector3D) * __this, const C(Vector3D) * vector2);

extern THIS_LIB_IMPORT double (* Vector3D_dotProductf)(C(Vector3D) * __this, const C(Vector3Df) * vector2);

extern THIS_LIB_IMPORT void (* Vector3D_multMatrix)(C(Vector3D) * __this, const C(Vector3D) * source, const C(Matrix) * matrix);

extern THIS_LIB_IMPORT void (* Vector3D_multMatrixf)(C(Vector3D) * __this, const C(Vector3Df) * source, const C(Matrix) * matrix);

extern THIS_LIB_IMPORT void (* Vector3D_multQuaternion)(C(Vector3D) * __this, const C(Vector3D) * s, const C(Quaternion) * quat);

extern THIS_LIB_IMPORT void (* Vector3D_normalize)(C(Vector3D) * __this, const C(Vector3D) * source);

extern THIS_LIB_IMPORT void (* Vector3D_scale)(C(Vector3D) * __this, const C(Vector3D) * vector1, double s);

extern THIS_LIB_IMPORT void (* Vector3D_subtract)(C(Vector3D) * __this, const C(Vector3D) * vector1, const C(Vector3D) * vector2);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Vector3D, length);
extern THIS_LIB_IMPORT double (* Vector3D_get_length)(const C(Vector3D) * v);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Vector3D, lengthApprox);
extern THIS_LIB_IMPORT double (* Vector3D_get_lengthApprox)(const C(Vector3D) * v);

extern THIS_LIB_IMPORT void (* Vector3Df_add)(C(Vector3Df) * __this, const C(Vector3Df) * vector1, const C(Vector3Df) * vector2);

extern THIS_LIB_IMPORT void (* Vector3Df_crossProduct)(C(Vector3Df) * __this, const C(Vector3Df) * vector1, const C(Vector3Df) * vector2);

extern THIS_LIB_IMPORT void (* Vector3Df_divideMatrix)(C(Vector3Df) * __this, const C(Vector3Df) * source, const C(Matrix) * matrix);

extern THIS_LIB_IMPORT double (* Vector3Df_dotProduct)(C(Vector3Df) * __this, const C(Vector3Df) * vector2);

extern THIS_LIB_IMPORT void (* Vector3Df_multMatrix)(C(Vector3Df) * __this, const C(Vector3Df) * source, const C(Matrix) * matrix);

extern THIS_LIB_IMPORT void (* Vector3Df_multQuaternion)(C(Vector3Df) * __this, const C(Vector3Df) * source, const C(Quaternion) * quat);

extern THIS_LIB_IMPORT void (* Vector3Df_normalize)(C(Vector3Df) * __this, const C(Vector3Df) * source);

extern THIS_LIB_IMPORT void (* Vector3Df_scale)(C(Vector3Df) * __this, const C(Vector3Df) * vector1, float s);

extern THIS_LIB_IMPORT void (* Vector3Df_subtract)(C(Vector3Df) * __this, const C(Vector3Df) * vector1, const C(Vector3Df) * vector2);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Vector3Df, length);
extern THIS_LIB_IMPORT float (* Vector3Df_get_length)(const C(Vector3Df) * v);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Vector3Df, lengthApprox);
extern THIS_LIB_IMPORT float (* Vector3Df_get_lengthApprox)(const C(Vector3Df) * v);

extern THIS_LIB_IMPORT float (* F(fastInvSqrt))(float x);
extern THIS_LIB_IMPORT double (* F(fastInvSqrtDouble))(double x);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gfx  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
struct C(FMFont)
{
   C(LinkElement) link;
   byte __ecere_padding[16480];
};
typedef C(Instance) C(FontManager);
struct CM(FontManagerRenderer)
{
   C(FontManager) fm;
};
typedef struct C(HitRecord) C(HitRecord);
struct C(HitRecord)
{
   C(HitRecord) * prev;
   C(HitRecord) * next;
   uint pos;
   uint numTags;
   C(Vector3D) center;
   void * tags[1];
};
struct CM(Surface)
{
   int width;
   int height;
   C(Point) offset;
   C(Box) box;
   C(Box) unclippedBox;
   void * driverData;
   byte __ecere_padding[72];
};
#if CPP11
enum C(AlphaWriteMode) : int
#else
typedef int C(AlphaWriteMode);
enum C(AlphaWriteMode)
#endif
{
   AlphaWriteMode_dontWrite = 0x0,
   AlphaWriteMode_write = 0x1,
   AlphaWriteMode_blend = 0x2
};

typedef struct C(ColorKey) C(ColorKey);
typedef struct C(DisplaySystemResPtr) C(DisplaySystemResPtr);
typedef C(Instance) C(DrawList);
typedef C(Instance) C(DrawManager);
typedef struct C(Extent) C(Extent);
typedef struct C(FMFont) C(FMFont);
typedef struct C(FMPathDraw) C(FMPathDraw);
typedef struct C(FaceInfo) C(FaceInfo);
#if CPP11
enum C(FillModeValue) : int
#else
typedef int C(FillModeValue);
enum C(FillModeValue)
#endif
{
   FillModeValue_solid = 0x0,
   FillModeValue_wireframe = 0x1
};

typedef uint32 C(FontFlags);
typedef C(Instance) C(FontManagerRenderer);
typedef C(FontManagerRenderer) C(FontRenderer);
typedef C(Instance) C(Resource);
typedef C(Resource) C(FontResource);
typedef uint32 C(GLCapabilities);
#if CPP11
enum C(GradientDirection) : int
#else
typedef int C(GradientDirection);
enum C(GradientDirection)
#endif
{
   GradientDirection_vertical = 0x0,
   GradientDirection_horizontal = 0x1
};

#if CPP11
enum C(RenderState) : int
#else
typedef int C(RenderState);
enum C(RenderState)
#endif
{
   RenderState_fillMode = 0x1,
   RenderState_depthTest = 0x2,
   RenderState_depthWrite = 0x3,
   RenderState_fogDensity = 0x4,
   RenderState_fogColor = 0x5,
   RenderState_blend = 0x6,
   RenderState_ambient = 0x7,
   RenderState_alphaWrite = 0x8,
   RenderState_antiAlias = 0x9,
   RenderState_vSync = 0xA
};

#if CPP11
enum C(Resolution) : int
#else
typedef int C(Resolution);
enum C(Resolution)
#endif
{
   Resolution_resText80x25 = 0x0,
   Resolution_res320x200 = 0x1,
   Resolution_res320x240 = 0x2,
   Resolution_res320x400 = 0x3,
   Resolution_res360x480 = 0x4,
   Resolution_res400x256 = 0x5,
   Resolution_res400x300 = 0x6,
   Resolution_res512x256 = 0x7,
   Resolution_res512x384 = 0x8,
   Resolution_res640x200 = 0x9,
   Resolution_res640x350 = 0xA,
   Resolution_res640x400 = 0xB,
   Resolution_res640x480 = 0xC,
   Resolution_res720x348 = 0xD,
   Resolution_res800x600 = 0xE,
   Resolution_res856x480 = 0xF,
   Resolution_res960x720 = 0x10,
   Resolution_res1024x768 = 0x11,
   Resolution_res1152x864 = 0x12,
   Resolution_res1280x1024 = 0x13,
   Resolution_res1600x1200 = 0x14,
   Resolution_res768x480 = 0x15
};

typedef C(Instance) C(Surface);
// end -- moved backwards outputs
#define NumberOfLights (8)

typedef C(Instance) C(BitmapFormat);
typedef C(Resource) C(BitmapResource);
typedef uint16 C(Color444);
typedef uint16 C(Color555);
typedef uint16 C(Color565);
typedef struct C(ColorCMYK) C(ColorCMYK);
typedef struct C(ColorHSV) C(ColorHSV);
typedef struct C(ColorLab) C(ColorLab);
typedef uint32 C(ColorRGBA);
#if CPP11
enum C(DefinedColor) : uint
#else
typedef C(Color) C(DefinedColor);
enum C(DefinedColor)
#endif
{
   DefinedColor_black = 0x0,
   DefinedColor_dimGray = 0x696969,
   DefinedColor_dimGrey = 0x696969,
   DefinedColor_gray = 0x808080,
   DefinedColor_darkGray = 0xA9A9A5,
   DefinedColor_darkGrey = 0xA9A9A5,
   DefinedColor_silver = 0xC0C0C0,
   DefinedColor_lightGray = 0xD3D3D3,
   DefinedColor_lightGrey = 0xD3D3D3,
   DefinedColor_gainsboro = 0xDCDCDC,
   DefinedColor_whiteSmoke = 0xF5F5F5,
   DefinedColor_white = 0xFFFFFF,
   DefinedColor_rosyBrown = 0xBC8F8F,
   DefinedColor_indianRed = 0xCD5C5C,
   DefinedColor_brown = 0xA52A2A,
   DefinedColor_fireBrick = 0xB22222,
   DefinedColor_lightCoral = 0xF08080,
   DefinedColor_maroon = 0x800000,
   DefinedColor_darkRed = 0x8B0000,
   DefinedColor_red = 0xFF0000,
   DefinedColor_snow = 0xFFFAFA,
   DefinedColor_mistyRose = 0xFFE4E1,
   DefinedColor_salmon = 0xFA8072,
   DefinedColor_tomato = 0xFF6347,
   DefinedColor_darkSalmon = 0xE9967A,
   DefinedColor_coral = 0xFF7F50,
   DefinedColor_orangeRed = 0xFF4500,
   DefinedColor_lightSalmon = 0xFFA07A,
   DefinedColor_sienna = 0xA0522D,
   DefinedColor_seaShell = 0xFFF5EE,
   DefinedColor_chocolate = 0xD2691E,
   DefinedColor_saddleBrown = 0x8B4513,
   DefinedColor_sandyBrown = 0xF4A460,
   DefinedColor_peachPuff = 0xFFDAB9,
   DefinedColor_peru = 0xCD853F,
   DefinedColor_linen = 0xFAF0E6,
   DefinedColor_bisque = 0xFFE4C4,
   DefinedColor_darkOrange = 0xFF8C00,
   DefinedColor_burlyWood = 0xDEB887,
   DefinedColor_tan = 0xD2B48C,
   DefinedColor_antiqueWhite = 0xFAEBD7,
   DefinedColor_navajoWhite = 0xFFDEAD,
   DefinedColor_blanchedAlmond = 0xFFEBCD,
   DefinedColor_papayaWhip = 0xFFEFD5,
   DefinedColor_mocassin = 0xFFE4B5,
   DefinedColor_moccasin = 0xFFE4B5,
   DefinedColor_orange = 0xFFA500,
   DefinedColor_wheat = 0xF5DEB3,
   DefinedColor_oldLace = 0xFDF5E6,
   DefinedColor_floralWhite = 0xFFFAF0,
   DefinedColor_darkGoldenrod = 0xB8860B,
   DefinedColor_goldenrod = 0xDAA520,
   DefinedColor_cornsilk = 0xFFF8DC,
   DefinedColor_gold = 0xFFD700,
   DefinedColor_khaki = 0xF0E68C,
   DefinedColor_lemonChiffon = 0xFFFACD,
   DefinedColor_paleGoldenrod = 0xEEE8AA,
   DefinedColor_darkKhaki = 0xBDB76B,
   DefinedColor_beige = 0xF5F5DC,
   DefinedColor_lightGoldenRodYellow = 0xFAFAD2,
   DefinedColor_olive = 0x808000,
   DefinedColor_yellow = 0xFFFF00,
   DefinedColor_lightYellow = 0xFFFFE0,
   DefinedColor_ivory = 0xFFFFF0,
   DefinedColor_oliveDrab = 0x6B8E23,
   DefinedColor_yellowGreen = 0x9ACD32,
   DefinedColor_darkOliveGreen = 0x556B2F,
   DefinedColor_greenYellow = 0xADFF2F,
   DefinedColor_chartreuse = 0x7FFF00,
   DefinedColor_lawnGreen = 0x7CFC00,
   DefinedColor_darkSeaGreen = 0x8FBC8B,
   DefinedColor_forestGreen = 0x228B22,
   DefinedColor_limeGreen = 0x32CD32,
   DefinedColor_lightGreen = 0x90EE90,
   DefinedColor_paleGreen = 0x98FB98,
   DefinedColor_darkGreen = 0x6400,
   DefinedColor_green = 0x8000,
   DefinedColor_lime = 0xFF00,
   DefinedColor_honeyDew = 0xF0FFF0,
   DefinedColor_seaGreen = 0x2E8B57,
   DefinedColor_mediumSeaGreen = 0x3CB371,
   DefinedColor_springGreen = 0xFF7F,
   DefinedColor_mintCream = 0xF5FFFA,
   DefinedColor_mediumSpringGreen = 0xFA9A,
   DefinedColor_mediumAquaMarine = 0x66CDAA,
   DefinedColor_aquamarine = 0x7FFFD4,
   DefinedColor_turquoise = 0x40E0D0,
   DefinedColor_lightSeaGreen = 0x20B2AA,
   DefinedColor_mediumTurquoise = 0x48D1CC,
   DefinedColor_darkSlateGray = 0x2F4F4F,
   DefinedColor_darkSlateGrey = 0x2F4F4F,
   DefinedColor_paleTurquoise = 0xAFEEEE,
   DefinedColor_teal = 0x8080,
   DefinedColor_darkCyan = 0x8B8B,
   DefinedColor_aqua = 0xFFFF,
   DefinedColor_cyan = 0xFFFF,
   DefinedColor_lightCyan = 0xE0FFFF,
   DefinedColor_azure = 0xF0FFFF,
   DefinedColor_darkTurquoise = 0xCED1,
   DefinedColor_cadetBlue = 0x5F9EA0,
   DefinedColor_powderBlue = 0xB0E0E6,
   DefinedColor_lightBlue = 0xADD8E6,
   DefinedColor_deepSkyBlue = 0xBFFF,
   DefinedColor_skyBlue = 0x87CEEB,
   DefinedColor_lightSkyBlue = 0x87CEFA,
   DefinedColor_steelBlue = 0x4682B4,
   DefinedColor_aliceBlue = 0xF0F8FF,
   DefinedColor_dodgerBlue = 0x1E90FF,
   DefinedColor_slateGray = 0x708090,
   DefinedColor_slateGrey = 0x708090,
   DefinedColor_lightSlateGray = 0x778899,
   DefinedColor_lightSlateGrey = 0x778899,
   DefinedColor_lightSteelBlue = 0xB0C4DE,
   DefinedColor_cornflowerBlue = 0x6495ED,
   DefinedColor_royalBlue = 0x4169E1,
   DefinedColor_midnightBlue = 0x191970,
   DefinedColor_lavender = 0xE6E6FA,
   DefinedColor_navy = 0x80,
   DefinedColor_darkBlue = 0x8B,
   DefinedColor_mediumBlue = 0xCD,
   DefinedColor_blue = 0xFF,
   DefinedColor_ghostWhite = 0xF8F8FF,
   DefinedColor_slateBlue = 0x6A5ACD,
   DefinedColor_darkSlateBlue = 0x483D8B,
   DefinedColor_mediumSlateBlue = 0x7B68EE,
   DefinedColor_mediumPurple = 0x9370DB,
   DefinedColor_blueViolet = 0x8A2BE2,
   DefinedColor_indigo = 0x4B0082,
   DefinedColor_darkOrchid = 0x9932CC,
   DefinedColor_darkViolet = 0x9400D3,
   DefinedColor_mediumOrchid = 0xBA55D3,
   DefinedColor_thistle = 0xD8BFD8,
   DefinedColor_plum = 0xDDA0DD,
   DefinedColor_violet = 0xEE82EE,
   DefinedColor_purple = 0x800080,
   DefinedColor_darkMagenta = 0x8B008B,
   DefinedColor_magenta = 0xFF00FF,
   DefinedColor_fuschia = 0xFF00FF,
   DefinedColor_orchid = 0xDA70D6,
   DefinedColor_mediumVioletRed = 0xC71585,
   DefinedColor_deepPink = 0xFF1493,
   DefinedColor_hotPink = 0xFF9BB4,
   DefinedColor_lavenderBlush = 0xFFF0F5,
   DefinedColor_paleVioletRed = 0xDB7093,
   DefinedColor_crimson = 0xDC143C,
   DefinedColor_pink = 0xFFC0CB,
   DefinedColor_lightPink = 0xFFB6C1
};

typedef struct C(DrawSlot) C(DrawSlot);
typedef uint16 C(FMTextAlignment);
#if CPP11
enum C(FMVerticalAlignment) : int
#else
typedef int C(FMVerticalAlignment);
enum C(FMVerticalAlignment)
#endif
{
   FMVerticalAlignment_baseline = 0x0,
   FMVerticalAlignment_top = 0x1,
   FMVerticalAlignment_middle = 0x2,
   FMVerticalAlignment_bottom = 0x3
};

typedef struct C(FontInfo) C(FontInfo);
#if CPP11
enum C(GLSamplesCount) : int
#else
typedef int C(GLSamplesCount);
enum C(GLSamplesCount)
#endif
{
   GLSamplesCount_none = 0x0,
   GLSamplesCount_ms2 = 0x1,
   GLSamplesCount_ms4 = 0x2,
   GLSamplesCount_ms8 = 0x3,
   GLSamplesCount_ms16 = 0x4
};

typedef struct C(RenderStateFloat) C(RenderStateFloat);
#if CPP11
enum C(SystemColor) : uint
#else
typedef C(Color) C(SystemColor);
enum C(SystemColor)
#endif
{
   SystemColor_formColor = 0xE5EAF5,
   SystemColor_activeBorder = 0xE5EAF5,
   SystemColor_control = 0xD4D0C8,
   SystemColor_controlLight = 0xD4D0C8,
   SystemColor_inactiveBorder = 0xD4D0C8,
   SystemColor_inactiveCaptionText = 0xD4D0C8,
   SystemColor_menu = 0xD4D0C8,
   SystemColor_scrollBar = 0xD4D0C8
};

extern THIS_LIB_IMPORT C(bool) (* Bitmap_allocate)(C(Bitmap) __this, const char * driverName, int width, int height, int stride, C(PixelFormat) format, C(bool) allocatePalette);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_allocateDD)(C(Bitmap) __this, C(DisplaySystem) displaySystem, int width, int height);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_convert)(C(Bitmap) __this, C(DisplaySystem) displaySystem, C(PixelFormat) format, C(ColorAlpha) * palette);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_copy)(C(Bitmap) __this, C(Bitmap) source);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_copy2)(C(Bitmap) __this, C(Bitmap) source, C(bool) moveStuff);

extern THIS_LIB_IMPORT void (* Bitmap_free)(C(Bitmap) __this);

extern THIS_LIB_IMPORT C(Surface) (* Bitmap_getSurface)(C(Bitmap) __this, int x, int y, C(Box) * clip);

extern THIS_LIB_IMPORT void (* Bitmap_grab)(C(Bitmap) __this, C(Bitmap) src, int x, int y);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_load)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_loadFromFile)(C(Bitmap) __this, C(File) file, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_loadGrayed)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_loadMipMaps)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_loadMonochrome)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_loadT)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_loadTMipMaps)(C(Bitmap) __this, const char * fileName, const char * type, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_makeDD)(C(Bitmap) __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_makeMipMaps)(C(Bitmap) __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(Bitmap) (* Bitmap_processDD)(C(Bitmap) __this, C(bool) mipMaps, uint cubeMapFace, C(bool) compress, int maxTextureSize, C(bool) makePow2, int enforcedWidth, int enforcedHeight);

extern THIS_LIB_IMPORT C(ColorAlpha) * (* Bitmap_quantize)(C(Bitmap) __this, uint start, uint end);

extern THIS_LIB_IMPORT C(bool) (* Bitmap_save)(C(Bitmap) __this, const char * fileName, const char * type, void * options);

extern THIS_LIB_IMPORT void (* Bitmap_smoothEdges)(C(Bitmap) __this, int size);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, fileName);
extern THIS_LIB_IMPORT void (* BitmapResource_set_fileName)(const C(BitmapResource) b, const char * value);
extern THIS_LIB_IMPORT const char * (* BitmapResource_get_fileName)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, grayed);
extern THIS_LIB_IMPORT void (* BitmapResource_set_grayed)(const C(BitmapResource) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_get_grayed)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, monochrome);
extern THIS_LIB_IMPORT void (* BitmapResource_set_monochrome)(const C(BitmapResource) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_get_monochrome)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, transparent);
extern THIS_LIB_IMPORT void (* BitmapResource_set_transparent)(const C(BitmapResource) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_get_transparent)(const C(BitmapResource) b);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_isSet_transparent)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, alphaBlend);
extern THIS_LIB_IMPORT void (* BitmapResource_set_alphaBlend)(const C(BitmapResource) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_get_alphaBlend)(const C(BitmapResource) b);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_isSet_alphaBlend)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, mipMaps);
extern THIS_LIB_IMPORT void (* BitmapResource_set_mipMaps)(const C(BitmapResource) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_get_mipMaps)(const C(BitmapResource) b);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_isSet_mipMaps)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, keepData);
extern THIS_LIB_IMPORT void (* BitmapResource_set_keepData)(const C(BitmapResource) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* BitmapResource_get_keepData)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, bitmap);
extern THIS_LIB_IMPORT void (* BitmapResource_set_bitmap)(const C(BitmapResource) b, C(Bitmap) value);
extern THIS_LIB_IMPORT C(Bitmap) (* BitmapResource_get_bitmap)(const C(BitmapResource) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(BitmapResource, window);
extern THIS_LIB_IMPORT void (* BitmapResource_set_window)(const C(BitmapResource) b, C(Window) value);

#define COLOR_r_SHIFT                                    16
#define COLOR_r_MASK                                     0xFF0000
#define COLOR_r(x)                                       ((((C(Color))(x)) & COLOR_r_MASK) >> COLOR_r_SHIFT)
#define COLOR_SET_r(x, r)                                (x) = ((C(Color))(x) & ~((C(Color))COLOR_r_MASK)) | (((C(Color))(r)) << COLOR_r_SHIFT)
#define COLOR_g_SHIFT                                    8
#define COLOR_g_MASK                                     0xFF00
#define COLOR_g(x)                                       ((((C(Color))(x)) & COLOR_g_MASK) >> COLOR_g_SHIFT)
#define COLOR_SET_g(x, g)                                (x) = ((C(Color))(x) & ~((C(Color))COLOR_g_MASK)) | (((C(Color))(g)) << COLOR_g_SHIFT)
#define COLOR_b_SHIFT                                    0
#define COLOR_b_MASK                                     0xFF
#define COLOR_b(x)                                       ((((C(Color))(x)) & COLOR_b_MASK) >> COLOR_b_SHIFT)
#define COLOR_SET_b(x, b)                                (x) = ((C(Color))(x) & ~((C(Color))COLOR_b_MASK)) | (((C(Color))(b)) << COLOR_b_SHIFT)
#define COLOR(r, g, b)                                   (((((C(Color))(r)) << COLOR_r_SHIFT) | ((C(Color))(g)) << COLOR_g_SHIFT) | ((C(Color))(b)) << COLOR_b_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(Color, ColorRGB);
extern THIS_LIB_IMPORT C(Color) (* Color_from_ColorRGB)(const C(ColorRGB) * colorRGB);
extern THIS_LIB_IMPORT void (* Color_to_ColorRGB)(const C(Color) color, C(ColorRGB) * value);

#define COLOR444_r_SHIFT                                 8
#define COLOR444_r_MASK                                  0xF00
#define COLOR444_r(x)                                    ((((C(Color444))(x)) & COLOR444_r_MASK) >> COLOR444_r_SHIFT)
#define COLOR444_SET_r(x, r)                             (x) = ((C(Color444))(x) & ~((C(Color444))COLOR444_r_MASK)) | (((C(Color444))(r)) << COLOR444_r_SHIFT)
#define COLOR444_g_SHIFT                                 4
#define COLOR444_g_MASK                                  0xF0
#define COLOR444_g(x)                                    ((((C(Color444))(x)) & COLOR444_g_MASK) >> COLOR444_g_SHIFT)
#define COLOR444_SET_g(x, g)                             (x) = ((C(Color444))(x) & ~((C(Color444))COLOR444_g_MASK)) | (((C(Color444))(g)) << COLOR444_g_SHIFT)
#define COLOR444_b_SHIFT                                 0
#define COLOR444_b_MASK                                  0xF
#define COLOR444_b(x)                                    ((((C(Color444))(x)) & COLOR444_b_MASK) >> COLOR444_b_SHIFT)
#define COLOR444_SET_b(x, b)                             (x) = ((C(Color444))(x) & ~((C(Color444))COLOR444_b_MASK)) | (((C(Color444))(b)) << COLOR444_b_SHIFT)
#define COLOR444(r, g, b)                                (((((C(Color444))(r)) << COLOR444_r_SHIFT) | ((C(Color444))(g)) << COLOR444_g_SHIFT) | ((C(Color444))(b)) << COLOR444_b_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(Color444, Color);
extern THIS_LIB_IMPORT C(Color444) (* Color444_from_Color)(const C(Color) color);
extern THIS_LIB_IMPORT C(Color) (* Color444_to_Color)(const C(Color444) color444);

#define COLOR555_r_SHIFT                                 10
#define COLOR555_r_MASK                                  0x7C00
#define COLOR555_r(x)                                    ((((C(Color555))(x)) & COLOR555_r_MASK) >> COLOR555_r_SHIFT)
#define COLOR555_SET_r(x, r)                             (x) = ((C(Color555))(x) & ~((C(Color555))COLOR555_r_MASK)) | (((C(Color555))(r)) << COLOR555_r_SHIFT)
#define COLOR555_g_SHIFT                                 5
#define COLOR555_g_MASK                                  0x3E0
#define COLOR555_g(x)                                    ((((C(Color555))(x)) & COLOR555_g_MASK) >> COLOR555_g_SHIFT)
#define COLOR555_SET_g(x, g)                             (x) = ((C(Color555))(x) & ~((C(Color555))COLOR555_g_MASK)) | (((C(Color555))(g)) << COLOR555_g_SHIFT)
#define COLOR555_b_SHIFT                                 0
#define COLOR555_b_MASK                                  0x1F
#define COLOR555_b(x)                                    ((((C(Color555))(x)) & COLOR555_b_MASK) >> COLOR555_b_SHIFT)
#define COLOR555_SET_b(x, b)                             (x) = ((C(Color555))(x) & ~((C(Color555))COLOR555_b_MASK)) | (((C(Color555))(b)) << COLOR555_b_SHIFT)
#define COLOR555(r, g, b)                                (((((C(Color555))(r)) << COLOR555_r_SHIFT) | ((C(Color555))(g)) << COLOR555_g_SHIFT) | ((C(Color555))(b)) << COLOR555_b_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(Color555, Color);
extern THIS_LIB_IMPORT C(Color555) (* Color555_from_Color)(const C(Color) color);
extern THIS_LIB_IMPORT C(Color) (* Color555_to_Color)(const C(Color555) color555);

#define COLOR565_r_SHIFT                                 11
#define COLOR565_r_MASK                                  0xF800
#define COLOR565_r(x)                                    ((((C(Color565))(x)) & COLOR565_r_MASK) >> COLOR565_r_SHIFT)
#define COLOR565_SET_r(x, r)                             (x) = ((C(Color565))(x) & ~((C(Color565))COLOR565_r_MASK)) | (((C(Color565))(r)) << COLOR565_r_SHIFT)
#define COLOR565_g_SHIFT                                 5
#define COLOR565_g_MASK                                  0x7E0
#define COLOR565_g(x)                                    ((((C(Color565))(x)) & COLOR565_g_MASK) >> COLOR565_g_SHIFT)
#define COLOR565_SET_g(x, g)                             (x) = ((C(Color565))(x) & ~((C(Color565))COLOR565_g_MASK)) | (((C(Color565))(g)) << COLOR565_g_SHIFT)
#define COLOR565_b_SHIFT                                 0
#define COLOR565_b_MASK                                  0x1F
#define COLOR565_b(x)                                    ((((C(Color565))(x)) & COLOR565_b_MASK) >> COLOR565_b_SHIFT)
#define COLOR565_SET_b(x, b)                             (x) = ((C(Color565))(x) & ~((C(Color565))COLOR565_b_MASK)) | (((C(Color565))(b)) << COLOR565_b_SHIFT)
#define COLOR565(r, g, b)                                (((((C(Color565))(r)) << COLOR565_r_SHIFT) | ((C(Color565))(g)) << COLOR565_g_SHIFT) | ((C(Color565))(b)) << COLOR565_b_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(Color565, Color);
extern THIS_LIB_IMPORT C(Color565) (* Color565_from_Color)(const C(Color) color);
extern THIS_LIB_IMPORT C(Color) (* Color565_to_Color)(const C(Color565) color565);

#define COLORALPHA_a_SHIFT                               24
#define COLORALPHA_a_MASK                                0xFF000000
#define COLORALPHA_a(x)                                  ((((C(ColorAlpha))(x)) & COLORALPHA_a_MASK) >> COLORALPHA_a_SHIFT)
#define COLORALPHA_SET_a(x, a)                           (x) = ((C(ColorAlpha))(x) & ~((C(ColorAlpha))COLORALPHA_a_MASK)) | (((C(ColorAlpha))(a)) << COLORALPHA_a_SHIFT)
#define COLORALPHA_color_SHIFT                           0
#define COLORALPHA_color_MASK                            0xFFFFFF
#define COLORALPHA_color(x)                              ((((C(ColorAlpha))(x)) & COLORALPHA_color_MASK) >> COLORALPHA_color_SHIFT)
#define COLORALPHA_SET_color(x, color)                       (x) = ((C(ColorAlpha))(x) & ~((C(ColorAlpha))COLORALPHA_color_MASK)) | (((C(ColorAlpha))(color)) << COLORALPHA_color_SHIFT)
#define COLORALPHA(a, color)                                ((((C(ColorAlpha))(a)) << COLORALPHA_a_SHIFT) | ((C(ColorAlpha))(color)) << COLORALPHA_color_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorAlpha, Color);
extern THIS_LIB_IMPORT C(ColorAlpha) (* ColorAlpha_from_Color)(const C(Color) color);
extern THIS_LIB_IMPORT C(Color) (* ColorAlpha_to_Color)(const C(ColorAlpha) colorAlpha);

struct C(ColorCMYK)
{
   float c;
   float m;
   float y;
   float k;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorCMYK, ColorRGB);
extern THIS_LIB_IMPORT void (* ColorCMYK_from_ColorRGB)(const C(ColorCMYK) * c, const C(ColorRGB) * value);
extern THIS_LIB_IMPORT void (* ColorCMYK_to_ColorRGB)(const C(ColorCMYK) * c, C(ColorRGB) * value);

struct C(ColorHSV)
{
   C(Angle) h;
   float s;
   float v;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorHSV, ColorRGB);
extern THIS_LIB_IMPORT void (* ColorHSV_from_ColorRGB)(const C(ColorHSV) * c, const C(ColorRGB) * value);
extern THIS_LIB_IMPORT void (* ColorHSV_to_ColorRGB)(const C(ColorHSV) * c, C(ColorRGB) * value);

struct C(ColorKey)
{
   C(ColorAlpha) color;
   float percent;
};
struct C(ColorLab)
{
   float l;
   float a;
   float b;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorLab, ColorRGB);
extern THIS_LIB_IMPORT void (* ColorLab_from_ColorRGB)(const C(ColorLab) * c, const C(ColorRGB) * value);
extern THIS_LIB_IMPORT void (* ColorLab_to_ColorRGB)(const C(ColorLab) * c, C(ColorRGB) * value);

#define COLORRGBA_r_SHIFT                                0
#define COLORRGBA_r_MASK                                 0xFF
#define COLORRGBA_r(x)                                   ((((C(ColorRGBA))(x)) & COLORRGBA_r_MASK) >> COLORRGBA_r_SHIFT)
#define COLORRGBA_SET_r(x, r)                            (x) = ((C(ColorRGBA))(x) & ~((C(ColorRGBA))COLORRGBA_r_MASK)) | (((C(ColorRGBA))(r)) << COLORRGBA_r_SHIFT)
#define COLORRGBA_g_SHIFT                                8
#define COLORRGBA_g_MASK                                 0xFF00
#define COLORRGBA_g(x)                                   ((((C(ColorRGBA))(x)) & COLORRGBA_g_MASK) >> COLORRGBA_g_SHIFT)
#define COLORRGBA_SET_g(x, g)                            (x) = ((C(ColorRGBA))(x) & ~((C(ColorRGBA))COLORRGBA_g_MASK)) | (((C(ColorRGBA))(g)) << COLORRGBA_g_SHIFT)
#define COLORRGBA_b_SHIFT                                16
#define COLORRGBA_b_MASK                                 0xFF0000
#define COLORRGBA_b(x)                                   ((((C(ColorRGBA))(x)) & COLORRGBA_b_MASK) >> COLORRGBA_b_SHIFT)
#define COLORRGBA_SET_b(x, b)                            (x) = ((C(ColorRGBA))(x) & ~((C(ColorRGBA))COLORRGBA_b_MASK)) | (((C(ColorRGBA))(b)) << COLORRGBA_b_SHIFT)
#define COLORRGBA_a_SHIFT                                24
#define COLORRGBA_a_MASK                                 0xFF000000
#define COLORRGBA_a(x)                                   ((((C(ColorRGBA))(x)) & COLORRGBA_a_MASK) >> COLORRGBA_a_SHIFT)
#define COLORRGBA_SET_a(x, a)                            (x) = ((C(ColorRGBA))(x) & ~((C(ColorRGBA))COLORRGBA_a_MASK)) | (((C(ColorRGBA))(a)) << COLORRGBA_a_SHIFT)
#define COLORRGBA(r, g, b, a)                             ((((((C(ColorRGBA))(r)) << COLORRGBA_r_SHIFT) | ((C(ColorRGBA))(g)) << COLORRGBA_g_SHIFT) | ((C(ColorRGBA))(b)) << COLORRGBA_b_SHIFT) | ((C(ColorRGBA))(a)) << COLORRGBA_a_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorRGBA, ColorAlpha);
extern THIS_LIB_IMPORT C(ColorRGBA) (* ColorRGBA_from_ColorAlpha)(const C(ColorAlpha) colorAlpha);
extern THIS_LIB_IMPORT C(ColorAlpha) (* ColorRGBA_to_ColorAlpha)(const C(ColorRGBA) colorRGBA);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorRGBA, Color);
extern THIS_LIB_IMPORT C(ColorRGBA) (* ColorRGBA_from_Color)(const C(Color) color);
extern THIS_LIB_IMPORT C(Color) (* ColorRGBA_to_Color)(const C(ColorRGBA) colorRGBA);

struct C(ColorRGBAf)
{
   float r;
   float g;
   float b;
   float a;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorRGBAf, ColorAlpha);
extern THIS_LIB_IMPORT void (* ColorRGBAf_from_ColorAlpha)(const C(ColorRGBAf) * c, C(ColorAlpha) value);
extern THIS_LIB_IMPORT C(ColorAlpha) (* ColorRGBAf_to_ColorAlpha)(const C(ColorRGBAf) * c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorRGBAf, Color);
extern THIS_LIB_IMPORT void (* ColorRGBAf_from_Color)(const C(ColorRGBAf) * c, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* ColorRGBAf_to_Color)(const C(ColorRGBAf) * c);

extern THIS_LIB_IMPORT C(bool) (* CubeMap_load)(C(CubeMap) __this, C(DisplaySystem) displaySystem, constString * names, constString extension, C(bool) oldStyle);

extern THIS_LIB_IMPORT C(bool) (* CubeMap_loadFromFiles)(C(CubeMap) __this, C(DisplaySystem) displaySystem, C(File) files[], constString extension, C(bool) oldStyle);

extern THIS_LIB_IMPORT void (* Display_applyMaterial)(C(Display) __this, C(Material) * material, C(Mesh) * mesh);

extern THIS_LIB_IMPORT void (* Display_collectHits)(C(Display) __this);

extern THIS_LIB_IMPORT C(bool) (* Display_create)(C(Display) __this, C(DisplaySystem) displaySystem, void * window);

extern THIS_LIB_IMPORT C(bool) (* Display_drawMesh)(C(Display) __this, C(Object) * object);

extern THIS_LIB_IMPORT C(bool) (* Display_drawMeshEx)(C(Display) __this, C(Object) * object, uint64 * id);

extern THIS_LIB_IMPORT C(bool) (* Display_drawObject)(C(Display) __this, C(Object) * object);

extern THIS_LIB_IMPORT C(bool) (* Display_drawObjectEx)(C(Display) __this, C(Object) * object, uint64 * id);

extern THIS_LIB_IMPORT void (* Display_drawPrimitives)(C(Display) __this, C(PrimitiveSingle) * primitive, C(Mesh) * mesh);

extern THIS_LIB_IMPORT void (* Display_drawTranslucency)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_endUpdate)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_fontExtent)(C(Display) __this, C(Font) * font, const char * text, int len, int * width, int * height);

extern THIS_LIB_IMPORT void (* Display_fontExtent2)(C(Display) __this, C(Font) * font, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);

extern THIS_LIB_IMPORT int (* Display_getHits)(C(Display) __this, C(OldList) * list);

extern THIS_LIB_IMPORT C(bool) (* Display_getIntersect)(C(Display) __this, C(Vector3D) * intersect);

extern THIS_LIB_IMPORT C(Surface) (* Display_getSurface)(C(Display) __this, int x, int y, C(Box) * clip);

extern THIS_LIB_IMPORT C(bool) (* Display_grab)(C(Display) __this, C(Bitmap) bitmap, int x, int y, int w, int h);

extern THIS_LIB_IMPORT void (* Display_intersectPolygons)(C(Display) __this);

extern THIS_LIB_IMPORT C(bool) (* Display_isObjectVisible)(C(Display) __this, C(Object) * object);

extern THIS_LIB_IMPORT C(bool) (* Display_lock)(C(Display) __this, C(bool) render);

extern THIS_LIB_IMPORT void (* Display_nextPage)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_popMatrix)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_position)(C(Display) __this, int x, int y);

extern THIS_LIB_IMPORT void (* Display_pushMatrix)(C(Display) __this);

extern THIS_LIB_IMPORT C(bool) (* Display_resize)(C(Display) __this, int width, int height);

extern THIS_LIB_IMPORT void (* Display_restorePalette)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_scroll)(C(Display) __this, C(Box) * scroll, int x, int y, C(Extent) * dirty);

extern THIS_LIB_IMPORT void (* Display_selectMesh)(C(Display) __this, C(Mesh) * mesh);

extern THIS_LIB_IMPORT void (* Display_setCamera)(C(Display) __this, C(Surface) surface, const C(Camera) camera);

extern THIS_LIB_IMPORT void (* Display_setCameraVR)(C(Display) __this, C(Camera) camera, int eye, int w, int h, C(GLFB) * output, const C(Matrix) * prjMat);

extern THIS_LIB_IMPORT void (* Display_setLight)(C(Display) __this, int id, C(Light) * light);

extern THIS_LIB_IMPORT void (* Display_setLights)(C(Display) __this, C(Object) * object);

extern THIS_LIB_IMPORT void (* Display_setPalette)(C(Display) __this, C(ColorAlpha) * palette, C(bool) colorMatch);

extern THIS_LIB_IMPORT void (* Display_setTransform)(C(Display) __this, C(Matrix) * matrix, C(bool) viewSpace);

extern THIS_LIB_IMPORT void (* Display_startSelection)(C(Display) __this, int pickX, int pickY, int pickW, int pickH);

extern THIS_LIB_IMPORT void (* Display_startUpdate)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_stopSelection)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_unlock)(C(Display) __this);

extern THIS_LIB_IMPORT void (* Display_update)(C(Display) __this, C(Box) * updateBox);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, fillMode);
extern THIS_LIB_IMPORT void (* Display_set_fillMode)(const C(Display) d, C(FillModeValue) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, depthTest);
extern THIS_LIB_IMPORT void (* Display_set_depthTest)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, depthWrite);
extern THIS_LIB_IMPORT void (* Display_set_depthWrite)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, fogDensity);
extern THIS_LIB_IMPORT void (* Display_set_fogDensity)(const C(Display) d, float value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, fogColor);
extern THIS_LIB_IMPORT void (* Display_set_fogColor)(const C(Display) d, C(Color) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, blend);
extern THIS_LIB_IMPORT void (* Display_set_blend)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, ambient);
extern THIS_LIB_IMPORT void (* Display_set_ambient)(const C(Display) d, C(Color) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, alphaWrite);
extern THIS_LIB_IMPORT void (* Display_set_alphaWrite)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, antiAlias);
extern THIS_LIB_IMPORT void (* Display_set_antiAlias)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, vSync);
extern THIS_LIB_IMPORT void (* Display_set_vSync)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, pickingPlanes);
extern THIS_LIB_IMPORT void (* Display_set_pickingPlanes)(const C(Display) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, maxFullSort);
extern THIS_LIB_IMPORT void (* Display_set_maxFullSort)(const C(Display) d, int value);
extern THIS_LIB_IMPORT int (* Display_get_maxFullSort)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, fullProjCheck);
extern THIS_LIB_IMPORT void (* Display_set_fullProjCheck)(const C(Display) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Display_get_fullProjCheck)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, flags);
extern THIS_LIB_IMPORT C(DisplayFlags) (* Display_get_flags)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, pixelFormat);
extern THIS_LIB_IMPORT C(PixelFormat) (* Display_get_pixelFormat)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, alphaBlend);
extern THIS_LIB_IMPORT void (* Display_set_alphaBlend)(const C(Display) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Display_get_alphaBlend)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, useSharedMemory);
extern THIS_LIB_IMPORT void (* Display_set_useSharedMemory)(const C(Display) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Display_get_useSharedMemory)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, systemWindow);
extern THIS_LIB_IMPORT void * (* Display_get_systemWindow)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, displaySystem);
extern THIS_LIB_IMPORT C(DisplaySystem) (* Display_get_displaySystem)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, glCapabilities);
extern THIS_LIB_IMPORT void (* Display_set_glCapabilities)(const C(Display) d, C(GLCapabilities) value);
extern THIS_LIB_IMPORT C(GLCapabilities) (* Display_get_glCapabilities)(const C(Display) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Display, glVersion);
extern THIS_LIB_IMPORT int (* Display_get_glVersion)(const C(Display) d);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, allocateBitmap);
// C(bool) DisplayDriver_allocateBitmap(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Bitmap) ap2, int ap3, int ap4, int ap5, C(PixelFormat) ap6, C(bool) ap7);
#define DisplayDriver_allocateBitmap(__i, ap1, ap2, ap3, ap4, ap5, ap6, ap7) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, allocateBitmap, __i, C(bool), \
      C(DisplaySystem) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG C(PixelFormat) _ARG C(bool), \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5 _ARG ap6 _ARG ap7)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, allocateBitmap);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, allocateIndices);
// void * DisplayDriver_allocateIndices(C(DisplayDriver) __i, C(DisplaySystem) ap1, int nIndices, C(bool) indices32bit);
#define DisplayDriver_allocateIndices(__i, ap1, nIndices, indices32bit) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, allocateIndices, __i, void *, \
      C(DisplaySystem) _ARG int _ARG C(bool), \
      ap1 _ARG nIndices _ARG indices32bit)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, allocateIndices);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, allocateMesh);
// C(bool) DisplayDriver_allocateMesh(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Mesh) * ap2, C(MeshFeatures) ap3, int nVertices);
#define DisplayDriver_allocateMesh(__i, ap1, ap2, ap3, nVertices) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, allocateMesh, __i, C(bool), \
      C(DisplaySystem) _ARG C(Mesh) * _ARG C(MeshFeatures) _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG nVertices)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, allocateMesh);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, applyMaterial);
// void DisplayDriver_applyMaterial(C(DisplayDriver) __i, C(Display) ap1, C(Material) * ap2, C(Mesh) * ap3);
#define DisplayDriver_applyMaterial(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, applyMaterial, __i, void, \
      C(Display) _ARG C(Material) * _ARG C(Mesh) *, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, applyMaterial);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, area);
// void DisplayDriver_area(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, int x1, int y1, int x2, int y2);
#define DisplayDriver_area(__i, ap1, ap2, x1, y1, x2, y2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, area, __i, void, \
      C(Display) _ARG C(Surface) _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG x1 _ARG y1 _ARG x2 _ARG y2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, area);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, blit);
// void DisplayDriver_blit(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, int dx, int dy, int sx, int sy, int w, int h);
#define DisplayDriver_blit(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, blit, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, blit);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, blitDI);
// void DisplayDriver_blitDI(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, int dx, int dy, int sx, int sy, int w, int h);
#define DisplayDriver_blitDI(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, blitDI, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, blitDI);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, clear);
// void DisplayDriver_clear(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(ClearType) ap3);
#define DisplayDriver_clear(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, clear, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(ClearType), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, clear);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, clip);
// void DisplayDriver_clip(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Box) * ap3);
#define DisplayDriver_clip(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, clip, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Box) *, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, clip);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, convertBitmap);
// C(bool) DisplayDriver_convertBitmap(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Bitmap) ap2, C(PixelFormat) ap3, C(ColorAlpha) * ap4);
#define DisplayDriver_convertBitmap(__i, ap1, ap2, ap3, ap4) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, convertBitmap, __i, C(bool), \
      C(DisplaySystem) _ARG C(Bitmap) _ARG C(PixelFormat) _ARG C(ColorAlpha) *, \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, convertBitmap);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, createDisplay);
// C(bool) DisplayDriver_createDisplay(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_createDisplay(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, createDisplay, __i, C(bool), \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, createDisplay);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, createDisplaySystem);
// C(bool) DisplayDriver_createDisplaySystem(C(DisplayDriver) __i, C(DisplaySystem) ap1);
#define DisplayDriver_createDisplaySystem(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, createDisplaySystem, __i, C(bool), \
      C(DisplaySystem), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, createDisplaySystem);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, destroyDisplay);
// void DisplayDriver_destroyDisplay(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_destroyDisplay(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, destroyDisplay, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, destroyDisplay);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, destroyDisplaySystem);
// void DisplayDriver_destroyDisplaySystem(C(DisplayDriver) __i, C(DisplaySystem) ap1);
#define DisplayDriver_destroyDisplaySystem(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, destroyDisplaySystem, __i, void, \
      C(DisplaySystem), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, destroyDisplaySystem);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, displayPosition);
// void DisplayDriver_displayPosition(C(DisplayDriver) __i, C(Display) ap1, int ap2, int ap3);
#define DisplayDriver_displayPosition(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, displayPosition, __i, void, \
      C(Display) _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, displayPosition);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, displaySize);
// C(bool) DisplayDriver_displaySize(C(DisplayDriver) __i, C(Display) ap1, int ap2, int ap3);
#define DisplayDriver_displaySize(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, displaySize, __i, C(bool), \
      C(Display) _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, displaySize);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, drawLine);
// void DisplayDriver_drawLine(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, int x1, int y1, int x2, int y2);
#define DisplayDriver_drawLine(__i, ap1, ap2, x1, y1, x2, y2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, drawLine, __i, void, \
      C(Display) _ARG C(Surface) _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG x1 _ARG y1 _ARG x2 _ARG y2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, drawLine);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, drawPrimitives);
// void DisplayDriver_drawPrimitives(C(DisplayDriver) __i, C(Display) ap1, C(PrimitiveSingle) * ap2, C(Mesh) * mesh);
#define DisplayDriver_drawPrimitives(__i, ap1, ap2, mesh) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, drawPrimitives, __i, void, \
      C(Display) _ARG C(PrimitiveSingle) * _ARG C(Mesh) *, \
      ap1 _ARG ap2 _ARG mesh)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, drawPrimitives);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, drawingChar);
// void DisplayDriver_drawingChar(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, char ch);
#define DisplayDriver_drawingChar(__i, ap1, ap2, ch) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, drawingChar, __i, void, \
      C(Display) _ARG C(Surface) _ARG char, \
      ap1 _ARG ap2 _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, drawingChar);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, endUpdate);
// void DisplayDriver_endUpdate(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_endUpdate(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, endUpdate, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, endUpdate);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, filter);
// void DisplayDriver_filter(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
#define DisplayDriver_filter(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h, sw, sh) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, filter, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h _ARG sw _ARG sh)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, filter);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, filterDI);
// void DisplayDriver_filterDI(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
#define DisplayDriver_filterDI(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h, sw, sh) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, filterDI, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h _ARG sw _ARG sh)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, filterDI);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, fontExtent);
// void DisplayDriver_fontExtent(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Font) * ap2, constString text, int len, int * tw, int * th, int prevGlyph, int * rPrevGlyph, int * overHang);
#define DisplayDriver_fontExtent(__i, ap1, ap2, text, len, tw, th, prevGlyph, rPrevGlyph, overHang) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, fontExtent, __i, void, \
      C(DisplaySystem) _ARG C(Font) * _ARG constString _ARG int _ARG int * _ARG int * _ARG int _ARG int * _ARG int *, \
      ap1 _ARG ap2 _ARG text _ARG len _ARG tw _ARG th _ARG prevGlyph _ARG rPrevGlyph _ARG overHang)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, fontExtent);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, freeBitmap);
// void DisplayDriver_freeBitmap(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Bitmap) ap2);
#define DisplayDriver_freeBitmap(__i, ap1, ap2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, freeBitmap, __i, void, \
      C(DisplaySystem) _ARG C(Bitmap), \
      ap1 _ARG ap2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, freeBitmap);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, freeIndices);
// void DisplayDriver_freeIndices(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(PrimitiveSingle) * group);
#define DisplayDriver_freeIndices(__i, ap1, group) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, freeIndices, __i, void, \
      C(DisplaySystem) _ARG C(PrimitiveSingle) *, \
      ap1 _ARG group)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, freeIndices);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, freeMesh);
// void DisplayDriver_freeMesh(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Mesh) * ap2);
#define DisplayDriver_freeMesh(__i, ap1, ap2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, freeMesh, __i, void, \
      C(DisplaySystem) _ARG C(Mesh) *, \
      ap1 _ARG ap2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, freeMesh);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, getBitmapSurface);
// C(bool) DisplayDriver_getBitmapSurface(C(DisplayDriver) __i, C(DisplaySystem) displaySystem, C(Surface) surface, C(Bitmap) bitmap, int ap1, int ap2, C(Box) * ap3);
#define DisplayDriver_getBitmapSurface(__i, displaySystem, surface, bitmap, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, getBitmapSurface, __i, C(bool), \
      C(DisplaySystem) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG C(Box) *, \
      displaySystem _ARG surface _ARG bitmap _ARG ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, getBitmapSurface);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, getPixel);
// C(ColorAlpha) DisplayDriver_getPixel(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, int x, int y);
#define DisplayDriver_getPixel(__i, ap1, ap2, x, y) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, getPixel, __i, C(ColorAlpha), \
      C(Display) _ARG C(Surface) _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, getPixel);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, getSurface);
// C(bool) DisplayDriver_getSurface(C(DisplayDriver) __i, C(Display) ap1, C(Surface) surface, int ap2, int ap3, C(Box) * ap4);
#define DisplayDriver_getSurface(__i, ap1, surface, ap2, ap3, ap4) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, getSurface, __i, C(bool), \
      C(Display) _ARG C(Surface) _ARG int _ARG int _ARG C(Box) *, \
      ap1 _ARG surface _ARG ap2 _ARG ap3 _ARG ap4)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, getSurface);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, grabScreen);
// C(bool) DisplayDriver_grabScreen(C(DisplayDriver) __i, C(Display) ap1, C(Bitmap) ap2, int ap3, int ap4, uint ap5, uint ap6);
#define DisplayDriver_grabScreen(__i, ap1, ap2, ap3, ap4, ap5, ap6) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, grabScreen, __i, C(bool), \
      C(Display) _ARG C(Bitmap) _ARG int _ARG int _ARG uint _ARG uint, \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5 _ARG ap6)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, grabScreen);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, lineStipple);
// void DisplayDriver_lineStipple(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, uint pattern);
#define DisplayDriver_lineStipple(__i, ap1, ap2, pattern) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, lineStipple, __i, void, \
      C(Display) _ARG C(Surface) _ARG uint, \
      ap1 _ARG ap2 _ARG pattern)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, lineStipple);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, loadFont);
// C(Font) * DisplayDriver_loadFont(C(DisplayDriver) __i, C(DisplaySystem) displaySystem, const char * faceName, float size, C(FontFlags) flags, float outlineSize, float outlineFade);
#define DisplayDriver_loadFont(__i, displaySystem, faceName, size, flags, outlineSize, outlineFade) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, loadFont, __i, C(Font) *, \
      C(DisplaySystem) _ARG const char * _ARG float _ARG C(FontFlags) _ARG float _ARG float, \
      displaySystem _ARG faceName _ARG size _ARG flags _ARG outlineSize _ARG outlineFade)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, loadFont);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, lock);
// C(bool) DisplayDriver_lock(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_lock(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, lock, __i, C(bool), \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, lock);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, lockIndices);
// uint16 * DisplayDriver_lockIndices(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(PrimitiveSingle) * group);
#define DisplayDriver_lockIndices(__i, ap1, group) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, lockIndices, __i, uint16 *, \
      C(DisplaySystem) _ARG C(PrimitiveSingle) *, \
      ap1 _ARG group)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, lockIndices);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, lockMesh);
// C(bool) DisplayDriver_lockMesh(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Mesh) * ap2, C(MeshFeatures) flags);
#define DisplayDriver_lockMesh(__i, ap1, ap2, flags) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, lockMesh, __i, C(bool), \
      C(DisplaySystem) _ARG C(Mesh) * _ARG C(MeshFeatures), \
      ap1 _ARG ap2 _ARG flags)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, lockMesh);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, lockSystem);
// C(bool) DisplayDriver_lockSystem(C(DisplayDriver) __i, C(DisplaySystem) displaySystem);
#define DisplayDriver_lockSystem(__i, displaySystem) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, lockSystem, __i, C(bool), \
      C(DisplaySystem), \
      displaySystem)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, lockSystem);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, makeDDBitmap);
// C(bool) DisplayDriver_makeDDBitmap(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Bitmap) ap2, C(bool) mipMaps, int cubeMapFace);
#define DisplayDriver_makeDDBitmap(__i, ap1, ap2, mipMaps, cubeMapFace) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, makeDDBitmap, __i, C(bool), \
      C(DisplaySystem) _ARG C(Bitmap) _ARG C(bool) _ARG int, \
      ap1 _ARG ap2 _ARG mipMaps _ARG cubeMapFace)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, makeDDBitmap);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, nextPage);
// void DisplayDriver_nextPage(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_nextPage(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, nextPage, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, nextPage);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, popMatrix);
// void DisplayDriver_popMatrix(C(DisplayDriver) __i, C(Display) ap1, C(bool) ap2);
#define DisplayDriver_popMatrix(__i, ap1, ap2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, popMatrix, __i, void, \
      C(Display) _ARG C(bool), \
      ap1 _ARG ap2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, popMatrix);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, pushMatrix);
// void DisplayDriver_pushMatrix(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_pushMatrix(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, pushMatrix, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, pushMatrix);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, putPixel);
// void DisplayDriver_putPixel(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, int x, int y);
#define DisplayDriver_putPixel(__i, ap1, ap2, x, y) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, putPixel, __i, void, \
      C(Display) _ARG C(Surface) _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, putPixel);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, rectangle);
// void DisplayDriver_rectangle(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, int x1, int y1, int x2, int y2);
#define DisplayDriver_rectangle(__i, ap1, ap2, x1, y1, x2, y2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, rectangle, __i, void, \
      C(Display) _ARG C(Surface) _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG x1 _ARG y1 _ARG x2 _ARG y2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, rectangle);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, releaseSurface);
// void DisplayDriver_releaseSurface(C(DisplayDriver) __i, C(Display) this, C(Surface) ap1);
#define DisplayDriver_releaseSurface(__i, this, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, releaseSurface, __i, void, \
      C(Display) _ARG C(Surface), \
      this _ARG ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, releaseSurface);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, restorePalette);
// void DisplayDriver_restorePalette(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_restorePalette(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, restorePalette, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, restorePalette);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, scroll);
// void DisplayDriver_scroll(C(DisplayDriver) __i, C(Display) ap1, C(Box) * ap2, int ap3, int ap4, C(Extent) * ap5);
#define DisplayDriver_scroll(__i, ap1, ap2, ap3, ap4, ap5) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, scroll, __i, void, \
      C(Display) _ARG C(Box) * _ARG int _ARG int _ARG C(Extent) *, \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, scroll);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, selectMesh);
// void DisplayDriver_selectMesh(C(DisplayDriver) __i, C(Display) ap1, C(Mesh) * ap2);
#define DisplayDriver_selectMesh(__i, ap1, ap2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, selectMesh, __i, void, \
      C(Display) _ARG C(Mesh) *, \
      ap1 _ARG ap2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, selectMesh);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setBackground);
// void DisplayDriver_setBackground(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(ColorAlpha) ap3);
#define DisplayDriver_setBackground(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setBackground, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(ColorAlpha), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setBackground);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setBlitTint);
// void DisplayDriver_setBlitTint(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(ColorAlpha) ap3);
#define DisplayDriver_setBlitTint(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setBlitTint, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(ColorAlpha), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setBlitTint);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setCamera);
// void DisplayDriver_setCamera(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Camera) ap3);
#define DisplayDriver_setCamera(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setCamera, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Camera), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setCamera);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setCameraVR);
// void DisplayDriver_setCameraVR(C(DisplayDriver) __i, C(Display) ap1, C(Camera) ap2, int eye, int w, int h, void * fb, const C(Matrix) * prjMat);
#define DisplayDriver_setCameraVR(__i, ap1, ap2, eye, w, h, fb, prjMat) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setCameraVR, __i, void, \
      C(Display) _ARG C(Camera) _ARG int _ARG int _ARG int _ARG void * _ARG const C(Matrix) *, \
      ap1 _ARG ap2 _ARG eye _ARG w _ARG h _ARG fb _ARG prjMat)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setCameraVR);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setForeground);
// void DisplayDriver_setForeground(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(ColorAlpha) ap3);
#define DisplayDriver_setForeground(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setForeground, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(ColorAlpha), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setForeground);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setLight);
// void DisplayDriver_setLight(C(DisplayDriver) __i, C(Display) ap1, int ap2, C(Light) * ap3);
#define DisplayDriver_setLight(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setLight, __i, void, \
      C(Display) _ARG int _ARG C(Light) *, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setLight);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setPalette);
// void DisplayDriver_setPalette(C(DisplayDriver) __i, C(Display) ap1, C(ColorAlpha) * ap2, C(bool) ap3);
#define DisplayDriver_setPalette(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setPalette, __i, void, \
      C(Display) _ARG C(ColorAlpha) * _ARG C(bool), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setPalette);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setRenderState);
// void DisplayDriver_setRenderState(C(DisplayDriver) __i, C(Display) ap1, C(RenderState) ap2, uint ap3);
#define DisplayDriver_setRenderState(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setRenderState, __i, void, \
      C(Display) _ARG C(RenderState) _ARG uint, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setRenderState);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, setTransform);
// void DisplayDriver_setTransform(C(DisplayDriver) __i, C(Display) ap1, C(Matrix) * ap2, C(bool) ap3, C(bool) ap4);
#define DisplayDriver_setTransform(__i, ap1, ap2, ap3, ap4) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, setTransform, __i, void, \
      C(Display) _ARG C(Matrix) * _ARG C(bool) _ARG C(bool), \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, setTransform);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, startUpdate);
// void DisplayDriver_startUpdate(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_startUpdate(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, startUpdate, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, startUpdate);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, stretch);
// void DisplayDriver_stretch(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
#define DisplayDriver_stretch(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h, sw, sh) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, stretch, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h _ARG sw _ARG sh)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, stretch);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, stretchDI);
// void DisplayDriver_stretchDI(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
#define DisplayDriver_stretchDI(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h, sw, sh) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, stretchDI, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h _ARG sw _ARG sh)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, stretchDI);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, stretchf);
// void DisplayDriver_stretchf(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Bitmap) ap3, float dx, float dy, float sx, float sy, float w, float h, float sw, float sh);
#define DisplayDriver_stretchf(__i, ap1, ap2, ap3, dx, dy, sx, sy, w, h, sw, sh) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, stretchf, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Bitmap) _ARG float _ARG float _ARG float _ARG float _ARG float _ARG float _ARG float _ARG float, \
      ap1 _ARG ap2 _ARG ap3 _ARG dx _ARG dy _ARG sx _ARG sy _ARG w _ARG h _ARG sw _ARG sh)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, stretchf);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, textExtent);
// void DisplayDriver_textExtent(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, constString text, int len, int * tw, int * th, int prevGlyph, int * rPrevGlyph, int * overHang);
#define DisplayDriver_textExtent(__i, ap1, ap2, text, len, tw, th, prevGlyph, rPrevGlyph, overHang) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, textExtent, __i, void, \
      C(Display) _ARG C(Surface) _ARG constString _ARG int _ARG int * _ARG int * _ARG int _ARG int * _ARG int *, \
      ap1 _ARG ap2 _ARG text _ARG len _ARG tw _ARG th _ARG prevGlyph _ARG rPrevGlyph _ARG overHang)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, textExtent);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, textFont);
// void DisplayDriver_textFont(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(Font) * ap3);
#define DisplayDriver_textFont(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, textFont, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(Font) *, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, textFont);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, textOpacity);
// void DisplayDriver_textOpacity(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, C(bool) ap3);
#define DisplayDriver_textOpacity(__i, ap1, ap2, ap3) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, textOpacity, __i, void, \
      C(Display) _ARG C(Surface) _ARG C(bool), \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, textOpacity);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, unloadFont);
// void DisplayDriver_unloadFont(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Font) * ap2);
#define DisplayDriver_unloadFont(__i, ap1, ap2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, unloadFont, __i, void, \
      C(DisplaySystem) _ARG C(Font) *, \
      ap1 _ARG ap2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, unloadFont);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, unlock);
// void DisplayDriver_unlock(C(DisplayDriver) __i, C(Display) ap1);
#define DisplayDriver_unlock(__i, ap1) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, unlock, __i, void, \
      C(Display), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, unlock);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, unlockIndices);
// void DisplayDriver_unlockIndices(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(PrimitiveSingle) * group, C(bool) indices32bit, int nIndices, void * maeb);
#define DisplayDriver_unlockIndices(__i, ap1, group, indices32bit, nIndices, maeb) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, unlockIndices, __i, void, \
      C(DisplaySystem) _ARG C(PrimitiveSingle) * _ARG C(bool) _ARG int _ARG void *, \
      ap1 _ARG group _ARG indices32bit _ARG nIndices _ARG maeb)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, unlockIndices);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, unlockMesh);
// void DisplayDriver_unlockMesh(C(DisplayDriver) __i, C(DisplaySystem) ap1, C(Mesh) * ap2, C(MeshFeatures) flags);
#define DisplayDriver_unlockMesh(__i, ap1, ap2, flags) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, unlockMesh, __i, void, \
      C(DisplaySystem) _ARG C(Mesh) * _ARG C(MeshFeatures), \
      ap1 _ARG ap2 _ARG flags)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, unlockMesh);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, unlockSystem);
// void DisplayDriver_unlockSystem(C(DisplayDriver) __i, C(DisplaySystem) displaySystem);
#define DisplayDriver_unlockSystem(__i, displaySystem) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, unlockSystem, __i, void, \
      C(DisplaySystem), \
      displaySystem)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, unlockSystem);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, update);
// void DisplayDriver_update(C(DisplayDriver) __i, C(Display) ap1, C(Box) * ap2);
#define DisplayDriver_update(__i, ap1, ap2) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, update, __i, void, \
      C(Display) _ARG C(Box) *, \
      ap1 _ARG ap2)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, update);

extern THIS_LIB_IMPORT int M_VTBLID(DisplayDriver, writeText);
// void DisplayDriver_writeText(C(DisplayDriver) __i, C(Display) ap1, C(Surface) ap2, int x, int y, constString text, int len, int prevGlyph, int * rPrevGlyph);
#define DisplayDriver_writeText(__i, ap1, ap2, x, y, text, len, prevGlyph, rPrevGlyph) \
   VMETHOD(CO(DisplayDriver), DisplayDriver, writeText, __i, void, \
      C(Display) _ARG C(Surface) _ARG int _ARG int _ARG constString _ARG int _ARG int _ARG int *, \
      ap1 _ARG ap2 _ARG x _ARG y _ARG text _ARG len _ARG prevGlyph _ARG rPrevGlyph)
extern THIS_LIB_IMPORT C(Method) * METHOD(DisplayDriver, writeText);

#define DISPLAYFLAGS_fullScreen_SHIFT                    0
#define DISPLAYFLAGS_fullScreen_MASK                     0x1
#define DISPLAYFLAGS_fullScreen(x)                       ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_fullScreen_MASK) >> DISPLAYFLAGS_fullScreen_SHIFT)
#define DISPLAYFLAGS_SET_fullScreen(x, fullScreen)                (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_fullScreen_MASK)) | (((C(DisplayFlags))(fullScreen)) << DISPLAYFLAGS_fullScreen_SHIFT)
#define DISPLAYFLAGS_flipping_SHIFT                      1
#define DISPLAYFLAGS_flipping_MASK                       0x2
#define DISPLAYFLAGS_flipping(x)                         ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_flipping_MASK) >> DISPLAYFLAGS_flipping_SHIFT)
#define DISPLAYFLAGS_SET_flipping(x, flipping)                  (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_flipping_MASK)) | (((C(DisplayFlags))(flipping)) << DISPLAYFLAGS_flipping_SHIFT)
#define DISPLAYFLAGS_alpha_SHIFT                         2
#define DISPLAYFLAGS_alpha_MASK                          0x4
#define DISPLAYFLAGS_alpha(x)                            ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_alpha_MASK) >> DISPLAYFLAGS_alpha_SHIFT)
#define DISPLAYFLAGS_SET_alpha(x, alpha)                     (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_alpha_MASK)) | (((C(DisplayFlags))(alpha)) << DISPLAYFLAGS_alpha_SHIFT)
#define DISPLAYFLAGS_memBackBuffer_SHIFT                 3
#define DISPLAYFLAGS_memBackBuffer_MASK                  0x8
#define DISPLAYFLAGS_memBackBuffer(x)                    ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_memBackBuffer_MASK) >> DISPLAYFLAGS_memBackBuffer_SHIFT)
#define DISPLAYFLAGS_SET_memBackBuffer(x, memBackBuffer)             (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_memBackBuffer_MASK)) | (((C(DisplayFlags))(memBackBuffer)) << DISPLAYFLAGS_memBackBuffer_SHIFT)
#define DISPLAYFLAGS_text_SHIFT                          4
#define DISPLAYFLAGS_text_MASK                           0x10
#define DISPLAYFLAGS_text(x)                             ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_text_MASK) >> DISPLAYFLAGS_text_SHIFT)
#define DISPLAYFLAGS_SET_text(x, text)                      (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_text_MASK)) | (((C(DisplayFlags))(text)) << DISPLAYFLAGS_text_SHIFT)
#define DISPLAYFLAGS_scrolling_SHIFT                     5
#define DISPLAYFLAGS_scrolling_MASK                      0x20
#define DISPLAYFLAGS_scrolling(x)                        ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_scrolling_MASK) >> DISPLAYFLAGS_scrolling_SHIFT)
#define DISPLAYFLAGS_SET_scrolling(x, scrolling)                 (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_scrolling_MASK)) | (((C(DisplayFlags))(scrolling)) << DISPLAYFLAGS_scrolling_SHIFT)
#define DISPLAYFLAGS_printer_SHIFT                       6
#define DISPLAYFLAGS_printer_MASK                        0x40
#define DISPLAYFLAGS_printer(x)                          ((((C(DisplayFlags))(x)) & DISPLAYFLAGS_printer_MASK) >> DISPLAYFLAGS_printer_SHIFT)
#define DISPLAYFLAGS_SET_printer(x, printer)                   (x) = ((C(DisplayFlags))(x) & ~((C(DisplayFlags))DISPLAYFLAGS_printer_MASK)) | (((C(DisplayFlags))(printer)) << DISPLAYFLAGS_printer_SHIFT)


extern THIS_LIB_IMPORT C(bool) (* DisplaySystem_addMaterial)(C(DisplaySystem) __this, C(Material) * material);

extern THIS_LIB_IMPORT C(OldLink) * (* DisplaySystem_addMesh)(C(DisplaySystem) __this, C(Mesh) * mesh);

extern THIS_LIB_IMPORT C(Material) * (* DisplaySystem_addNamedMaterial)(C(DisplaySystem) __this, const char * name);

extern THIS_LIB_IMPORT C(NamedLink) * (* DisplaySystem_addTexture)(C(DisplaySystem) __this, const char * name, C(Bitmap) bitmap);

extern THIS_LIB_IMPORT void (* DisplaySystem_clearMaterials)(C(DisplaySystem) __this);

extern THIS_LIB_IMPORT void (* DisplaySystem_clearMeshes)(C(DisplaySystem) __this);

extern THIS_LIB_IMPORT void (* DisplaySystem_clearTextures)(C(DisplaySystem) __this);

extern THIS_LIB_IMPORT C(bool) (* DisplaySystem_create)(C(DisplaySystem) __this, const char * driverName, void * window, C(bool) fullScreen);

extern THIS_LIB_IMPORT void (* DisplaySystem_fontExtent)(C(DisplaySystem) __this, C(Font) * font, const char * text, int len, int * width, int * height);

extern THIS_LIB_IMPORT void (* DisplaySystem_fontExtent2)(C(DisplaySystem) __this, C(Font) * font, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);

extern THIS_LIB_IMPORT C(Material) * (* DisplaySystem_getMaterial)(C(DisplaySystem) __this, const char * name);

extern THIS_LIB_IMPORT C(Bitmap) (* DisplaySystem_getTexture)(C(DisplaySystem) __this, const char * name);

extern THIS_LIB_IMPORT C(Font) * (* DisplaySystem_loadFont)(C(DisplaySystem) __this, const char * faceName, float size, C(FontFlags) flags);

extern THIS_LIB_IMPORT C(Font) * (* DisplaySystem_loadOutlineFont)(C(DisplaySystem) __this, const char * faceName, float size, C(FontFlags) flags, float outlineSize, float outlineFade);

extern THIS_LIB_IMPORT void * (* DisplaySystem_loadResource)(C(DisplaySystem) __this, C(Resource) resource);

extern THIS_LIB_IMPORT void * (* DisplaySystem_loadResourceFM)(C(DisplaySystem) __this, C(Resource) resource, C(FontManager) fm);

extern THIS_LIB_IMPORT C(bool) (* DisplaySystem_lock)(C(DisplaySystem) __this);

extern THIS_LIB_IMPORT C(bool) (* DisplaySystem_removeMaterial)(C(DisplaySystem) __this, C(Material) * material);

extern THIS_LIB_IMPORT C(bool) (* DisplaySystem_removeMesh)(C(DisplaySystem) __this, C(Mesh) * mesh);

extern THIS_LIB_IMPORT C(bool) (* DisplaySystem_removeTexture)(C(DisplaySystem) __this, const char * name);

extern THIS_LIB_IMPORT void (* DisplaySystem_unloadFont)(C(DisplaySystem) __this, C(Font) * font);

extern THIS_LIB_IMPORT void (* DisplaySystem_unloadResource)(C(DisplaySystem) __this, C(Resource) resource, C(DisplaySystemResPtr) * res);

extern THIS_LIB_IMPORT void (* DisplaySystem_unlock)(C(DisplaySystem) __this);

extern THIS_LIB_IMPORT void * (* DisplaySystem__LoadResource)(C(DisplaySystem) __this, C(Resource) resource, void * fm);

struct C(DisplaySystemResPtr)
{
   byte __ecere_padding[24];
};
extern THIS_LIB_IMPORT void (* DrawList_addObject)(C(DrawList) __this, C(Object) * object);

extern THIS_LIB_IMPORT void (* DrawList_init)(C(DrawList) __this, C(Matrix) * sm, C(Matrix) * vm, C(Vector3D) * cp, C(Plane) * vp, C(Plane) * wp, int guessCount);

extern THIS_LIB_IMPORT void (* DrawList_prepare)(C(DrawList) __this);

extern THIS_LIB_IMPORT void (* DrawList_render)(C(DrawList) __this, C(Display) display);

extern THIS_LIB_IMPORT void (* DrawManager_clear)(C(DrawManager) __this);

extern THIS_LIB_IMPORT void (* DrawManager_drawBarrier)(C(DrawManager) __this);

extern THIS_LIB_IMPORT void (* DrawManager_drawImage)(C(DrawManager) __this, int index, float offsetx, float offsety, float angsin, float angcos, C(ColorAlpha) color);

extern THIS_LIB_IMPORT void (* DrawManager_end)(C(DrawManager) __this);

extern THIS_LIB_IMPORT void (* DrawManager_finish)(C(DrawManager) __this);

extern THIS_LIB_IMPORT int M_VTBLID(DrawManager, flush);
// void DrawManager_flush(C(DrawManager) __i);
#define DrawManager_flush(__i) \
   VMETHOD(CO(DrawManager), DrawManager, flush, __i, void, \
      C(DrawManager), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(DrawManager, flush);

extern THIS_LIB_IMPORT C(bool) (* DrawManager_init)(C(DrawManager) __this);

extern THIS_LIB_IMPORT void (* DrawManager_ready)(C(DrawManager) __this, int viewportWidth, int viewportHeight);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DrawManager, renderingFlipped);
extern THIS_LIB_IMPORT void (* DrawManager_set_renderingFlipped)(const C(DrawManager) d, C(bool) value);

struct C(DrawSlot)
{
   C(Object) * object;
   C(Bitmap) baseMap;
};
extern THIS_LIB_IMPORT void (* FMFont_setOutline)(C(FMFont) * __this, float size, float fade);

struct C(FMPathDraw)
{
   int prevGlyphIndex;
   float middleAlign;
};
#define FMTEXTALIGNMENT_horzAlignment_SHIFT              0
#define FMTEXTALIGNMENT_horzAlignment_MASK               0x3
#define FMTEXTALIGNMENT_horzAlignment(x)                 ((((C(FMTextAlignment))(x)) & FMTEXTALIGNMENT_horzAlignment_MASK) >> FMTEXTALIGNMENT_horzAlignment_SHIFT)
#define FMTEXTALIGNMENT_SET_horzAlignment(x, horzAlignment)          (x) = ((C(FMTextAlignment))(x) & ~((C(FMTextAlignment))FMTEXTALIGNMENT_horzAlignment_MASK)) | (((C(FMTextAlignment))(horzAlignment)) << FMTEXTALIGNMENT_horzAlignment_SHIFT)
#define FMTEXTALIGNMENT_vertAlignment_SHIFT              2
#define FMTEXTALIGNMENT_vertAlignment_MASK               0xC
#define FMTEXTALIGNMENT_vertAlignment(x)                 ((((C(FMTextAlignment))(x)) & FMTEXTALIGNMENT_vertAlignment_MASK) >> FMTEXTALIGNMENT_vertAlignment_SHIFT)
#define FMTEXTALIGNMENT_SET_vertAlignment(x, vertAlignment)          (x) = ((C(FMTextAlignment))(x) & ~((C(FMTextAlignment))FMTEXTALIGNMENT_vertAlignment_MASK)) | (((C(FMTextAlignment))(vertAlignment)) << FMTEXTALIGNMENT_vertAlignment_SHIFT)
#define FMTEXTALIGNMENT(horzAlignment, vertAlignment)                           ((((C(FMTextAlignment))(horzAlignment)) << FMTEXTALIGNMENT_horzAlignment_SHIFT) | ((C(FMTextAlignment))(vertAlignment)) << FMTEXTALIGNMENT_vertAlignment_SHIFT)


struct C(FaceInfo)
{
   C(String) fileName;
   C(bool) fakeItalic;
   int fontID;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(Font, ascent);
extern THIS_LIB_IMPORT int (* Font_get_ascent)(const C(Font) * f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Font, descent);
extern THIS_LIB_IMPORT int (* Font_get_descent)(const C(Font) * f);

#define FONTFLAGS_bold_SHIFT                             0
#define FONTFLAGS_bold_MASK                              0x1
#define FONTFLAGS_bold(x)                                ((((C(FontFlags))(x)) & FONTFLAGS_bold_MASK) >> FONTFLAGS_bold_SHIFT)
#define FONTFLAGS_SET_bold(x, bold)                         (x) = ((C(FontFlags))(x) & ~((C(FontFlags))FONTFLAGS_bold_MASK)) | (((C(FontFlags))(bold)) << FONTFLAGS_bold_SHIFT)
#define FONTFLAGS_italic_SHIFT                           1
#define FONTFLAGS_italic_MASK                            0x2
#define FONTFLAGS_italic(x)                              ((((C(FontFlags))(x)) & FONTFLAGS_italic_MASK) >> FONTFLAGS_italic_SHIFT)
#define FONTFLAGS_SET_italic(x, italic)                       (x) = ((C(FontFlags))(x) & ~((C(FontFlags))FONTFLAGS_italic_MASK)) | (((C(FontFlags))(italic)) << FONTFLAGS_italic_SHIFT)
#define FONTFLAGS_underline_SHIFT                        2
#define FONTFLAGS_underline_MASK                         0x4
#define FONTFLAGS_underline(x)                           ((((C(FontFlags))(x)) & FONTFLAGS_underline_MASK) >> FONTFLAGS_underline_SHIFT)
#define FONTFLAGS_SET_underline(x, underline)                    (x) = ((C(FontFlags))(x) & ~((C(FontFlags))FONTFLAGS_underline_MASK)) | (((C(FontFlags))(underline)) << FONTFLAGS_underline_SHIFT)
#define FONTFLAGS(bold, italic, underline)                               (((((C(FontFlags))(bold)) << FONTFLAGS_bold_SHIFT) | ((C(FontFlags))(italic)) << FONTFLAGS_italic_SHIFT) | ((C(FontFlags))(underline)) << FONTFLAGS_underline_SHIFT)


struct C(FontInfo)
{
   C(bool) fixedPitch;
   C(bool) defaultOrAnsiCharSet;
};
extern THIS_LIB_IMPORT C(FMFont) * (* FontManager_addFont)(C(FontManager) __this, constString path, int glyphPaddingWidth);

extern THIS_LIB_IMPORT C(FMFont) * (* FontManager_addFontData)(C(FontManager) __this, byte * data, int dataSize, int glyphPaddingWidth);

extern THIS_LIB_IMPORT void (* FontManager_clearState)(C(FontManager) __this);

extern THIS_LIB_IMPORT C(bool) (* FontManager_create)(C(FontManager) __this, int width, int height, int channelCount, int channelIndex, C(FontManagerRenderer) renderer);

extern THIS_LIB_IMPORT int (* FontManager_drawText)(C(FontManager) __this, int x, int y, const char * string, int stringlength);

extern THIS_LIB_IMPORT int (* FontManager_drawTextTruncate)(C(FontManager) __this, int x, int y, int truncatewidth, const char * string, int stringlength, char * extstring, int extwidth);

extern THIS_LIB_IMPORT int (* FontManager_drawTextWithCursor)(C(FontManager) __this, int x, int y, const char * string, int stringlength, int cursoroffset);

extern THIS_LIB_IMPORT C(bool) (* FontManager_expandAtlas)(C(FontManager) __this, int width, int height);

extern THIS_LIB_IMPORT void (* FontManager_flush)(C(FontManager) __this, C(bool) rendererFlush);

extern THIS_LIB_IMPORT void (* FontManager_flushUpdate)(C(FontManager) __this);

extern THIS_LIB_IMPORT void (* FontManager_freeFont)(C(FontManager) __this, C(FMFont) * font);

extern THIS_LIB_IMPORT void (* FontManager_getAtlasSize)(C(FontManager) __this, int * retwidth, int * retheight);

extern THIS_LIB_IMPORT C(FMFont) * (* FontManager_getFont)(C(FontManager) __this, C(FontResource) fontResource);

extern THIS_LIB_IMPORT void (* FontManager_getFontExtent)(C(FontManager) __this, int * retascent, int * retdescent);

extern THIS_LIB_IMPORT void (* FontManager_getFontLimits)(C(FontManager) __this, int * retlimitminy, int * retlimitmaxy);

extern THIS_LIB_IMPORT int (* FontManager_getFontLineHeight)(C(FontManager) __this);

extern THIS_LIB_IMPORT int (* FontManager_getTextBounds)(C(FontManager) __this, int x, int y, const char * string, int stringlength, int * bounds);

extern THIS_LIB_IMPORT int (* FontManager_getTextNearestOffset)(C(FontManager) __this, int targetwidth, const char * string, int stringlength);

extern THIS_LIB_IMPORT int (* FontManager_getTextTruncateOffset)(C(FontManager) __this, int truncatewidth, const char * string, int stringlength, int extwidth, int * retextflag, int * retfullwidth);

extern THIS_LIB_IMPORT int (* FontManager_getTextWidth)(C(FontManager) __this, const char * string, int stringlength);

extern THIS_LIB_IMPORT int (* FontManager_getTextWidthTruncate)(C(FontManager) __this, const char * string, int stringlength, int truncatewidth);

extern THIS_LIB_IMPORT const byte * (* FontManager_getTextureData)(C(FontManager) __this, int * width, int * height);

extern THIS_LIB_IMPORT C(bool) (* FontManager_initPathDraw)(C(FontManager) __this, C(FMPathDraw) * pathdraw);

extern THIS_LIB_IMPORT int M_VTBLID(FontManager, onAtlasFull);
// void FontManager_onAtlasFull(C(FontManager) __i);
#define FontManager_onAtlasFull(__i) \
   VMETHOD(CO(FontManager), FontManager, onAtlasFull, __i, void, \
      C(FontManager), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManager, onAtlasFull);

extern THIS_LIB_IMPORT float (* FontManager_pathDrawCharacter)(C(FontManager) __this, C(FMPathDraw) * pathdraw, float x, float y, float vectorx, float vectory, int unicode);

extern THIS_LIB_IMPORT float (* FontManager_pathDrawPredictAdvance)(C(FontManager) __this, C(FMPathDraw) * pathdraw, unichar unicode);

extern THIS_LIB_IMPORT void (* FontManager_popState)(C(FontManager) __this);

extern THIS_LIB_IMPORT void (* FontManager_pushState)(C(FontManager) __this);

extern THIS_LIB_IMPORT void (* FontManager_removeFont)(C(FontManager) __this, C(FMFont) * font);

extern THIS_LIB_IMPORT C(bool) (* FontManager_resetAtlas)(C(FontManager) __this, int width, int height);

extern THIS_LIB_IMPORT void (* FontManager_setAlign)(C(FontManager) __this, int align);

extern THIS_LIB_IMPORT void (* FontManager_setFont)(C(FontManager) __this, C(FMFont) * font);

extern THIS_LIB_IMPORT void (* FontManager_setFontImageProcessing)(C(FontManager) __this, C(FMFont) * font, void (* processImage)(byte * image, int width, int height, int bytesperpixel, int bytesperline, int paddingwidth, void * opaquecontext), void * opaquecontext);

extern THIS_LIB_IMPORT void (* FontManager_setSize)(C(FontManager) __this, int size);

extern THIS_LIB_IMPORT void (* FontManager_setState)(C(FontManager) __this, C(FMFont) * font, int size, int align);

extern THIS_LIB_IMPORT C(bool) (* FontManager_validateTexture)(C(FontManager) __this, int * retdirtyrect);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontManager, renderer);
extern THIS_LIB_IMPORT void (* FontManager_set_renderer)(const C(FontManager) f, C(FontManagerRenderer) value);
extern THIS_LIB_IMPORT C(FontManagerRenderer) (* FontManager_get_renderer)(const C(FontManager) f);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, createTexture);
// int FontManagerRenderer_createTexture(C(FontManagerRenderer) __i, int width, int height);
#define FontManagerRenderer_createTexture(__i, width, height) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, createTexture, __i, int, \
      C(FontManagerRenderer) _ARG int _ARG int, \
      __i _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, createTexture);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, drawImage);
// void FontManagerRenderer_drawImage(C(FontManagerRenderer) __i, int targetx, int targety, int imageIndex, C(bool) useExtColor);
#define FontManagerRenderer_drawImage(__i, targetx, targety, imageIndex, useExtColor) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, drawImage, __i, void, \
      C(FontManagerRenderer) _ARG int _ARG int _ARG int _ARG C(bool), \
      __i _ARG targetx _ARG targety _ARG imageIndex _ARG useExtColor)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, drawImage);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, drawImageAlt);
// void FontManagerRenderer_drawImageAlt(C(FontManagerRenderer) __i, byte * texdata, int targetx, int targety, int offsetx, int offsety, int width, int height);
#define FontManagerRenderer_drawImageAlt(__i, texdata, targetx, targety, offsetx, offsety, width, height) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, drawImageAlt, __i, void, \
      C(FontManagerRenderer) _ARG byte * _ARG int _ARG int _ARG int _ARG int _ARG int _ARG int, \
      __i _ARG texdata _ARG targetx _ARG targety _ARG offsetx _ARG offsety _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, drawImageAlt);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, drawImageCursor);
// void FontManagerRenderer_drawImageCursor(C(FontManagerRenderer) __i, int targetx, int targety, int imageIndex);
#define FontManagerRenderer_drawImageCursor(__i, targetx, targety, imageIndex) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, drawImageCursor, __i, void, \
      C(FontManagerRenderer) _ARG int _ARG int _ARG int, \
      __i _ARG targetx _ARG targety _ARG imageIndex)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, drawImageCursor);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, drawImageFloat);
// void FontManagerRenderer_drawImageFloat(C(FontManagerRenderer) __i, float targetx, float targety, float angsin, float angcos, int imageIndex, C(bool) useExtColor);
#define FontManagerRenderer_drawImageFloat(__i, targetx, targety, angsin, angcos, imageIndex, useExtColor) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, drawImageFloat, __i, void, \
      C(FontManagerRenderer) _ARG float _ARG float _ARG float _ARG float _ARG int _ARG C(bool), \
      __i _ARG targetx _ARG targety _ARG angsin _ARG angcos _ARG imageIndex _ARG useExtColor)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, drawImageFloat);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, flush);
// void FontManagerRenderer_flush(C(FontManagerRenderer) __i);
#define FontManagerRenderer_flush(__i) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, flush, __i, void, \
      C(FontManagerRenderer), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, flush);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, init);
// C(bool) FontManagerRenderer_init(C(FontManagerRenderer) __i, int channelCount);
#define FontManagerRenderer_init(__i, channelCount) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, init, __i, C(bool), \
      C(FontManagerRenderer) _ARG int, \
      __i _ARG channelCount)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, init);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, registerImage);
// int FontManagerRenderer_registerImage(C(FontManagerRenderer) __i, int offsetx, int offsety, int width, int height);
#define FontManagerRenderer_registerImage(__i, offsetx, offsety, width, height) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, registerImage, __i, int, \
      C(FontManagerRenderer) _ARG int _ARG int _ARG int _ARG int, \
      __i _ARG offsetx _ARG offsety _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, registerImage);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, resetImages);
// void FontManagerRenderer_resetImages(C(FontManagerRenderer) __i);
#define FontManagerRenderer_resetImages(__i) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, resetImages, __i, void, \
      C(FontManagerRenderer), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, resetImages);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, resizeTexture);
// int FontManagerRenderer_resizeTexture(C(FontManagerRenderer) __i, int width, int height);
#define FontManagerRenderer_resizeTexture(__i, width, height) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, resizeTexture, __i, int, \
      C(FontManagerRenderer) _ARG int _ARG int, \
      __i _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, resizeTexture);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, setLayer);
// void FontManagerRenderer_setLayer(C(FontManagerRenderer) __i, uint layerIndex);
#define FontManagerRenderer_setLayer(__i, layerIndex) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, setLayer, __i, void, \
      C(FontManagerRenderer) _ARG uint, \
      __i _ARG layerIndex)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, setLayer);

extern THIS_LIB_IMPORT int M_VTBLID(FontManagerRenderer, updateTexture);
// void FontManagerRenderer_updateTexture(C(FontManagerRenderer) __i, int * rect, const byte * data);
#define FontManagerRenderer_updateTexture(__i, rect, data) \
   VMETHOD(CO(FontManagerRenderer), FontManagerRenderer, updateTexture, __i, void, \
      C(FontManagerRenderer) _ARG int * _ARG const byte *, \
      __i _ARG rect _ARG data)
extern THIS_LIB_IMPORT C(Method) * METHOD(FontManagerRenderer, updateTexture);

extern THIS_LIB_IMPORT void (* FontRenderer_setColor)(C(FontRenderer) __this, C(ColorAlpha) color);

extern THIS_LIB_IMPORT void (* FontRenderer_setCursorColor)(C(FontRenderer) __this, C(ColorAlpha) color);

extern THIS_LIB_IMPORT void (* FontRenderer_setExtColor)(C(FontRenderer) __this, C(ColorAlpha) color);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontRenderer, drawManager);
extern THIS_LIB_IMPORT void (* FontRenderer_set_drawManager)(const C(FontRenderer) f, C(DrawManager) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, faceName);
extern THIS_LIB_IMPORT void (* FontResource_set_faceName)(const C(FontResource) f, const char * value);
extern THIS_LIB_IMPORT const char * (* FontResource_get_faceName)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, size);
extern THIS_LIB_IMPORT void (* FontResource_set_size)(const C(FontResource) f, float value);
extern THIS_LIB_IMPORT float (* FontResource_get_size)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, bold);
extern THIS_LIB_IMPORT void (* FontResource_set_bold)(const C(FontResource) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FontResource_get_bold)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, italic);
extern THIS_LIB_IMPORT void (* FontResource_set_italic)(const C(FontResource) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FontResource_get_italic)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, underline);
extern THIS_LIB_IMPORT void (* FontResource_set_underline)(const C(FontResource) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FontResource_get_underline)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, font);
extern THIS_LIB_IMPORT C(Font) * (* FontResource_get_font)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, window);
extern THIS_LIB_IMPORT void (* FontResource_set_window)(const C(FontResource) f, C(Window) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, outlineSize);
extern THIS_LIB_IMPORT void (* FontResource_set_outlineSize)(const C(FontResource) f, float value);
extern THIS_LIB_IMPORT float (* FontResource_get_outlineSize)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, outlineFade);
extern THIS_LIB_IMPORT void (* FontResource_set_outlineFade)(const C(FontResource) f, float value);
extern THIS_LIB_IMPORT float (* FontResource_get_outlineFade)(const C(FontResource) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FontResource, fmFont);
extern THIS_LIB_IMPORT C(FMFont) * (* FontResource_get_fmFont)(const C(FontResource) f);

#define GLCAPABILITIES_compatible_SHIFT                  0
#define GLCAPABILITIES_compatible_MASK                   0x1
#define GLCAPABILITIES_compatible(x)                     ((((C(GLCapabilities))(x)) & GLCAPABILITIES_compatible_MASK) >> GLCAPABILITIES_compatible_SHIFT)
#define GLCAPABILITIES_SET_compatible(x, compatible)              (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_compatible_MASK)) | (((C(GLCapabilities))(compatible)) << GLCAPABILITIES_compatible_SHIFT)
#define GLCAPABILITIES_vertexBuffer_SHIFT                1
#define GLCAPABILITIES_vertexBuffer_MASK                 0x2
#define GLCAPABILITIES_vertexBuffer(x)                   ((((C(GLCapabilities))(x)) & GLCAPABILITIES_vertexBuffer_MASK) >> GLCAPABILITIES_vertexBuffer_SHIFT)
#define GLCAPABILITIES_SET_vertexBuffer(x, vertexBuffer)            (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_vertexBuffer_MASK)) | (((C(GLCapabilities))(vertexBuffer)) << GLCAPABILITIES_vertexBuffer_SHIFT)
#define GLCAPABILITIES_quads_SHIFT                       2
#define GLCAPABILITIES_quads_MASK                        0x4
#define GLCAPABILITIES_quads(x)                          ((((C(GLCapabilities))(x)) & GLCAPABILITIES_quads_MASK) >> GLCAPABILITIES_quads_SHIFT)
#define GLCAPABILITIES_SET_quads(x, quads)                   (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_quads_MASK)) | (((C(GLCapabilities))(quads)) << GLCAPABILITIES_quads_SHIFT)
#define GLCAPABILITIES_intAndDouble_SHIFT                3
#define GLCAPABILITIES_intAndDouble_MASK                 0x8
#define GLCAPABILITIES_intAndDouble(x)                   ((((C(GLCapabilities))(x)) & GLCAPABILITIES_intAndDouble_MASK) >> GLCAPABILITIES_intAndDouble_SHIFT)
#define GLCAPABILITIES_SET_intAndDouble(x, intAndDouble)            (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_intAndDouble_MASK)) | (((C(GLCapabilities))(intAndDouble)) << GLCAPABILITIES_intAndDouble_SHIFT)
#define GLCAPABILITIES_legacyFormats_SHIFT               4
#define GLCAPABILITIES_legacyFormats_MASK                0x10
#define GLCAPABILITIES_legacyFormats(x)                  ((((C(GLCapabilities))(x)) & GLCAPABILITIES_legacyFormats_MASK) >> GLCAPABILITIES_legacyFormats_SHIFT)
#define GLCAPABILITIES_SET_legacyFormats(x, legacyFormats)           (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_legacyFormats_MASK)) | (((C(GLCapabilities))(legacyFormats)) << GLCAPABILITIES_legacyFormats_SHIFT)
#define GLCAPABILITIES_nonPow2Textures_SHIFT             5
#define GLCAPABILITIES_nonPow2Textures_MASK              0x20
#define GLCAPABILITIES_nonPow2Textures(x)                ((((C(GLCapabilities))(x)) & GLCAPABILITIES_nonPow2Textures_MASK) >> GLCAPABILITIES_nonPow2Textures_SHIFT)
#define GLCAPABILITIES_SET_nonPow2Textures(x, nonPow2Textures)         (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_nonPow2Textures_MASK)) | (((C(GLCapabilities))(nonPow2Textures)) << GLCAPABILITIES_nonPow2Textures_SHIFT)
#define GLCAPABILITIES_vertexPointer_SHIFT               6
#define GLCAPABILITIES_vertexPointer_MASK                0x40
#define GLCAPABILITIES_vertexPointer(x)                  ((((C(GLCapabilities))(x)) & GLCAPABILITIES_vertexPointer_MASK) >> GLCAPABILITIES_vertexPointer_SHIFT)
#define GLCAPABILITIES_SET_vertexPointer(x, vertexPointer)           (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_vertexPointer_MASK)) | (((C(GLCapabilities))(vertexPointer)) << GLCAPABILITIES_vertexPointer_SHIFT)
#define GLCAPABILITIES_legacy_SHIFT                      7
#define GLCAPABILITIES_legacy_MASK                       0x80
#define GLCAPABILITIES_legacy(x)                         ((((C(GLCapabilities))(x)) & GLCAPABILITIES_legacy_MASK) >> GLCAPABILITIES_legacy_SHIFT)
#define GLCAPABILITIES_SET_legacy(x, legacy)                  (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_legacy_MASK)) | (((C(GLCapabilities))(legacy)) << GLCAPABILITIES_legacy_SHIFT)
#define GLCAPABILITIES_shaders_SHIFT                     8
#define GLCAPABILITIES_shaders_MASK                      0x100
#define GLCAPABILITIES_shaders(x)                        ((((C(GLCapabilities))(x)) & GLCAPABILITIES_shaders_MASK) >> GLCAPABILITIES_shaders_SHIFT)
#define GLCAPABILITIES_SET_shaders(x, shaders)                 (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_shaders_MASK)) | (((C(GLCapabilities))(shaders)) << GLCAPABILITIES_shaders_SHIFT)
#define GLCAPABILITIES_fixedFunction_SHIFT               9
#define GLCAPABILITIES_fixedFunction_MASK                0x200
#define GLCAPABILITIES_fixedFunction(x)                  ((((C(GLCapabilities))(x)) & GLCAPABILITIES_fixedFunction_MASK) >> GLCAPABILITIES_fixedFunction_SHIFT)
#define GLCAPABILITIES_SET_fixedFunction(x, fixedFunction)           (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_fixedFunction_MASK)) | (((C(GLCapabilities))(fixedFunction)) << GLCAPABILITIES_fixedFunction_SHIFT)
#define GLCAPABILITIES_immediate_SHIFT                   10
#define GLCAPABILITIES_immediate_MASK                    0x400
#define GLCAPABILITIES_immediate(x)                      ((((C(GLCapabilities))(x)) & GLCAPABILITIES_immediate_MASK) >> GLCAPABILITIES_immediate_SHIFT)
#define GLCAPABILITIES_SET_immediate(x, immediate)               (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_immediate_MASK)) | (((C(GLCapabilities))(immediate)) << GLCAPABILITIES_immediate_SHIFT)
#define GLCAPABILITIES_frameBuffer_SHIFT                 11
#define GLCAPABILITIES_frameBuffer_MASK                  0x800
#define GLCAPABILITIES_frameBuffer(x)                    ((((C(GLCapabilities))(x)) & GLCAPABILITIES_frameBuffer_MASK) >> GLCAPABILITIES_frameBuffer_SHIFT)
#define GLCAPABILITIES_SET_frameBuffer(x, frameBuffer)             (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_frameBuffer_MASK)) | (((C(GLCapabilities))(frameBuffer)) << GLCAPABILITIES_frameBuffer_SHIFT)
#define GLCAPABILITIES_pointSize_SHIFT                   12
#define GLCAPABILITIES_pointSize_MASK                    0x1000
#define GLCAPABILITIES_pointSize(x)                      ((((C(GLCapabilities))(x)) & GLCAPABILITIES_pointSize_MASK) >> GLCAPABILITIES_pointSize_SHIFT)
#define GLCAPABILITIES_SET_pointSize(x, pointSize)               (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_pointSize_MASK)) | (((C(GLCapabilities))(pointSize)) << GLCAPABILITIES_pointSize_SHIFT)
#define GLCAPABILITIES_vao_SHIFT                         13
#define GLCAPABILITIES_vao_MASK                          0x2000
#define GLCAPABILITIES_vao(x)                            ((((C(GLCapabilities))(x)) & GLCAPABILITIES_vao_MASK) >> GLCAPABILITIES_vao_SHIFT)
#define GLCAPABILITIES_SET_vao(x, vao)                     (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_vao_MASK)) | (((C(GLCapabilities))(vao)) << GLCAPABILITIES_vao_SHIFT)
#define GLCAPABILITIES_select_SHIFT                      14
#define GLCAPABILITIES_select_MASK                       0x4000
#define GLCAPABILITIES_select(x)                         ((((C(GLCapabilities))(x)) & GLCAPABILITIES_select_MASK) >> GLCAPABILITIES_select_SHIFT)
#define GLCAPABILITIES_SET_select(x, select)                  (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_select_MASK)) | (((C(GLCapabilities))(select)) << GLCAPABILITIES_select_SHIFT)
#define GLCAPABILITIES_debug_SHIFT                       15
#define GLCAPABILITIES_debug_MASK                        0x8000
#define GLCAPABILITIES_debug(x)                          ((((C(GLCapabilities))(x)) & GLCAPABILITIES_debug_MASK) >> GLCAPABILITIES_debug_SHIFT)
#define GLCAPABILITIES_SET_debug(x, debug)                   (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_debug_MASK)) | (((C(GLCapabilities))(debug)) << GLCAPABILITIES_debug_SHIFT)
#define GLCAPABILITIES_gpuCommands_SHIFT                 16
#define GLCAPABILITIES_gpuCommands_MASK                  0x10000
#define GLCAPABILITIES_gpuCommands(x)                    ((((C(GLCapabilities))(x)) & GLCAPABILITIES_gpuCommands_MASK) >> GLCAPABILITIES_gpuCommands_SHIFT)
#define GLCAPABILITIES_SET_gpuCommands(x, gpuCommands)             (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_gpuCommands_MASK)) | (((C(GLCapabilities))(gpuCommands)) << GLCAPABILITIES_gpuCommands_SHIFT)
#define GLCAPABILITIES_mdei_SHIFT                        17
#define GLCAPABILITIES_mdei_MASK                         0x20000
#define GLCAPABILITIES_mdei(x)                           ((((C(GLCapabilities))(x)) & GLCAPABILITIES_mdei_MASK) >> GLCAPABILITIES_mdei_SHIFT)
#define GLCAPABILITIES_SET_mdei(x, mdei)                    (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_mdei_MASK)) | (((C(GLCapabilities))(mdei)) << GLCAPABILITIES_mdei_SHIFT)
#define GLCAPABILITIES_samples_SHIFT                     18
#define GLCAPABILITIES_samples_MASK                      0x1C0000
#define GLCAPABILITIES_samples(x)                        ((((C(GLCapabilities))(x)) & GLCAPABILITIES_samples_MASK) >> GLCAPABILITIES_samples_SHIFT)
#define GLCAPABILITIES_SET_samples(x, samples)                 (x) = ((C(GLCapabilities))(x) & ~((C(GLCapabilities))GLCAPABILITIES_samples_MASK)) | (((C(GLCapabilities))(samples)) << GLCAPABILITIES_samples_SHIFT)


extern THIS_LIB_IMPORT int (* HitRecord_compare)(C(HitRecord) * __this, C(HitRecord) * recordB, void * unused);

#define LIGHTFLAGS_off_SHIFT                             0
#define LIGHTFLAGS_off_MASK                              0x1
#define LIGHTFLAGS_off(x)                                ((((C(LightFlags))(x)) & LIGHTFLAGS_off_MASK) >> LIGHTFLAGS_off_SHIFT)
#define LIGHTFLAGS_SET_off(x, off)                         (x) = ((C(LightFlags))(x) & ~((C(LightFlags))LIGHTFLAGS_off_MASK)) | (((C(LightFlags))(off)) << LIGHTFLAGS_off_SHIFT)
#define LIGHTFLAGS_spot_SHIFT                            1
#define LIGHTFLAGS_spot_MASK                             0x2
#define LIGHTFLAGS_spot(x)                               ((((C(LightFlags))(x)) & LIGHTFLAGS_spot_MASK) >> LIGHTFLAGS_spot_SHIFT)
#define LIGHTFLAGS_SET_spot(x, spot)                        (x) = ((C(LightFlags))(x) & ~((C(LightFlags))LIGHTFLAGS_spot_MASK)) | (((C(LightFlags))(spot)) << LIGHTFLAGS_spot_SHIFT)
#define LIGHTFLAGS_omni_SHIFT                            2
#define LIGHTFLAGS_omni_MASK                             0x4
#define LIGHTFLAGS_omni(x)                               ((((C(LightFlags))(x)) & LIGHTFLAGS_omni_MASK) >> LIGHTFLAGS_omni_SHIFT)
#define LIGHTFLAGS_SET_omni(x, omni)                        (x) = ((C(LightFlags))(x) & ~((C(LightFlags))LIGHTFLAGS_omni_MASK)) | (((C(LightFlags))(omni)) << LIGHTFLAGS_omni_SHIFT)
#define LIGHTFLAGS_attenuation_SHIFT                     3
#define LIGHTFLAGS_attenuation_MASK                      0x8
#define LIGHTFLAGS_attenuation(x)                        ((((C(LightFlags))(x)) & LIGHTFLAGS_attenuation_MASK) >> LIGHTFLAGS_attenuation_SHIFT)
#define LIGHTFLAGS_SET_attenuation(x, attenuation)                 (x) = ((C(LightFlags))(x) & ~((C(LightFlags))LIGHTFLAGS_attenuation_MASK)) | (((C(LightFlags))(attenuation)) << LIGHTFLAGS_attenuation_SHIFT)
#define LIGHTFLAGS(off, spot, omni, attenuation)                            ((((((C(LightFlags))(off)) << LIGHTFLAGS_off_SHIFT) | ((C(LightFlags))(spot)) << LIGHTFLAGS_spot_SHIFT) | ((C(LightFlags))(omni)) << LIGHTFLAGS_omni_SHIFT) | ((C(LightFlags))(attenuation)) << LIGHTFLAGS_attenuation_SHIFT)


struct C(RenderStateFloat)
{
   union
   {
      float f;
      uint ui;
   };
};
extern THIS_LIB_IMPORT void (* Surface_area)(C(Surface) __this, int x1, int y1, int x2, int y2);

extern THIS_LIB_IMPORT void (* Surface_bevel)(C(Surface) __this, C(bool) inner, int x, int y, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_blit)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int sx, int sy, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_centerTextf)(C(Surface) __this, int x, int y, const char * format, ...);

extern THIS_LIB_IMPORT void (* Surface_clear)(C(Surface) __this, C(ClearType) type);

extern THIS_LIB_IMPORT void (* Surface_clip)(C(Surface) __this, C(Box) * box);

extern THIS_LIB_IMPORT void (* Surface_drawLine)(C(Surface) __this, int x1, int y1, int x2, int y2);

extern THIS_LIB_IMPORT void (* Surface_drawingChar)(C(Surface) __this, byte value);

extern THIS_LIB_IMPORT void (* Surface_filter)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);

extern THIS_LIB_IMPORT void (* Surface_filterHTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_filterVTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);

extern THIS_LIB_IMPORT C(Color) (* Surface_getBackground)(C(Surface) __this);

extern THIS_LIB_IMPORT void (* Surface_getBox)(C(Surface) __this, C(Box) * value);

extern THIS_LIB_IMPORT C(Display) (* Surface_getDisplay)(C(Surface) __this);

extern THIS_LIB_IMPORT C(Font) * (* Surface_getFont)(C(Surface) __this);

extern THIS_LIB_IMPORT C(Color) (* Surface_getForeground)(C(Surface) __this);

extern THIS_LIB_IMPORT C(ColorAlpha) (* Surface_getPixel)(C(Surface) __this, int x, int y);

extern THIS_LIB_IMPORT void (* Surface_getSize)(C(Surface) __this, int * w, int * h);

extern THIS_LIB_IMPORT C(bool) (* Surface_getTextOpacity)(C(Surface) __this);

extern THIS_LIB_IMPORT void (* Surface_gradient)(C(Surface) __this, C(ColorKey) * keys, int numKeys, float smoothness, C(GradientDirection) direction, int x1, int y1, int x2, int y2);

extern THIS_LIB_IMPORT void (* Surface_hLine)(C(Surface) __this, int x1, int x2, int y);

extern THIS_LIB_IMPORT void (* Surface_hTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_lineStipple)(C(Surface) __this, uint value);

extern THIS_LIB_IMPORT void (* Surface_putPixel)(C(Surface) __this, int x, int y);

extern THIS_LIB_IMPORT void (* Surface_rectangle)(C(Surface) __this, int x1, int y1, int x2, int y2);

extern THIS_LIB_IMPORT void (* Surface_setBackground)(C(Surface) __this, C(ColorAlpha) value);

extern THIS_LIB_IMPORT void (* Surface_setForeground)(C(Surface) __this, C(ColorAlpha) value);

extern THIS_LIB_IMPORT void (* Surface_stretch)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);

extern THIS_LIB_IMPORT void (* Surface_stretchf)(C(Surface) __this, C(Bitmap) src, float dx, float dy, float sx, float sy, float w, float h, float sw, float sh);

extern THIS_LIB_IMPORT void (* Surface_textExtent)(C(Surface) __this, const char * text, int len, int * width, int * height);

extern THIS_LIB_IMPORT void (* Surface_textExtent2)(C(Surface) __this, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);

extern THIS_LIB_IMPORT void (* Surface_textFont)(C(Surface) __this, C(Font) * value);

extern THIS_LIB_IMPORT void (* Surface_textOpacity)(C(Surface) __this, C(bool) value);

extern THIS_LIB_IMPORT void (* Surface_thinBevel)(C(Surface) __this, C(bool) inner, int x, int y, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_tile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_vLine)(C(Surface) __this, int y1, int y2, int x);

extern THIS_LIB_IMPORT void (* Surface_vTile)(C(Surface) __this, C(Bitmap) src, int dx, int dy, int w, int h);

extern THIS_LIB_IMPORT void (* Surface_writeText)(C(Surface) __this, int x, int y, const char * text, int len);

extern THIS_LIB_IMPORT void (* Surface_writeText2)(C(Surface) __this, int x, int y, const char * text, int len, int prevGlyph, int * rPrevGlyph);

extern THIS_LIB_IMPORT void (* Surface_writeTextDots)(C(Surface) __this, C(Alignment) alignment, int x, int y, int width, const char * text, int len);

extern THIS_LIB_IMPORT void (* Surface_writeTextDotsf)(C(Surface) __this, C(Alignment) alignment, int x, int y, int width, const char * format, ...);

extern THIS_LIB_IMPORT void (* Surface_writeTextf)(C(Surface) __this, int x, int y, const char * format, ...);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, alphaWrite);
extern THIS_LIB_IMPORT void (* Surface_set_alphaWrite)(const C(Surface) s, C(AlphaWriteMode) value);
extern THIS_LIB_IMPORT C(AlphaWriteMode) (* Surface_get_alphaWrite)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, blend);
extern THIS_LIB_IMPORT void (* Surface_set_blend)(const C(Surface) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Surface_get_blend)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, bitmap);
extern THIS_LIB_IMPORT C(Bitmap) (* Surface_get_bitmap)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, outlineColor);
extern THIS_LIB_IMPORT void (* Surface_set_outlineColor)(const C(Surface) s, C(ColorAlpha) value);
extern THIS_LIB_IMPORT C(ColorAlpha) (* Surface_get_outlineColor)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, foreground);
extern THIS_LIB_IMPORT void (* Surface_set_foreground)(const C(Surface) s, C(ColorAlpha) value);
extern THIS_LIB_IMPORT C(ColorAlpha) (* Surface_get_foreground)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, background);
extern THIS_LIB_IMPORT void (* Surface_set_background)(const C(Surface) s, C(ColorAlpha) value);
extern THIS_LIB_IMPORT C(ColorAlpha) (* Surface_get_background)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, blitTint);
extern THIS_LIB_IMPORT void (* Surface_set_blitTint)(const C(Surface) s, C(ColorAlpha) value);
extern THIS_LIB_IMPORT C(ColorAlpha) (* Surface_get_blitTint)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, blackTint);
extern THIS_LIB_IMPORT void (* Surface_set_blackTint)(const C(Surface) s, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* Surface_get_blackTint)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, lineStipple);
extern THIS_LIB_IMPORT void (* Surface_set_lineStipple)(const C(Surface) s, uint value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, size);
extern THIS_LIB_IMPORT void (* Surface_get_size)(const C(Surface) s, C(Size) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, display);
extern THIS_LIB_IMPORT C(Display) (* Surface_get_display)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, font);
extern THIS_LIB_IMPORT void (* Surface_set_font)(const C(Surface) s, C(Font) * value);
extern THIS_LIB_IMPORT C(Font) * (* Surface_get_font)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, textOpacity);
extern THIS_LIB_IMPORT void (* Surface_set_textOpacity)(const C(Surface) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Surface_get_textOpacity)(const C(Surface) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, drawingChar);
extern THIS_LIB_IMPORT void (* Surface_set_drawingChar)(const C(Surface) s, byte value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Surface, clipping);
extern THIS_LIB_IMPORT void (* Surface_set_clipping)(const C(Surface) s, const C(Box) * value);

extern THIS_LIB_IMPORT int (* F(bestColorMatch))(C(ColorAlpha) * palette, int start, int end, C(Color) rgb);
extern THIS_LIB_IMPORT byte (* F(getColorDepthShifts))(C(PixelFormat) format);
extern THIS_LIB_IMPORT C(Material) * (* F(getDefaultMaterial))(void);
extern THIS_LIB_IMPORT C(ColorAlpha) * (* F(getDefaultPalette))(void);
extern THIS_LIB_IMPORT int (* F(getDepthBits))(C(PixelFormat) colorDepth);
extern THIS_LIB_IMPORT int (* F(getResolutionHeight))(C(Resolution) resolution);
extern THIS_LIB_IMPORT int (* F(getResolutionWidth))(C(Resolution) resolution);
extern THIS_LIB_IMPORT C(Map) (* F(listAvailableFonts))(void);
extern THIS_LIB_IMPORT C(ColorAlpha) * (* F(loadPalette))(const char * fileName, const char * type);
extern THIS_LIB_IMPORT void (* F(paletteGradient))(C(ColorAlpha) * palette, int numColors, C(ColorKey) * keys, int numKeys, float smoothness);
extern THIS_LIB_IMPORT C(FaceInfo) * (* F(resolveCharFont))(constString faceName, float size, C(FontFlags) flags, constString lang, unichar testChar);
extern THIS_LIB_IMPORT C(Array) (* F(resolveFont))(constString faceName, float size, C(FontFlags) flags);
extern THIS_LIB_IMPORT void (* F(setPrintingDocumentName))(constString name);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere  /////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
struct C(FreeSpots)
{
   uint size;
   int * spots;
   int nextSpot;
   int used;
};
typedef struct C(FreeSpots) C(FreeSpots);
typedef struct C(GLDrawCommand) C(GLDrawCommand);
typedef struct C(GLMultiDraw) C(GLMultiDraw);
#if CPP11
enum C(GLTextureFilter) : int
#else
typedef int C(GLTextureFilter);
enum C(GLTextureFilter)
#endif
{
   GLTextureFilter_nearest = 0x0,
   GLTextureFilter_linear = 0x1
};

// end -- moved backwards outputs
#define drawIDAttribute (7)

#define posOffsetAttribute (8)

#define transform0Attribute (9)

#define transform1Attribute (10)

#define transform2Attribute (11)

#define transform3Attribute (12)

extern THIS_LIB_IMPORT void (* FreeSpots_init)(C(FreeSpots) * __this, uint count);

extern THIS_LIB_IMPORT void (* FreeSpots_markFree)(C(FreeSpots) * __this, int spot);

extern THIS_LIB_IMPORT int (* FreeSpots_next)(C(FreeSpots) * __this);

extern THIS_LIB_IMPORT void (* FreeSpots_resize)(C(FreeSpots) * __this, uint count);

struct C(GLArrayTexture)
{
   uint texture;
   uint width;
   uint height;
   uint numLayers;
   uint numLevels;
   C(bool) maxLevel;
   int format;
   C(FreeSpots) spots;
};
extern THIS_LIB_IMPORT void (* GLArrayTexture__init)(C(GLArrayTexture) * __this, int levels, int w, int h, int count, int format, C(bool) setMaxLevel);

extern THIS_LIB_IMPORT int (* GLArrayTexture_allocateLayer)(C(GLArrayTexture) * __this, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_bind)(C(GLArrayTexture) * __this);

extern THIS_LIB_IMPORT void (* GLArrayTexture_copy)(C(GLArrayTexture) * __this, C(GLArrayTexture) * src, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_free)(C(GLArrayTexture) * __this);

extern THIS_LIB_IMPORT void (* GLArrayTexture_freeLayer)(C(GLArrayTexture) * __this, int layer);

extern THIS_LIB_IMPORT void (* GLArrayTexture_init)(C(GLArrayTexture) * __this, int levels, int w, int h, int count);

extern THIS_LIB_IMPORT void (* GLArrayTexture_initMaxLevel)(C(GLArrayTexture) * __this, int levels, int w, int h, int count);

extern THIS_LIB_IMPORT void (* GLArrayTexture_initRGBAUShort)(C(GLArrayTexture) * __this, int levels, int w, int h, int count);

extern THIS_LIB_IMPORT void (* GLArrayTexture_initRGBUShort)(C(GLArrayTexture) * __this, int levels, int w, int h, int count);

extern THIS_LIB_IMPORT void (* GLArrayTexture_initUShort)(C(GLArrayTexture) * __this, int levels, int w, int h, int count);

extern THIS_LIB_IMPORT void (* GLArrayTexture_resize)(C(GLArrayTexture) * __this, uint numLayers, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_set1x1Layer)(C(GLArrayTexture) * __this, int layer, C(ColorAlpha) color, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setFilter)(C(GLArrayTexture) * __this, C(GLTextureFilter) minFilter, C(GLTextureFilter) magFilter);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setLayer)(C(GLArrayTexture) * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setLayerCompressed)(C(GLArrayTexture) * __this, int level, int x, int y, int layer, byte * c, uintsize sizeBytes, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setLayerFormat)(C(GLArrayTexture) * __this, int level, int x, int y, int layer, byte * c, uint targetFBO, int format, int type);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setLayerRGBAUShort)(C(GLArrayTexture) * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setLayerRGBUShort)(C(GLArrayTexture) * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

extern THIS_LIB_IMPORT void (* GLArrayTexture_setLayerUShort)(C(GLArrayTexture) * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

struct C(GLDrawCommand)
{
   uint count;
   uint instanceCount;
   uint firstIndex;
   uint baseVertex;
   uint baseInstance;
};
struct C(GLMultiDraw)
{
   C(GLMB) indexGLMB;
   C(GLMB) vertexGLMB;
   C(GLAB) idsAB;
   C(GLCAB) commandsB;
   uint vao;
   uint commandsCount;
   C(GLIMTKMode) drawMode;
   uint commandsAlloced;
   uint * drawIDs;
   C(GLDrawCommand) * commands;
   uint type;
   uint idsAlloced;
   uint totalInstances;
   uint vertexStride;
   C(GLAB) transformsAB;
   int transformSize;
   float * transforms;
   uint lastTransformAB;
   uint lastIDAB;
   uint lastVBO;
   uint lastIBO;
};
extern THIS_LIB_IMPORT void (* GLMultiDraw_addDrawCommand)(C(GLMultiDraw) * __this, uint indexCount, uint instanceCount, uint firstIndex, uint baseVertex, uint baseInstance);

extern THIS_LIB_IMPORT void (* GLMultiDraw_addDrawCommandCustomID)(C(GLMultiDraw) * __this, uint indexCount, uint instanceCount, uint firstIndex, uint baseVertex, uint baseInstance, uint layer);

extern THIS_LIB_IMPORT int (* GLMultiDraw_allocateIx)(C(GLMultiDraw) * __this, uint nIndices, uint indexSize, const void * data);

extern THIS_LIB_IMPORT int (* GLMultiDraw_allocateVbo)(C(GLMultiDraw) * __this, uint nVertices, uint vertexSize, const void * data);

extern THIS_LIB_IMPORT void (* GLMultiDraw_draw)(C(GLMultiDraw) * __this);

extern THIS_LIB_IMPORT void (* GLMultiDraw_free)(C(GLMultiDraw) * __this);

extern THIS_LIB_IMPORT void (* GLMultiDraw_freeIx)(C(GLMultiDraw) * __this, int baseIndex, uint indexSize, uint count);

extern THIS_LIB_IMPORT void (* GLMultiDraw_freeVbo)(C(GLMultiDraw) * __this, int baseVertex, uint vertexSize, uint count);

extern THIS_LIB_IMPORT void (* GLMultiDraw_init)(C(GLMultiDraw) * __this, C(GLIMTKMode) mode, uint minAlloc);

extern THIS_LIB_IMPORT void (* GLMultiDraw_prepare)(C(GLMultiDraw) * __this, int vertNCoords, int verticesStride);

extern THIS_LIB_IMPORT void (* GLMultiDraw_printStats)(C(GLMultiDraw) * __this);

extern THIS_LIB_IMPORT void (* GLMultiDraw_resize)(C(GLMultiDraw) * __this, uint size);

extern THIS_LIB_IMPORT void (* GLMultiDraw_resizeCommands)(C(GLMultiDraw) * __this, uint size);

extern THIS_LIB_IMPORT void (* GLMultiDraw_resizeIDs)(C(GLMultiDraw) * __this, uint size);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GLMultiDraw, ix32);
extern THIS_LIB_IMPORT void (* GLMultiDraw_set_ix32)(const C(GLMultiDraw) * g, C(bool) value);

extern THIS_LIB_IMPORT void (* F(gLMultisampling))(C(bool) value);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gfx||bitmaps  ///////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


typedef struct C(PNGOptions) C(PNGOptions);
struct C(PNGOptions)
{
   int zlibCompressionLevel;
};

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gfx3D||meshes  //////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef struct C(Cube) C(Cube);
typedef struct C(SkyBox) C(SkyBox);
typedef struct C(Sphere) C(Sphere);
// end -- moved backwards outputs
struct C(Cube)
{
   byte __ecerePrivateData0[128];
   C(Transform) transform;
   byte __ecere_padding[696];
};
extern THIS_LIB_IMPORT C(bool) (* Cube_create)(C(Cube) * __this, const C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Cube, size);
extern THIS_LIB_IMPORT void (* Cube_set_size)(const C(Cube) * c, const C(Vector3Df) * value);

struct C(SkyBox)
{
   byte __ecerePrivateData0[128];
   C(Transform) transform;
   byte __ecere_padding[728];
};
extern THIS_LIB_IMPORT C(bool) (* SkyBox_create)(C(SkyBox) * __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT void (* SkyBox_render)(C(SkyBox) * __this, C(Camera) camera, C(Display) display);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SkyBox, size);
extern THIS_LIB_IMPORT void (* SkyBox_set_size)(const C(SkyBox) * s, const C(Vector3Df) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SkyBox, folder);
extern THIS_LIB_IMPORT void (* SkyBox_set_folder)(const C(SkyBox) * s, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SkyBox, extension);
extern THIS_LIB_IMPORT void (* SkyBox_set_extension)(const C(SkyBox) * s, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SkyBox, newStyle);
extern THIS_LIB_IMPORT void (* SkyBox_set_newStyle)(const C(SkyBox) * s, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SkyBox, cubeMap);
extern THIS_LIB_IMPORT void (* SkyBox_set_cubeMap)(const C(SkyBox) * s, C(CubeMap) value);

struct C(Sphere)
{
   byte __ecerePrivateData0[128];
   C(Transform) transform;
   byte __ecere_padding[696];
};
extern THIS_LIB_IMPORT C(bool) (* Sphere_create)(C(Sphere) * __this, C(DisplaySystem) displaySystem);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Sphere, numLat);
extern THIS_LIB_IMPORT void (* Sphere_set_numLat)(const C(Sphere) * s, int value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Sphere, numLon);
extern THIS_LIB_IMPORT void (* Sphere_set_numLon)(const C(Sphere) * s, int value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Sphere, flattenedBody);
extern THIS_LIB_IMPORT void (* Sphere_set_flattenedBody)(const C(Sphere) * s, float value);


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gui||controls  //////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
struct C(EditLine)
{
   byte __ecere_padding[48];
};
struct CM(ListBox)
{
   byte __ecerePrivateData0[128];
   double typingTimeOut;
   byte __ecere_padding[176];
};
struct CM(SelectorButton)
{
   C(Window) focusHolder;
};
#if CPP11
enum C(BoxAlignment) : int
#else
typedef int C(BoxAlignment);
enum C(BoxAlignment)
#endif
{
   BoxAlignment_center = 0x0,
   BoxAlignment_left = 0x1,
   BoxAlignment_right = 0x2,
   BoxAlignment_top = 0x3,
   BoxAlignment_bottom = 0x4
};

typedef struct C(BufferLocation) C(BufferLocation);
#if CPP11
enum C(ButtonState) : int
#else
typedef int C(ButtonState);
enum C(ButtonState)
#endif
{
   ButtonState_up = 0x0,
   ButtonState_down = 0x1,
   ButtonState_over = 0x2,
   ButtonState_disabled = 0x3,
   ButtonState_upChecked = 0x4,
   ButtonState_downChecked = 0x5,
   ButtonState_overChecked = 0x6,
   ButtonState_disabledChecked = 0x7
};

typedef C(CommonControl) C(CalendarControl);
typedef C(CommonControl) C(DataBox);
typedef C(Instance) C(DataField);
typedef C(Instance) C(DataRow);
typedef C(CommonControl) C(DirectoriesBox);
typedef C(CommonControl) C(DropBox);
typedef C(CommonControl) C(EditBox);
#if CPP11
enum C(EditBoxFindResult) : int
#else
typedef int C(EditBoxFindResult);
enum C(EditBoxFindResult)
#endif
{
   EditBoxFindResult_notFound = 0x0,
   EditBoxFindResult_found = 0x1,
   EditBoxFindResult_wrapped = 0x2
};

typedef C(File) C(EditBoxStream);
typedef struct C(EditLine) C(EditLine);
typedef C(Instance) C(EditSyntaxHL);
typedef C(Button) C(SelectorButton);
typedef C(SelectorButton) C(EditableSelectorButton);
typedef C(Window) C(FileDialog);
typedef uint32 C(Key);
typedef C(CommonControl) C(ListBox);
typedef C(Instance) C(Menu);
typedef C(Instance) C(MenuItem);
typedef uint32 C(Modifiers);
typedef C(Window) C(PaneSplitter);
typedef C(CommonControl) C(PathBox);
#if CPP11
enum C(PathTypeExpected) : int
#else
typedef int C(PathTypeExpected);
enum C(PathTypeExpected)
#endif
{
   PathTypeExpected_none = 0x0,
   PathTypeExpected_any = 0x1,
   PathTypeExpected_directory = 0x2,
   PathTypeExpected_file = 0x3
};

typedef float C(Percentage);
typedef C(CommonControl) C(ScrollBar);
#if CPP11
enum C(ScrollBarAction) : int
#else
typedef int C(ScrollBarAction);
enum C(ScrollBarAction)
#endif
{
   ScrollBarAction_none = 0x0,
   ScrollBarAction_up = 0x1,
   ScrollBarAction_down = 0x2,
   ScrollBarAction_pageDown = 0x3,
   ScrollBarAction_pageUp = 0x4,
   ScrollBarAction_setPosition = 0x5,
   ScrollBarAction_home = 0x6,
   ScrollBarAction_end = 0x7,
   ScrollBarAction_setRange = 0x8,
   ScrollBarAction_wheelUp = 0x9,
   ScrollBarAction_wheelDown = 0xA
};

#if CPP11
enum C(ScrollDirection) : int
#else
typedef int C(ScrollDirection);
enum C(ScrollDirection)
#endif
{
   ScrollDirection_horizontal = 0x0,
   ScrollDirection_vertical = 0x1
};

typedef C(Window) C(Stacker);
typedef C(Stacker) C(SelectorBar);
typedef C(Window) C(StatusBar);
typedef C(Instance) C(StatusField);
typedef C(Window) C(Tab);
typedef C(Window) C(TabControl);
#if CPP11
enum C(TabsPlacement) : int
#else
typedef int C(TabsPlacement);
enum C(TabsPlacement)
#endif
{
   TabsPlacement_top = 0x0,
   TabsPlacement_bottom = 0x1,
   TabsPlacement_left = 0x2,
   TabsPlacement_right = 0x3
};

typedef struct C(UndoAction) C(UndoAction);
typedef C(Instance) C(UndoBuffer);
// end -- moved backwards outputs
typedef uint32 C(DataDisplayFlags);
typedef struct C(DataFieldSort) C(DataFieldSort);
typedef char * C(DirPath);
typedef char * C(FilePath);
typedef C(CommonControl) C(Label);
typedef C(MenuItem) C(MenuDivider);
typedef C(MenuItem) C(MenuPlacement);
typedef C(Instance) C(OldArray);
typedef C(CommonControl) C(Picture);
typedef C(Window) C(PopupMenu);
typedef C(CommonControl) C(ProgressBar);
typedef C(DataBox) C(SavingDataBox);
typedef C(Stacker) C(ToolBar);
typedef C(Button) C(ToolButton);
typedef C(Window) C(ToolSeparator);
typedef C(Window) C(ToolTip);
struct C(BufferLocation)
{
   C(EditLine) * line;
   int y;
   int x;
};
extern THIS_LIB_IMPORT void (* BufferLocation_adjustAdd)(C(BufferLocation) * __this, C(BufferLocation) * start, C(BufferLocation) * end);

extern THIS_LIB_IMPORT void (* BufferLocation_adjustDelete)(C(BufferLocation) * __this, C(BufferLocation) * start, C(BufferLocation) * end);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyClicked);
// C(bool) Button_notifyClicked(C(Button) __i, C(Window) __t, C(Button) button, int x, int y, C(Modifiers) mods);
#define Button_notifyClicked(__i, __t, button, x, y, mods) \
   VMETHOD(CO(Button), Button, notifyClicked, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG button _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyClicked);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyDoubleClick);
// C(bool) Button_notifyDoubleClick(C(Button) __i, C(Window) __t, C(Button) button, int x, int y, C(Modifiers) mods);
#define Button_notifyDoubleClick(__i, __t, button, x, y, mods) \
   VMETHOD(CO(Button), Button, notifyDoubleClick, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG button _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyMouseLeave);
// C(bool) Button_notifyMouseLeave(C(Button) __i, C(Window) __t, C(Button) button, C(Modifiers) mods);
#define Button_notifyMouseLeave(__i, __t, button, mods) \
   VMETHOD(CO(Button), Button, notifyMouseLeave, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG C(Modifiers), \
      __t _ARG button _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyMouseLeave);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyMouseMove);
// C(bool) Button_notifyMouseMove(C(Button) __i, C(Window) __t, C(Button) button, int x, int y, C(Modifiers) mods);
#define Button_notifyMouseMove(__i, __t, button, x, y, mods) \
   VMETHOD(CO(Button), Button, notifyMouseMove, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG button _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyMouseMove);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyMouseOver);
// C(bool) Button_notifyMouseOver(C(Button) __i, C(Window) __t, C(Button) button, int x, int y, C(Modifiers) mods);
#define Button_notifyMouseOver(__i, __t, button, x, y, mods) \
   VMETHOD(CO(Button), Button, notifyMouseOver, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG button _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyMouseOver);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyPushed);
// C(bool) Button_notifyPushed(C(Button) __i, C(Window) __t, C(Button) button, int x, int y, C(Modifiers) mods);
#define Button_notifyPushed(__i, __t, button, x, y, mods) \
   VMETHOD(CO(Button), Button, notifyPushed, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG button _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyPushed);

extern THIS_LIB_IMPORT int M_VTBLID(Button, notifyReleased);
// C(bool) Button_notifyReleased(C(Button) __i, C(Window) __t, C(Button) button, int x, int y, C(Modifiers) mods);
#define Button_notifyReleased(__i, __t, button, x, y, mods) \
   VMETHOD(CO(Button), Button, notifyReleased, __i, C(bool), \
      C(Window) _ARG C(Button) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG button _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Button, notifyReleased);

extern THIS_LIB_IMPORT void (* Button_removeRadio)(C(Button) __this);

extern THIS_LIB_IMPORT void (* Button_setColor)(C(Button) __this, C(ButtonState) state, C(Color) value);

extern THIS_LIB_IMPORT void (* Button_setTextColor)(C(Button) __this, C(ButtonState) state, C(Color) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, opacity);
extern THIS_LIB_IMPORT void (* Button_set_opacity)(const C(Button) b, C(Percentage) value);
extern THIS_LIB_IMPORT C(Percentage) (* Button_get_opacity)(const C(Button) b);
extern THIS_LIB_IMPORT C(bool) (* Button_isSet_opacity)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, drawBehind);
extern THIS_LIB_IMPORT void (* Button_set_drawBehind)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_drawBehind)(const C(Button) b);
extern THIS_LIB_IMPORT C(bool) (* Button_isSet_drawBehind)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, isRadio);
extern THIS_LIB_IMPORT void (* Button_set_isRadio)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_isRadio)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, isCheckbox);
extern THIS_LIB_IMPORT void (* Button_set_isCheckbox)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_isCheckbox)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, bevel);
extern THIS_LIB_IMPORT void (* Button_set_bevel)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_bevel)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, bevelOver);
extern THIS_LIB_IMPORT void (* Button_set_bevelOver)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_bevelOver)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, toggle);
extern THIS_LIB_IMPORT void (* Button_set_toggle)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_toggle)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, checked);
extern THIS_LIB_IMPORT void (* Button_set_checked)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_checked)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, alignment);
extern THIS_LIB_IMPORT void (* Button_set_alignment)(const C(Button) b, C(Alignment) value);
extern THIS_LIB_IMPORT C(Alignment) (* Button_get_alignment)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, bitmap);
extern THIS_LIB_IMPORT void (* Button_set_bitmap)(const C(Button) b, C(BitmapResource) value);
extern THIS_LIB_IMPORT C(BitmapResource) (* Button_get_bitmap)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, stayUp);
extern THIS_LIB_IMPORT void (* Button_set_stayUp)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_stayUp)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, scaleBitmap);
extern THIS_LIB_IMPORT void (* Button_set_scaleBitmap)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_scaleBitmap)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, keyRepeat);
extern THIS_LIB_IMPORT void (* Button_set_keyRepeat)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_keyRepeat)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, symbol);
extern THIS_LIB_IMPORT void (* Button_set_symbol)(const C(Button) b, unichar value);
extern THIS_LIB_IMPORT unichar (* Button_get_symbol)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, ellipsis);
extern THIS_LIB_IMPORT void (* Button_set_ellipsis)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_ellipsis)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, stayDown);
extern THIS_LIB_IMPORT void (* Button_set_stayDown)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_stayDown)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, offset);
extern THIS_LIB_IMPORT void (* Button_set_offset)(const C(Button) b, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Button_get_offset)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, buttonState);
extern THIS_LIB_IMPORT void (* Button_set_buttonState)(const C(Button) b, C(ButtonState) value);
extern THIS_LIB_IMPORT C(ButtonState) (* Button_get_buttonState)(const C(Button) b);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Button, bitmapAlignment);
extern THIS_LIB_IMPORT void (* Button_set_bitmapAlignment)(const C(Button) b, C(BoxAlignment) value);
extern THIS_LIB_IMPORT C(BoxAlignment) (* Button_get_bitmapAlignment)(const C(Button) b);

struct CM(CalendarControl)
{
   C(Date) dateValue;
   C(Month) shownMonth;
   int shownYear;
   byte __ecere_padding[44];
};
extern THIS_LIB_IMPORT int M_VTBLID(CalendarControl, notifyChanged);
// void CalendarControl_notifyChanged(C(CalendarControl) __i, C(Window) __t, C(CalendarControl) calendarControl, C(bool) close);
#define CalendarControl_notifyChanged(__i, __t, calendarControl, close) \
   VMETHOD(CO(CalendarControl), CalendarControl, notifyChanged, __i, void, \
      C(Window) _ARG C(CalendarControl) _ARG C(bool), \
      __t _ARG calendarControl _ARG close)
extern THIS_LIB_IMPORT C(Method) * METHOD(CalendarControl, notifyChanged);

struct CM(DataBox)
{
   C(Class) * type;
   void * data;
   void * fieldData;
   C(Window) editor;
   C(bool) readOnly;
   C(bool) keepEditor;
   C(bool) autoSize;
   C(bool) needUpdate;
   C(String) stringValue;
   byte __ecere_padding[8];
};
extern THIS_LIB_IMPORT void (* DataBox_modified)(C(DataBox) __this);

extern THIS_LIB_IMPORT int M_VTBLID(DataBox, notifyChanged);
// C(bool) DataBox_notifyChanged(C(DataBox) __i, C(Window) __t, C(DataBox) dataBox, C(bool) closingDropDown);
#define DataBox_notifyChanged(__i, __t, dataBox, closingDropDown) \
   VMETHOD(CO(DataBox), DataBox, notifyChanged, __i, C(bool), \
      C(Window) _ARG C(DataBox) _ARG C(bool), \
      __t _ARG dataBox _ARG closingDropDown)
extern THIS_LIB_IMPORT C(Method) * METHOD(DataBox, notifyChanged);

extern THIS_LIB_IMPORT int M_VTBLID(DataBox, notifyModified);
// C(bool) DataBox_notifyModified(C(DataBox) __i, C(Window) __t);
#define DataBox_notifyModified(__i, __t) \
   VMETHOD(CO(DataBox), DataBox, notifyModified, __i, C(bool), \
      C(Window), \
      __t)
extern THIS_LIB_IMPORT C(Method) * METHOD(DataBox, notifyModified);

extern THIS_LIB_IMPORT int M_VTBLID(DataBox, onConfigure);
// void DataBox_onConfigure(C(DataBox) __i, C(Window) editor);
#define DataBox_onConfigure(__i, editor) \
   VMETHOD(CO(DataBox), DataBox, onConfigure, __i, void, \
      C(DataBox) _ARG C(Window), \
      __i _ARG editor)
extern THIS_LIB_IMPORT C(Method) * METHOD(DataBox, onConfigure);

extern THIS_LIB_IMPORT void (* DataBox_refresh)(C(DataBox) __this);

extern THIS_LIB_IMPORT C(bool) (* DataBox_saveData)(C(DataBox) __this);

extern THIS_LIB_IMPORT int M_VTBLID(DataBox, setData);
// void DataBox_setData(C(DataBox) __i, any_object newData, C(bool) closingDropDown);
#define DataBox_setData(__i, newData, closingDropDown) \
   VMETHOD(CO(DataBox), DataBox, setData, __i, void, \
      C(DataBox) _ARG any_object _ARG C(bool), \
      __i _ARG newData _ARG closingDropDown)
extern THIS_LIB_IMPORT C(Method) * METHOD(DataBox, setData);

#define DATADISPLAYFLAGS_selected_SHIFT                  0
#define DATADISPLAYFLAGS_selected_MASK                   0x1
#define DATADISPLAYFLAGS_selected(x)                     ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_selected_MASK) >> DATADISPLAYFLAGS_selected_SHIFT)
#define DATADISPLAYFLAGS_SET_selected(x, selected)              (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_selected_MASK)) | (((C(DataDisplayFlags))(selected)) << DATADISPLAYFLAGS_selected_SHIFT)
#define DATADISPLAYFLAGS_fullRow_SHIFT                   1
#define DATADISPLAYFLAGS_fullRow_MASK                    0x2
#define DATADISPLAYFLAGS_fullRow(x)                      ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_fullRow_MASK) >> DATADISPLAYFLAGS_fullRow_SHIFT)
#define DATADISPLAYFLAGS_SET_fullRow(x, fullRow)               (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_fullRow_MASK)) | (((C(DataDisplayFlags))(fullRow)) << DATADISPLAYFLAGS_fullRow_SHIFT)
#define DATADISPLAYFLAGS_current_SHIFT                   2
#define DATADISPLAYFLAGS_current_MASK                    0x4
#define DATADISPLAYFLAGS_current(x)                      ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_current_MASK) >> DATADISPLAYFLAGS_current_SHIFT)
#define DATADISPLAYFLAGS_SET_current(x, current)               (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_current_MASK)) | (((C(DataDisplayFlags))(current)) << DATADISPLAYFLAGS_current_SHIFT)
#define DATADISPLAYFLAGS_active_SHIFT                    3
#define DATADISPLAYFLAGS_active_MASK                     0x8
#define DATADISPLAYFLAGS_active(x)                       ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_active_MASK) >> DATADISPLAYFLAGS_active_SHIFT)
#define DATADISPLAYFLAGS_SET_active(x, active)                (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_active_MASK)) | (((C(DataDisplayFlags))(active)) << DATADISPLAYFLAGS_active_SHIFT)
#define DATADISPLAYFLAGS_dropBox_SHIFT                   4
#define DATADISPLAYFLAGS_dropBox_MASK                    0x10
#define DATADISPLAYFLAGS_dropBox(x)                      ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_dropBox_MASK) >> DATADISPLAYFLAGS_dropBox_SHIFT)
#define DATADISPLAYFLAGS_SET_dropBox(x, dropBox)               (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_dropBox_MASK)) | (((C(DataDisplayFlags))(dropBox)) << DATADISPLAYFLAGS_dropBox_SHIFT)
#define DATADISPLAYFLAGS_header_SHIFT                    5
#define DATADISPLAYFLAGS_header_MASK                     0x20
#define DATADISPLAYFLAGS_header(x)                       ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_header_MASK) >> DATADISPLAYFLAGS_header_SHIFT)
#define DATADISPLAYFLAGS_SET_header(x, header)                (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_header_MASK)) | (((C(DataDisplayFlags))(header)) << DATADISPLAYFLAGS_header_SHIFT)
#define DATADISPLAYFLAGS_firstField_SHIFT                6
#define DATADISPLAYFLAGS_firstField_MASK                 0x40
#define DATADISPLAYFLAGS_firstField(x)                   ((((C(DataDisplayFlags))(x)) & DATADISPLAYFLAGS_firstField_MASK) >> DATADISPLAYFLAGS_firstField_SHIFT)
#define DATADISPLAYFLAGS_SET_firstField(x, firstField)            (x) = ((C(DataDisplayFlags))(x) & ~((C(DataDisplayFlags))DATADISPLAYFLAGS_firstField_MASK)) | (((C(DataDisplayFlags))(firstField)) << DATADISPLAYFLAGS_firstField_SHIFT)


extern THIS_LIB_IMPORT void (* DataField_autoSize)(C(DataField) __this);

extern THIS_LIB_IMPORT void (* DataField_move)(C(DataField) __this, C(DataField) after);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, dataType);
extern THIS_LIB_IMPORT void (* DataField_set_dataType)(const C(DataField) d, C(Class) * value);
extern THIS_LIB_IMPORT C(Class) * (* DataField_get_dataType)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, editable);
extern THIS_LIB_IMPORT void (* DataField_set_editable)(const C(DataField) d, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, fixed);
extern THIS_LIB_IMPORT void (* DataField_set_fixed)(const C(DataField) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DataField_get_fixed)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, alignment);
extern THIS_LIB_IMPORT void (* DataField_set_alignment)(const C(DataField) d, C(Alignment) value);
extern THIS_LIB_IMPORT C(Alignment) (* DataField_get_alignment)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, width);
extern THIS_LIB_IMPORT void (* DataField_set_width)(const C(DataField) d, int value);
extern THIS_LIB_IMPORT int (* DataField_get_width)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, index);
extern THIS_LIB_IMPORT int (* DataField_get_index)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, position);
extern THIS_LIB_IMPORT void (* DataField_set_position)(const C(DataField) d, int value);
extern THIS_LIB_IMPORT int (* DataField_get_position)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, sortOrder);
extern THIS_LIB_IMPORT int (* DataField_get_sortOrder)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, header);
extern THIS_LIB_IMPORT void (* DataField_set_header)(const C(DataField) d, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, userData);
extern THIS_LIB_IMPORT void (* DataField_set_userData)(const C(DataField) d, void * value);
extern THIS_LIB_IMPORT void * (* DataField_get_userData)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, freeData);
extern THIS_LIB_IMPORT void (* DataField_set_freeData)(const C(DataField) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DataField_get_freeData)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, prev);
extern THIS_LIB_IMPORT C(DataField) (* DataField_get_prev)(const C(DataField) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataField, next);
extern THIS_LIB_IMPORT C(DataField) (* DataField_get_next)(const C(DataField) d);

struct C(DataFieldSort)
{
   C(DataField) field;
   int order;
};
extern THIS_LIB_IMPORT C(DataRow) (* DataRow_addRow)(C(DataRow) __this);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_addRowAfter)(C(DataRow) __this, C(DataRow) after);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_addString)(C(DataRow) __this, const char * string);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_addStringf)(C(DataRow) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* DataRow_edit)(C(DataRow) __this, C(DataField) field);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_findRow)(C(DataRow) __this, int64 tag);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_findSubRow)(C(DataRow) __this, int64 tag);

extern THIS_LIB_IMPORT any_object (* DataRow_getData)(C(DataRow) __this, C(DataField) field);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_getNextRow)(C(DataRow) __this);

extern THIS_LIB_IMPORT C(DataRow) (* DataRow_getPrevRow)(C(DataRow) __this);

extern THIS_LIB_IMPORT void (* DataRow_move)(C(DataRow) __this, C(DataRow) after);

extern THIS_LIB_IMPORT void * (* DataRow_setData)(C(DataRow) __this, C(DataField) field, any_object newData);

extern THIS_LIB_IMPORT void (* DataRow_sortSubRows)(C(DataRow) __this, C(bool) scrollToCurrent);

extern THIS_LIB_IMPORT void (* DataRow_unsetData)(C(DataRow) __this, C(DataField) field);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, tag);
extern THIS_LIB_IMPORT void (* DataRow_set_tag)(const C(DataRow) d, int64 value);
extern THIS_LIB_IMPORT int64 (* DataRow_get_tag)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, previous);
extern THIS_LIB_IMPORT C(DataRow) (* DataRow_get_previous)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, next);
extern THIS_LIB_IMPORT C(DataRow) (* DataRow_get_next)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, index);
extern THIS_LIB_IMPORT int (* DataRow_get_index)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, string);
extern THIS_LIB_IMPORT void (* DataRow_set_string)(const C(DataRow) d, const char * value);
extern THIS_LIB_IMPORT const char * (* DataRow_get_string)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, isHeader);
extern THIS_LIB_IMPORT void (* DataRow_set_isHeader)(const C(DataRow) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DataRow_get_isHeader)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, icon);
extern THIS_LIB_IMPORT void (* DataRow_set_icon)(const C(DataRow) d, C(BitmapResource) value);
extern THIS_LIB_IMPORT C(BitmapResource) (* DataRow_get_icon)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, collapsed);
extern THIS_LIB_IMPORT void (* DataRow_set_collapsed)(const C(DataRow) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DataRow_get_collapsed)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, selected);
extern THIS_LIB_IMPORT void (* DataRow_set_selected)(const C(DataRow) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DataRow_get_selected)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, parent);
extern THIS_LIB_IMPORT void (* DataRow_set_parent)(const C(DataRow) d, C(DataRow) value);
extern THIS_LIB_IMPORT C(DataRow) (* DataRow_get_parent)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, lastRow);
extern THIS_LIB_IMPORT C(DataRow) (* DataRow_get_lastRow)(const C(DataRow) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DataRow, firstRow);
extern THIS_LIB_IMPORT C(DataRow) (* DataRow_get_firstRow)(const C(DataRow) d);

struct CM(DirectoriesBox)
{
   byte __ecerePrivateData0[16];
   C(bool) browsing;
   C(Button) add;
   C(Button) remove;
   C(RepButton) up;
   C(RepButton) down;
   C(ListBox) list;
   C(DataField) dirField;
};
extern THIS_LIB_IMPORT int M_VTBLID(DirectoriesBox, notifyModified);
// C(bool) DirectoriesBox_notifyModified(C(DirectoriesBox) __i, C(Window) __t, C(DirectoriesBox) dirsBox);
#define DirectoriesBox_notifyModified(__i, __t, dirsBox) \
   VMETHOD(CO(DirectoriesBox), DirectoriesBox, notifyModified, __i, C(bool), \
      C(Window) _ARG C(DirectoriesBox), \
      __t _ARG dirsBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(DirectoriesBox, notifyModified);

extern THIS_LIB_IMPORT int M_VTBLID(DirectoriesBox, notifyPathBoxModified);
// C(bool) DirectoriesBox_notifyPathBoxModified(C(DirectoriesBox) __i, C(Window) __t, C(DirectoriesBox) dirsBox, C(PathBox) pathBox);
#define DirectoriesBox_notifyPathBoxModified(__i, __t, dirsBox, pathBox) \
   VMETHOD(CO(DirectoriesBox), DirectoriesBox, notifyPathBoxModified, __i, C(bool), \
      C(Window) _ARG C(DirectoriesBox) _ARG C(PathBox), \
      __t _ARG dirsBox _ARG pathBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(DirectoriesBox, notifyPathBoxModified);

extern THIS_LIB_IMPORT int M_VTBLID(DirectoriesBox, onBrowsedDir);
// C(bool) DirectoriesBox_onBrowsedDir(C(DirectoriesBox) __i, char ** directory);
#define DirectoriesBox_onBrowsedDir(__i, directory) \
   VMETHOD(CO(DirectoriesBox), DirectoriesBox, onBrowsedDir, __i, C(bool), \
      C(DirectoriesBox) _ARG char **, \
      __i _ARG directory)
extern THIS_LIB_IMPORT C(Method) * METHOD(DirectoriesBox, onBrowsedDir);

extern THIS_LIB_IMPORT int M_VTBLID(DirectoriesBox, onChangedDir);
// C(bool) DirectoriesBox_onChangedDir(C(DirectoriesBox) __i, char ** directory);
#define DirectoriesBox_onChangedDir(__i, directory) \
   VMETHOD(CO(DirectoriesBox), DirectoriesBox, onChangedDir, __i, C(bool), \
      C(DirectoriesBox) _ARG char **, \
      __i _ARG directory)
extern THIS_LIB_IMPORT C(Method) * METHOD(DirectoriesBox, onChangedDir);

extern THIS_LIB_IMPORT int M_VTBLID(DirectoriesBox, onPrepareBrowseDir);
// C(bool) DirectoriesBox_onPrepareBrowseDir(C(DirectoriesBox) __i, char ** directory);
#define DirectoriesBox_onPrepareBrowseDir(__i, directory) \
   VMETHOD(CO(DirectoriesBox), DirectoriesBox, onPrepareBrowseDir, __i, C(bool), \
      C(DirectoriesBox) _ARG char **, \
      __i _ARG directory)
extern THIS_LIB_IMPORT C(Method) * METHOD(DirectoriesBox, onPrepareBrowseDir);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DirectoriesBox, strings);
extern THIS_LIB_IMPORT void (* DirectoriesBox_set_strings)(const C(DirectoriesBox) d, C(Array) value);
extern THIS_LIB_IMPORT C(Array) (* DirectoriesBox_get_strings)(const C(DirectoriesBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DirectoriesBox, browseDialog);
extern THIS_LIB_IMPORT void (* DirectoriesBox_set_browseDialog)(const C(DirectoriesBox) d, C(FileDialog) value);
extern THIS_LIB_IMPORT C(FileDialog) (* DirectoriesBox_get_browseDialog)(const C(DirectoriesBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DirectoriesBox, baseBrowsePath);
extern THIS_LIB_IMPORT void (* DirectoriesBox_set_baseBrowsePath)(const C(DirectoriesBox) d, C(String) value);
extern THIS_LIB_IMPORT C(String) (* DirectoriesBox_get_baseBrowsePath)(const C(DirectoriesBox) d);

struct CM(DropBox)
{
   C(Button) button;
   byte __ecere_padding[88];
};
extern THIS_LIB_IMPORT void (* DropBox_addField)(C(DropBox) __this, C(DataField) field);

extern THIS_LIB_IMPORT C(DataRow) (* DropBox_addRow)(C(DropBox) __this);

extern THIS_LIB_IMPORT C(DataRow) (* DropBox_addRowAfter)(C(DropBox) __this, C(DataRow) after);

extern THIS_LIB_IMPORT C(DataRow) (* DropBox_addString)(C(DropBox) __this, const char * string);

extern THIS_LIB_IMPORT C(DataRow) (* DropBox_addStringf)(C(DropBox) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* DropBox_clear)(C(DropBox) __this);

extern THIS_LIB_IMPORT void (* DropBox_deleteRow)(C(DropBox) __this, C(DataRow) row);

extern THIS_LIB_IMPORT C(DataRow) (* DropBox_findRow)(C(DropBox) __this, int64 tag);

extern THIS_LIB_IMPORT C(DataRow) (* DropBox_findSubRow)(C(DropBox) __this, int64 tag);

extern THIS_LIB_IMPORT any_object (* DropBox_getData)(C(DropBox) __this, C(DataField) field);

extern THIS_LIB_IMPORT int (* DropBox_getRowCount)(C(DropBox) __this);

extern THIS_LIB_IMPORT int64 (* DropBox_getTag)(C(DropBox) __this);

extern THIS_LIB_IMPORT int M_VTBLID(DropBox, notifyClose);
// C(bool) DropBox_notifyClose(C(DropBox) __i, C(Window) __t, C(DropBox) dropBox);
#define DropBox_notifyClose(__i, __t, dropBox) \
   VMETHOD(CO(DropBox), DropBox, notifyClose, __i, C(bool), \
      C(Window) _ARG C(DropBox), \
      __t _ARG dropBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(DropBox, notifyClose);

extern THIS_LIB_IMPORT int M_VTBLID(DropBox, notifyHighlight);
// C(bool) DropBox_notifyHighlight(C(DropBox) __i, C(Window) __t, C(DropBox) dropBox, C(DataRow) row, C(Modifiers) mods);
#define DropBox_notifyHighlight(__i, __t, dropBox, row, mods) \
   VMETHOD(CO(DropBox), DropBox, notifyHighlight, __i, C(bool), \
      C(Window) _ARG C(DropBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG dropBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(DropBox, notifyHighlight);

extern THIS_LIB_IMPORT int M_VTBLID(DropBox, notifySelect);
// C(bool) DropBox_notifySelect(C(DropBox) __i, C(Window) __t, C(DropBox) dropBox, C(DataRow) row, C(Modifiers) mods);
#define DropBox_notifySelect(__i, __t, dropBox, row, mods) \
   VMETHOD(CO(DropBox), DropBox, notifySelect, __i, C(bool), \
      C(Window) _ARG C(DropBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG dropBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(DropBox, notifySelect);

extern THIS_LIB_IMPORT int M_VTBLID(DropBox, notifyTextEntry);
// C(bool) DropBox_notifyTextEntry(C(DropBox) __i, C(Window) __t, C(DropBox) dropBox, const char * string, C(bool) confirmed);
#define DropBox_notifyTextEntry(__i, __t, dropBox, string, confirmed) \
   VMETHOD(CO(DropBox), DropBox, notifyTextEntry, __i, C(bool), \
      C(Window) _ARG C(DropBox) _ARG const char * _ARG C(bool), \
      __t _ARG dropBox _ARG string _ARG confirmed)
extern THIS_LIB_IMPORT C(Method) * METHOD(DropBox, notifyTextEntry);

extern THIS_LIB_IMPORT int M_VTBLID(DropBox, onCloseDropDown);
// void DropBox_onCloseDropDown(C(DropBox) __i, C(Window) pullDown);
#define DropBox_onCloseDropDown(__i, pullDown) \
   VMETHOD(CO(DropBox), DropBox, onCloseDropDown, __i, void, \
      C(DropBox) _ARG C(Window), \
      __i _ARG pullDown)
extern THIS_LIB_IMPORT C(Method) * METHOD(DropBox, onCloseDropDown);

extern THIS_LIB_IMPORT int M_VTBLID(DropBox, onDropDown);
// C(Window) DropBox_onDropDown(C(DropBox) __i);
#define DropBox_onDropDown(__i) \
   VMETHOD(CO(DropBox), DropBox, onDropDown, __i, C(Window), \
      C(DropBox), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(DropBox, onDropDown);

extern THIS_LIB_IMPORT C(bool) (* DropBox_save)(C(DropBox) __this);

extern THIS_LIB_IMPORT void (* DropBox_selectRow)(C(DropBox) __this, C(DataRow) row);

extern THIS_LIB_IMPORT void * (* DropBox_setData)(C(DropBox) __this, C(DataField) field, any_object data);

extern THIS_LIB_IMPORT void (* DropBox_sort)(C(DropBox) __this, C(DataField) field, int order);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, activeStipple);
extern THIS_LIB_IMPORT void (* DropBox_set_activeStipple)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_activeStipple)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, showButton);
extern THIS_LIB_IMPORT void (* DropBox_set_showButton)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_showButton)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, alignment);
extern THIS_LIB_IMPORT void (* DropBox_set_alignment)(const C(DropBox) d, C(Alignment) value);
extern THIS_LIB_IMPORT C(Alignment) (* DropBox_get_alignment)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, noHighlight);
extern THIS_LIB_IMPORT void (* DropBox_set_noHighlight)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_noHighlight)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, activeColor);
extern THIS_LIB_IMPORT void (* DropBox_set_activeColor)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_activeColor)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, currentRow);
extern THIS_LIB_IMPORT void (* DropBox_set_currentRow)(const C(DropBox) d, C(DataRow) value);
extern THIS_LIB_IMPORT C(DataRow) (* DropBox_get_currentRow)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, firstRow);
extern THIS_LIB_IMPORT C(DataRow) (* DropBox_get_firstRow)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, lastRow);
extern THIS_LIB_IMPORT C(DataRow) (* DropBox_get_lastRow)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, contents);
extern THIS_LIB_IMPORT void (* DropBox_set_contents)(const C(DropBox) d, const char * value);
extern THIS_LIB_IMPORT const char * (* DropBox_get_contents)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, editText);
extern THIS_LIB_IMPORT void (* DropBox_set_editText)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_editText)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, editBox);
extern THIS_LIB_IMPORT C(EditBox) (* DropBox_get_editBox)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, typingTimeout);
extern THIS_LIB_IMPORT void (* DropBox_set_typingTimeout)(const C(DropBox) d, C(Time) value);
extern THIS_LIB_IMPORT C(Time) (* DropBox_get_typingTimeout)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, rowHeight);
extern THIS_LIB_IMPORT void (* DropBox_set_rowHeight)(const C(DropBox) d, int value);
extern THIS_LIB_IMPORT int (* DropBox_get_rowHeight)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, maxShown);
extern THIS_LIB_IMPORT void (* DropBox_set_maxShown)(const C(DropBox) d, int value);
extern THIS_LIB_IMPORT int (* DropBox_get_maxShown)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, pullDown);
extern THIS_LIB_IMPORT C(Window) (* DropBox_get_pullDown)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, showNone);
extern THIS_LIB_IMPORT void (* DropBox_set_showNone)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_showNone)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, selectionColor);
extern THIS_LIB_IMPORT void (* DropBox_set_selectionColor)(const C(DropBox) d, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* DropBox_get_selectionColor)(const C(DropBox) d);
extern THIS_LIB_IMPORT C(bool) (* DropBox_isSet_selectionColor)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, selectionText);
extern THIS_LIB_IMPORT void (* DropBox_set_selectionText)(const C(DropBox) d, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* DropBox_get_selectionText)(const C(DropBox) d);
extern THIS_LIB_IMPORT C(bool) (* DropBox_isSet_selectionText)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, changeContents);
extern THIS_LIB_IMPORT void (* DropBox_set_changeContents)(const C(DropBox) d, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* DropBox_get_changeContents)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, listBox);
extern THIS_LIB_IMPORT C(ListBox) (* DropBox_get_listBox)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(DropBox, rowCount);
extern THIS_LIB_IMPORT int (* DropBox_get_rowCount)(const C(DropBox) d);

extern THIS_LIB_IMPORT C(bool) (* EditBox_addCh)(C(EditBox) __this, unichar ch);

extern THIS_LIB_IMPORT C(bool) (* EditBox_addS)(C(EditBox) __this, const char * string);

extern THIS_LIB_IMPORT void (* EditBox_backSpace)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_centerOnCursor)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_clear)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_clearLine)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_copy)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_cut)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_delete)(C(EditBox) __this, C(EditLine) * line1, int y1, int x1, C(EditLine) * line2, int y2, int x2);

extern THIS_LIB_IMPORT void (* EditBox_deleteSelection)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_deselect)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_end)(C(EditBox) __this);

extern THIS_LIB_IMPORT C(EditBoxFindResult) (* EditBox_find)(C(EditBox) __this, const char * text, C(bool) matchWord, C(bool) matchCase, C(bool) isSearchDown);

extern THIS_LIB_IMPORT C(EditBoxFindResult) (* EditBox_findInSelection)(C(EditBox) __this, const char * text, C(bool) matchWord, C(bool) matchCase, C(EditLine) * l2, int y2, int x2);

extern THIS_LIB_IMPORT void (* EditBox_getSel)(C(EditBox) __this, char * text, C(bool) addCr);

extern THIS_LIB_IMPORT void (* EditBox_getSelPos)(C(EditBox) __this, C(EditLine) * l1, int * y1, int * x1, C(EditLine) * l2, int * y2, int * x2, C(bool) reorder);

extern THIS_LIB_IMPORT int (* EditBox_getText)(C(EditBox) __this, char * text, C(EditLine) * _l1, int _y1, int _x1, C(EditLine) * _l2, int _y2, int _x2, C(bool) addCr, C(bool) addSpaces);

extern THIS_LIB_IMPORT C(bool) (* EditBox_goToLineNum)(C(EditBox) __this, int lineNum);

extern THIS_LIB_IMPORT C(bool) (* EditBox_goToPosition)(C(EditBox) __this, C(EditLine) * line, int y, int x);

extern THIS_LIB_IMPORT void (* EditBox_home)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_lineDown)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_lineUp)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_load)(C(EditBox) __this, C(File) f);

extern THIS_LIB_IMPORT void (* EditBox_modified)(C(EditBox) __this);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyCaretMove);
// void EditBox_notifyCaretMove(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, int line, int charPos);
#define EditBox_notifyCaretMove(__i, __t, editBox, line, charPos) \
   VMETHOD(CO(EditBox), EditBox, notifyCaretMove, __i, void, \
      C(Window) _ARG C(EditBox) _ARG int _ARG int, \
      __t _ARG editBox _ARG line _ARG charPos)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyCaretMove);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyCharsAdded);
// C(bool) EditBox_notifyCharsAdded(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, C(BufferLocation) * before, C(BufferLocation) * after, C(bool) pasteOperation);
#define EditBox_notifyCharsAdded(__i, __t, editBox, before, after, pasteOperation) \
   VMETHOD(CO(EditBox), EditBox, notifyCharsAdded, __i, C(bool), \
      C(Window) _ARG C(EditBox) _ARG C(BufferLocation) * _ARG C(BufferLocation) * _ARG C(bool), \
      __t _ARG editBox _ARG before _ARG after _ARG pasteOperation)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyCharsAdded);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyCharsDeleted);
// C(bool) EditBox_notifyCharsDeleted(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, C(BufferLocation) * beforeLoc, C(BufferLocation) * after, C(bool) pasteOperation);
#define EditBox_notifyCharsDeleted(__i, __t, editBox, beforeLoc, after, pasteOperation) \
   VMETHOD(CO(EditBox), EditBox, notifyCharsDeleted, __i, C(bool), \
      C(Window) _ARG C(EditBox) _ARG C(BufferLocation) * _ARG C(BufferLocation) * _ARG C(bool), \
      __t _ARG editBox _ARG beforeLoc _ARG after _ARG pasteOperation)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyCharsDeleted);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyDoubleClick);
// C(bool) EditBox_notifyDoubleClick(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, C(EditLine) * line, C(Modifiers) mods);
#define EditBox_notifyDoubleClick(__i, __t, editBox, line, mods) \
   VMETHOD(CO(EditBox), EditBox, notifyDoubleClick, __i, C(bool), \
      C(Window) _ARG C(EditBox) _ARG C(EditLine) * _ARG C(Modifiers), \
      __t _ARG editBox _ARG line _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyDropped);
// C(bool) EditBox_notifyDropped(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, int x, int y);
#define EditBox_notifyDropped(__i, __t, editBox, x, y) \
   VMETHOD(CO(EditBox), EditBox, notifyDropped, __i, C(bool), \
      C(Window) _ARG C(EditBox) _ARG int _ARG int, \
      __t _ARG editBox _ARG x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyDropped);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyKeyDown);
// C(bool) EditBox_notifyKeyDown(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, C(Key) key, unichar ch);
#define EditBox_notifyKeyDown(__i, __t, editBox, key, ch) \
   VMETHOD(CO(EditBox), EditBox, notifyKeyDown, __i, C(bool), \
      C(Window) _ARG C(EditBox) _ARG C(Key) _ARG unichar, \
      __t _ARG editBox _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyKeyDown);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyModified);
// C(bool) EditBox_notifyModified(C(EditBox) __i, C(Window) __t, C(EditBox) editBox);
#define EditBox_notifyModified(__i, __t, editBox) \
   VMETHOD(CO(EditBox), EditBox, notifyModified, __i, C(bool), \
      C(Window) _ARG C(EditBox), \
      __t _ARG editBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyModified);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyOvrToggle);
// void EditBox_notifyOvrToggle(C(EditBox) __i, C(Window) __t, C(EditBox) editBox, C(bool) overwrite);
#define EditBox_notifyOvrToggle(__i, __t, editBox, overwrite) \
   VMETHOD(CO(EditBox), EditBox, notifyOvrToggle, __i, void, \
      C(Window) _ARG C(EditBox) _ARG C(bool), \
      __t _ARG editBox _ARG overwrite)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyOvrToggle);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyUnsetModified);
// C(bool) EditBox_notifyUnsetModified(C(EditBox) __i, C(Window) __t, C(EditBox) editBox);
#define EditBox_notifyUnsetModified(__i, __t, editBox) \
   VMETHOD(CO(EditBox), EditBox, notifyUnsetModified, __i, C(bool), \
      C(Window) _ARG C(EditBox), \
      __t _ARG editBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyUnsetModified);

extern THIS_LIB_IMPORT int M_VTBLID(EditBox, notifyUpdate);
// void EditBox_notifyUpdate(C(EditBox) __i, C(Window) __t, C(EditBox) editBox);
#define EditBox_notifyUpdate(__i, __t, editBox) \
   VMETHOD(CO(EditBox), EditBox, notifyUpdate, __i, void, \
      C(Window) _ARG C(EditBox), \
      __t _ARG editBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditBox, notifyUpdate);

extern THIS_LIB_IMPORT void (* EditBox_pageDown)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_pageUp)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_paste)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_printf)(C(EditBox) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* EditBox_putCh)(C(EditBox) __this, unichar ch);

extern THIS_LIB_IMPORT void (* EditBox_putS)(C(EditBox) __this, const char * string);

extern THIS_LIB_IMPORT void (* EditBox_record)(C(EditBox) __this, C(UndoAction) * action);

extern THIS_LIB_IMPORT void (* EditBox_redo)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_save)(C(EditBox) __this, C(File) f, C(bool) cr);

extern THIS_LIB_IMPORT uint (* EditBox_selSize)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_select)(C(EditBox) __this, C(EditLine) * line1, int y1, int x1, C(EditLine) * line2, int y2, int x2);

extern THIS_LIB_IMPORT void (* EditBox_selectAll)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_setContents)(C(EditBox) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* EditBox_setCursorToView)(C(EditBox) __this);

extern THIS_LIB_IMPORT void (* EditBox_setModified)(C(EditBox) __this, C(bool) flag);

extern THIS_LIB_IMPORT void (* EditBox_setSelPos)(C(EditBox) __this, C(EditLine) * l1, int y1, int x1, C(EditLine) * l2, int y2, int x2);

extern THIS_LIB_IMPORT void (* EditBox_setViewToCursor)(C(EditBox) __this, C(bool) setCaret);

extern THIS_LIB_IMPORT void (* EditBox_undo)(C(EditBox) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, textHorzScroll);
extern THIS_LIB_IMPORT void (* EditBox_set_textHorzScroll)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_textHorzScroll)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, textVertScroll);
extern THIS_LIB_IMPORT void (* EditBox_set_textVertScroll)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_textVertScroll)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, readOnly);
extern THIS_LIB_IMPORT void (* EditBox_set_readOnly)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_readOnly)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, multiLine);
extern THIS_LIB_IMPORT void (* EditBox_set_multiLine)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_multiLine)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, freeCaret);
extern THIS_LIB_IMPORT void (* EditBox_set_freeCaret)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_freeCaret)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, tabKey);
extern THIS_LIB_IMPORT void (* EditBox_set_tabKey)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_tabKey)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, tabSize);
extern THIS_LIB_IMPORT void (* EditBox_set_tabSize)(const C(EditBox) e, int value);
extern THIS_LIB_IMPORT int (* EditBox_get_tabSize)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, tabSelection);
extern THIS_LIB_IMPORT void (* EditBox_set_tabSelection)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_tabSelection)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, smartHome);
extern THIS_LIB_IMPORT void (* EditBox_set_smartHome)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_smartHome)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, autoEmpty);
extern THIS_LIB_IMPORT void (* EditBox_set_autoEmpty)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_autoEmpty)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, noCaret);
extern THIS_LIB_IMPORT void (* EditBox_set_noCaret)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_noCaret)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, maxLineSize);
extern THIS_LIB_IMPORT void (* EditBox_set_maxLineSize)(const C(EditBox) e, int value);
extern THIS_LIB_IMPORT int (* EditBox_get_maxLineSize)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, maxNumLines);
extern THIS_LIB_IMPORT void (* EditBox_set_maxNumLines)(const C(EditBox) e, int value);
extern THIS_LIB_IMPORT int (* EditBox_get_maxNumLines)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, useTab);
extern THIS_LIB_IMPORT void (* EditBox_set_useTab)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_useTab)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, syntaxHighlighting);
extern THIS_LIB_IMPORT void (* EditBox_set_syntaxHighlighting)(const C(EditBox) e, C(EditSyntaxHL) value);
extern THIS_LIB_IMPORT C(EditSyntaxHL) (* EditBox_get_syntaxHighlighting)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, noSelect);
extern THIS_LIB_IMPORT void (* EditBox_set_noSelect)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_noSelect)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, allCaps);
extern THIS_LIB_IMPORT void (* EditBox_set_allCaps)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_allCaps)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, autoSize);
extern THIS_LIB_IMPORT void (* EditBox_set_autoSize)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_autoSize)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, wrap);
extern THIS_LIB_IMPORT void (* EditBox_set_wrap)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_wrap)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, numLines);
extern THIS_LIB_IMPORT int (* EditBox_get_numLines)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, lineNumber);
extern THIS_LIB_IMPORT int (* EditBox_get_lineNumber)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, column);
extern THIS_LIB_IMPORT int (* EditBox_get_column)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, charPos);
extern THIS_LIB_IMPORT int (* EditBox_get_charPos)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, firstLine);
extern THIS_LIB_IMPORT C(EditLine) * (* EditBox_get_firstLine)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, lastLine);
extern THIS_LIB_IMPORT C(EditLine) * (* EditBox_get_lastLine)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, line);
extern THIS_LIB_IMPORT C(EditLine) * (* EditBox_get_line)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, contents);
extern THIS_LIB_IMPORT void (* EditBox_set_contents)(const C(EditBox) e, const char * value);
extern THIS_LIB_IMPORT const char * (* EditBox_get_contents)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, overwrite);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_overwrite)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, caretFollowsScrolling);
extern THIS_LIB_IMPORT void (* EditBox_set_caretFollowsScrolling)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_caretFollowsScrolling)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, multiLineContents);
extern THIS_LIB_IMPORT char * (* EditBox_get_multiLineContents)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, selectionColor);
extern THIS_LIB_IMPORT void (* EditBox_set_selectionColor)(const C(EditBox) e, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* EditBox_get_selectionColor)(const C(EditBox) e);
extern THIS_LIB_IMPORT C(bool) (* EditBox_isSet_selectionColor)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, selectionText);
extern THIS_LIB_IMPORT void (* EditBox_set_selectionText)(const C(EditBox) e, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* EditBox_get_selectionText)(const C(EditBox) e);
extern THIS_LIB_IMPORT C(bool) (* EditBox_isSet_selectionText)(const C(EditBox) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBox, recordUndoEvent);
extern THIS_LIB_IMPORT void (* EditBox_set_recordUndoEvent)(const C(EditBox) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditBox_get_recordUndoEvent)(const C(EditBox) e);

extern THIS_LIB_IMPORT void (* EditBoxStream_deleteBytes)(C(EditBoxStream) __this, uint count);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditBoxStream, editBox);
extern THIS_LIB_IMPORT void (* EditBoxStream_set_editBox)(const C(EditBoxStream) e, C(EditBox) value);
extern THIS_LIB_IMPORT C(EditBox) (* EditBoxStream_get_editBox)(const C(EditBoxStream) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditLine, text);
extern THIS_LIB_IMPORT void (* EditLine_set_text)(const C(EditLine) * e, const char * value);
extern THIS_LIB_IMPORT const char * (* EditLine_get_text)(const C(EditLine) * e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditLine, prev);
extern THIS_LIB_IMPORT C(EditLine) * (* EditLine_get_prev)(const C(EditLine) * e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditLine, next);
extern THIS_LIB_IMPORT C(EditLine) * (* EditLine_get_next)(const C(EditLine) * e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditLine, count);
extern THIS_LIB_IMPORT int (* EditLine_get_count)(const C(EditLine) * e);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, canImpactOtherLines);
// C(bool) EditSyntaxHL_canImpactOtherLines(C(EditSyntaxHL) __i, C(EditLine) * line);
#define EditSyntaxHL_canImpactOtherLines(__i, line) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, canImpactOtherLines, __i, C(bool), \
      C(EditSyntaxHL) _ARG C(EditLine) *, \
      __i _ARG line)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, canImpactOtherLines);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, figureStartSyntaxStates);
// void EditSyntaxHL_figureStartSyntaxStates(C(EditSyntaxHL) __i, C(EditLine) * firstLine, C(bool) reset, C(EditLine) * viewLine);
#define EditSyntaxHL_figureStartSyntaxStates(__i, firstLine, reset, viewLine) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, figureStartSyntaxStates, __i, void, \
      C(EditSyntaxHL) _ARG C(EditLine) * _ARG C(bool) _ARG C(EditLine) *, \
      __i _ARG firstLine _ARG reset _ARG viewLine)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, figureStartSyntaxStates);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, gotSpace);
// void EditSyntaxHL_gotSpace(C(EditSyntaxHL) __i, C(bool) beforeEnd);
#define EditSyntaxHL_gotSpace(__i, beforeEnd) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, gotSpace, __i, void, \
      C(EditSyntaxHL) _ARG C(bool), \
      __i _ARG beforeEnd)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, gotSpace);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, initDraw);
// void EditSyntaxHL_initDraw(C(EditSyntaxHL) __i);
#define EditSyntaxHL_initDraw(__i) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, initDraw, __i, void, \
      C(EditSyntaxHL), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, initDraw);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, nextLine);
// void EditSyntaxHL_nextLine(C(EditSyntaxHL) __i, char * buffer, int count);
#define EditSyntaxHL_nextLine(__i, buffer, count) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, nextLine, __i, void, \
      C(EditSyntaxHL) _ARG char * _ARG int, \
      __i _ARG buffer _ARG count)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, nextLine);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, parseWord);
// int EditSyntaxHL_parseWord(C(EditSyntaxHL) __i, char * buffer, int count, int wordLen);
#define EditSyntaxHL_parseWord(__i, buffer, count, wordLen) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, parseWord, __i, int, \
      C(EditSyntaxHL) _ARG char * _ARG int _ARG int, \
      __i _ARG buffer _ARG count _ARG wordLen)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, parseWord);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, process);
// C(Color) EditSyntaxHL_process(C(EditSyntaxHL) __i, char * word, int * wordLen, C(bool) beforeEndOfLine, C(Color) defaultTextColor, const char * buffer, int * c);
#define EditSyntaxHL_process(__i, word, wordLen, beforeEndOfLine, defaultTextColor, buffer, c) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, process, __i, C(Color), \
      C(EditSyntaxHL) _ARG char * _ARG int * _ARG C(bool) _ARG C(Color) _ARG const char * _ARG int *, \
      __i _ARG word _ARG wordLen _ARG beforeEndOfLine _ARG defaultTextColor _ARG buffer _ARG c)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, process);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, resetState);
// void EditSyntaxHL_resetState(C(EditSyntaxHL) __i);
#define EditSyntaxHL_resetState(__i) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, resetState, __i, void, \
      C(EditSyntaxHL), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, resetState);

extern THIS_LIB_IMPORT int M_VTBLID(EditSyntaxHL, startLine);
// void EditSyntaxHL_startLine(C(EditSyntaxHL) __i);
#define EditSyntaxHL_startLine(__i) \
   VMETHOD(CO(EditSyntaxHL), EditSyntaxHL, startLine, __i, void, \
      C(EditSyntaxHL), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditSyntaxHL, startLine);

extern THIS_LIB_IMPORT int M_VTBLID(EditableSelectorButton, onRename);
// C(bool) EditableSelectorButton_onRename(C(EditableSelectorButton) __i, C(Window) __t, C(EditableSelectorButton) button, char ** oldName, char ** newName);
#define EditableSelectorButton_onRename(__i, __t, button, oldName, newName) \
   VMETHOD(CO(EditableSelectorButton), EditableSelectorButton, onRename, __i, C(bool), \
      C(Window) _ARG C(EditableSelectorButton) _ARG char ** _ARG char **, \
      __t _ARG button _ARG oldName _ARG newName)
extern THIS_LIB_IMPORT C(Method) * METHOD(EditableSelectorButton, onRename);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditableSelectorButton, renameable);
extern THIS_LIB_IMPORT void (* EditableSelectorButton_set_renameable)(const C(EditableSelectorButton) e, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* EditableSelectorButton_get_renameable)(const C(EditableSelectorButton) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(EditableSelectorButton, editBox);
extern THIS_LIB_IMPORT C(EditBox) (* EditableSelectorButton_get_editBox)(const C(EditableSelectorButton) e);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Label, labeledWindow);
extern THIS_LIB_IMPORT void (* Label_set_labeledWindow)(const C(Label) l, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* Label_get_labeledWindow)(const C(Label) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Label, isGroupBox);
extern THIS_LIB_IMPORT void (* Label_set_isGroupBox)(const C(Label) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Label_get_isGroupBox)(const C(Label) l);

extern THIS_LIB_IMPORT void (* ListBox_addField)(C(ListBox) __this, C(DataField) addedField);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_addRow)(C(ListBox) __this);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_addRowAfter)(C(ListBox) __this, C(DataRow) after);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_addRowNone)(C(ListBox) __this);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_addString)(C(ListBox) __this, const char * string);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_addStringf)(C(ListBox) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* ListBox_clear)(C(ListBox) __this);

extern THIS_LIB_IMPORT void (* ListBox_clearFields)(C(ListBox) __this);

extern THIS_LIB_IMPORT void (* ListBox_deleteRow)(C(ListBox) __this, C(DataRow) row);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_findRow)(C(ListBox) __this, int64 tag);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_findString)(C(ListBox) __this, const char * searchedString);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_findSubRow)(C(ListBox) __this, int64 tag);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_findSubString)(C(ListBox) __this, const char * subString);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_findSubStringAfter)(C(ListBox) __this, C(DataRow) after, const char * subString);

extern THIS_LIB_IMPORT C(DataRow) (* ListBox_findSubStringi)(C(ListBox) __this, const char * subString);

extern THIS_LIB_IMPORT any_object (* ListBox_getData)(C(ListBox) __this, C(DataField) field);

extern THIS_LIB_IMPORT void (* ListBox_getMultiSelection)(C(ListBox) __this, C(OldList) * list);

extern THIS_LIB_IMPORT int64 (* ListBox_getTag)(C(ListBox) __this);

extern THIS_LIB_IMPORT void (* ListBox_multiSort)(C(ListBox) __this, C(Array) fields);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyChanged);
// C(bool) ListBox_notifyChanged(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row);
#define ListBox_notifyChanged(__i, __t, listBox, row) \
   VMETHOD(CO(ListBox), ListBox, notifyChanged, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow), \
      __t _ARG listBox _ARG row)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyChanged);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyCollapse);
// C(bool) ListBox_notifyCollapse(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(bool) collapsed);
#define ListBox_notifyCollapse(__i, __t, listBox, row, collapsed) \
   VMETHOD(CO(ListBox), ListBox, notifyCollapse, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(bool), \
      __t _ARG listBox _ARG row _ARG collapsed)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyCollapse);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyDoubleClick);
// C(bool) ListBox_notifyDoubleClick(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, int x, int y, C(Modifiers) mods);
#define ListBox_notifyDoubleClick(__i, __t, listBox, x, y, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyDoubleClick, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG listBox _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyEditDone);
// C(bool) ListBox_notifyEditDone(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row);
#define ListBox_notifyEditDone(__i, __t, listBox, row) \
   VMETHOD(CO(ListBox), ListBox, notifyEditDone, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow), \
      __t _ARG listBox _ARG row)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyEditDone);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyEdited);
// C(bool) ListBox_notifyEdited(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row);
#define ListBox_notifyEdited(__i, __t, listBox, row) \
   VMETHOD(CO(ListBox), ListBox, notifyEdited, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow), \
      __t _ARG listBox _ARG row)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyEdited);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyEditing);
// C(bool) ListBox_notifyEditing(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row);
#define ListBox_notifyEditing(__i, __t, listBox, row) \
   VMETHOD(CO(ListBox), ListBox, notifyEditing, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow), \
      __t _ARG listBox _ARG row)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyEditing);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyHighlight);
// C(bool) ListBox_notifyHighlight(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Modifiers) mods);
#define ListBox_notifyHighlight(__i, __t, listBox, row, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyHighlight, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG listBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyHighlight);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyKeyDown);
// C(bool) ListBox_notifyKeyDown(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Key) key, unichar ch);
#define ListBox_notifyKeyDown(__i, __t, listBox, row, key, ch) \
   VMETHOD(CO(ListBox), ListBox, notifyKeyDown, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Key) _ARG unichar, \
      __t _ARG listBox _ARG row _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyKeyDown);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyKeyHit);
// C(bool) ListBox_notifyKeyHit(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Key) key, unichar ch);
#define ListBox_notifyKeyHit(__i, __t, listBox, row, key, ch) \
   VMETHOD(CO(ListBox), ListBox, notifyKeyHit, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Key) _ARG unichar, \
      __t _ARG listBox _ARG row _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyKeyHit);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyModified);
// C(bool) ListBox_notifyModified(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row);
#define ListBox_notifyModified(__i, __t, listBox, row) \
   VMETHOD(CO(ListBox), ListBox, notifyModified, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow), \
      __t _ARG listBox _ARG row)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyModified);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyMove);
// C(bool) ListBox_notifyMove(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Modifiers) mods);
#define ListBox_notifyMove(__i, __t, listBox, row, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyMove, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG listBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyMove);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyMoved);
// void ListBox_notifyMoved(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Modifiers) mods);
#define ListBox_notifyMoved(__i, __t, listBox, row, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyMoved, __i, void, \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG listBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyMoved);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyMovedField);
// C(bool) ListBox_notifyMovedField(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataField) field, C(Modifiers) mods);
#define ListBox_notifyMovedField(__i, __t, listBox, field, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyMovedField, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataField) _ARG C(Modifiers), \
      __t _ARG listBox _ARG field _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyMovedField);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyReclick);
// C(bool) ListBox_notifyReclick(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Modifiers) mods);
#define ListBox_notifyReclick(__i, __t, listBox, row, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyReclick, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG listBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyReclick);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyResized);
// C(bool) ListBox_notifyResized(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataField) field, C(Modifiers) mods);
#define ListBox_notifyResized(__i, __t, listBox, field, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyResized, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataField) _ARG C(Modifiers), \
      __t _ARG listBox _ARG field _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyResized);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifyRightClick);
// C(bool) ListBox_notifyRightClick(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, int x, int y, C(Modifiers) mods);
#define ListBox_notifyRightClick(__i, __t, listBox, x, y, mods) \
   VMETHOD(CO(ListBox), ListBox, notifyRightClick, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG int _ARG int _ARG C(Modifiers), \
      __t _ARG listBox _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifyRightClick);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifySelect);
// C(bool) ListBox_notifySelect(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataRow) row, C(Modifiers) mods);
#define ListBox_notifySelect(__i, __t, listBox, row, mods) \
   VMETHOD(CO(ListBox), ListBox, notifySelect, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataRow) _ARG C(Modifiers), \
      __t _ARG listBox _ARG row _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifySelect);

extern THIS_LIB_IMPORT int M_VTBLID(ListBox, notifySort);
// C(bool) ListBox_notifySort(C(ListBox) __i, C(Window) __t, C(ListBox) listBox, C(DataField) field, C(Modifiers) mods);
#define ListBox_notifySort(__i, __t, listBox, field, mods) \
   VMETHOD(CO(ListBox), ListBox, notifySort, __i, C(bool), \
      C(Window) _ARG C(ListBox) _ARG C(DataField) _ARG C(Modifiers), \
      __t _ARG listBox _ARG field _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(ListBox, notifySort);

extern THIS_LIB_IMPORT void (* ListBox_removeField)(C(ListBox) __this, C(DataField) field);

extern THIS_LIB_IMPORT void (* ListBox_selectRow)(C(ListBox) __this, C(DataRow) row);

extern THIS_LIB_IMPORT void * (* ListBox_setData)(C(ListBox) __this, C(DataField) field, any_object data);

extern THIS_LIB_IMPORT void (* ListBox_sort)(C(ListBox) __this, C(DataField) field, int order);

extern THIS_LIB_IMPORT void (* ListBox_sortAlsoBy)(C(ListBox) __this, C(DataField) field, int order);

extern THIS_LIB_IMPORT void (* ListBox_stopEditing)(C(ListBox) __this, C(bool) save);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, freeSelect);
extern THIS_LIB_IMPORT void (* ListBox_set_freeSelect)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_freeSelect)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, currentRow);
extern THIS_LIB_IMPORT void (* ListBox_set_currentRow)(const C(ListBox) l, C(DataRow) value);
extern THIS_LIB_IMPORT C(DataRow) (* ListBox_get_currentRow)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, currentField);
extern THIS_LIB_IMPORT void (* ListBox_set_currentField)(const C(ListBox) l, C(DataField) value);
extern THIS_LIB_IMPORT C(DataField) (* ListBox_get_currentField)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, rowHeight);
extern THIS_LIB_IMPORT void (* ListBox_set_rowHeight)(const C(ListBox) l, int value);
extern THIS_LIB_IMPORT int (* ListBox_get_rowHeight)(const C(ListBox) l);
extern THIS_LIB_IMPORT C(bool) (* ListBox_isSet_rowHeight)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, typingTimeout);
extern THIS_LIB_IMPORT void (* ListBox_set_typingTimeout)(const C(ListBox) l, C(Time) value);
extern THIS_LIB_IMPORT C(Time) (* ListBox_get_typingTimeout)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, moveRows);
extern THIS_LIB_IMPORT void (* ListBox_set_moveRows)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_moveRows)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, moveFields);
extern THIS_LIB_IMPORT void (* ListBox_set_moveFields)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_moveFields)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, resizable);
extern THIS_LIB_IMPORT void (* ListBox_set_resizable)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_resizable)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, autoScroll);
extern THIS_LIB_IMPORT void (* ListBox_set_autoScroll)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_autoScroll)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, alwaysHighLight);
extern THIS_LIB_IMPORT void (* ListBox_set_alwaysHighLight)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_alwaysHighLight)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, hasClearHeader);
extern THIS_LIB_IMPORT void (* ListBox_set_hasClearHeader)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_hasClearHeader)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, hasHeader);
extern THIS_LIB_IMPORT void (* ListBox_set_hasHeader)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_hasHeader)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, multiSelect);
extern THIS_LIB_IMPORT void (* ListBox_set_multiSelect)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_multiSelect)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, alwaysEdit);
extern THIS_LIB_IMPORT void (* ListBox_set_alwaysEdit)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_alwaysEdit)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, fullRowSelect);
extern THIS_LIB_IMPORT void (* ListBox_set_fullRowSelect)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_fullRowSelect)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, collapseControl);
extern THIS_LIB_IMPORT void (* ListBox_set_collapseControl)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_collapseControl)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, treeBranches);
extern THIS_LIB_IMPORT void (* ListBox_set_treeBranches)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_treeBranches)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, rootCollapseButton);
extern THIS_LIB_IMPORT void (* ListBox_set_rootCollapseButton)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_rootCollapseButton)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, sortable);
extern THIS_LIB_IMPORT void (* ListBox_set_sortable)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_sortable)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, noDragging);
extern THIS_LIB_IMPORT void (* ListBox_set_noDragging)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_noDragging)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, fillLastField);
extern THIS_LIB_IMPORT void (* ListBox_set_fillLastField)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_fillLastField)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, numSelections);
extern THIS_LIB_IMPORT int (* ListBox_get_numSelections)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, currentIndex);
extern THIS_LIB_IMPORT int (* ListBox_get_currentIndex)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, lastRow);
extern THIS_LIB_IMPORT C(DataRow) (* ListBox_get_lastRow)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, firstRow);
extern THIS_LIB_IMPORT C(DataRow) (* ListBox_get_firstRow)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, rowCount);
extern THIS_LIB_IMPORT int (* ListBox_get_rowCount)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, firstField);
extern THIS_LIB_IMPORT C(DataField) (* ListBox_get_firstField)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, selectionColor);
extern THIS_LIB_IMPORT void (* ListBox_set_selectionColor)(const C(ListBox) l, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* ListBox_get_selectionColor)(const C(ListBox) l);
extern THIS_LIB_IMPORT C(bool) (* ListBox_isSet_selectionColor)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, selectionText);
extern THIS_LIB_IMPORT void (* ListBox_set_selectionText)(const C(ListBox) l, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* ListBox_get_selectionText)(const C(ListBox) l);
extern THIS_LIB_IMPORT C(bool) (* ListBox_isSet_selectionText)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, stippleColor);
extern THIS_LIB_IMPORT void (* ListBox_set_stippleColor)(const C(ListBox) l, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* ListBox_get_stippleColor)(const C(ListBox) l);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ListBox, expandOnAdd);
extern THIS_LIB_IMPORT void (* ListBox_set_expandOnAdd)(const C(ListBox) l, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ListBox_get_expandOnAdd)(const C(ListBox) l);

extern THIS_LIB_IMPORT void (* Menu_addDynamic)(C(Menu) __this, C(MenuItem) addedItem, C(Window) master, C(bool) persistent);

extern THIS_LIB_IMPORT void (* Menu_addItem)(C(Menu) __this, C(MenuItem) item);

extern THIS_LIB_IMPORT void (* Menu_addSubMenu)(C(Menu) __this, C(Menu) subMenu);

extern THIS_LIB_IMPORT void (* Menu_clean)(C(Menu) __this, C(Window) window);

extern THIS_LIB_IMPORT void (* Menu_clear)(C(Menu) __this);

extern THIS_LIB_IMPORT C(MenuItem) (* Menu_findItem)(C(Menu) __this, C(bool) (* notifySelect)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods), uint64 id);

extern THIS_LIB_IMPORT C(Menu) (* Menu_findMenu)(C(Menu) __this, const char * name);

extern THIS_LIB_IMPORT void (* Menu_merge)(C(Menu) __this, C(Menu) menuBeingMerged, C(bool) menuBar, C(Window) window);

extern THIS_LIB_IMPORT void (* Menu_removeItem)(C(Menu) __this, C(MenuItem) item);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Menu, parent);
extern THIS_LIB_IMPORT void (* Menu_set_parent)(const C(Menu) m, C(Menu) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Menu, text);
extern THIS_LIB_IMPORT void (* Menu_set_text)(const C(Menu) m, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Menu, hotKey);
extern THIS_LIB_IMPORT void (* Menu_set_hotKey)(const C(Menu) m, C(Key) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Menu, hasMargin);
extern THIS_LIB_IMPORT void (* Menu_set_hasMargin)(const C(Menu) m, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Menu, copyText);
extern THIS_LIB_IMPORT void (* Menu_set_copyText)(const C(Menu) m, C(bool) value);

extern THIS_LIB_IMPORT int M_VTBLID(MenuItem, notifySelect);
// C(bool) MenuItem_notifySelect(C(MenuItem) __i, C(Window) __t, C(MenuItem) selection, C(Modifiers) mods);
#define MenuItem_notifySelect(__i, __t, selection, mods) \
   VMETHOD(CO(MenuItem), MenuItem, notifySelect, __i, C(bool), \
      C(Window) _ARG C(MenuItem) _ARG C(Modifiers), \
      __t _ARG selection _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(MenuItem, notifySelect);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, parent);
extern THIS_LIB_IMPORT void (* MenuItem_set_parent)(const C(MenuItem) m, C(Menu) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, text);
extern THIS_LIB_IMPORT void (* MenuItem_set_text)(const C(MenuItem) m, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, hotKey);
extern THIS_LIB_IMPORT void (* MenuItem_set_hotKey)(const C(MenuItem) m, C(Key) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, accelerator);
extern THIS_LIB_IMPORT void (* MenuItem_set_accelerator)(const C(MenuItem) m, C(Key) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, checked);
extern THIS_LIB_IMPORT void (* MenuItem_set_checked)(const C(MenuItem) m, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* MenuItem_get_checked)(const C(MenuItem) m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, disabled);
extern THIS_LIB_IMPORT void (* MenuItem_set_disabled)(const C(MenuItem) m, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, checkable);
extern THIS_LIB_IMPORT void (* MenuItem_set_checkable)(const C(MenuItem) m, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, isRadio);
extern THIS_LIB_IMPORT void (* MenuItem_set_isRadio)(const C(MenuItem) m, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, id);
extern THIS_LIB_IMPORT void (* MenuItem_set_id)(const C(MenuItem) m, uint64 value);
extern THIS_LIB_IMPORT uint64 (* MenuItem_get_id)(const C(MenuItem) m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, bitmap);
extern THIS_LIB_IMPORT void (* MenuItem_set_bitmap)(const C(MenuItem) m, C(BitmapResource) value);
extern THIS_LIB_IMPORT C(BitmapResource) (* MenuItem_get_bitmap)(const C(MenuItem) m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, copyText);
extern THIS_LIB_IMPORT void (* MenuItem_set_copyText)(const C(MenuItem) m, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MenuItem, bold);
extern THIS_LIB_IMPORT void (* MenuItem_set_bold)(const C(MenuItem) m, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* MenuItem_get_bold)(const C(MenuItem) m);

struct CM(OldArray)
{
   C(Class) * type;
   byte __ecere_padding[8];
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(OldArray, size);
extern THIS_LIB_IMPORT void (* OldArray_set_size)(const C(OldArray) o, uint value);
extern THIS_LIB_IMPORT uint (* OldArray_get_size)(const C(OldArray) o);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(OldArray, data);
extern THIS_LIB_IMPORT void (* OldArray_set_data)(const C(OldArray) o, void * value);

extern THIS_LIB_IMPORT int M_VTBLID(PaneSplitter, notifyResized);
// C(bool) PaneSplitter_notifyResized(C(PaneSplitter) __i, C(Window) __t, C(PaneSplitter) splitter);
#define PaneSplitter_notifyResized(__i, __t, splitter) \
   VMETHOD(CO(PaneSplitter), PaneSplitter, notifyResized, __i, C(bool), \
      C(Window) _ARG C(PaneSplitter), \
      __t _ARG splitter)
extern THIS_LIB_IMPORT C(Method) * METHOD(PaneSplitter, notifyResized);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, toolSize);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_toolSize)(const C(PaneSplitter) p, int value);
extern THIS_LIB_IMPORT int (* PaneSplitter_get_toolSize)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, toolGap);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_toolGap)(const C(PaneSplitter) p, int value);
extern THIS_LIB_IMPORT int (* PaneSplitter_get_toolGap)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, leftPane);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_leftPane)(const C(PaneSplitter) p, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* PaneSplitter_get_leftPane)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, rightPane);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_rightPane)(const C(PaneSplitter) p, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* PaneSplitter_get_rightPane)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, topPane);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_topPane)(const C(PaneSplitter) p, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* PaneSplitter_get_topPane)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, bottomPane);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_bottomPane)(const C(PaneSplitter) p, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* PaneSplitter_get_bottomPane)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, scaleSplit);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_scaleSplit)(const C(PaneSplitter) p, double value);
extern THIS_LIB_IMPORT double (* PaneSplitter_get_scaleSplit)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, orientation);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_orientation)(const C(PaneSplitter) p, C(ScrollDirection) value);
extern THIS_LIB_IMPORT C(ScrollDirection) (* PaneSplitter_get_orientation)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PaneSplitter, split);
extern THIS_LIB_IMPORT void (* PaneSplitter_set_split)(const C(PaneSplitter) p, int value);
extern THIS_LIB_IMPORT int (* PaneSplitter_get_split)(const C(PaneSplitter) p);

extern THIS_LIB_IMPORT void (* PathBox_deselect)(C(PathBox) __this);

extern THIS_LIB_IMPORT void (* PathBox_end)(C(PathBox) __this);

extern THIS_LIB_IMPORT void (* PathBox_home)(C(PathBox) __this);

extern THIS_LIB_IMPORT int M_VTBLID(PathBox, notifyModified);
// C(bool) PathBox_notifyModified(C(PathBox) __i, C(Window) __t, C(PathBox) pathBox);
#define PathBox_notifyModified(__i, __t, pathBox) \
   VMETHOD(CO(PathBox), PathBox, notifyModified, __i, C(bool), \
      C(Window) _ARG C(PathBox), \
      __t _ARG pathBox)
extern THIS_LIB_IMPORT C(Method) * METHOD(PathBox, notifyModified);

extern THIS_LIB_IMPORT void (* PathBox_selectAll)(C(PathBox) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, editBox);
extern THIS_LIB_IMPORT C(EditBox) (* PathBox_get_editBox)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, typeExpected);
extern THIS_LIB_IMPORT void (* PathBox_set_typeExpected)(const C(PathBox) p, C(PathTypeExpected) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, browseDialog);
extern THIS_LIB_IMPORT void (* PathBox_set_browseDialog)(const C(PathBox) p, C(FileDialog) value);
extern THIS_LIB_IMPORT C(FileDialog) (* PathBox_get_browseDialog)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, path);
extern THIS_LIB_IMPORT void (* PathBox_set_path)(const C(PathBox) p, constString value);
extern THIS_LIB_IMPORT constString (* PathBox_get_path)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, slashPath);
extern THIS_LIB_IMPORT C(String) (* PathBox_get_slashPath)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, systemPath);
extern THIS_LIB_IMPORT C(String) (* PathBox_get_systemPath)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, selectionColor);
extern THIS_LIB_IMPORT void (* PathBox_set_selectionColor)(const C(PathBox) p, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* PathBox_get_selectionColor)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PathBox, selectionText);
extern THIS_LIB_IMPORT void (* PathBox_set_selectionText)(const C(PathBox) p, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* PathBox_get_selectionText)(const C(PathBox) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Picture, tint);
extern THIS_LIB_IMPORT void (* Picture_set_tint)(const C(Picture) p, C(Color) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Picture, image);
extern THIS_LIB_IMPORT void (* Picture_set_image)(const C(Picture) p, C(BitmapResource) value);
extern THIS_LIB_IMPORT C(BitmapResource) (* Picture_get_image)(const C(Picture) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Picture, filter);
extern THIS_LIB_IMPORT void (* Picture_set_filter)(const C(Picture) p, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Picture_get_filter)(const C(Picture) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Picture, bitmapImage);
extern THIS_LIB_IMPORT void (* Picture_set_bitmapImage)(const C(Picture) p, C(Bitmap) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PopupMenu, menu);
extern THIS_LIB_IMPORT void (* PopupMenu_set_menu)(const C(PopupMenu) p, C(Menu) value);
extern THIS_LIB_IMPORT C(Menu) (* PopupMenu_get_menu)(const C(PopupMenu) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PopupMenu, isMenuBar);
extern THIS_LIB_IMPORT void (* PopupMenu_set_isMenuBar)(const C(PopupMenu) p, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(PopupMenu, focus);
extern THIS_LIB_IMPORT C(bool) (* PopupMenu_get_focus)(const C(PopupMenu) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ProgressBar, progress);
extern THIS_LIB_IMPORT void (* ProgressBar_set_progress)(const C(ProgressBar) p, uint value);
extern THIS_LIB_IMPORT uint (* ProgressBar_get_progress)(const C(ProgressBar) p);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ProgressBar, range);
extern THIS_LIB_IMPORT void (* ProgressBar_set_range)(const C(ProgressBar) p, uint value);
extern THIS_LIB_IMPORT uint (* ProgressBar_get_range)(const C(ProgressBar) p);

struct CM(ScrollBar)
{
   byte __ecerePrivateData0[24];
   C(Button) downBtn;
   C(Button) upBtn;
   C(Button) thumb;
   byte __ecerePrivateData1[12];
   int thumbSize;
   byte __ecere_padding[56];
};
extern THIS_LIB_IMPORT C(bool) (* ScrollBar_action)(C(ScrollBar) __this, C(ScrollBarAction) action, int newPosition, C(Key) key);

extern THIS_LIB_IMPORT int M_VTBLID(ScrollBar, notifyScrolling);
// void ScrollBar_notifyScrolling(C(ScrollBar) __i, C(Window) __t, C(ScrollBar) scrollBar, C(ScrollBarAction) action, int position, C(Key) key);
#define ScrollBar_notifyScrolling(__i, __t, scrollBar, action, position, key) \
   VMETHOD(CO(ScrollBar), ScrollBar, notifyScrolling, __i, void, \
      C(Window) _ARG C(ScrollBar) _ARG C(ScrollBarAction) _ARG int _ARG C(Key), \
      __t _ARG scrollBar _ARG action _ARG position _ARG key)
extern THIS_LIB_IMPORT C(Method) * METHOD(ScrollBar, notifyScrolling);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, direction);
extern THIS_LIB_IMPORT void (* ScrollBar_set_direction)(const C(ScrollBar) s, C(ScrollDirection) value);
extern THIS_LIB_IMPORT C(ScrollDirection) (* ScrollBar_get_direction)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, windowOwned);
extern THIS_LIB_IMPORT void (* ScrollBar_set_windowOwned)(const C(ScrollBar) s, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, snap);
extern THIS_LIB_IMPORT void (* ScrollBar_set_snap)(const C(ScrollBar) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ScrollBar_get_snap)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, range);
extern THIS_LIB_IMPORT void (* ScrollBar_set_range)(const C(ScrollBar) s, int value);
extern THIS_LIB_IMPORT int (* ScrollBar_get_range)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, seen);
extern THIS_LIB_IMPORT void (* ScrollBar_set_seen)(const C(ScrollBar) s, int value);
extern THIS_LIB_IMPORT int (* ScrollBar_get_seen)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, total);
extern THIS_LIB_IMPORT void (* ScrollBar_set_total)(const C(ScrollBar) s, int value);
extern THIS_LIB_IMPORT int (* ScrollBar_get_total)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, lineStep);
extern THIS_LIB_IMPORT void (* ScrollBar_set_lineStep)(const C(ScrollBar) s, int value);
extern THIS_LIB_IMPORT int (* ScrollBar_get_lineStep)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, pageStep);
extern THIS_LIB_IMPORT void (* ScrollBar_set_pageStep)(const C(ScrollBar) s, int value);
extern THIS_LIB_IMPORT int (* ScrollBar_get_pageStep)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ScrollBar, thumbPosition);
extern THIS_LIB_IMPORT void (* ScrollBar_set_thumbPosition)(const C(ScrollBar) s, int value);
extern THIS_LIB_IMPORT int (* ScrollBar_get_thumbPosition)(const C(ScrollBar) s);

extern THIS_LIB_IMPORT void (* SelectorBar_addButton)(C(SelectorBar) __this, C(SelectorButton) button);

extern THIS_LIB_IMPORT void (* SelectorBar_clear)(C(SelectorBar) __this);

extern THIS_LIB_IMPORT C(SelectorButton) (* SelectorBar_findButtonByID)(C(SelectorBar) __this, int64 id);

extern THIS_LIB_IMPORT void (* SelectorBar_removeButton)(C(SelectorBar) __this, C(SelectorButton) button);

extern THIS_LIB_IMPORT void (* SelectorBar_select)(C(SelectorBar) __this, C(SelectorButton) button);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SelectorBar, selectedButton);
extern THIS_LIB_IMPORT C(SelectorButton) (* SelectorBar_get_selectedButton)(const C(SelectorBar) s);

extern THIS_LIB_IMPORT void (* Stacker_destroyChildren)(C(Stacker) __this);

extern THIS_LIB_IMPORT C(Window) (* Stacker_getNextStackedItem)(C(Stacker) __this, C(Window) current, C(bool) previous, C(Class) * filter);

extern THIS_LIB_IMPORT void (* Stacker_makeControlVisible)(C(Stacker) __this, C(Window) control);

extern THIS_LIB_IMPORT void (* Stacker_moveControl)(C(Stacker) __this, C(IteratorPointer) * ctrl, C(IteratorPointer) * after, C(bool) fixCycle);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, direction);
extern THIS_LIB_IMPORT void (* Stacker_set_direction)(const C(Stacker) s, C(ScrollDirection) value);
extern THIS_LIB_IMPORT C(ScrollDirection) (* Stacker_get_direction)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, gap);
extern THIS_LIB_IMPORT void (* Stacker_set_gap)(const C(Stacker) s, int value);
extern THIS_LIB_IMPORT int (* Stacker_get_gap)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, reverse);
extern THIS_LIB_IMPORT void (* Stacker_set_reverse)(const C(Stacker) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Stacker_get_reverse)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, scrollable);
extern THIS_LIB_IMPORT void (* Stacker_set_scrollable)(const C(Stacker) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Stacker_get_scrollable)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, controls);
extern THIS_LIB_IMPORT C(Array) (* Stacker_get_controls)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, flipper);
extern THIS_LIB_IMPORT void (* Stacker_set_flipper)(const C(Stacker) s, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* Stacker_get_flipper)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, flipSpring);
extern THIS_LIB_IMPORT void (* Stacker_set_flipSpring)(const C(Stacker) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Stacker_get_flipSpring)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, autoSize);
extern THIS_LIB_IMPORT void (* Stacker_set_autoSize)(const C(Stacker) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Stacker_get_autoSize)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, margin);
extern THIS_LIB_IMPORT void (* Stacker_set_margin)(const C(Stacker) s, int value);
extern THIS_LIB_IMPORT int (* Stacker_get_margin)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, endButtons);
extern THIS_LIB_IMPORT void (* Stacker_set_endButtons)(const C(Stacker) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Stacker_get_endButtons)(const C(Stacker) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Stacker, hoverScroll);
extern THIS_LIB_IMPORT void (* Stacker_set_hoverScroll)(const C(Stacker) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Stacker_get_hoverScroll)(const C(Stacker) s);

extern THIS_LIB_IMPORT void (* StatusBar_addField)(C(StatusBar) __this, C(StatusField) field);

extern THIS_LIB_IMPORT void (* StatusBar_clear)(C(StatusBar) __this);

extern THIS_LIB_IMPORT void (* StatusBar_removeField)(C(StatusBar) __this, C(StatusField) field);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusBar, minInfoWidth);
extern THIS_LIB_IMPORT void (* StatusBar_set_minInfoWidth)(const C(StatusBar) s, int value);
extern THIS_LIB_IMPORT int (* StatusBar_get_minInfoWidth)(const C(StatusBar) s);

extern THIS_LIB_IMPORT void (* StatusField_setTextf)(C(StatusField) __this, const char * format, ...);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusField, statusBar);
extern THIS_LIB_IMPORT void (* StatusField_set_statusBar)(const C(StatusField) s, C(StatusBar) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusField, color);
extern THIS_LIB_IMPORT void (* StatusField_set_color)(const C(StatusField) s, C(Color) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusField, backColor);
extern THIS_LIB_IMPORT void (* StatusField_set_backColor)(const C(StatusField) s, C(ColorAlpha) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusField, bold);
extern THIS_LIB_IMPORT void (* StatusField_set_bold)(const C(StatusField) s, C(bool) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusField, text);
extern THIS_LIB_IMPORT void (* StatusField_set_text)(const C(StatusField) s, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(StatusField, width);
extern THIS_LIB_IMPORT void (* StatusField_set_width)(const C(StatusField) s, int value);

extern THIS_LIB_IMPORT void (* Tab_selectTab)(C(Tab) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Tab, tabControl);
extern THIS_LIB_IMPORT void (* Tab_set_tabControl)(const C(Tab) t, C(TabControl) value);
extern THIS_LIB_IMPORT C(TabControl) (* Tab_get_tabControl)(const C(Tab) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Tab, isAdded);
extern THIS_LIB_IMPORT C(bool) (* Tab_get_isAdded)(const C(Tab) t);

extern THIS_LIB_IMPORT void (* TabControl_addTab)(C(TabControl) __this, C(Tab) tab);

extern THIS_LIB_IMPORT void (* TabControl_removeTab)(C(TabControl) __this, C(Tab) tab);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TabControl, placement);
extern THIS_LIB_IMPORT void (* TabControl_set_placement)(const C(TabControl) t, C(TabsPlacement) value);
extern THIS_LIB_IMPORT C(TabsPlacement) (* TabControl_get_placement)(const C(TabControl) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TabControl, buttonsOffset);
extern THIS_LIB_IMPORT void (* TabControl_set_buttonsOffset)(const C(TabControl) t, int value);
extern THIS_LIB_IMPORT int (* TabControl_get_buttonsOffset)(const C(TabControl) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(TabControl, curTab);
extern THIS_LIB_IMPORT void (* TabControl_set_curTab)(const C(TabControl) t, C(Tab) value);
extern THIS_LIB_IMPORT C(Tab) (* TabControl_get_curTab)(const C(TabControl) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ToolButton, menuItemPtr);
extern THIS_LIB_IMPORT void (* ToolButton_set_menuItemPtr)(const C(ToolButton) t, C(MenuItem) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ToolButton, menuItem);
extern THIS_LIB_IMPORT C(MenuItem) (* ToolButton_get_menuItem)(const C(ToolButton) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ToolTip, tip);
extern THIS_LIB_IMPORT void (* ToolTip_set_tip)(const C(ToolTip) t, constString value);
extern THIS_LIB_IMPORT constString (* ToolTip_get_tip)(const C(ToolTip) t);

struct C(UndoAction)
{
   subclass(UndoAction) type;
   C(bool) continued;
};
extern THIS_LIB_IMPORT int M_VTBLID(UndoAction, redo);
// void UndoAction_redo(C(UndoAction) * __i, void * data);
#define UndoAction_redo(__i, data) \
   SVMETHOD(CO(UndoAction), UndoAction, redo, (C(Instance))null, void, \
      C(UndoAction) * _ARG void *, \
      __i _ARG data)
extern THIS_LIB_IMPORT C(Method) * METHOD(UndoAction, redo);

extern THIS_LIB_IMPORT int M_VTBLID(UndoAction, undo);
// void UndoAction_undo(C(UndoAction) * __i, void * data);
#define UndoAction_undo(__i, data) \
   SVMETHOD(CO(UndoAction), UndoAction, undo, (C(Instance))null, void, \
      C(UndoAction) * _ARG void *, \
      __i _ARG data)
extern THIS_LIB_IMPORT C(Method) * METHOD(UndoAction, undo);

struct CM(UndoBuffer)
{
   byte __ecerePrivateData0[8];
   int count;
   int curAction;
   void * data;
   int dontRecord;
   C(bool) insideRedo;
   C(bool) recordAsOne;
   C(bool) firstEvent;
};
extern THIS_LIB_IMPORT void (* UndoBuffer_clear)(C(UndoBuffer) __this);

extern THIS_LIB_IMPORT void (* UndoBuffer_record)(C(UndoBuffer) __this, C(UndoAction) * action);

extern THIS_LIB_IMPORT void (* UndoBuffer_redo)(C(UndoBuffer) __this);

extern THIS_LIB_IMPORT void (* UndoBuffer_undo)(C(UndoBuffer) __this);


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gui  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
#if CPP11
enum C(AnchorValueType) : int
#else
typedef int C(AnchorValueType);
enum C(AnchorValueType)
#endif
{
   AnchorValueType_none = 0x0,
   AnchorValueType_offset = 0x1,
   AnchorValueType_relative = 0x2,
   AnchorValueType_middleRelative = 0x3,
   AnchorValueType_cascade = 0x4,
   AnchorValueType_vTiled = 0x5,
   AnchorValueType_hTiled = 0x6
};

struct C(AnchorValue)
{
   C(AnchorValueType) type;
   union
   {
      int distance;
      float percent;
   };
};
struct C(MiddleAnchorValue)
{
   C(AnchorValueType) type;
   union
   {
      int distance;
      float percent;
   };
};
typedef struct C(AnchorValue) C(AnchorValue);
typedef struct C(MiddleAnchorValue) C(MiddleAnchorValue);
struct C(Anchor)
{
   union
   {
      C(AnchorValue) left;
      C(MiddleAnchorValue) horz;
   };
   union
   {
      C(AnchorValue) top;
      C(MiddleAnchorValue) vert;
   };
   C(AnchorValue) right;
   C(AnchorValue) bottom;
};
struct C(SizeAnchor)
{
   C(Size) size;
   C(bool) isClientW;
   C(bool) isClientH;
};
struct CM(WindowController)
{
   int (** windowVTbl)(void);
   byte __ecere_padding[16];
};
typedef struct C(Anchor) C(Anchor);
typedef uint32 C(BorderBits);
#if CPP11
enum C(BorderStyle) : uint
#else
typedef C(BorderBits) C(BorderStyle);
enum C(BorderStyle)
#endif
{
   BorderStyle_none = 0x0,
   BorderStyle_contour = 0x1,
   BorderStyle_fixed = 0x3,
   BorderStyle_sizable = 0x7,
   BorderStyle_thin = 0x23,
   BorderStyle_sizableThin = 0x27,
   BorderStyle_deep = 0x8,
   BorderStyle_bevel = 0x10,
   BorderStyle_sizableDeep = 0xF,
   BorderStyle_sizableBevel = 0x17,
   BorderStyle_fixedDeep = 0xB,
   BorderStyle_fixedBevel = 0x13,
   BorderStyle_deepContour = 0x9
};

typedef struct C(ClipBoard) C(ClipBoard);
#if CPP11
enum C(CreationActivationOption) : int
#else
typedef int C(CreationActivationOption);
enum C(CreationActivationOption)
#endif
{
   CreationActivationOption_activate = 0x0,
   CreationActivationOption_flash = 0x1,
   CreationActivationOption_doNothing = 0x2
};

typedef C(Instance) C(Cursor);
#if CPP11
enum C(DialogResult) : int64
#else
typedef int64 C(DialogResult);
enum C(DialogResult)
#endif
{
   DialogResult_cancel = 0x0,
   DialogResult_yes = 0x1,
   DialogResult_no = 0x2,
   DialogResult_ok = 0x3
};

typedef C(Application) C(GuiApplication);
typedef C(Instance) C(Interface);
typedef struct C(Joystick) C(Joystick);
typedef uint32 C(MouseButtons);
typedef struct C(SizeAnchor) C(SizeAnchor);
typedef C(Instance) C(Skin);
#if CPP11
enum C(SkinBitmap) : int
#else
typedef int C(SkinBitmap);
enum C(SkinBitmap)
#endif
{
   SkinBitmap_minimize = 0x0,
   SkinBitmap_maximize = 0x1,
   SkinBitmap_restore = 0x2,
   SkinBitmap_close = 0x3
};

#if CPP11
enum C(SystemCursor) : int
#else
typedef int C(SystemCursor);
enum C(SystemCursor)
#endif
{
   SystemCursor_arrow = 0x0,
   SystemCursor_iBeam = 0x1,
   SystemCursor_cross = 0x2,
   SystemCursor_moving = 0x3,
   SystemCursor_sizeNESW = 0x4,
   SystemCursor_sizeNS = 0x5,
   SystemCursor_sizeNWSE = 0x6,
   SystemCursor_sizeWE = 0x7,
   SystemCursor_hand = 0x8
};

#if CPP11
enum C(TouchPointerEvent) : int
#else
typedef int C(TouchPointerEvent);
enum C(TouchPointerEvent)
#endif
{
   TouchPointerEvent_move = 0x0,
   TouchPointerEvent_up = 0x1,
   TouchPointerEvent_down = 0x2,
   TouchPointerEvent_pointerUp = 0x3,
   TouchPointerEvent_pointerDown = 0x4
};

typedef C(Instance) C(WindowController);
#if CPP11
enum C(WindowState) : int
#else
typedef int C(WindowState);
enum C(WindowState)
#endif
{
   WindowState_normal = 0x0,
   WindowState_minimized = 0x1,
   WindowState_maximized = 0x2
};

// end -- moved backwards outputs
typedef C(Window) C(ControllableWindow);
#if CPP11
enum C(KeyCode) : uint
#else
typedef C(Key) C(KeyCode);
enum C(KeyCode)
#endif
{
   KeyCode_escape = 0x1,
   KeyCode_k1 = 0x2,
   KeyCode_bang = 0x2,
   KeyCode_k2 = 0x3,
   KeyCode_commercial = 0x3,
   KeyCode_k3 = 0x4,
   KeyCode_pound = 0x4,
   KeyCode_k4 = 0x5,
   KeyCode_dollar = 0x5,
   KeyCode_k5 = 0x6,
   KeyCode_percent = 0x6,
   KeyCode_k6 = 0x7,
   KeyCode_circumflex = 0x7,
   KeyCode_k7 = 0x8,
   KeyCode_ampersand = 0x8,
   KeyCode_k8 = 0x9,
   KeyCode_star = 0x9,
   KeyCode_k9 = 0xA,
   KeyCode_leftParanthesis = 0xA,
   KeyCode_k0 = 0xB,
   KeyCode_rightParanthesis = 0xA,
   KeyCode_minus = 0xC,
   KeyCode_underscore = 0xC,
   KeyCode_equal = 0xD,
   KeyCode_plus = 0xD,
   KeyCode_backSpace = 0xE,
   KeyCode_tab = 0xF,
   KeyCode_q = 0x10,
   KeyCode_w = 0x11,
   KeyCode_e = 0x12,
   KeyCode_r = 0x13,
   KeyCode_t = 0x14,
   KeyCode_y = 0x15,
   KeyCode_u = 0x16,
   KeyCode_i = 0x17,
   KeyCode_o = 0x18,
   KeyCode_p = 0x19,
   KeyCode_leftBracket = 0x1A,
   KeyCode_rightBracket = 0x1B,
   KeyCode_enter = 0x1C,
   KeyCode_leftControl = 0x1D,
   KeyCode_a = 0x1E,
   KeyCode_s = 0x1F,
   KeyCode_d = 0x20,
   KeyCode_f = 0x21,
   KeyCode_g = 0x22,
   KeyCode_h = 0x23,
   KeyCode_j = 0x24,
   KeyCode_k = 0x25,
   KeyCode_l = 0x26,
   KeyCode_semicolon = 0x27,
   KeyCode_colon = 0x27,
   KeyCode_quote = 0x28,
   KeyCode_doubleQuote = 0x28,
   KeyCode_tilde = 0x29,
   KeyCode_backQuote = 0x29,
   KeyCode_leftShift = 0x2A,
   KeyCode_backSlash = 0x2B,
   KeyCode_pipe = 0x2B,
   KeyCode_z = 0x2C,
   KeyCode_x = 0x2D,
   KeyCode_c = 0x2E,
   KeyCode_v = 0x2F,
   KeyCode_b = 0x30,
   KeyCode_n = 0x31,
   KeyCode_m = 0x32,
   KeyCode_comma = 0x33,
   KeyCode_smallerThan = 0x33,
   KeyCode_period = 0x34,
   KeyCode_greaterThan = 0x34,
   KeyCode_slash = 0x35,
   KeyCode_questionMark = 0x35,
   KeyCode_rightShift = 0x36,
   KeyCode_keyPadStar = 0x37,
   KeyCode_leftAlt = 0x38,
   KeyCode_space = 0x39,
   KeyCode_capsLock = 0x3A,
   KeyCode_f1 = 0x3B,
   KeyCode_f2 = 0x3C,
   KeyCode_f3 = 0x3D,
   KeyCode_f4 = 0x3E,
   KeyCode_f5 = 0x3F,
   KeyCode_f6 = 0x40,
   KeyCode_f7 = 0x41,
   KeyCode_f8 = 0x42,
   KeyCode_f9 = 0x43,
   KeyCode_f10 = 0x44,
   KeyCode_numLock = 0x45,
   KeyCode_scrollLock = 0x46,
   KeyCode_keyPadHome = 0x47,
   KeyCode_keyPad7 = 0x47,
   KeyCode_keyPadUp = 0x48,
   KeyCode_keyPad8 = 0x48,
   KeyCode_keyPadPageUp = 0x49,
   KeyCode_keyPad9 = 0x49,
   KeyCode_keyPadMinus = 0x4A,
   KeyCode_keyPadLeft = 0x4B,
   KeyCode_keyPad4 = 0x4B,
   KeyCode_keyPad5 = 0x4C,
   KeyCode_keyPadRight = 0x4D,
   KeyCode_keyPad6 = 0x4D,
   KeyCode_keyPadPlus = 0x4E,
   KeyCode_keyPadEnd = 0x4F,
   KeyCode_keyPad1 = 0x4F,
   KeyCode_keyPadDown = 0x50,
   KeyCode_keyPad2 = 0x50,
   KeyCode_keyPadPageDown = 0x51,
   KeyCode_keyPad3 = 0x51,
   KeyCode_keyPadInsert = 0x52,
   KeyCode_keyPad0 = 0x52,
   KeyCode_keyPadDelete = 0x53,
   KeyCode_f11 = 0x57,
   KeyCode_f12 = 0x58,
   KeyCode_keyPadEnter = 0x60,
   KeyCode_rightControl = 0x61,
   KeyCode_keyPadSlash = 0x62,
   KeyCode_printScreen = 0x63,
   KeyCode_rightAlt = 0x64,
   KeyCode_pauseBreak = 0x65,
   KeyCode_home = 0x66,
   KeyCode_up = 0x67,
   KeyCode_pageUp = 0x68,
   KeyCode_left = 0x69,
   KeyCode_right = 0x6A,
   KeyCode_end = 0x6B,
   KeyCode_down = 0x6C,
   KeyCode_pageDown = 0x6D,
   KeyCode_insert = 0x6E,
   KeyCode_del = 0x6F,
   KeyCode_shift = 0x100,
   KeyCode_alt = 0x101,
   KeyCode_control = 0x102,
   KeyCode_wheelUp = 0x103,
   KeyCode_wheelDown = 0x104,
   KeyCode_hotKey = 0x105,
   KeyCode_defaultKey = 0x106,
   KeyCode_capsState = 0x107,
   KeyCode_numState = 0x108,
   KeyCode_scrollState = 0x109,
   KeyCode_play = 0x201,
   KeyCode_record = 0x202,
   KeyCode_pause = 0x203,
   KeyCode_rewind = 0x204,
   KeyCode_fastForward = 0x205,
   KeyCode_previousTrack = 0x206,
   KeyCode_nextTrack = 0x207,
   KeyCode_stop = 0x208,
   KeyCode_eject = 0x209,
   KeyCode_volumeUp = 0x20A,
   KeyCode_volumeDown = 0x20B,
   KeyCode_mute = 0x20C,
   KeyCode_remoteHome = 0x213,
   KeyCode_back = 0x3B,
   KeyCode_menu1 = 0x3C,
   KeyCode_menu2 = 0x3D,
   KeyCode_menu3 = 0x3E,
   KeyCode_menu4 = 0x3F,
   KeyCode_select = 0x1C,
   KeyCode_bassBoost = 0x214,
   KeyCode_bassDown = 0x215,
   KeyCode_bassUp = 0x216,
   KeyCode_browserBackward = 0x217,
   KeyCode_browserFavorites = 0x218,
   KeyCode_browserForward = 0x219,
   KeyCode_browserHome = 0x21A,
   KeyCode_browserRefresh = 0x21B,
   KeyCode_browserSearch = 0x21C,
   KeyCode_browserStop = 0x21D,
   KeyCode_launchApp1 = 0x21E,
   KeyCode_launchApp2 = 0x21F,
   KeyCode_launchMail = 0x220,
   KeyCode_launchMediaSelect = 0x221,
   KeyCode_micVolumeDown = 0x222,
   KeyCode_micMute = 0x223,
   KeyCode_micVolumeUp = 0x224,
   KeyCode_trebleDown = 0x225,
   KeyCode_trebleUp = 0x226
};

typedef char * C(MultiLineString);
#if CPP11
enum C(PredefinedKey) : uint
#else
typedef C(Key) C(PredefinedKey);
enum C(PredefinedKey)
#endif
{
   PredefinedKey_alt0 = 0x4000B,
   PredefinedKey_alt1 = 0x40002,
   PredefinedKey_alt2 = 0x40003,
   PredefinedKey_alt3 = 0x40004,
   PredefinedKey_alt4 = 0x40005,
   PredefinedKey_alt5 = 0x40006,
   PredefinedKey_alt6 = 0x40007,
   PredefinedKey_alt7 = 0x40008,
   PredefinedKey_alt8 = 0x40009,
   PredefinedKey_alt9 = 0x4000A,
   PredefinedKey_altA = 0x4001E,
   PredefinedKey_altB = 0x40030,
   PredefinedKey_altC = 0x4002E,
   PredefinedKey_altD = 0x40020,
   PredefinedKey_altE = 0x40012,
   PredefinedKey_altF = 0x40021,
   PredefinedKey_altG = 0x40022,
   PredefinedKey_altH = 0x40023,
   PredefinedKey_altI = 0x40017,
   PredefinedKey_altJ = 0x40024,
   PredefinedKey_altK = 0x40025,
   PredefinedKey_altL = 0x40026,
   PredefinedKey_altM = 0x40032,
   PredefinedKey_altN = 0x40031,
   PredefinedKey_altO = 0x40018,
   PredefinedKey_altP = 0x40019,
   PredefinedKey_altQ = 0x40010,
   PredefinedKey_altR = 0x40013,
   PredefinedKey_altS = 0x4001F,
   PredefinedKey_altT = 0x40014,
   PredefinedKey_altU = 0x40016,
   PredefinedKey_altV = 0x4002F,
   PredefinedKey_altW = 0x40011,
   PredefinedKey_altX = 0x4002D,
   PredefinedKey_altY = 0x40015,
   PredefinedKey_altZ = 0x4002C,
   PredefinedKey_altF1 = 0x4003B,
   PredefinedKey_altF2 = 0x4003C,
   PredefinedKey_altF3 = 0x4003D,
   PredefinedKey_altF4 = 0x4003E,
   PredefinedKey_altF5 = 0x4003F,
   PredefinedKey_altF6 = 0x40040,
   PredefinedKey_altF7 = 0x40041,
   PredefinedKey_altF8 = 0x40042,
   PredefinedKey_altF9 = 0x40043,
   PredefinedKey_altF10 = 0x40044,
   PredefinedKey_altF11 = 0x40057,
   PredefinedKey_altF12 = 0x40058,
   PredefinedKey_altLeft = 0x40069,
   PredefinedKey_altRight = 0x4006A,
   PredefinedKey_altUp = 0x40067,
   PredefinedKey_altDown = 0x4006C,
   PredefinedKey_altEnter = 0x4001C,
   PredefinedKey_altKeyPadEnter = 0x40060,
   PredefinedKey_altHome = 0x40066,
   PredefinedKey_altEnd = 0x4006B,
   PredefinedKey_altMinus = 0x4000C,
   PredefinedKey_altSpace = 0x40039,
   PredefinedKey_ctrl0 = 0x2000B,
   PredefinedKey_ctrl1 = 0x20002,
   PredefinedKey_ctrl2 = 0x20003,
   PredefinedKey_ctrl3 = 0x20004,
   PredefinedKey_ctrl4 = 0x20005,
   PredefinedKey_ctrl5 = 0x20006,
   PredefinedKey_ctrl6 = 0x20007,
   PredefinedKey_ctrl7 = 0x20008,
   PredefinedKey_ctrl8 = 0x20009,
   PredefinedKey_ctrl9 = 0x2000A,
   PredefinedKey_ctrlA = 0x2001E,
   PredefinedKey_ctrlB = 0x20030,
   PredefinedKey_ctrlC = 0x2002E,
   PredefinedKey_ctrlD = 0x20020,
   PredefinedKey_ctrlE = 0x20012,
   PredefinedKey_ctrlF = 0x20021,
   PredefinedKey_ctrlG = 0x20022,
   PredefinedKey_ctrlH = 0x20023,
   PredefinedKey_ctrlI = 0x20017,
   PredefinedKey_ctrlJ = 0x20024,
   PredefinedKey_ctrlK = 0x20025,
   PredefinedKey_ctrlL = 0x20026,
   PredefinedKey_ctrlM = 0x20032,
   PredefinedKey_ctrlN = 0x20031,
   PredefinedKey_ctrlO = 0x20018,
   PredefinedKey_ctrlP = 0x20019,
   PredefinedKey_ctrlQ = 0x20010,
   PredefinedKey_ctrlR = 0x20013,
   PredefinedKey_ctrlS = 0x2001F,
   PredefinedKey_ctrlT = 0x20014,
   PredefinedKey_ctrlU = 0x20016,
   PredefinedKey_ctrlV = 0x2002F,
   PredefinedKey_ctrlW = 0x20011,
   PredefinedKey_ctrlX = 0x2002D,
   PredefinedKey_ctrlY = 0x20015,
   PredefinedKey_ctrlZ = 0x2002C,
   PredefinedKey_ctrlF1 = 0x2003B,
   PredefinedKey_ctrlF2 = 0x2003C,
   PredefinedKey_ctrlF3 = 0x2003D,
   PredefinedKey_ctrlF4 = 0x2003E,
   PredefinedKey_ctrlF5 = 0x2003F,
   PredefinedKey_ctrlF6 = 0x20040,
   PredefinedKey_ctrlF7 = 0x20041,
   PredefinedKey_ctrlF8 = 0x20042,
   PredefinedKey_ctrlF9 = 0x20043,
   PredefinedKey_ctrlF10 = 0x20044,
   PredefinedKey_ctrlF11 = 0x20057,
   PredefinedKey_ctrlF12 = 0x20058,
   PredefinedKey_ctrlLeft = 0x20069,
   PredefinedKey_ctrlRight = 0x2006A,
   PredefinedKey_ctrlUp = 0x20067,
   PredefinedKey_ctrlDown = 0x2006C,
   PredefinedKey_ctrlEnter = 0x2001C,
   PredefinedKey_ctrlHome = 0x20066,
   PredefinedKey_ctrlEnd = 0x2006B,
   PredefinedKey_ctrlPageUp = 0x20068,
   PredefinedKey_ctrlPageDown = 0x2006D,
   PredefinedKey_ctrlInsert = 0x2006E,
   PredefinedKey_ctrlSpace = 0x20039,
   PredefinedKey_shiftTab = 0x1000F,
   PredefinedKey_shiftF1 = 0x1003B,
   PredefinedKey_shiftF2 = 0x1003C,
   PredefinedKey_shiftF3 = 0x1003D,
   PredefinedKey_shiftF4 = 0x1003E,
   PredefinedKey_shiftF5 = 0x1003F,
   PredefinedKey_shiftF6 = 0x10040,
   PredefinedKey_shiftF7 = 0x10041,
   PredefinedKey_shiftF8 = 0x10042,
   PredefinedKey_shiftF9 = 0x10043,
   PredefinedKey_shiftF10 = 0x10044,
   PredefinedKey_shiftF11 = 0x10057,
   PredefinedKey_shiftF12 = 0x10058,
   PredefinedKey_shiftInsert = 0x1006E,
   PredefinedKey_shiftDel = 0x1006F
};

typedef uint32 C(SmartKey);
typedef struct C(TouchPointerInfo) C(TouchPointerInfo);
typedef uint64_t TP(WindowController, V);
extern THIS_LIB_IMPORT C(Property) * PROPERTY(AnchorValue, MinMaxValue);
extern THIS_LIB_IMPORT void (* AnchorValue_from_MinMaxValue)(const C(AnchorValue) * a, C(MinMaxValue) value);
extern THIS_LIB_IMPORT C(MinMaxValue) (* AnchorValue_to_MinMaxValue)(const C(AnchorValue) * a);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(AnchorValue, int);
extern THIS_LIB_IMPORT void (* AnchorValue_from_int)(const C(AnchorValue) * a, int value);
extern THIS_LIB_IMPORT int (* AnchorValue_to_int)(const C(AnchorValue) * a);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(AnchorValue, double);
extern THIS_LIB_IMPORT void (* AnchorValue_from_double)(const C(AnchorValue) * a, double value);
extern THIS_LIB_IMPORT double (* AnchorValue_to_double)(const C(AnchorValue) * a);

#define BORDERBITS_contour_SHIFT                         0
#define BORDERBITS_contour_MASK                          0x1
#define BORDERBITS_contour(x)                            ((((C(BorderBits))(x)) & BORDERBITS_contour_MASK) >> BORDERBITS_contour_SHIFT)
#define BORDERBITS_SET_contour(x, contour)                     (x) = ((C(BorderBits))(x) & ~((C(BorderBits))BORDERBITS_contour_MASK)) | (((C(BorderBits))(contour)) << BORDERBITS_contour_SHIFT)
#define BORDERBITS_fixed_SHIFT                           1
#define BORDERBITS_fixed_MASK                            0x2
#define BORDERBITS_fixed(x)                              ((((C(BorderBits))(x)) & BORDERBITS_fixed_MASK) >> BORDERBITS_fixed_SHIFT)
#define BORDERBITS_SET_fixed(x, fixed)                       (x) = ((C(BorderBits))(x) & ~((C(BorderBits))BORDERBITS_fixed_MASK)) | (((C(BorderBits))(fixed)) << BORDERBITS_fixed_SHIFT)
#define BORDERBITS_sizable_SHIFT                         2
#define BORDERBITS_sizable_MASK                          0x4
#define BORDERBITS_sizable(x)                            ((((C(BorderBits))(x)) & BORDERBITS_sizable_MASK) >> BORDERBITS_sizable_SHIFT)
#define BORDERBITS_SET_sizable(x, sizable)                     (x) = ((C(BorderBits))(x) & ~((C(BorderBits))BORDERBITS_sizable_MASK)) | (((C(BorderBits))(sizable)) << BORDERBITS_sizable_SHIFT)
#define BORDERBITS_deep_SHIFT                            3
#define BORDERBITS_deep_MASK                             0x8
#define BORDERBITS_deep(x)                               ((((C(BorderBits))(x)) & BORDERBITS_deep_MASK) >> BORDERBITS_deep_SHIFT)
#define BORDERBITS_SET_deep(x, deep)                        (x) = ((C(BorderBits))(x) & ~((C(BorderBits))BORDERBITS_deep_MASK)) | (((C(BorderBits))(deep)) << BORDERBITS_deep_SHIFT)
#define BORDERBITS_bevel_SHIFT                           4
#define BORDERBITS_bevel_MASK                            0x10
#define BORDERBITS_bevel(x)                              ((((C(BorderBits))(x)) & BORDERBITS_bevel_MASK) >> BORDERBITS_bevel_SHIFT)
#define BORDERBITS_SET_bevel(x, bevel)                       (x) = ((C(BorderBits))(x) & ~((C(BorderBits))BORDERBITS_bevel_MASK)) | (((C(BorderBits))(bevel)) << BORDERBITS_bevel_SHIFT)
#define BORDERBITS_thin_SHIFT                            5
#define BORDERBITS_thin_MASK                             0x20
#define BORDERBITS_thin(x)                               ((((C(BorderBits))(x)) & BORDERBITS_thin_MASK) >> BORDERBITS_thin_SHIFT)
#define BORDERBITS_SET_thin(x, thin)                        (x) = ((C(BorderBits))(x) & ~((C(BorderBits))BORDERBITS_thin_MASK)) | (((C(BorderBits))(thin)) << BORDERBITS_thin_SHIFT)


struct C(ClipBoard)
{
   char * text;
   void * handle;
};
extern THIS_LIB_IMPORT C(bool) (* ClipBoard_allocate)(C(ClipBoard) * __this, uint size);

extern THIS_LIB_IMPORT void (* ClipBoard_clear)(C(ClipBoard) * __this);

extern THIS_LIB_IMPORT C(bool) (* ClipBoard_load)(C(ClipBoard) * __this);

extern THIS_LIB_IMPORT C(bool) (* ClipBoard_save)(C(ClipBoard) * __this);

extern THIS_LIB_IMPORT void (* ClipBoard_unload)(C(ClipBoard) * __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ClipBoard, memory);
extern THIS_LIB_IMPORT char * (* ClipBoard_get_memory)(const C(ClipBoard) * c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(CommonControl, toolTip);
extern THIS_LIB_IMPORT void (* CommonControl_set_toolTip)(const C(CommonControl) c, constString value);
extern THIS_LIB_IMPORT constString (* CommonControl_get_toolTip)(const C(CommonControl) c);

extern THIS_LIB_IMPORT void (* Cursor_free)(C(Cursor) __this);

extern THIS_LIB_IMPORT C(bool) (* Cursor_load)(C(Cursor) __this, const char * name, int hotSpotX, int hotSpotY, byte * paletteShades, C(DisplaySystem) ds);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Cursor, systemCursor);
extern THIS_LIB_IMPORT void (* Cursor_set_systemCursor)(const C(Cursor) c, C(SystemCursor) value);

struct C(Extent)
{
   void * first;
   void * last;
   int count;
   uint offset;
   C(bool) circ;
   byte __ecere_padding[28];
};
extern THIS_LIB_IMPORT void (* Extent_addBox)(C(Extent) * __this, C(Box) * box);

extern THIS_LIB_IMPORT void (* Extent_copy)(C(Extent) * __this, C(Extent) * source);

extern THIS_LIB_IMPORT void (* Extent_empty)(C(Extent) * __this);

extern THIS_LIB_IMPORT void (* Extent_excludeBox)(C(Extent) * __this, C(Box) * box, C(Extent) * temp);

extern THIS_LIB_IMPORT void (* Extent_exclusion)(C(Extent) * __this, C(Extent) * b, C(Extent) * temp);

extern THIS_LIB_IMPORT void (* Extent_intersectBox)(C(Extent) * __this, C(Box) * box);

extern THIS_LIB_IMPORT void (* Extent_intersection)(C(Extent) * __this, C(Extent) * b, C(Extent) * temp, C(Extent) * temp2, C(Extent) * temp3);

extern THIS_LIB_IMPORT void (* Extent_offset)(C(Extent) * __this, int x, int y);

extern THIS_LIB_IMPORT void (* Extent_union)(C(Extent) * __this, C(Extent) * b, C(Extent) * temp);

extern THIS_LIB_IMPORT void (* Extent_unionBox)(C(Extent) * __this, C(Box) * box, C(Extent) * temp);

extern THIS_LIB_IMPORT int M_VTBLID(GuiApplication, cycle);
// C(bool) GuiApplication_cycle(C(GuiApplication) __i, C(bool) idle);
#define GuiApplication_cycle(__i, idle) \
   VMETHOD(CO(GuiApplication), GuiApplication, cycle, __i, C(bool), \
      C(GuiApplication) _ARG C(bool), \
      __i _ARG idle)
extern THIS_LIB_IMPORT C(Method) * METHOD(GuiApplication, cycle);

extern THIS_LIB_IMPORT C(Cursor) (* GuiApplication_getCursor)(C(GuiApplication) __this, C(SystemCursor) cursor);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_getKeyState)(C(GuiApplication) __this, C(Key) key);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_getMouseState)(C(GuiApplication) __this, C(MouseButtons) * buttons, int * x, int * y);

extern THIS_LIB_IMPORT int M_VTBLID(GuiApplication, init);
// C(bool) GuiApplication_init(C(GuiApplication) __i);
#define GuiApplication_init(__i) \
   VMETHOD(CO(GuiApplication), GuiApplication, init, __i, C(bool), \
      C(GuiApplication), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(GuiApplication, init);

extern THIS_LIB_IMPORT void (* GuiApplication_lock)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT void (* GuiApplication_lockEx)(C(GuiApplication) __this, int count);

extern THIS_LIB_IMPORT void (* GuiApplication_pauseNetworkEvents)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_processFileNotifications)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_processInput)(C(GuiApplication) __this, C(bool) useProcessAll);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_processNetworkEvents)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT void (* GuiApplication_resumeNetworkEvents)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_setDesktopPosition)(C(GuiApplication) __this, int x, int y, int w, int h, C(bool) moveChildren);

extern THIS_LIB_IMPORT void (* GuiApplication_signalEvent)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT C(bool) (* GuiApplication_switchMode)(C(GuiApplication) __this, C(bool) fullScreen, const char * driverName, C(Resolution) resolution, C(PixelFormat) colorDepth, int refreshRate, const char * skinName, C(bool) fallBack);

extern THIS_LIB_IMPORT int M_VTBLID(GuiApplication, terminate);
// void GuiApplication_terminate(C(GuiApplication) __i);
#define GuiApplication_terminate(__i) \
   VMETHOD(CO(GuiApplication), GuiApplication, terminate, __i, void, \
      C(GuiApplication), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(GuiApplication, terminate);

extern THIS_LIB_IMPORT void (* GuiApplication_unlock)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT int (* GuiApplication_unlockEx)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT void (* GuiApplication_updateDisplay)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT void (* GuiApplication_wait)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT void (* GuiApplication_waitEvent)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT void (* GuiApplication_waitNetworkEvent)(C(GuiApplication) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, appName);
extern THIS_LIB_IMPORT void (* GuiApplication_set_appName)(const C(GuiApplication) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GuiApplication_get_appName)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, semaphore);
extern THIS_LIB_IMPORT C(Semaphore) * (* GuiApplication_get_semaphore)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, alwaysEmptyInput);
extern THIS_LIB_IMPORT void (* GuiApplication_set_alwaysEmptyInput)(const C(GuiApplication) g, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* GuiApplication_get_alwaysEmptyInput)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, fullScreen);
extern THIS_LIB_IMPORT void (* GuiApplication_set_fullScreen)(const C(GuiApplication) g, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* GuiApplication_get_fullScreen)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, driver);
extern THIS_LIB_IMPORT void (* GuiApplication_set_driver)(const C(GuiApplication) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GuiApplication_get_driver)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, resolution);
extern THIS_LIB_IMPORT void (* GuiApplication_set_resolution)(const C(GuiApplication) g, C(Resolution) value);
extern THIS_LIB_IMPORT C(Resolution) (* GuiApplication_get_resolution)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, pixelFormat);
extern THIS_LIB_IMPORT void (* GuiApplication_set_pixelFormat)(const C(GuiApplication) g, C(PixelFormat) value);
extern THIS_LIB_IMPORT C(PixelFormat) (* GuiApplication_get_pixelFormat)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, refreshRate);
extern THIS_LIB_IMPORT void (* GuiApplication_set_refreshRate)(const C(GuiApplication) g, int value);
extern THIS_LIB_IMPORT int (* GuiApplication_get_refreshRate)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, skin);
extern THIS_LIB_IMPORT void (* GuiApplication_set_skin)(const C(GuiApplication) g, const char * value);
extern THIS_LIB_IMPORT const char * (* GuiApplication_get_skin)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, textMode);
extern THIS_LIB_IMPORT void (* GuiApplication_set_textMode)(const C(GuiApplication) g, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* GuiApplication_get_textMode)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, desktop);
extern THIS_LIB_IMPORT C(Window) (* GuiApplication_get_desktop)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, drivers);
extern THIS_LIB_IMPORT const char ** (* GuiApplication_get_drivers)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, skins);
extern THIS_LIB_IMPORT const char ** (* GuiApplication_get_skins)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, currentSkin);
extern THIS_LIB_IMPORT subclass(Skin) (* GuiApplication_get_currentSkin)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, numDrivers);
extern THIS_LIB_IMPORT int (* GuiApplication_get_numDrivers)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, numSkins);
extern THIS_LIB_IMPORT int (* GuiApplication_get_numSkins)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, timerResolution);
extern THIS_LIB_IMPORT void (* GuiApplication_set_timerResolution)(const C(GuiApplication) g, uint value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GuiApplication, acquiredWindow);
extern THIS_LIB_IMPORT C(Window) (* GuiApplication_get_acquiredWindow)(const C(GuiApplication) g);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, acquireInput);
// C(bool) Interface_acquireInput(C(Interface) __i, C(Window) window, C(bool) state);
#define Interface_acquireInput(__i, window, state) \
   VMETHOD(CO(Interface), Interface, acquireInput, __i, C(bool), \
      C(Window) _ARG C(bool), \
      window _ARG state)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, acquireInput);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, activateRootWindow);
// void Interface_activateRootWindow(C(Interface) __i, C(Window) window);
#define Interface_activateRootWindow(__i, window) \
   VMETHOD(CO(Interface), Interface, activateRootWindow, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, activateRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, allocateClipboard);
// C(bool) Interface_allocateClipboard(C(Interface) __i, C(ClipBoard) * clipBoard, uint size);
#define Interface_allocateClipboard(__i, clipBoard, size) \
   VMETHOD(CO(Interface), Interface, allocateClipboard, __i, C(bool), \
      C(ClipBoard) * _ARG uint, \
      clipBoard _ARG size)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, allocateClipboard);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, clearClipboard);
// void Interface_clearClipboard(C(Interface) __i);
#define Interface_clearClipboard(__i) \
   VMETHOD(CO(Interface), Interface, clearClipboard, __i, void, \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, clearClipboard);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, createRootWindow);
// void * Interface_createRootWindow(C(Interface) __i, C(Window) window);
#define Interface_createRootWindow(__i, window) \
   VMETHOD(CO(Interface), Interface, createRootWindow, __i, void *, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, createRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, destroyRootWindow);
// void Interface_destroyRootWindow(C(Interface) __i, C(Window) window);
#define Interface_destroyRootWindow(__i, window) \
   VMETHOD(CO(Interface), Interface, destroyRootWindow, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, destroyRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, ensureFullScreen);
// void Interface_ensureFullScreen(C(Interface) __i, C(bool) * fullScreen);
#define Interface_ensureFullScreen(__i, fullScreen) \
   VMETHOD(CO(Interface), Interface, ensureFullScreen, __i, void, \
      C(bool) *, \
      fullScreen)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, ensureFullScreen);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, flashRootWindow);
// void Interface_flashRootWindow(C(Interface) __i, C(Window) window);
#define Interface_flashRootWindow(__i, window) \
   VMETHOD(CO(Interface), Interface, flashRootWindow, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, flashRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, getCurrentMode);
// void Interface_getCurrentMode(C(Interface) __i, C(bool) * fullScreen, C(Resolution) * resolution, C(PixelFormat) * colorDepth, int * refreshRate);
#define Interface_getCurrentMode(__i, fullScreen, resolution, colorDepth, refreshRate) \
   VMETHOD(CO(Interface), Interface, getCurrentMode, __i, void, \
      C(bool) * _ARG C(Resolution) * _ARG C(PixelFormat) * _ARG int *, \
      fullScreen _ARG resolution _ARG colorDepth _ARG refreshRate)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, getCurrentMode);

extern THIS_LIB_IMPORT C(Key) (* Interface_getExtendedKey)(C(Key) key);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, getJoystickState);
// C(bool) Interface_getJoystickState(C(Interface) __i, int device, C(Joystick) * joystick);
#define Interface_getJoystickState(__i, device, joystick) \
   VMETHOD(CO(Interface), Interface, getJoystickState, __i, C(bool), \
      int _ARG C(Joystick) *, \
      device _ARG joystick)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, getJoystickState);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, getKeyState);
// C(bool) Interface_getKeyState(C(Interface) __i, C(Key) key);
#define Interface_getKeyState(__i, key) \
   VMETHOD(CO(Interface), Interface, getKeyState, __i, C(bool), \
      C(Key), \
      key)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, getKeyState);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, getMousePosition);
// void Interface_getMousePosition(C(Interface) __i, int * x, int * y);
#define Interface_getMousePosition(__i, x, y) \
   VMETHOD(CO(Interface), Interface, getMousePosition, __i, void, \
      int * _ARG int *, \
      x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, getMousePosition);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, getMouseState);
// C(bool) Interface_getMouseState(C(Interface) __i, C(MouseButtons) * buttons, int * x, int * y);
#define Interface_getMouseState(__i, buttons, x, y) \
   VMETHOD(CO(Interface), Interface, getMouseState, __i, C(bool), \
      C(MouseButtons) * _ARG int * _ARG int *, \
      buttons _ARG x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, getMouseState);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, getScreenArea);
// void Interface_getScreenArea(C(Interface) __i, C(Window) window, C(Box) * box);
#define Interface_getScreenArea(__i, window, box) \
   VMETHOD(CO(Interface), Interface, getScreenArea, __i, void, \
      C(Window) _ARG C(Box) *, \
      window _ARG box)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, getScreenArea);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, graphicsDrivers);
// const char ** Interface_graphicsDrivers(C(Interface) __i, int * numDrivers);
#define Interface_graphicsDrivers(__i, numDrivers) \
   VMETHOD(CO(Interface), Interface, graphicsDrivers, __i, const char **, \
      int *, \
      numDrivers)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, graphicsDrivers);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, initialize);
// C(bool) Interface_initialize(C(Interface) __i);
#define Interface_initialize(__i) \
   VMETHOD(CO(Interface), Interface, initialize, __i, C(bool), \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, initialize);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, loadClipboard);
// C(bool) Interface_loadClipboard(C(Interface) __i, C(ClipBoard) * clipBoard);
#define Interface_loadClipboard(__i, clipBoard) \
   VMETHOD(CO(Interface), Interface, loadClipboard, __i, C(bool), \
      C(ClipBoard) *, \
      clipBoard)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, loadClipboard);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, lock);
// void Interface_lock(C(Interface) __i, C(Window) window);
#define Interface_lock(__i, window) \
   VMETHOD(CO(Interface), Interface, lock, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, lock);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, offsetWindow);
// void Interface_offsetWindow(C(Interface) __i, C(Window) window, int * x, int * y);
#define Interface_offsetWindow(__i, window, x, y) \
   VMETHOD(CO(Interface), Interface, offsetWindow, __i, void, \
      C(Window) _ARG int * _ARG int *, \
      window _ARG x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, offsetWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, orderRootWindow);
// void Interface_orderRootWindow(C(Interface) __i, C(Window) window, C(bool) topMost);
#define Interface_orderRootWindow(__i, window, topMost) \
   VMETHOD(CO(Interface), Interface, orderRootWindow, __i, void, \
      C(Window) _ARG C(bool), \
      window _ARG topMost)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, orderRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, positionRootWindow);
// void Interface_positionRootWindow(C(Interface) __i, C(Window) window, int x, int y, int w, int h, C(bool) move, C(bool) resize);
#define Interface_positionRootWindow(__i, window, x, y, w, h, move, resize) \
   VMETHOD(CO(Interface), Interface, positionRootWindow, __i, void, \
      C(Window) _ARG int _ARG int _ARG int _ARG int _ARG C(bool) _ARG C(bool), \
      window _ARG x _ARG y _ARG w _ARG h _ARG move _ARG resize)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, positionRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, processInput);
// C(bool) Interface_processInput(C(Interface) __i, C(bool) processAll);
#define Interface_processInput(__i, processAll) \
   VMETHOD(CO(Interface), Interface, processInput, __i, C(bool), \
      C(bool), \
      processAll)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, processInput);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, saveClipboard);
// C(bool) Interface_saveClipboard(C(Interface) __i, C(ClipBoard) * clipBoard);
#define Interface_saveClipboard(__i, clipBoard) \
   VMETHOD(CO(Interface), Interface, saveClipboard, __i, C(bool), \
      C(ClipBoard) *, \
      clipBoard)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, saveClipboard);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, screenMode);
// C(bool) Interface_screenMode(C(Interface) __i, C(bool) fullScreen, C(Resolution) resolution, C(PixelFormat) colorDepth, int refreshRate, C(bool) * textMode);
#define Interface_screenMode(__i, fullScreen, resolution, colorDepth, refreshRate, textMode) \
   VMETHOD(CO(Interface), Interface, screenMode, __i, C(bool), \
      C(bool) _ARG C(Resolution) _ARG C(PixelFormat) _ARG int _ARG C(bool) *, \
      fullScreen _ARG resolution _ARG colorDepth _ARG refreshRate _ARG textMode)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, screenMode);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setCaret);
// void Interface_setCaret(C(Interface) __i, int caretX, int caretY, int size);
#define Interface_setCaret(__i, caretX, caretY, size) \
   VMETHOD(CO(Interface), Interface, setCaret, __i, void, \
      int _ARG int _ARG int, \
      caretX _ARG caretY _ARG size)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setCaret);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setIcon);
// C(bool) Interface_setIcon(C(Interface) __i, C(Window) window, C(BitmapResource) icon);
#define Interface_setIcon(__i, window, icon) \
   VMETHOD(CO(Interface), Interface, setIcon, __i, C(bool), \
      C(Window) _ARG C(BitmapResource), \
      window _ARG icon)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setIcon);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setMouseCapture);
// void Interface_setMouseCapture(C(Interface) __i, C(Window) window);
#define Interface_setMouseCapture(__i, window) \
   VMETHOD(CO(Interface), Interface, setMouseCapture, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setMouseCapture);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setMouseCursor);
// void Interface_setMouseCursor(C(Interface) __i, C(Window) window, C(SystemCursor) cursor);
#define Interface_setMouseCursor(__i, window, cursor) \
   VMETHOD(CO(Interface), Interface, setMouseCursor, __i, void, \
      C(Window) _ARG C(SystemCursor), \
      window _ARG cursor)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setMouseCursor);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setMousePosition);
// void Interface_setMousePosition(C(Interface) __i, int x, int y);
#define Interface_setMousePosition(__i, x, y) \
   VMETHOD(CO(Interface), Interface, setMousePosition, __i, void, \
      int _ARG int, \
      x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setMousePosition);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setMouseRange);
// void Interface_setMouseRange(C(Interface) __i, C(Window) window, C(Box) * box);
#define Interface_setMouseRange(__i, window, box) \
   VMETHOD(CO(Interface), Interface, setMouseRange, __i, void, \
      C(Window) _ARG C(Box) *, \
      window _ARG box)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setMouseRange);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setRootWindowCaption);
// void Interface_setRootWindowCaption(C(Interface) __i, C(Window) window, const char * name);
#define Interface_setRootWindowCaption(__i, window, name) \
   VMETHOD(CO(Interface), Interface, setRootWindowCaption, __i, void, \
      C(Window) _ARG const char *, \
      window _ARG name)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setRootWindowCaption);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setRootWindowColor);
// void Interface_setRootWindowColor(C(Interface) __i, C(Window) window);
#define Interface_setRootWindowColor(__i, window) \
   VMETHOD(CO(Interface), Interface, setRootWindowColor, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setRootWindowColor);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setRootWindowState);
// void Interface_setRootWindowState(C(Interface) __i, C(Window) window, C(WindowState) state, C(bool) visible);
#define Interface_setRootWindowState(__i, window, state, visible) \
   VMETHOD(CO(Interface), Interface, setRootWindowState, __i, void, \
      C(Window) _ARG C(WindowState) _ARG C(bool), \
      window _ARG state _ARG visible)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setRootWindowState);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, setTimerResolution);
// void Interface_setTimerResolution(C(Interface) __i, uint hertz);
#define Interface_setTimerResolution(__i, hertz) \
   VMETHOD(CO(Interface), Interface, setTimerResolution, __i, void, \
      uint, \
      hertz)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, setTimerResolution);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, startMoving);
// void Interface_startMoving(C(Interface) __i, C(Window) window, int x, int y, C(bool) fromKeyBoard);
#define Interface_startMoving(__i, window, x, y, fromKeyBoard) \
   VMETHOD(CO(Interface), Interface, startMoving, __i, void, \
      C(Window) _ARG int _ARG int _ARG C(bool), \
      window _ARG x _ARG y _ARG fromKeyBoard)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, startMoving);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, stopMoving);
// void Interface_stopMoving(C(Interface) __i, C(Window) window);
#define Interface_stopMoving(__i, window) \
   VMETHOD(CO(Interface), Interface, stopMoving, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, stopMoving);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, terminate);
// void Interface_terminate(C(Interface) __i);
#define Interface_terminate(__i) \
   VMETHOD(CO(Interface), Interface, terminate, __i, void, \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, terminate);

extern THIS_LIB_IMPORT char (* Interface_translateKey)(C(Key) key, C(bool) shift);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, unloadClipboard);
// void Interface_unloadClipboard(C(Interface) __i, C(ClipBoard) * clipBoard);
#define Interface_unloadClipboard(__i, clipBoard) \
   VMETHOD(CO(Interface), Interface, unloadClipboard, __i, void, \
      C(ClipBoard) *, \
      clipBoard)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, unloadClipboard);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, unlock);
// void Interface_unlock(C(Interface) __i, C(Window) window);
#define Interface_unlock(__i, window) \
   VMETHOD(CO(Interface), Interface, unlock, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, unlock);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, updateRootWindow);
// void Interface_updateRootWindow(C(Interface) __i, C(Window) window);
#define Interface_updateRootWindow(__i, window) \
   VMETHOD(CO(Interface), Interface, updateRootWindow, __i, void, \
      C(Window), \
      window)
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, updateRootWindow);

extern THIS_LIB_IMPORT int M_VTBLID(Interface, wait);
// void Interface_wait(C(Interface) __i);
#define Interface_wait(__i) \
   VMETHOD(CO(Interface), Interface, wait, __i, void, \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Interface, wait);

extern THIS_LIB_IMPORT void (* Interface_writeKeyedText)(C(Surface) surface, int x, int y, const char * text, C(Key) hotKey);

extern THIS_LIB_IMPORT void (* Interface_writeKeyedTextDisabled)(C(Surface) surface, int x, int y, const char * text, C(Key) hotKey, C(bool) disabled);

struct C(Joystick)
{
   int x;
   int y;
   int z;
   int rx;
   int ry;
   int rz;
   uint buttons;
};
#define KEY_code_SHIFT                                   0
#define KEY_code_MASK                                    0xFFFF
#define KEY_code(x)                                      ((((C(Key))(x)) & KEY_code_MASK) >> KEY_code_SHIFT)
#define KEY_SET_code(x, code)                               (x) = ((C(Key))(x) & ~((C(Key))KEY_code_MASK)) | (((C(Key))(code)) << KEY_code_SHIFT)
#define KEY_shift_SHIFT                                  16
#define KEY_shift_MASK                                   0x10000
#define KEY_shift(x)                                     ((((C(Key))(x)) & KEY_shift_MASK) >> KEY_shift_SHIFT)
#define KEY_SET_shift(x, shift)                              (x) = ((C(Key))(x) & ~((C(Key))KEY_shift_MASK)) | (((C(Key))(shift)) << KEY_shift_SHIFT)
#define KEY_ctrl_SHIFT                                   17
#define KEY_ctrl_MASK                                    0x20000
#define KEY_ctrl(x)                                      ((((C(Key))(x)) & KEY_ctrl_MASK) >> KEY_ctrl_SHIFT)
#define KEY_SET_ctrl(x, ctrl)                               (x) = ((C(Key))(x) & ~((C(Key))KEY_ctrl_MASK)) | (((C(Key))(ctrl)) << KEY_ctrl_SHIFT)
#define KEY_alt_SHIFT                                    18
#define KEY_alt_MASK                                     0x40000
#define KEY_alt(x)                                       ((((C(Key))(x)) & KEY_alt_MASK) >> KEY_alt_SHIFT)
#define KEY_SET_alt(x, alt)                                (x) = ((C(Key))(x) & ~((C(Key))KEY_alt_MASK)) | (((C(Key))(alt)) << KEY_alt_SHIFT)
#define KEY_cmd_SHIFT                                    19
#define KEY_cmd_MASK                                     0x80000
#define KEY_cmd(x)                                       ((((C(Key))(x)) & KEY_cmd_MASK) >> KEY_cmd_SHIFT)
#define KEY_SET_cmd(x, cmd)                                (x) = ((C(Key))(x) & ~((C(Key))KEY_cmd_MASK)) | (((C(Key))(cmd)) << KEY_cmd_SHIFT)
#define KEY_modifiers_SHIFT                              16
#define KEY_modifiers_MASK                               0xFFFF0000
#define KEY_modifiers(x)                                 ((((C(Key))(x)) & KEY_modifiers_MASK) >> KEY_modifiers_SHIFT)
#define KEY_SET_modifiers(x, modifiers)                          (x) = ((C(Key))(x) & ~((C(Key))KEY_modifiers_MASK)) | (((C(Key))(modifiers)) << KEY_modifiers_SHIFT)


extern THIS_LIB_IMPORT C(Property) * PROPERTY(Key, SmartKey);
extern THIS_LIB_IMPORT C(SmartKey) (* Key_to_SmartKey)(const C(Key) key);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MiddleAnchorValue, MinMaxValue);
extern THIS_LIB_IMPORT void (* MiddleAnchorValue_from_MinMaxValue)(const C(MiddleAnchorValue) * m, C(MinMaxValue) value);
extern THIS_LIB_IMPORT C(MinMaxValue) (* MiddleAnchorValue_to_MinMaxValue)(const C(MiddleAnchorValue) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MiddleAnchorValue, int);
extern THIS_LIB_IMPORT void (* MiddleAnchorValue_from_int)(const C(MiddleAnchorValue) * m, int value);
extern THIS_LIB_IMPORT int (* MiddleAnchorValue_to_int)(const C(MiddleAnchorValue) * m);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MiddleAnchorValue, double);
extern THIS_LIB_IMPORT void (* MiddleAnchorValue_from_double)(const C(MiddleAnchorValue) * m, double value);
extern THIS_LIB_IMPORT double (* MiddleAnchorValue_to_double)(const C(MiddleAnchorValue) * m);

#define MODIFIERS_shift_SHIFT                            0
#define MODIFIERS_shift_MASK                             0x1
#define MODIFIERS_shift(x)                               ((((C(Modifiers))(x)) & MODIFIERS_shift_MASK) >> MODIFIERS_shift_SHIFT)
#define MODIFIERS_SET_shift(x, shift)                        (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_shift_MASK)) | (((C(Modifiers))(shift)) << MODIFIERS_shift_SHIFT)
#define MODIFIERS_ctrl_SHIFT                             1
#define MODIFIERS_ctrl_MASK                              0x2
#define MODIFIERS_ctrl(x)                                ((((C(Modifiers))(x)) & MODIFIERS_ctrl_MASK) >> MODIFIERS_ctrl_SHIFT)
#define MODIFIERS_SET_ctrl(x, ctrl)                         (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_ctrl_MASK)) | (((C(Modifiers))(ctrl)) << MODIFIERS_ctrl_SHIFT)
#define MODIFIERS_alt_SHIFT                              2
#define MODIFIERS_alt_MASK                               0x4
#define MODIFIERS_alt(x)                                 ((((C(Modifiers))(x)) & MODIFIERS_alt_MASK) >> MODIFIERS_alt_SHIFT)
#define MODIFIERS_SET_alt(x, alt)                          (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_alt_MASK)) | (((C(Modifiers))(alt)) << MODIFIERS_alt_SHIFT)
#define MODIFIERS_cmd_SHIFT                              3
#define MODIFIERS_cmd_MASK                               0x8
#define MODIFIERS_cmd(x)                                 ((((C(Modifiers))(x)) & MODIFIERS_cmd_MASK) >> MODIFIERS_cmd_SHIFT)
#define MODIFIERS_SET_cmd(x, cmd)                          (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_cmd_MASK)) | (((C(Modifiers))(cmd)) << MODIFIERS_cmd_SHIFT)
#define MODIFIERS_left_SHIFT                             4
#define MODIFIERS_left_MASK                              0x10
#define MODIFIERS_left(x)                                ((((C(Modifiers))(x)) & MODIFIERS_left_MASK) >> MODIFIERS_left_SHIFT)
#define MODIFIERS_SET_left(x, left)                         (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_left_MASK)) | (((C(Modifiers))(left)) << MODIFIERS_left_SHIFT)
#define MODIFIERS_middle_SHIFT                           5
#define MODIFIERS_middle_MASK                            0x20
#define MODIFIERS_middle(x)                              ((((C(Modifiers))(x)) & MODIFIERS_middle_MASK) >> MODIFIERS_middle_SHIFT)
#define MODIFIERS_SET_middle(x, middle)                       (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_middle_MASK)) | (((C(Modifiers))(middle)) << MODIFIERS_middle_SHIFT)
#define MODIFIERS_right_SHIFT                            6
#define MODIFIERS_right_MASK                             0x40
#define MODIFIERS_right(x)                               ((((C(Modifiers))(x)) & MODIFIERS_right_MASK) >> MODIFIERS_right_SHIFT)
#define MODIFIERS_SET_right(x, right)                        (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_right_MASK)) | (((C(Modifiers))(right)) << MODIFIERS_right_SHIFT)
#define MODIFIERS_isActivate_SHIFT                       7
#define MODIFIERS_isActivate_MASK                        0x80
#define MODIFIERS_isActivate(x)                          ((((C(Modifiers))(x)) & MODIFIERS_isActivate_MASK) >> MODIFIERS_isActivate_SHIFT)
#define MODIFIERS_SET_isActivate(x, isActivate)                   (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_isActivate_MASK)) | (((C(Modifiers))(isActivate)) << MODIFIERS_isActivate_SHIFT)
#define MODIFIERS_isSideEffect_SHIFT                     8
#define MODIFIERS_isSideEffect_MASK                      0x100
#define MODIFIERS_isSideEffect(x)                        ((((C(Modifiers))(x)) & MODIFIERS_isSideEffect_MASK) >> MODIFIERS_isSideEffect_SHIFT)
#define MODIFIERS_SET_isSideEffect(x, isSideEffect)                 (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_isSideEffect_MASK)) | (((C(Modifiers))(isSideEffect)) << MODIFIERS_isSideEffect_SHIFT)
#define MODIFIERS_closingDropDown_SHIFT                  9
#define MODIFIERS_closingDropDown_MASK                   0x200
#define MODIFIERS_closingDropDown(x)                     ((((C(Modifiers))(x)) & MODIFIERS_closingDropDown_MASK) >> MODIFIERS_closingDropDown_SHIFT)
#define MODIFIERS_SET_closingDropDown(x, closingDropDown)              (x) = ((C(Modifiers))(x) & ~((C(Modifiers))MODIFIERS_closingDropDown_MASK)) | (((C(Modifiers))(closingDropDown)) << MODIFIERS_closingDropDown_SHIFT)


#define MOUSEBUTTONS_left_SHIFT                          0
#define MOUSEBUTTONS_left_MASK                           0x1
#define MOUSEBUTTONS_left(x)                             ((((C(MouseButtons))(x)) & MOUSEBUTTONS_left_MASK) >> MOUSEBUTTONS_left_SHIFT)
#define MOUSEBUTTONS_SET_left(x, left)                      (x) = ((C(MouseButtons))(x) & ~((C(MouseButtons))MOUSEBUTTONS_left_MASK)) | (((C(MouseButtons))(left)) << MOUSEBUTTONS_left_SHIFT)
#define MOUSEBUTTONS_right_SHIFT                         1
#define MOUSEBUTTONS_right_MASK                          0x2
#define MOUSEBUTTONS_right(x)                            ((((C(MouseButtons))(x)) & MOUSEBUTTONS_right_MASK) >> MOUSEBUTTONS_right_SHIFT)
#define MOUSEBUTTONS_SET_right(x, right)                     (x) = ((C(MouseButtons))(x) & ~((C(MouseButtons))MOUSEBUTTONS_right_MASK)) | (((C(MouseButtons))(right)) << MOUSEBUTTONS_right_SHIFT)
#define MOUSEBUTTONS_middle_SHIFT                        2
#define MOUSEBUTTONS_middle_MASK                         0x4
#define MOUSEBUTTONS_middle(x)                           ((((C(MouseButtons))(x)) & MOUSEBUTTONS_middle_MASK) >> MOUSEBUTTONS_middle_SHIFT)
#define MOUSEBUTTONS_SET_middle(x, middle)                    (x) = ((C(MouseButtons))(x) & ~((C(MouseButtons))MOUSEBUTTONS_middle_MASK)) | (((C(MouseButtons))(middle)) << MOUSEBUTTONS_middle_SHIFT)
#define MOUSEBUTTONS(left, right, middle)                            (((((C(MouseButtons))(left)) << MOUSEBUTTONS_left_SHIFT) | ((C(MouseButtons))(right)) << MOUSEBUTTONS_right_SHIFT) | ((C(MouseButtons))(middle)) << MOUSEBUTTONS_middle_SHIFT)


extern THIS_LIB_IMPORT int M_VTBLID(Skin, captionFont);
// C(FontResource) Skin_captionFont(C(Skin) __i);
#define Skin_captionFont(__i) \
   VMETHOD(CO(Skin), Skin, captionFont, __i, C(FontResource), \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, captionFont);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, cursorsBitmaps);
// const char * Skin_cursorsBitmaps(C(Skin) __i, uint id, int * hotSpotX, int * hotSpotY, byte ** paletteShades);
#define Skin_cursorsBitmaps(__i, id, hotSpotX, hotSpotY, paletteShades) \
   VMETHOD(CO(Skin), Skin, cursorsBitmaps, __i, const char *, \
      uint _ARG int * _ARG int * _ARG byte **, \
      id _ARG hotSpotX _ARG hotSpotY _ARG paletteShades)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, cursorsBitmaps);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, getBitmap);
// C(BitmapResource) Skin_getBitmap(C(Skin) __i, C(SkinBitmap) ap1);
#define Skin_getBitmap(__i, ap1) \
   VMETHOD(CO(Skin), Skin, getBitmap, __i, C(BitmapResource), \
      C(SkinBitmap), \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, getBitmap);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, getDecorationsSize);
// void Skin_getDecorationsSize(C(Skin) __i, C(Window) ap1, C(MinMaxValue) * ap2, C(MinMaxValue) * ap3);
#define Skin_getDecorationsSize(__i, ap1, ap2, ap3) \
   VMETHOD(CO(Skin), Skin, getDecorationsSize, __i, void, \
      C(Window) _ARG C(MinMaxValue) * _ARG C(MinMaxValue) *, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, getDecorationsSize);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, horizontalSBH);
// int Skin_horizontalSBH(C(Skin) __i);
#define Skin_horizontalSBH(__i) \
   VMETHOD(CO(Skin), Skin, horizontalSBH, __i, int, \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, horizontalSBH);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, isMouseMoving);
// C(bool) Skin_isMouseMoving(C(Skin) __i, C(Window) ap1, int ap2, int ap3, int ap4, int ap5);
#define Skin_isMouseMoving(__i, ap1, ap2, ap3, ap4, ap5) \
   VMETHOD(CO(Skin), Skin, isMouseMoving, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG int _ARG int, \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, isMouseMoving);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, isMouseResizing);
// C(bool) Skin_isMouseResizing(C(Skin) __i, C(Window) ap1, int ap2, int ap3, int ap4, int ap5, C(bool) * ap6, C(bool) * ap7, C(bool) * ap8, C(bool) * ap9);
#define Skin_isMouseResizing(__i, ap1, ap2, ap3, ap4, ap5, ap6, ap7, ap8, ap9) \
   VMETHOD(CO(Skin), Skin, isMouseResizing, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG int _ARG int _ARG C(bool) * _ARG C(bool) * _ARG C(bool) * _ARG C(bool) *, \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5 _ARG ap6 _ARG ap7 _ARG ap8 _ARG ap9)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, isMouseResizing);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, setWindowArea);
// void Skin_setWindowArea(C(Skin) __i, C(Window) ap1, int * ap2, int * ap3, C(MinMaxValue) * ap4, C(MinMaxValue) * ap5, C(MinMaxValue) * ap6, C(MinMaxValue) * ap7);
#define Skin_setWindowArea(__i, ap1, ap2, ap3, ap4, ap5, ap6, ap7) \
   VMETHOD(CO(Skin), Skin, setWindowArea, __i, void, \
      C(Window) _ARG int * _ARG int * _ARG C(MinMaxValue) * _ARG C(MinMaxValue) * _ARG C(MinMaxValue) * _ARG C(MinMaxValue) *, \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5 _ARG ap6 _ARG ap7)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, setWindowArea);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, setWindowMinimum);
// void Skin_setWindowMinimum(C(Skin) __i, C(Window) ap1, C(MinMaxValue) * ap2, C(MinMaxValue) * ap3);
#define Skin_setWindowMinimum(__i, ap1, ap2, ap3) \
   VMETHOD(CO(Skin), Skin, setWindowMinimum, __i, void, \
      C(Window) _ARG C(MinMaxValue) * _ARG C(MinMaxValue) *, \
      ap1 _ARG ap2 _ARG ap3)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, setWindowMinimum);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, showDecorations);
// void Skin_showDecorations(C(Skin) __i, void * ap1, C(Surface) ap2, C(Window) ap3, const char * ap4, C(bool) ap5, C(bool) ap6);
#define Skin_showDecorations(__i, ap1, ap2, ap3, ap4, ap5, ap6) \
   VMETHOD(CO(Skin), Skin, showDecorations, __i, void, \
      void * _ARG C(Surface) _ARG C(Window) _ARG const char * _ARG C(bool) _ARG C(bool), \
      ap1 _ARG ap2 _ARG ap3 _ARG ap4 _ARG ap5 _ARG ap6)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, showDecorations);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, systemFont);
// C(FontResource) Skin_systemFont(C(Skin) __i);
#define Skin_systemFont(__i) \
   VMETHOD(CO(Skin), Skin, systemFont, __i, C(FontResource), \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, systemFont);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, updateNonClient);
// void Skin_updateNonClient(C(Skin) __i, void * ap1);
#define Skin_updateNonClient(__i, ap1) \
   VMETHOD(CO(Skin), Skin, updateNonClient, __i, void, \
      void *, \
      ap1)
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, updateNonClient);

extern THIS_LIB_IMPORT int M_VTBLID(Skin, verticalSBW);
// int Skin_verticalSBW(C(Skin) __i);
#define Skin_verticalSBW(__i) \
   VMETHOD(CO(Skin), Skin, verticalSBW, __i, int, \
      void, \
      )
extern THIS_LIB_IMPORT C(Method) * METHOD(Skin, verticalSBW);

#define SMARTKEY_code_SHIFT                              0
#define SMARTKEY_code_MASK                               0xFFFF
#define SMARTKEY_code(x)                                 ((((C(SmartKey))(x)) & SMARTKEY_code_MASK) >> SMARTKEY_code_SHIFT)
#define SMARTKEY_SET_code(x, code)                          (x) = ((C(SmartKey))(x) & ~((C(SmartKey))SMARTKEY_code_MASK)) | (((C(SmartKey))(code)) << SMARTKEY_code_SHIFT)
#define SMARTKEY_shift_SHIFT                             16
#define SMARTKEY_shift_MASK                              0x10000
#define SMARTKEY_shift(x)                                ((((C(SmartKey))(x)) & SMARTKEY_shift_MASK) >> SMARTKEY_shift_SHIFT)
#define SMARTKEY_SET_shift(x, shift)                         (x) = ((C(SmartKey))(x) & ~((C(SmartKey))SMARTKEY_shift_MASK)) | (((C(SmartKey))(shift)) << SMARTKEY_shift_SHIFT)
#define SMARTKEY_ctrl_SHIFT                              17
#define SMARTKEY_ctrl_MASK                               0x20000
#define SMARTKEY_ctrl(x)                                 ((((C(SmartKey))(x)) & SMARTKEY_ctrl_MASK) >> SMARTKEY_ctrl_SHIFT)
#define SMARTKEY_SET_ctrl(x, ctrl)                          (x) = ((C(SmartKey))(x) & ~((C(SmartKey))SMARTKEY_ctrl_MASK)) | (((C(SmartKey))(ctrl)) << SMARTKEY_ctrl_SHIFT)
#define SMARTKEY_alt_SHIFT                               18
#define SMARTKEY_alt_MASK                                0x40000
#define SMARTKEY_alt(x)                                  ((((C(SmartKey))(x)) & SMARTKEY_alt_MASK) >> SMARTKEY_alt_SHIFT)
#define SMARTKEY_SET_alt(x, alt)                           (x) = ((C(SmartKey))(x) & ~((C(SmartKey))SMARTKEY_alt_MASK)) | (((C(SmartKey))(alt)) << SMARTKEY_alt_SHIFT)
#define SMARTKEY_modifiers_SHIFT                         16
#define SMARTKEY_modifiers_MASK                          0xFFFF0000
#define SMARTKEY_modifiers(x)                            ((((C(SmartKey))(x)) & SMARTKEY_modifiers_MASK) >> SMARTKEY_modifiers_SHIFT)
#define SMARTKEY_SET_modifiers(x, modifiers)                     (x) = ((C(SmartKey))(x) & ~((C(SmartKey))SMARTKEY_modifiers_MASK)) | (((C(SmartKey))(modifiers)) << SMARTKEY_modifiers_SHIFT)
#define SMARTKEY(code, shift, ctrl, alt, modifiers)                            (((((((C(SmartKey))(code)) << SMARTKEY_code_SHIFT) | ((C(SmartKey))(shift)) << SMARTKEY_shift_SHIFT) | ((C(SmartKey))(ctrl)) << SMARTKEY_ctrl_SHIFT) | ((C(SmartKey))(alt)) << SMARTKEY_alt_SHIFT) | ((C(SmartKey))(modifiers)) << SMARTKEY_modifiers_SHIFT)


struct CM(Timer)
{
   byte __ecerePrivateData0[16];
   C(Time) _delay;
   byte __ecere_padding[24];
};
extern THIS_LIB_IMPORT int M_VTBLID(Timer, delayExpired);
// C(bool) Timer_delayExpired(C(Timer) __i, any_object __t);
#define Timer_delayExpired(__i, __t) \
   VMETHOD(CO(Timer), Timer, delayExpired, __i, C(bool), \
      any_object, \
      __t)
extern THIS_LIB_IMPORT C(Method) * METHOD(Timer, delayExpired);

extern THIS_LIB_IMPORT void (* Timer_start)(C(Timer) __this);

extern THIS_LIB_IMPORT void (* Timer_stop)(C(Timer) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Timer, userData);
extern THIS_LIB_IMPORT void (* Timer_set_userData)(const C(Timer) t, void * value);
extern THIS_LIB_IMPORT void * (* Timer_get_userData)(const C(Timer) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Timer, delay);
extern THIS_LIB_IMPORT void (* Timer_set_delay)(const C(Timer) t, C(Time) value);
extern THIS_LIB_IMPORT C(Time) (* Timer_get_delay)(const C(Timer) t);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Timer, started);
extern THIS_LIB_IMPORT void (* Timer_set_started)(const C(Timer) t, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Timer_get_started)(const C(Timer) t);

struct C(TouchPointerInfo)
{
   int id;
   C(Point) point;
   float size;
   float pressure;
};
extern THIS_LIB_IMPORT C(bool) (* Window_acquireInput)(C(Window) __this, C(bool) acquired);

extern THIS_LIB_IMPORT void (* Window_activate)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_addResource)(C(Window) __this, C(Resource) resource);

extern THIS_LIB_IMPORT C(bool) (* Window_buttonCloseDialog)(C(Window) __this, C(Button) button, int x, int y, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_capture)(C(Window) __this);

extern THIS_LIB_IMPORT C(bool) (* Window_closeConfirmation)(C(Window) __this, C(bool) parentClosing);

extern THIS_LIB_IMPORT C(bool) (* Window_create)(C(Window) __this);

extern THIS_LIB_IMPORT C(bool) (* Window_cycleChildren)(C(Window) __this, C(bool) backward, C(bool) clientOnly, C(bool) tabCycleOnly, C(bool) cycleParents);

extern THIS_LIB_IMPORT void (* Window_deactivate)(C(Window) __this);

extern THIS_LIB_IMPORT C(bool) (* Window_destroy)(C(Window) __this, int64 code);

extern THIS_LIB_IMPORT C(DialogResult) (* Window_doModal)(C(Window) __this);

extern THIS_LIB_IMPORT C(DialogResult) (* Window_doModalEnd)(C(Window) __this);

extern THIS_LIB_IMPORT C(bool) (* Window_doModalLoop)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_doModalStart)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_externalPosition)(C(Window) __this, int x, int y, int w, int h);

extern THIS_LIB_IMPORT void (* Window_flash)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_freeMouseRange)(void);

extern THIS_LIB_IMPORT void (* Window_getCaretPosition)(C(Window) __this, C(Point) * caretPos);

extern THIS_LIB_IMPORT int (* Window_getCaretSize)(C(Window) __this);

extern THIS_LIB_IMPORT int M_VTBLID(Window, getDecorationsSize);
// void Window_getDecorationsSize(C(Window) __i, C(MinMaxValue) * w, C(MinMaxValue) * h);
#define Window_getDecorationsSize(__i, w, h) \
   VMETHOD(CO(Window), Window, getDecorationsSize, __i, void, \
      C(Window) _ARG C(MinMaxValue) * _ARG C(MinMaxValue) *, \
      __i _ARG w _ARG h)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, getDecorationsSize);

extern THIS_LIB_IMPORT C(BitmapResource) (* Window_getIcon)(C(Window) __this, C(SkinBitmap) iconID);

extern THIS_LIB_IMPORT void (* Window_getMousePosition)(C(Window) __this, int * x, int * y);

extern THIS_LIB_IMPORT void (* Window_getNCMousePosition)(C(Window) __this, int * x, int * y);

extern THIS_LIB_IMPORT C(bool) (* Window_grab)(C(Window) __this, C(Bitmap) bitmap, C(Box) * box, C(bool) decorations);

extern THIS_LIB_IMPORT int M_VTBLID(Window, isInside);
// C(bool) Window_isInside(C(Window) __i, int x, int y);
#define Window_isInside(__i, x, y) \
   VMETHOD(CO(Window), Window, isInside, __i, C(bool), \
      C(Window) _ARG int _ARG int, \
      __i _ARG x _ARG y)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, isInside);

extern THIS_LIB_IMPORT int M_VTBLID(Window, isMouseMoving);
// C(bool) Window_isMouseMoving(C(Window) __i, int x, int y, int w, int h);
#define Window_isMouseMoving(__i, x, y, w, h) \
   VMETHOD(CO(Window), Window, isMouseMoving, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG int _ARG int, \
      __i _ARG x _ARG y _ARG w _ARG h)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, isMouseMoving);

extern THIS_LIB_IMPORT int M_VTBLID(Window, isMouseResizing);
// C(bool) Window_isMouseResizing(C(Window) __i, int x, int y, int w, int h, C(bool) * resizeX, C(bool) * resizeY, C(bool) * resizeEndX, C(bool) * resizeEndY);
#define Window_isMouseResizing(__i, x, y, w, h, resizeX, resizeY, resizeEndX, resizeEndY) \
   VMETHOD(CO(Window), Window, isMouseResizing, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG int _ARG int _ARG C(bool) * _ARG C(bool) * _ARG C(bool) * _ARG C(bool) *, \
      __i _ARG x _ARG y _ARG w _ARG h _ARG resizeX _ARG resizeY _ARG resizeEndX _ARG resizeEndY)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, isMouseResizing);

extern THIS_LIB_IMPORT int M_VTBLID(Window, isOpaque);
// C(bool) Window_isOpaque(C(Window) __i);
#define Window_isOpaque(__i) \
   VMETHOD(CO(Window), Window, isOpaque, __i, C(bool), \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, isOpaque);

extern THIS_LIB_IMPORT void (* Window_makeActive)(C(Window) __this);

extern THIS_LIB_IMPORT C(bool) (* Window_menuFileClose)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuFileExit)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuFileSave)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuFileSaveAll)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuFileSaveAs)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowArrangeIcons)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowCascade)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowClose)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowCloseAll)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowMaximize)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowMinimize)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowMove)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowNext)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowPrevious)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowRestore)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowSelectWindow)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowSize)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowStayOnTop)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowTileHorz)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowTileVert)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(bool) (* Window_menuWindowWindows)(C(Window) __this, C(MenuItem) selection, C(Modifiers) mods);

extern THIS_LIB_IMPORT C(DialogResult) (* Window_modal)(C(Window) __this);

extern THIS_LIB_IMPORT C(bool) (* Window_mouseMessage)(C(Window) __this, uint method, int x, int y, C(Modifiers) * mods, C(bool) consequential, C(bool) activate);

extern THIS_LIB_IMPORT void (* Window_move)(C(Window) __this, int x, int y, int w, int h);

extern THIS_LIB_IMPORT C(bool) (* Window_multiTouchMessage)(C(Window) __this, C(TouchPointerEvent) event, C(Array) infos, C(Modifiers) * mods, C(bool) consequential, C(bool) activate);

extern THIS_LIB_IMPORT int M_VTBLID(Window, notifyActivate);
// C(bool) Window_notifyActivate(C(Window) __i, C(Window) __t, C(Window) window, C(bool) active, C(Window) previous);
#define Window_notifyActivate(__i, __t, window, active, previous) \
   VMETHOD(CO(Window), Window, notifyActivate, __i, C(bool), \
      C(Window) _ARG C(Window) _ARG C(bool) _ARG C(Window), \
      __t _ARG window _ARG active _ARG previous)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, notifyActivate);

extern THIS_LIB_IMPORT int M_VTBLID(Window, notifyDestroyed);
// void Window_notifyDestroyed(C(Window) __i, C(Window) __t, C(Window) window, C(DialogResult) result);
#define Window_notifyDestroyed(__i, __t, window, result) \
   VMETHOD(CO(Window), Window, notifyDestroyed, __i, void, \
      C(Window) _ARG C(Window) _ARG C(DialogResult), \
      __t _ARG window _ARG result)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, notifyDestroyed);

extern THIS_LIB_IMPORT int M_VTBLID(Window, notifySaved);
// void Window_notifySaved(C(Window) __i, C(Window) __t, C(Window) window, const char * filePath);
#define Window_notifySaved(__i, __t, window, filePath) \
   VMETHOD(CO(Window), Window, notifySaved, __i, void, \
      C(Window) _ARG C(Window) _ARG const char *, \
      __t _ARG window _ARG filePath)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, notifySaved);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onActivate);
// C(bool) Window_onActivate(C(Window) __i, C(bool) active, C(Window) previous, C(bool) * goOnWithActivation, C(bool) direct);
#define Window_onActivate(__i, active, previous, goOnWithActivation, direct) \
   VMETHOD(CO(Window), Window, onActivate, __i, C(bool), \
      C(Window) _ARG C(bool) _ARG C(Window) _ARG C(bool) * _ARG C(bool), \
      __i _ARG active _ARG previous _ARG goOnWithActivation _ARG direct)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onActivate);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onActivateClient);
// void Window_onActivateClient(C(Window) __i, C(Window) client, C(Window) previous);
#define Window_onActivateClient(__i, client, previous) \
   VMETHOD(CO(Window), Window, onActivateClient, __i, void, \
      C(Window) _ARG C(Window) _ARG C(Window), \
      __i _ARG client _ARG previous)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onActivateClient);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onApplyGraphics);
// void Window_onApplyGraphics(C(Window) __i);
#define Window_onApplyGraphics(__i) \
   VMETHOD(CO(Window), Window, onApplyGraphics, __i, void, \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onApplyGraphics);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onChildAddedOrRemoved);
// void Window_onChildAddedOrRemoved(C(Window) __i, C(Window) child, C(bool) removed);
#define Window_onChildAddedOrRemoved(__i, child, removed) \
   VMETHOD(CO(Window), Window, onChildAddedOrRemoved, __i, void, \
      C(Window) _ARG C(Window) _ARG C(bool), \
      __i _ARG child _ARG removed)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onChildAddedOrRemoved);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onChildResized);
// void Window_onChildResized(C(Window) __i, C(Window) child, int x, int y, int w, int h);
#define Window_onChildResized(__i, child, x, y, w, h) \
   VMETHOD(CO(Window), Window, onChildResized, __i, void, \
      C(Window) _ARG C(Window) _ARG int _ARG int _ARG int _ARG int, \
      __i _ARG child _ARG x _ARG y _ARG w _ARG h)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onChildResized);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onChildVisibilityToggled);
// void Window_onChildVisibilityToggled(C(Window) __i, C(Window) child, C(bool) visible);
#define Window_onChildVisibilityToggled(__i, child, visible) \
   VMETHOD(CO(Window), Window, onChildVisibilityToggled, __i, void, \
      C(Window) _ARG C(Window) _ARG C(bool), \
      __i _ARG child _ARG visible)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onChildVisibilityToggled);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onClose);
// C(bool) Window_onClose(C(Window) __i, C(bool) parentClosing);
#define Window_onClose(__i, parentClosing) \
   VMETHOD(CO(Window), Window, onClose, __i, C(bool), \
      C(Window) _ARG C(bool), \
      __i _ARG parentClosing)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onClose);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onCreate);
// C(bool) Window_onCreate(C(Window) __i);
#define Window_onCreate(__i) \
   VMETHOD(CO(Window), Window, onCreate, __i, C(bool), \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onCreate);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onDestroy);
// void Window_onDestroy(C(Window) __i);
#define Window_onDestroy(__i) \
   VMETHOD(CO(Window), Window, onDestroy, __i, void, \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onDestroy);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onDestroyed);
// void Window_onDestroyed(C(Window) __i);
#define Window_onDestroyed(__i) \
   VMETHOD(CO(Window), Window, onDestroyed, __i, void, \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onDestroyed);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onDrawOverChildren);
// void Window_onDrawOverChildren(C(Window) __i, C(Surface) surface);
#define Window_onDrawOverChildren(__i, surface) \
   VMETHOD(CO(Window), Window, onDrawOverChildren, __i, void, \
      C(Window) _ARG C(Surface), \
      __i _ARG surface)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onDrawOverChildren);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onFileModified);
// C(bool) Window_onFileModified(C(Window) __i, C(FileChange) fileChange, const char * param);
#define Window_onFileModified(__i, fileChange, param) \
   VMETHOD(CO(Window), Window, onFileModified, __i, C(bool), \
      C(Window) _ARG C(FileChange) _ARG const char *, \
      __i _ARG fileChange _ARG param)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onFileModified);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onHScroll);
// void Window_onHScroll(C(Window) __i, C(ScrollBarAction) action, int position, C(Key) key);
#define Window_onHScroll(__i, action, position, key) \
   VMETHOD(CO(Window), Window, onHScroll, __i, void, \
      C(Window) _ARG C(ScrollBarAction) _ARG int _ARG C(Key), \
      __i _ARG action _ARG position _ARG key)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onHScroll);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onKeyDown);
// C(bool) Window_onKeyDown(C(Window) __i, C(Key) key, unichar ch);
#define Window_onKeyDown(__i, key, ch) \
   VMETHOD(CO(Window), Window, onKeyDown, __i, C(bool), \
      C(Window) _ARG C(Key) _ARG unichar, \
      __i _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onKeyDown);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onKeyHit);
// C(bool) Window_onKeyHit(C(Window) __i, C(Key) key, unichar ch);
#define Window_onKeyHit(__i, key, ch) \
   VMETHOD(CO(Window), Window, onKeyHit, __i, C(bool), \
      C(Window) _ARG C(Key) _ARG unichar, \
      __i _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onKeyHit);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onKeyUp);
// C(bool) Window_onKeyUp(C(Window) __i, C(Key) key, unichar ch);
#define Window_onKeyUp(__i, key, ch) \
   VMETHOD(CO(Window), Window, onKeyUp, __i, C(bool), \
      C(Window) _ARG C(Key) _ARG unichar, \
      __i _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onKeyUp);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onLeftButtonDown);
// C(bool) Window_onLeftButtonDown(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onLeftButtonDown(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onLeftButtonDown, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onLeftButtonDown);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onLeftButtonUp);
// C(bool) Window_onLeftButtonUp(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onLeftButtonUp(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onLeftButtonUp, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onLeftButtonUp);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onLeftDoubleClick);
// C(bool) Window_onLeftDoubleClick(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onLeftDoubleClick(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onLeftDoubleClick, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onLeftDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onLoadGraphics);
// C(bool) Window_onLoadGraphics(C(Window) __i);
#define Window_onLoadGraphics(__i) \
   VMETHOD(CO(Window), Window, onLoadGraphics, __i, C(bool), \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onLoadGraphics);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMiddleButtonDown);
// C(bool) Window_onMiddleButtonDown(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onMiddleButtonDown(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onMiddleButtonDown, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMiddleButtonDown);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMiddleButtonUp);
// C(bool) Window_onMiddleButtonUp(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onMiddleButtonUp(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onMiddleButtonUp, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMiddleButtonUp);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMiddleDoubleClick);
// C(bool) Window_onMiddleDoubleClick(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onMiddleDoubleClick(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onMiddleDoubleClick, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMiddleDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMouseCaptureLost);
// void Window_onMouseCaptureLost(C(Window) __i);
#define Window_onMouseCaptureLost(__i) \
   VMETHOD(CO(Window), Window, onMouseCaptureLost, __i, void, \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMouseCaptureLost);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMouseLeave);
// C(bool) Window_onMouseLeave(C(Window) __i, C(Modifiers) mods);
#define Window_onMouseLeave(__i, mods) \
   VMETHOD(CO(Window), Window, onMouseLeave, __i, C(bool), \
      C(Window) _ARG C(Modifiers), \
      __i _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMouseLeave);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMouseMove);
// C(bool) Window_onMouseMove(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onMouseMove(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onMouseMove, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMouseMove);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMouseOver);
// C(bool) Window_onMouseOver(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onMouseOver(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onMouseOver, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMouseOver);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMoving);
// C(bool) Window_onMoving(C(Window) __i, int * x, int * y, int w, int h);
#define Window_onMoving(__i, x, y, w, h) \
   VMETHOD(CO(Window), Window, onMoving, __i, C(bool), \
      C(Window) _ARG int * _ARG int * _ARG int _ARG int, \
      __i _ARG x _ARG y _ARG w _ARG h)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMoving);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onMultiTouch);
// C(bool) Window_onMultiTouch(C(Window) __i, C(TouchPointerEvent) event, C(Array) infos, C(Modifiers) mods);
#define Window_onMultiTouch(__i, event, infos, mods) \
   VMETHOD(CO(Window), Window, onMultiTouch, __i, C(bool), \
      C(Window) _ARG C(TouchPointerEvent) _ARG C(Array) _ARG C(Modifiers), \
      __i _ARG event _ARG infos _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onMultiTouch);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onPosition);
// void Window_onPosition(C(Window) __i, int x, int y, int width, int height);
#define Window_onPosition(__i, x, y, width, height) \
   VMETHOD(CO(Window), Window, onPosition, __i, void, \
      C(Window) _ARG int _ARG int _ARG int _ARG int, \
      __i _ARG x _ARG y _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onPosition);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onPostCreate);
// C(bool) Window_onPostCreate(C(Window) __i);
#define Window_onPostCreate(__i) \
   VMETHOD(CO(Window), Window, onPostCreate, __i, C(bool), \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onPostCreate);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onRedraw);
// void Window_onRedraw(C(Window) __i, C(Surface) surface);
#define Window_onRedraw(__i, surface) \
   VMETHOD(CO(Window), Window, onRedraw, __i, void, \
      C(Window) _ARG C(Surface), \
      __i _ARG surface)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onRedraw);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onResize);
// void Window_onResize(C(Window) __i, int width, int height);
#define Window_onResize(__i, width, height) \
   VMETHOD(CO(Window), Window, onResize, __i, void, \
      C(Window) _ARG int _ARG int, \
      __i _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onResize);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onResizing);
// C(bool) Window_onResizing(C(Window) __i, int * width, int * height);
#define Window_onResizing(__i, width, height) \
   VMETHOD(CO(Window), Window, onResizing, __i, C(bool), \
      C(Window) _ARG int * _ARG int *, \
      __i _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onResizing);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onRightButtonDown);
// C(bool) Window_onRightButtonDown(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onRightButtonDown(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onRightButtonDown, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onRightButtonDown);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onRightButtonUp);
// C(bool) Window_onRightButtonUp(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onRightButtonUp(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onRightButtonUp, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onRightButtonUp);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onRightDoubleClick);
// C(bool) Window_onRightDoubleClick(C(Window) __i, int x, int y, C(Modifiers) mods);
#define Window_onRightDoubleClick(__i, x, y, mods) \
   VMETHOD(CO(Window), Window, onRightDoubleClick, __i, C(bool), \
      C(Window) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onRightDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onSaveFile);
// C(bool) Window_onSaveFile(C(Window) __i, const char * fileName);
#define Window_onSaveFile(__i, fileName) \
   VMETHOD(CO(Window), Window, onSaveFile, __i, C(bool), \
      C(Window) _ARG const char *, \
      __i _ARG fileName)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onSaveFile);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onStateChange);
// C(bool) Window_onStateChange(C(Window) __i, C(WindowState) state, C(Modifiers) mods);
#define Window_onStateChange(__i, state, mods) \
   VMETHOD(CO(Window), Window, onStateChange, __i, C(bool), \
      C(Window) _ARG C(WindowState) _ARG C(Modifiers), \
      __i _ARG state _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onStateChange);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onSysKeyDown);
// C(bool) Window_onSysKeyDown(C(Window) __i, C(Key) key, unichar ch);
#define Window_onSysKeyDown(__i, key, ch) \
   VMETHOD(CO(Window), Window, onSysKeyDown, __i, C(bool), \
      C(Window) _ARG C(Key) _ARG unichar, \
      __i _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onSysKeyDown);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onSysKeyHit);
// C(bool) Window_onSysKeyHit(C(Window) __i, C(Key) key, unichar ch);
#define Window_onSysKeyHit(__i, key, ch) \
   VMETHOD(CO(Window), Window, onSysKeyHit, __i, C(bool), \
      C(Window) _ARG C(Key) _ARG unichar, \
      __i _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onSysKeyHit);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onSysKeyUp);
// C(bool) Window_onSysKeyUp(C(Window) __i, C(Key) key, unichar ch);
#define Window_onSysKeyUp(__i, key, ch) \
   VMETHOD(CO(Window), Window, onSysKeyUp, __i, C(bool), \
      C(Window) _ARG C(Key) _ARG unichar, \
      __i _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onSysKeyUp);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onUnloadGraphics);
// void Window_onUnloadGraphics(C(Window) __i);
#define Window_onUnloadGraphics(__i) \
   VMETHOD(CO(Window), Window, onUnloadGraphics, __i, void, \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onUnloadGraphics);

extern THIS_LIB_IMPORT int M_VTBLID(Window, onVScroll);
// void Window_onVScroll(C(Window) __i, C(ScrollBarAction) action, int position, C(Key) key);
#define Window_onVScroll(__i, action, position, key) \
   VMETHOD(CO(Window), Window, onVScroll, __i, void, \
      C(Window) _ARG C(ScrollBarAction) _ARG int _ARG C(Key), \
      __i _ARG action _ARG position _ARG key)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, onVScroll);

extern THIS_LIB_IMPORT int M_VTBLID(Window, preShowDecorations);
// void Window_preShowDecorations(C(Window) __i, C(Font) * captionFont, C(Surface) surface, const char * name, C(bool) active, C(bool) moving);
#define Window_preShowDecorations(__i, captionFont, surface, name, active, moving) \
   VMETHOD(CO(Window), Window, preShowDecorations, __i, void, \
      C(Window) _ARG C(Font) * _ARG C(Surface) _ARG const char * _ARG C(bool) _ARG C(bool), \
      __i _ARG captionFont _ARG surface _ARG name _ARG active _ARG moving)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, preShowDecorations);

extern THIS_LIB_IMPORT void (* Window_releaseCapture)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_removeResource)(C(Window) __this, C(Resource) resource);

extern THIS_LIB_IMPORT void (* Window_restoreCaret)(void);

extern THIS_LIB_IMPORT void (* Window_scroll)(C(Window) __this, int x, int y);

extern THIS_LIB_IMPORT int M_VTBLID(Window, setBox);
// void Window_setBox(C(Window) __i, C(Box) * box);
#define Window_setBox(__i, box) \
   VMETHOD(CO(Window), Window, setBox, __i, void, \
      C(Window) _ARG C(Box) *, \
      __i _ARG box)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, setBox);

extern THIS_LIB_IMPORT void (* Window_setCaption)(C(Window) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* Window_setCaret)(C(Window) __this, int x, int y, int size);

extern THIS_LIB_IMPORT void (* Window_setMousePosition)(C(Window) __this, int x, int y);

extern THIS_LIB_IMPORT void (* Window_setMouseRange)(C(Window) __this, C(Box) * range);

extern THIS_LIB_IMPORT void (* Window_setMouseRangeToClient)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_setMouseRangeToWindow)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_setScrollArea)(C(Window) __this, int width, int height, C(bool) snapToStep);

extern THIS_LIB_IMPORT void (* Window_setScrollLineStep)(C(Window) __this, int stepX, int stepY);

extern THIS_LIB_IMPORT void (* Window_setScrollPosition)(C(Window) __this, int x, int y);

extern THIS_LIB_IMPORT void (* Window_setState)(C(Window) __this, C(WindowState) newState, C(bool) activate, C(Modifiers) mods);

extern THIS_LIB_IMPORT void (* Window_setText)(C(Window) __this, const char * format, ...);

extern THIS_LIB_IMPORT int M_VTBLID(Window, setWindowArea);
// void Window_setWindowArea(C(Window) __i, int * x, int * y, C(MinMaxValue) * w, C(MinMaxValue) * h, C(MinMaxValue) * cw, C(MinMaxValue) * ch);
#define Window_setWindowArea(__i, x, y, w, h, cw, ch) \
   VMETHOD(CO(Window), Window, setWindowArea, __i, void, \
      C(Window) _ARG int * _ARG int * _ARG C(MinMaxValue) * _ARG C(MinMaxValue) * _ARG C(MinMaxValue) * _ARG C(MinMaxValue) *, \
      __i _ARG x _ARG y _ARG w _ARG h _ARG cw _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, setWindowArea);

extern THIS_LIB_IMPORT int M_VTBLID(Window, setWindowMinimum);
// void Window_setWindowMinimum(C(Window) __i, C(MinMaxValue) * mw, C(MinMaxValue) * mh);
#define Window_setWindowMinimum(__i, mw, mh) \
   VMETHOD(CO(Window), Window, setWindowMinimum, __i, void, \
      C(Window) _ARG C(MinMaxValue) * _ARG C(MinMaxValue) *, \
      __i _ARG mw _ARG mh)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, setWindowMinimum);

extern THIS_LIB_IMPORT int M_VTBLID(Window, showDecorations);
// void Window_showDecorations(C(Window) __i, C(Font) * captionFont, C(Surface) surface, const char * name, C(bool) active, C(bool) moving);
#define Window_showDecorations(__i, captionFont, surface, name, active, moving) \
   VMETHOD(CO(Window), Window, showDecorations, __i, void, \
      C(Window) _ARG C(Font) * _ARG C(Surface) _ARG const char * _ARG C(bool) _ARG C(bool), \
      __i _ARG captionFont _ARG surface _ARG name _ARG active _ARG moving)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, showDecorations);

extern THIS_LIB_IMPORT void (* Window_showSysMenu)(C(Window) __this, int x, int y);

extern THIS_LIB_IMPORT void (* Window_softActivate)(C(Window) __this);

extern THIS_LIB_IMPORT void (* Window_update)(C(Window) __this, const C(Box) * region);

extern THIS_LIB_IMPORT void (* Window_updateDisplay)(C(Window) __this);

extern THIS_LIB_IMPORT int M_VTBLID(Window, updateNonClient);
// void Window_updateNonClient(C(Window) __i);
#define Window_updateNonClient(__i) \
   VMETHOD(CO(Window), Window, updateNonClient, __i, void, \
      C(Window), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Window, updateNonClient);

extern THIS_LIB_IMPORT void (* Window_writeCaption)(C(Window) __this, C(Surface) surface, int x, int y);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, parent);
extern THIS_LIB_IMPORT void (* Window_set_parent)(const C(Window) w, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* Window_get_parent)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, master);
extern THIS_LIB_IMPORT void (* Window_set_master)(const C(Window) w, C(Window) value);
extern THIS_LIB_IMPORT C(Window) (* Window_get_master)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, caption);
extern THIS_LIB_IMPORT void (* Window_set_caption)(const C(Window) w, const char * value);
extern THIS_LIB_IMPORT const char * (* Window_get_caption)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hotKey);
extern THIS_LIB_IMPORT void (* Window_set_hotKey)(const C(Window) w, C(Key) value);
extern THIS_LIB_IMPORT C(Key) (* Window_get_hotKey)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, background);
extern THIS_LIB_IMPORT void (* Window_set_background)(const C(Window) w, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* Window_get_background)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, opacity);
extern THIS_LIB_IMPORT void (* Window_set_opacity)(const C(Window) w, C(Percentage) value);
extern THIS_LIB_IMPORT C(Percentage) (* Window_get_opacity)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, foreground);
extern THIS_LIB_IMPORT void (* Window_set_foreground)(const C(Window) w, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* Window_get_foreground)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, borderStyle);
extern THIS_LIB_IMPORT void (* Window_set_borderStyle)(const C(Window) w, C(BorderStyle) value);
extern THIS_LIB_IMPORT C(BorderStyle) (* Window_get_borderStyle)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, minClientSize);
extern THIS_LIB_IMPORT void (* Window_set_minClientSize)(const C(Window) w, const C(Size) * value);
extern THIS_LIB_IMPORT void (* Window_get_minClientSize)(const C(Window) w, C(Size) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, maxClientSize);
extern THIS_LIB_IMPORT void (* Window_set_maxClientSize)(const C(Window) w, const C(Size) * value);
extern THIS_LIB_IMPORT void (* Window_get_maxClientSize)(const C(Window) w, C(Size) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasMaximize);
extern THIS_LIB_IMPORT void (* Window_set_hasMaximize)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasMaximize)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasMinimize);
extern THIS_LIB_IMPORT void (* Window_set_hasMinimize)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasMinimize)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasClose);
extern THIS_LIB_IMPORT void (* Window_set_hasClose)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasClose)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, nonClient);
extern THIS_LIB_IMPORT void (* Window_set_nonClient)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_nonClient)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, inactive);
extern THIS_LIB_IMPORT void (* Window_set_inactive)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_inactive)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, clickThrough);
extern THIS_LIB_IMPORT void (* Window_set_clickThrough)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_clickThrough)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, isRemote);
extern THIS_LIB_IMPORT void (* Window_set_isRemote)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_isRemote)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, noCycle);
extern THIS_LIB_IMPORT void (* Window_set_noCycle)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_noCycle)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, isModal);
extern THIS_LIB_IMPORT void (* Window_set_isModal)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_isModal)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, interim);
extern THIS_LIB_IMPORT void (* Window_set_interim)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_interim)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, tabCycle);
extern THIS_LIB_IMPORT void (* Window_set_tabCycle)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_tabCycle)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, isDefault);
extern THIS_LIB_IMPORT void (* Window_set_isDefault)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_isDefault)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, drawBehind);
extern THIS_LIB_IMPORT void (* Window_set_drawBehind)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_drawBehind)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasMenuBar);
extern THIS_LIB_IMPORT void (* Window_set_hasMenuBar)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasMenuBar)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasStatusBar);
extern THIS_LIB_IMPORT void (* Window_set_hasStatusBar)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasStatusBar)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, stayOnTop);
extern THIS_LIB_IMPORT void (* Window_set_stayOnTop)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_stayOnTop)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, menu);
extern THIS_LIB_IMPORT void (* Window_set_menu)(const C(Window) w, C(Menu) value);
extern THIS_LIB_IMPORT C(Menu) (* Window_get_menu)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, font);
extern THIS_LIB_IMPORT void (* Window_set_font)(const C(Window) w, C(FontResource) value);
extern THIS_LIB_IMPORT C(FontResource) (* Window_get_font)(const C(Window) w);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_font)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, sizeAnchor);
extern THIS_LIB_IMPORT void (* Window_set_sizeAnchor)(const C(Window) w, const C(SizeAnchor) * value);
extern THIS_LIB_IMPORT void (* Window_get_sizeAnchor)(const C(Window) w, C(SizeAnchor) * value);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_sizeAnchor)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, size);
extern THIS_LIB_IMPORT void (* Window_set_size)(const C(Window) w, const C(Size) * value);
extern THIS_LIB_IMPORT void (* Window_get_size)(const C(Window) w, C(Size) * value);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_size)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, clientSize);
extern THIS_LIB_IMPORT void (* Window_set_clientSize)(const C(Window) w, const C(Size) * value);
extern THIS_LIB_IMPORT void (* Window_get_clientSize)(const C(Window) w, C(Size) * value);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_clientSize)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, initSize);
extern THIS_LIB_IMPORT void (* Window_get_initSize)(const C(Window) w, C(Size) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, anchor);
extern THIS_LIB_IMPORT void (* Window_set_anchor)(const C(Window) w, const C(Anchor) * value);
extern THIS_LIB_IMPORT void (* Window_get_anchor)(const C(Window) w, C(Anchor) * value);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_anchor)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, position);
extern THIS_LIB_IMPORT void (* Window_set_position)(const C(Window) w, const C(Point) * value);
extern THIS_LIB_IMPORT void (* Window_get_position)(const C(Window) w, C(Point) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, disabled);
extern THIS_LIB_IMPORT void (* Window_set_disabled)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_disabled)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, isEnabled);
extern THIS_LIB_IMPORT C(bool) (* Window_get_isEnabled)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, state);
extern THIS_LIB_IMPORT void (* Window_set_state)(const C(Window) w, C(WindowState) value);
extern THIS_LIB_IMPORT C(WindowState) (* Window_get_state)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, visible);
extern THIS_LIB_IMPORT void (* Window_set_visible)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_visible)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, isDocument);
extern THIS_LIB_IMPORT void (* Window_set_isDocument)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_isDocument)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, mergeMenus);
extern THIS_LIB_IMPORT void (* Window_set_mergeMenus)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_mergeMenus)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasHorzScroll);
extern THIS_LIB_IMPORT void (* Window_set_hasHorzScroll)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasHorzScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, hasVertScroll);
extern THIS_LIB_IMPORT void (* Window_set_hasVertScroll)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_hasVertScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, dontHideScroll);
extern THIS_LIB_IMPORT void (* Window_set_dontHideScroll)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_dontHideScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, dontScrollVert);
extern THIS_LIB_IMPORT void (* Window_set_dontScrollVert)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_dontScrollVert)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, dontScrollHorz);
extern THIS_LIB_IMPORT void (* Window_set_dontScrollHorz)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_dontScrollHorz)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, snapVertScroll);
extern THIS_LIB_IMPORT void (* Window_set_snapVertScroll)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_snapVertScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, snapHorzScroll);
extern THIS_LIB_IMPORT void (* Window_set_snapHorzScroll)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_snapHorzScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, scroll);
extern THIS_LIB_IMPORT void (* Window_set_scroll)(const C(Window) w, const C(Point) * value);
extern THIS_LIB_IMPORT void (* Window_get_scroll)(const C(Window) w, C(Point) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, modifyVirtualArea);
extern THIS_LIB_IMPORT void (* Window_set_modifyVirtualArea)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_modifyVirtualArea)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, dontAutoScrollArea);
extern THIS_LIB_IMPORT void (* Window_set_dontAutoScrollArea)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_dontAutoScrollArea)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, fileName);
extern THIS_LIB_IMPORT void (* Window_set_fileName)(const C(Window) w, const char * value);
extern THIS_LIB_IMPORT const char * (* Window_get_fileName)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, id);
extern THIS_LIB_IMPORT void (* Window_set_id)(const C(Window) w, int64 value);
extern THIS_LIB_IMPORT int64 (* Window_get_id)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, modifiedDocument);
extern THIS_LIB_IMPORT void (* Window_set_modifiedDocument)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_modifiedDocument)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, showInTaskBar);
extern THIS_LIB_IMPORT void (* Window_set_showInTaskBar)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_showInTaskBar)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, saveDialog);
extern THIS_LIB_IMPORT void (* Window_set_saveDialog)(const C(Window) w, C(FileDialog) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, isActiveClient);
extern THIS_LIB_IMPORT void (* Window_set_isActiveClient)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_isActiveClient)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, cursor);
extern THIS_LIB_IMPORT void (* Window_set_cursor)(const C(Window) w, C(Cursor) value);
extern THIS_LIB_IMPORT C(Cursor) (* Window_get_cursor)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, name);
extern THIS_LIB_IMPORT void (* Window_set_name)(const C(Window) w, const char * value);
extern THIS_LIB_IMPORT const char * (* Window_get_name)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, displayDriver);
extern THIS_LIB_IMPORT void (* Window_set_displayDriver)(const C(Window) w, const char * value);
extern THIS_LIB_IMPORT const char * (* Window_get_displayDriver)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, autoCreate);
extern THIS_LIB_IMPORT void (* Window_set_autoCreate)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_autoCreate)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, scrollArea);
extern THIS_LIB_IMPORT void (* Window_set_scrollArea)(const C(Window) w, const C(Size) * value);
extern THIS_LIB_IMPORT void (* Window_get_scrollArea)(const C(Window) w, C(Size) * value);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_scrollArea)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, is3D);
extern THIS_LIB_IMPORT void (* Window_set_is3D)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_is3D)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, fontObject);
extern THIS_LIB_IMPORT C(Font) * (* Window_get_fontObject)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, clientStart);
extern THIS_LIB_IMPORT void (* Window_get_clientStart)(const C(Window) w, C(Point) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, absPosition);
extern THIS_LIB_IMPORT void (* Window_get_absPosition)(const C(Window) w, C(Point) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, normalAnchor);
extern THIS_LIB_IMPORT void (* Window_get_normalAnchor)(const C(Window) w, C(Anchor) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, normalSizeAnchor);
extern THIS_LIB_IMPORT void (* Window_get_normalSizeAnchor)(const C(Window) w, C(SizeAnchor) * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, active);
extern THIS_LIB_IMPORT C(bool) (* Window_get_active)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, created);
extern THIS_LIB_IMPORT C(bool) (* Window_get_created)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, destroyed);
extern THIS_LIB_IMPORT C(bool) (* Window_get_destroyed)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, firstSlave);
extern THIS_LIB_IMPORT C(Window) (* Window_get_firstSlave)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, firstChild);
extern THIS_LIB_IMPORT C(Window) (* Window_get_firstChild)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, lastChild);
extern THIS_LIB_IMPORT C(Window) (* Window_get_lastChild)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, activeClient);
extern THIS_LIB_IMPORT C(Window) (* Window_get_activeClient)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, activeChild);
extern THIS_LIB_IMPORT C(Window) (* Window_get_activeChild)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, display);
extern THIS_LIB_IMPORT C(Display) (* Window_get_display)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, displaySystem);
extern THIS_LIB_IMPORT C(DisplaySystem) (* Window_get_displaySystem)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, horzScroll);
extern THIS_LIB_IMPORT C(ScrollBar) (* Window_get_horzScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, vertScroll);
extern THIS_LIB_IMPORT C(ScrollBar) (* Window_get_vertScroll)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, statusBar);
extern THIS_LIB_IMPORT C(StatusBar) (* Window_get_statusBar)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, rootWindow);
extern THIS_LIB_IMPORT C(Window) (* Window_get_rootWindow)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, closing);
extern THIS_LIB_IMPORT void (* Window_set_closing)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_closing)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, documentID);
extern THIS_LIB_IMPORT int (* Window_get_documentID)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, previous);
extern THIS_LIB_IMPORT C(Window) (* Window_get_previous)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, next);
extern THIS_LIB_IMPORT C(Window) (* Window_get_next)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, nextSlave);
extern THIS_LIB_IMPORT C(Window) (* Window_get_nextSlave)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, menuBar);
extern THIS_LIB_IMPORT C(PopupMenu) (* Window_get_menuBar)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, sbv);
extern THIS_LIB_IMPORT C(ScrollBar) (* Window_get_sbv)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, sbh);
extern THIS_LIB_IMPORT C(ScrollBar) (* Window_get_sbh)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, fullRender);
extern THIS_LIB_IMPORT void (* Window_set_fullRender)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_fullRender)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, systemHandle);
extern THIS_LIB_IMPORT void * (* Window_get_systemHandle)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, minimizeButton);
extern THIS_LIB_IMPORT C(Button) (* Window_get_minimizeButton)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, maximizeButton);
extern THIS_LIB_IMPORT C(Button) (* Window_get_maximizeButton)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, closeButton);
extern THIS_LIB_IMPORT C(Button) (* Window_get_closeButton)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, icon);
extern THIS_LIB_IMPORT void (* Window_set_icon)(const C(Window) w, C(BitmapResource) value);
extern THIS_LIB_IMPORT C(BitmapResource) (* Window_get_icon)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, moveable);
extern THIS_LIB_IMPORT void (* Window_set_moveable)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_moveable)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, alphaBlend);
extern THIS_LIB_IMPORT void (* Window_set_alphaBlend)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_alphaBlend)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, useSharedMemory);
extern THIS_LIB_IMPORT void (* Window_set_useSharedMemory)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_useSharedMemory)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, glCapabilities);
extern THIS_LIB_IMPORT void (* Window_set_glCapabilities)(const C(Window) w, C(GLCapabilities) value);
extern THIS_LIB_IMPORT C(GLCapabilities) (* Window_get_glCapabilities)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, creationActivation);
extern THIS_LIB_IMPORT void (* Window_set_creationActivation)(const C(Window) w, C(CreationActivationOption) value);
extern THIS_LIB_IMPORT C(CreationActivationOption) (* Window_get_creationActivation)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, nativeDecorations);
extern THIS_LIB_IMPORT void (* Window_set_nativeDecorations)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_nativeDecorations)(const C(Window) w);
extern THIS_LIB_IMPORT C(bool) (* Window_isSet_nativeDecorations)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, manageDisplay);
extern THIS_LIB_IMPORT void (* Window_set_manageDisplay)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_manageDisplay)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, text);
extern THIS_LIB_IMPORT void (* Window_set_text)(const C(Window) w, const char * value);
extern THIS_LIB_IMPORT const char * (* Window_get_text)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, controller);
extern THIS_LIB_IMPORT void (* Window_set_controller)(const C(Window) w, C(WindowController) value);
extern THIS_LIB_IMPORT C(WindowController) (* Window_get_controller)(const C(Window) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Window, noConsequential);
extern THIS_LIB_IMPORT void (* Window_set_noConsequential)(const C(Window) w, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Window_get_noConsequential)(const C(Window) w);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onCreate);
// C(bool) WindowController_onCreate(C(WindowController) __i, C(WindowController) controller);
#define WindowController_onCreate(__i, controller) \
   VMETHOD(CO(WindowController), WindowController, onCreate, __i, C(bool), \
      C(WindowController) _ARG C(WindowController), \
      __i _ARG controller)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onCreate);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onKeyDown);
// C(bool) WindowController_onKeyDown(C(WindowController) __i, C(WindowController) controller, C(Key) key, unichar ch);
#define WindowController_onKeyDown(__i, controller, key, ch) \
   VMETHOD(CO(WindowController), WindowController, onKeyDown, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG C(Key) _ARG unichar, \
      __i _ARG controller _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onKeyDown);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onKeyHit);
// C(bool) WindowController_onKeyHit(C(WindowController) __i, C(WindowController) controller, C(Key) key, unichar ch);
#define WindowController_onKeyHit(__i, controller, key, ch) \
   VMETHOD(CO(WindowController), WindowController, onKeyHit, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG C(Key) _ARG unichar, \
      __i _ARG controller _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onKeyHit);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onKeyUp);
// C(bool) WindowController_onKeyUp(C(WindowController) __i, C(WindowController) controller, C(Key) key, unichar ch);
#define WindowController_onKeyUp(__i, controller, key, ch) \
   VMETHOD(CO(WindowController), WindowController, onKeyUp, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG C(Key) _ARG unichar, \
      __i _ARG controller _ARG key _ARG ch)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onKeyUp);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onLeftButtonDown);
// C(bool) WindowController_onLeftButtonDown(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onLeftButtonDown(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onLeftButtonDown, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onLeftButtonDown);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onLeftButtonUp);
// C(bool) WindowController_onLeftButtonUp(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onLeftButtonUp(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onLeftButtonUp, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onLeftButtonUp);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onLeftDoubleClick);
// C(bool) WindowController_onLeftDoubleClick(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onLeftDoubleClick(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onLeftDoubleClick, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onLeftDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onLoadGraphics);
// C(bool) WindowController_onLoadGraphics(C(WindowController) __i, C(WindowController) controller);
#define WindowController_onLoadGraphics(__i, controller) \
   VMETHOD(CO(WindowController), WindowController, onLoadGraphics, __i, C(bool), \
      C(WindowController) _ARG C(WindowController), \
      __i _ARG controller)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onLoadGraphics);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onMiddleButtonDown);
// C(bool) WindowController_onMiddleButtonDown(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onMiddleButtonDown(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onMiddleButtonDown, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onMiddleButtonDown);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onMiddleButtonUp);
// C(bool) WindowController_onMiddleButtonUp(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onMiddleButtonUp(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onMiddleButtonUp, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onMiddleButtonUp);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onMiddleDoubleClick);
// C(bool) WindowController_onMiddleDoubleClick(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onMiddleDoubleClick(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onMiddleDoubleClick, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onMiddleDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onMouseMove);
// C(bool) WindowController_onMouseMove(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onMouseMove(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onMouseMove, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onMouseMove);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onMultiTouch);
// C(bool) WindowController_onMultiTouch(C(WindowController) __i, C(WindowController) controller, C(TouchPointerEvent) event, C(Array) infos, C(Modifiers) mods);
#define WindowController_onMultiTouch(__i, controller, event, infos, mods) \
   VMETHOD(CO(WindowController), WindowController, onMultiTouch, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG C(TouchPointerEvent) _ARG C(Array) _ARG C(Modifiers), \
      __i _ARG controller _ARG event _ARG infos _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onMultiTouch);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onRedraw);
// void WindowController_onRedraw(C(WindowController) __i, C(WindowController) controller, C(Surface) surface);
#define WindowController_onRedraw(__i, controller, surface) \
   VMETHOD(CO(WindowController), WindowController, onRedraw, __i, void, \
      C(WindowController) _ARG C(WindowController) _ARG C(Surface), \
      __i _ARG controller _ARG surface)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onRedraw);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onResize);
// void WindowController_onResize(C(WindowController) __i, C(WindowController) controller, int width, int height);
#define WindowController_onResize(__i, controller, width, height) \
   VMETHOD(CO(WindowController), WindowController, onResize, __i, void, \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int, \
      __i _ARG controller _ARG width _ARG height)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onResize);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onRightButtonDown);
// C(bool) WindowController_onRightButtonDown(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onRightButtonDown(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onRightButtonDown, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onRightButtonDown);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onRightButtonUp);
// C(bool) WindowController_onRightButtonUp(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onRightButtonUp(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onRightButtonUp, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onRightButtonUp);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onRightDoubleClick);
// C(bool) WindowController_onRightDoubleClick(C(WindowController) __i, C(WindowController) controller, int x, int y, C(Modifiers) mods);
#define WindowController_onRightDoubleClick(__i, controller, x, y, mods) \
   VMETHOD(CO(WindowController), WindowController, onRightDoubleClick, __i, C(bool), \
      C(WindowController) _ARG C(WindowController) _ARG int _ARG int _ARG C(Modifiers), \
      __i _ARG controller _ARG x _ARG y _ARG mods)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onRightDoubleClick);

extern THIS_LIB_IMPORT int M_VTBLID(WindowController, onUnloadGraphics);
// void WindowController_onUnloadGraphics(C(WindowController) __i, C(WindowController) controller);
#define WindowController_onUnloadGraphics(__i, controller) \
   VMETHOD(CO(WindowController), WindowController, onUnloadGraphics, __i, void, \
      C(WindowController) _ARG C(WindowController), \
      __i _ARG controller)
extern THIS_LIB_IMPORT C(Method) * METHOD(WindowController, onUnloadGraphics);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(WindowController, window);
extern THIS_LIB_IMPORT C(Window) (* WindowController_get_window)(const C(WindowController) w);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(WindowController, controlled);
extern THIS_LIB_IMPORT void (* WindowController_set_controlled)(const C(WindowController) w, TP(WindowController, V) value);
extern THIS_LIB_IMPORT TP(WindowController, V) (* WindowController_get_controlled)(const C(WindowController) w);

extern THIS_LIB_IMPORT void (* F(applySkin))(C(Class) * c, const char * name, void ** vTbl);
extern THIS_LIB_IMPORT C(bool) (* F(desktop3DFullScreen))(C(Window) window);
extern THIS_LIB_IMPORT void (* F(desktop3DGetClipBox))(C(Box) * box);
extern THIS_LIB_IMPORT C(Window) (* F(desktop3DGetClippedWindow))(void);
extern THIS_LIB_IMPORT void * (* F(desktop3DGetWindowHandle))(C(Window) window);
extern THIS_LIB_IMPORT void (* F(desktop3DInitialize))(C(Window) window, void (* setup)(C(Window) window, int w, int h), void (* update)(C(Window) window, C(Box) * box));
extern THIS_LIB_IMPORT C(bool) (* F(desktop3DMouseMessage))(C(Window) window, uint method, int x, int y, C(Modifiers) * mods, C(bool) consequential, C(bool) activate);
extern THIS_LIB_IMPORT void (* F(desktop3DSetDesktopDirty))(void);
extern THIS_LIB_IMPORT C(bool) (* F(desktop3DTitleBarClicked))(C(Window) clickedWindow, int x, int y);
extern THIS_LIB_IMPORT C(bool) (* F(desktop3DUpdateDisplay))(void);
extern THIS_LIB_IMPORT void (* F(queryCompass))(C(Euler) * value);
extern THIS_LIB_IMPORT void (* F(unapplySkin))(C(Class) * c);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gui||dialogs  ///////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
#if CPP11
enum C(FileDialogType) : int
#else
typedef int C(FileDialogType);
enum C(FileDialogType)
#endif
{
   FileDialogType_open = 0x0,
   FileDialogType_save = 0x1,
   FileDialogType_selectDir = 0x2,
   FileDialogType_multiOpen = 0x3
};

typedef struct C(FileFilter) C(FileFilter);
#if CPP11
enum C(FileForceExtension) : int
#else
typedef int C(FileForceExtension);
enum C(FileForceExtension)
#endif
{
   FileForceExtension_never = 0x0,
   FileForceExtension_always = 0x1,
   FileForceExtension_whenNoneGiven = 0x2
};

#if CPP11
enum C(FileNameType) : int
#else
typedef int C(FileNameType);
enum C(FileNameType)
#endif
{
   FileNameType_folder = 0x0,
   FileNameType_folderOpen = 0x1,
   FileNameType_computer = 0x2,
   FileNameType_drive = 0x3,
   FileNameType_netDrive = 0x4,
   FileNameType_cdrom = 0x5,
   FileNameType_removable = 0x6,
   FileNameType_floppy = 0x7,
   FileNameType_network = 0x8,
   FileNameType_server = 0x9,
   FileNameType_share = 0xA,
   FileNameType_normalFile = 0xB,
   FileNameType_ewsFile = 0xC,
   FileNameType_epjFile = 0xD,
   FileNameType_ecFile = 0xE,
   FileNameType_ehFile = 0xF,
   FileNameType_cFile = 0x10,
   FileNameType_hFile = 0x11,
   FileNameType_cppFile = 0x12,
   FileNameType_hppFile = 0x13,
   FileNameType_textFile = 0x14,
   FileNameType_webFile = 0x15,
   FileNameType_pictureFile = 0x16,
   FileNameType_soundFile = 0x17,
   FileNameType_archiveFile = 0x18,
   FileNameType_packageFile = 0x19,
   FileNameType_opticalMediaImageFile = 0x1A
};

typedef struct C(FileType) C(FileType);
#if CPP11
enum C(MessageBoxType) : int
#else
typedef int C(MessageBoxType);
enum C(MessageBoxType)
#endif
{
   MessageBoxType_ok = 0x0,
   MessageBoxType_yesNo = 0x1,
   MessageBoxType_okCancel = 0x2,
   MessageBoxType_yesNoCancel = 0x3
};

// end -- moved backwards outputs
typedef C(Window) C(ColorPicker);
typedef C(Window) C(CreateDirectoryDialog);
typedef struct C(FileName) C(FileName);
typedef C(Window) C(FindDialog);
typedef C(Window) C(GoToDialog);
typedef C(Window) C(MessageBox);
typedef C(Window) C(ReplaceDialog);
typedef C(Window) C(WindowList);
extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorPicker, color);
extern THIS_LIB_IMPORT void (* ColorPicker_set_color)(const C(ColorPicker) c, C(Color) value);
extern THIS_LIB_IMPORT C(Color) (* ColorPicker_get_color)(const C(ColorPicker) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ColorPicker, hasAlpha);
extern THIS_LIB_IMPORT void (* ColorPicker_set_hasAlpha)(const C(ColorPicker) c, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ColorPicker_get_hasAlpha)(const C(ColorPicker) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(CreateDirectoryDialog, currentDirectory);
extern THIS_LIB_IMPORT void (* CreateDirectoryDialog_set_currentDirectory)(const C(CreateDirectoryDialog) c, const char * value);
extern THIS_LIB_IMPORT const char * (* CreateDirectoryDialog_get_currentDirectory)(const C(CreateDirectoryDialog) c);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, type);
extern THIS_LIB_IMPORT void (* FileDialog_set_type)(const C(FileDialog) f, C(FileDialogType) value);
extern THIS_LIB_IMPORT C(FileDialogType) (* FileDialog_get_type)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, filePath);
extern THIS_LIB_IMPORT void (* FileDialog_set_filePath)(const C(FileDialog) f, const char * value);
extern THIS_LIB_IMPORT const char * (* FileDialog_get_filePath)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, currentDirectory);
extern THIS_LIB_IMPORT void (* FileDialog_set_currentDirectory)(const C(FileDialog) f, const char * value);
extern THIS_LIB_IMPORT const char * (* FileDialog_get_currentDirectory)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, filters);
extern THIS_LIB_IMPORT void (* FileDialog_set_filters)(const C(FileDialog) f, C(FileFilter) * value);
extern THIS_LIB_IMPORT C(FileFilter) * (* FileDialog_get_filters)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, types);
extern THIS_LIB_IMPORT void (* FileDialog_set_types)(const C(FileDialog) f, C(FileType) * value);
extern THIS_LIB_IMPORT C(FileType) * (* FileDialog_get_types)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, sizeFilters);
extern THIS_LIB_IMPORT void (* FileDialog_set_sizeFilters)(const C(FileDialog) f, int value);
extern THIS_LIB_IMPORT int (* FileDialog_get_sizeFilters)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, sizeTypes);
extern THIS_LIB_IMPORT void (* FileDialog_set_sizeTypes)(const C(FileDialog) f, int value);
extern THIS_LIB_IMPORT int (* FileDialog_get_sizeTypes)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, filter);
extern THIS_LIB_IMPORT void (* FileDialog_set_filter)(const C(FileDialog) f, int value);
extern THIS_LIB_IMPORT int (* FileDialog_get_filter)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, fileType);
extern THIS_LIB_IMPORT void (* FileDialog_set_fileType)(const C(FileDialog) f, int value);
extern THIS_LIB_IMPORT int (* FileDialog_get_fileType)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, mayNotExist);
extern THIS_LIB_IMPORT void (* FileDialog_set_mayNotExist)(const C(FileDialog) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FileDialog_get_mayNotExist)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, numSelections);
extern THIS_LIB_IMPORT int (* FileDialog_get_numSelections)(const C(FileDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileDialog, multiFilePaths);
extern THIS_LIB_IMPORT const char ** (* FileDialog_get_multiFilePaths)(const C(FileDialog) f);

struct C(FileFilter)
{
   const char * name;
   const char * extensions;
};
extern THIS_LIB_IMPORT C(bool) (* FileFilter_validateFileName)(C(FileFilter) * __this, const char * name);

struct C(FileName)
{
   const char * name;
   C(FileNameType) type;
   int indent;
};
extern THIS_LIB_IMPORT C(FileNameType) (* FileNameType_selectByExtension)(const char * extension);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileNameType, isFolderType);
extern THIS_LIB_IMPORT C(bool) (* FileNameType_get_isFolderType)(const C(FileNameType) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FileNameType, isFileType);
extern THIS_LIB_IMPORT C(bool) (* FileNameType_get_isFileType)(const C(FileNameType) f);

struct C(FileType)
{
   const char * name;
   const char * typeExtension;
   C(FileForceExtension) forceExtension;
};
extern THIS_LIB_IMPORT C(Property) * PROPERTY(FindDialog, editBox);
extern THIS_LIB_IMPORT void (* FindDialog_set_editBox)(const C(FindDialog) f, C(EditBox) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FindDialog, searchString);
extern THIS_LIB_IMPORT void (* FindDialog_set_searchString)(const C(FindDialog) f, const char * value);
extern THIS_LIB_IMPORT const char * (* FindDialog_get_searchString)(const C(FindDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FindDialog, wholeWord);
extern THIS_LIB_IMPORT void (* FindDialog_set_wholeWord)(const C(FindDialog) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FindDialog_get_wholeWord)(const C(FindDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FindDialog, matchCase);
extern THIS_LIB_IMPORT void (* FindDialog_set_matchCase)(const C(FindDialog) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FindDialog_get_matchCase)(const C(FindDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(FindDialog, searchUp);
extern THIS_LIB_IMPORT void (* FindDialog_set_searchUp)(const C(FindDialog) f, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* FindDialog_get_searchUp)(const C(FindDialog) f);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GoToDialog, line);
extern THIS_LIB_IMPORT void (* GoToDialog_set_line)(const C(GoToDialog) g, int value);
extern THIS_LIB_IMPORT int (* GoToDialog_get_line)(const C(GoToDialog) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(GoToDialog, editBox);
extern THIS_LIB_IMPORT void (* GoToDialog_set_editBox)(const C(GoToDialog) g, C(EditBox) value);
extern THIS_LIB_IMPORT C(EditBox) (* GoToDialog_get_editBox)(const C(GoToDialog) g);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MessageBox, type);
extern THIS_LIB_IMPORT void (* MessageBox_set_type)(const C(MessageBox) m, C(MessageBoxType) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(MessageBox, contents);
extern THIS_LIB_IMPORT void (* MessageBox_set_contents)(const C(MessageBox) m, const char * value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ReplaceDialog, editBox);
extern THIS_LIB_IMPORT void (* ReplaceDialog_set_editBox)(const C(ReplaceDialog) r, C(EditBox) value);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ReplaceDialog, searchString);
extern THIS_LIB_IMPORT void (* ReplaceDialog_set_searchString)(const C(ReplaceDialog) r, const char * value);
extern THIS_LIB_IMPORT const char * (* ReplaceDialog_get_searchString)(const C(ReplaceDialog) r);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ReplaceDialog, replaceString);
extern THIS_LIB_IMPORT void (* ReplaceDialog_set_replaceString)(const C(ReplaceDialog) r, const char * value);
extern THIS_LIB_IMPORT const char * (* ReplaceDialog_get_replaceString)(const C(ReplaceDialog) r);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ReplaceDialog, wholeWord);
extern THIS_LIB_IMPORT void (* ReplaceDialog_set_wholeWord)(const C(ReplaceDialog) r, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ReplaceDialog_get_wholeWord)(const C(ReplaceDialog) r);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(ReplaceDialog, matchCase);
extern THIS_LIB_IMPORT void (* ReplaceDialog_set_matchCase)(const C(ReplaceDialog) r, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* ReplaceDialog_get_matchCase)(const C(ReplaceDialog) r);


// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||gui||skins  /////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


typedef C(Window) C(TVisionSkin_Window);
typedef C(Button) C(WindowsSkin_Button);
typedef C(Window) C(WindowsSkin_Window);

// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// ////////  ecere||net  ////////////////////////////////////////////// ////////////////////////////////
// namespace /////////////// //////////////////////////////////////////////////////////////////// ////////////////////////////////


// start -- moved backwards outputs
typedef C(Instance) C(Socket);
typedef C(Socket) C(DCOMClientObject);
typedef C(Instance) C(DCOMSendControl);
typedef C(Instance) C(DCOMServerObject);
typedef C(Socket) C(DCOMServerSocket);
typedef C(Instance) C(Service);
typedef C(Service) C(DCOMService);
#if CPP11
enum C(DisconnectCode) : int
#else
typedef int C(DisconnectCode);
enum C(DisconnectCode)
#endif
{
   DisconnectCode_remoteLost = 0x1,
   DisconnectCode_remoteClosed = 0x2,
   DisconnectCode_resolveFailed = 0x3,
   DisconnectCode_connectFailed = 0x4
};

typedef C(Socket) C(FileServerConnection);
typedef C(File) C(HTTPFile);
typedef C(File) C(NetworkClientFile);
typedef struct C(Packet) C(Packet);
typedef C(Socket) C(SSLSocket);
// end -- moved backwards outputs
#if CPP11
enum C(SocketType) : int
#else
typedef int C(SocketType);
enum C(SocketType)
#endif
{
   SocketType_tcp = 0x0,
   SocketType_udp = 0x1
};

struct CM(DCOMClientObject)
{
   uint objectID;
   C(bool) answered;
   C(SerialBuffer) __ecereBuffer;
   byte __ecerePrivateData0[8];
   int nextCallID;
   byte __ecere_padding[12];
};
extern THIS_LIB_IMPORT C(bool) (* DCOMClientObject_callMethod)(C(DCOMClientObject) __this, uint methodID, C(bool) hasReturnValue);

extern THIS_LIB_IMPORT int M_VTBLID(DCOMClientObject, callVirtualMethod);
// void DCOMClientObject_callVirtualMethod(C(DCOMClientObject) __i, uint __ecereMethodID, C(SerialBuffer) __ecereBuffer);
#define DCOMClientObject_callVirtualMethod(__i, __ecereMethodID, __ecereBuffer) \
   VMETHOD(CO(DCOMClientObject), DCOMClientObject, callVirtualMethod, __i, void, \
      C(DCOMClientObject) _ARG uint _ARG C(SerialBuffer), \
      __i _ARG __ecereMethodID _ARG __ecereBuffer)
extern THIS_LIB_IMPORT C(Method) * METHOD(DCOMClientObject, callVirtualMethod);

extern THIS_LIB_IMPORT C(bool) (* DCOMClientObject_connect)(C(DCOMClientObject) __this, const char * server, int port);

extern THIS_LIB_IMPORT void (* DCOMSendControl_resume)(C(DCOMSendControl) __this);

extern THIS_LIB_IMPORT void (* DCOMSendControl_stop)(C(DCOMSendControl) __this);

struct CM(DCOMServerObject)
{
   C(Instance) instance;
   C(DCOMServerSocket) serverSocket;
   uint id;
   C(SerialBuffer) argsBuffer;
   C(SerialBuffer) returnBuffer;
   byte __ecerePrivateData0[8];
   C(Mutex) * mutex;
   int nextCallID;
};
extern THIS_LIB_IMPORT int M_VTBLID(DCOMServerObject, callMethod);
// void DCOMServerObject_callMethod(C(DCOMServerObject) __i, uint __ecereMethodID, C(SerialBuffer) __ecereBuffer);
#define DCOMServerObject_callMethod(__i, __ecereMethodID, __ecereBuffer) \
   VMETHOD(CO(DCOMServerObject), DCOMServerObject, callMethod, __i, void, \
      C(DCOMServerObject) _ARG uint _ARG C(SerialBuffer), \
      __i _ARG __ecereMethodID _ARG __ecereBuffer)
extern THIS_LIB_IMPORT C(Method) * METHOD(DCOMServerObject, callMethod);

extern THIS_LIB_IMPORT C(bool) (* DCOMServerObject_callVirtualMethod)(C(DCOMServerObject) __this, uint methodID, C(bool) hasReturnValue);

extern THIS_LIB_IMPORT C(bool) (* DCOMService_start)(C(DCOMService) __this);

extern THIS_LIB_IMPORT C(bool) (* DCOMService_stop)(C(DCOMService) __this);

extern THIS_LIB_IMPORT C(NetworkClientFile) (* FileServerConnection_open)(C(FileServerConnection) __this, const char * fileName, C(FileOpenMode) mode);

extern THIS_LIB_IMPORT C(bool) (* HTTPFile_openURL)(C(HTTPFile) __this, const char * name, const char * referer, char * relocation);

extern THIS_LIB_IMPORT C(bool) (* HTTPFile_openURLEx)(C(HTTPFile) __this, const char * name, const char * referer, char * relocation, const char * acceptHeader);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(HTTPFile, reuseConnection);
extern THIS_LIB_IMPORT void (* HTTPFile_set_reuseConnection)(const C(HTTPFile) h, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* HTTPFile_get_reuseConnection)(const C(HTTPFile) h);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(HTTPFile, contentType);
extern THIS_LIB_IMPORT C(String) (* HTTPFile_get_contentType)(const C(HTTPFile) h);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(HTTPFile, contentDisposition);
extern THIS_LIB_IMPORT C(String) (* HTTPFile_get_contentDisposition)(const C(HTTPFile) h);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(HTTPFile, httpCode);
extern THIS_LIB_IMPORT int (* HTTPFile_get_httpCode)(const C(HTTPFile) h);

struct C(Packet)
{
   uint size;
};
extern THIS_LIB_IMPORT C(bool) (* SSLSocket_establishConnection)(C(SSLSocket) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(SSLSocket, autoEstablish);
extern THIS_LIB_IMPORT void (* SSLSocket_set_autoEstablish)(const C(SSLSocket) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* SSLSocket_get_autoEstablish)(const C(SSLSocket) s);

extern THIS_LIB_IMPORT int M_VTBLID(Service, onAccept);
// void Service_onAccept(C(Service) __i);
#define Service_onAccept(__i) \
   VMETHOD(CO(Service), Service, onAccept, __i, void, \
      C(Service), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Service, onAccept);

extern THIS_LIB_IMPORT C(bool) (* Service_process)(C(Service) __this);

extern THIS_LIB_IMPORT C(bool) (* Service_processTimeOut)(C(Service) __this, C(Time) timeOut);

extern THIS_LIB_IMPORT C(bool) (* Service_start)(C(Service) __this);

extern THIS_LIB_IMPORT C(bool) (* Service_stop)(C(Service) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Service, port);
extern THIS_LIB_IMPORT void (* Service_set_port)(const C(Service) s, int value);
extern THIS_LIB_IMPORT int (* Service_get_port)(const C(Service) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Service, firstClient);
extern THIS_LIB_IMPORT C(Socket) (* Service_get_firstClient)(const C(Service) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Service, processAlone);
extern THIS_LIB_IMPORT void (* Service_set_processAlone)(const C(Service) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Service_get_processAlone)(const C(Service) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Service, started);
extern THIS_LIB_IMPORT C(bool) (* Service_get_started)(const C(Service) s);

extern THIS_LIB_IMPORT C(bool) (* Socket_connect)(C(Socket) __this, const char * address, int port);

extern THIS_LIB_IMPORT C(bool) (* Socket_datagramConnect)(C(Socket) __this, const char * sendAddress, int port);

extern THIS_LIB_IMPORT C(bool) (* Socket_datagramHost)(C(Socket) __this, int port);

extern THIS_LIB_IMPORT void (* Socket_disconnect)(C(Socket) __this, C(DisconnectCode) code);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, onConnect);
// void Socket_onConnect(C(Socket) __i);
#define Socket_onConnect(__i) \
   VMETHOD(CO(Socket), Socket, onConnect, __i, void, \
      C(Socket), \
      __i)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, onConnect);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, onDisconnect);
// void Socket_onDisconnect(C(Socket) __i, int code);
#define Socket_onDisconnect(__i, code) \
   VMETHOD(CO(Socket), Socket, onDisconnect, __i, void, \
      C(Socket) _ARG int, \
      __i _ARG code)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, onDisconnect);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, onEstablishConnection);
// C(bool) Socket_onEstablishConnection(C(Socket) __i, int s);
#define Socket_onEstablishConnection(__i, s) \
   VMETHOD(CO(Socket), Socket, onEstablishConnection, __i, C(bool), \
      C(Socket) _ARG int, \
      __i _ARG s)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, onEstablishConnection);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, onReceive);
// uint Socket_onReceive(C(Socket) __i, const byte * buffer, uint count);
#define Socket_onReceive(__i, buffer, count) \
   VMETHOD(CO(Socket), Socket, onReceive, __i, uint, \
      C(Socket) _ARG const byte * _ARG uint, \
      __i _ARG buffer _ARG count)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, onReceive);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, onReceivePacket);
// void Socket_onReceivePacket(C(Socket) __i, C(Packet) * packet);
#define Socket_onReceivePacket(__i, packet) \
   VMETHOD(CO(Socket), Socket, onReceivePacket, __i, void, \
      C(Socket) _ARG C(Packet) *, \
      __i _ARG packet)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, onReceivePacket);

extern THIS_LIB_IMPORT C(bool) (* Socket_process)(C(Socket) __this);

extern THIS_LIB_IMPORT C(bool) (* Socket_processTimeOut)(C(Socket) __this, C(Time) timeOut);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, receiveData);
// int Socket_receiveData(C(Socket) __i, byte * buffer, int count, uint flags);
#define Socket_receiveData(__i, buffer, count, flags) \
   VMETHOD(CO(Socket), Socket, receiveData, __i, int, \
      C(Socket) _ARG byte * _ARG int _ARG uint, \
      __i _ARG buffer _ARG count _ARG flags)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, receiveData);

extern THIS_LIB_IMPORT C(bool) (* Socket_send)(C(Socket) __this, const void * buffer, int size);

extern THIS_LIB_IMPORT int M_VTBLID(Socket, sendData);
// int Socket_sendData(C(Socket) __i, const byte * buffer, int count, uint flags);
#define Socket_sendData(__i, buffer, count, flags) \
   VMETHOD(CO(Socket), Socket, sendData, __i, int, \
      C(Socket) _ARG const byte * _ARG int _ARG uint, \
      __i _ARG buffer _ARG count _ARG flags)
extern THIS_LIB_IMPORT C(Method) * METHOD(Socket, sendData);

extern THIS_LIB_IMPORT C(bool) (* Socket_sendPacket)(C(Socket) __this, C(Packet) * packet);

extern THIS_LIB_IMPORT C(bool) (* Socket_sendString)(C(Socket) __this, const char * string);

extern THIS_LIB_IMPORT C(bool) (* Socket_sendf)(C(Socket) __this, const char * format, ...);

extern THIS_LIB_IMPORT void (* Socket_safeDecRef)(C(Socket) __this);

extern THIS_LIB_IMPORT void (* Socket_safeIncRef)(C(Socket) __this);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Socket, service);
extern THIS_LIB_IMPORT void (* Socket_set_service)(const C(Socket) s, C(Service) value);
extern THIS_LIB_IMPORT C(Service) (* Socket_get_service)(const C(Socket) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Socket, inetAddress);
extern THIS_LIB_IMPORT const char * (* Socket_get_inetAddress)(const C(Socket) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Socket, inetPort);
extern THIS_LIB_IMPORT int (* Socket_get_inetPort)(const C(Socket) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Socket, next);
extern THIS_LIB_IMPORT C(Socket) (* Socket_get_next)(const C(Socket) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Socket, connected);
extern THIS_LIB_IMPORT C(bool) (* Socket_get_connected)(const C(Socket) s);

extern THIS_LIB_IMPORT C(Property) * PROPERTY(Socket, processAlone);
extern THIS_LIB_IMPORT void (* Socket_set_processAlone)(const C(Socket) s, C(bool) value);
extern THIS_LIB_IMPORT C(bool) (* Socket_get_processAlone)(const C(Socket) s);

extern THIS_LIB_IMPORT C(FileServerConnection) (* F(connectToFileServer))(const char * hostName, int port);
extern THIS_LIB_IMPORT C(HTTPFile) (* F(fileOpenURL))(const char * name);
extern THIS_LIB_IMPORT C(bool) (* F(getAddressFromName))(const char * hostName, char * inetAddress);
extern THIS_LIB_IMPORT C(bool) (* F(getHostName))(char * hostName, int size);
extern THIS_LIB_IMPORT C(bool) (* F(getNameFromAddress))(const char * inetAddress, char * hostName);
extern THIS_LIB_IMPORT C(bool) (* F(setCurlEmbeddedCA))(void * curlHandle);
extern THIS_LIB_IMPORT C(Class) * CO(BlockEntry);
extern THIS_LIB_IMPORT C(Class) * CO(CompiledDefaultShader);
extern THIS_LIB_IMPORT C(Class) * CO(CompiledShader);
extern THIS_LIB_IMPORT C(Class) * CO(DefaultShader);
extern THIS_LIB_IMPORT C(Class) * CO(DefaultShaderBits);
extern THIS_LIB_IMPORT C(Class) * CO(FreeBlockMap);
extern THIS_LIB_IMPORT C(Class) * CO(GLAB);
extern THIS_LIB_IMPORT C(Class) * CO(GLAttribMode);
extern THIS_LIB_IMPORT C(Class) * CO(GLB);
extern THIS_LIB_IMPORT C(Class) * CO(GLBType);
extern THIS_LIB_IMPORT C(Class) * CO(GLBufferContents);
extern THIS_LIB_IMPORT C(Class) * CO(GLBufferUsage);
extern THIS_LIB_IMPORT C(Class) * CO(GLCAB);
extern THIS_LIB_IMPORT C(Class) * CO(GLEAB);
extern THIS_LIB_IMPORT C(Class) * CO(GLFB);
extern THIS_LIB_IMPORT C(Class) * CO(GLIMTKMode);
extern THIS_LIB_IMPORT C(Class) * CO(GLMB);
extern THIS_LIB_IMPORT C(Class) * CO(GLMSWhatToGet);
extern THIS_LIB_IMPORT C(Class) * CO(GLStats);
extern THIS_LIB_IMPORT C(Class) * CO(LFBDisplay);
extern THIS_LIB_IMPORT C(Class) * CO(LFBDisplayDriver);
extern THIS_LIB_IMPORT C(Class) * CO(LFBSurface);
extern THIS_LIB_IMPORT C(Class) * CO(LFBSystem);
extern THIS_LIB_IMPORT C(Class) * CO(LightMode);
extern THIS_LIB_IMPORT C(Class) * CO(MatrixMode);
extern THIS_LIB_IMPORT C(Class) * CO(Shader);
extern THIS_LIB_IMPORT C(Class) * CO(ShaderModifiedUniforms);
extern THIS_LIB_IMPORT C(Class) * CO(SwizzleMode);
extern THIS_LIB_IMPORT C(Class) * CO(Archive);
extern THIS_LIB_IMPORT C(Class) * CO(ArchiveAddMode);
extern THIS_LIB_IMPORT C(Class) * CO(ArchiveDir);
extern THIS_LIB_IMPORT C(Class) * CO(ArchiveOpenFlags);
extern THIS_LIB_IMPORT C(Class) * CO(Box);
extern THIS_LIB_IMPORT C(Class) * CO(BufferedFile);
extern THIS_LIB_IMPORT C(Class) * CO(Centimeters);
extern THIS_LIB_IMPORT C(Class) * CO(CharCategories);
extern THIS_LIB_IMPORT C(Class) * CO(CharCategory);
extern THIS_LIB_IMPORT C(Class) * CO(Condition);
extern THIS_LIB_IMPORT C(Class) * CO(ConsoleFile);
extern THIS_LIB_IMPORT C(Class) * CO(Date);
extern THIS_LIB_IMPORT C(Class) * CO(DateTime);
extern THIS_LIB_IMPORT C(Class) * CO(DayOfTheWeek);
extern THIS_LIB_IMPORT C(Class) * CO(Degrees);
extern THIS_LIB_IMPORT C(Class) * CO(Distance);
extern THIS_LIB_IMPORT C(Class) * CO(DualPipe);
extern THIS_LIB_IMPORT C(Class) * CO(ECONGlobalSettings);
extern THIS_LIB_IMPORT C(Class) * CO(ECONParser);
extern THIS_LIB_IMPORT C(Class) * CO(ErrorCode);
extern THIS_LIB_IMPORT C(Class) * CO(ErrorLevel);
extern THIS_LIB_IMPORT C(Class) * CO(Feet);
extern THIS_LIB_IMPORT C(Class) * CO(File);
extern THIS_LIB_IMPORT C(Class) * CO(FileAttribs);
extern THIS_LIB_IMPORT C(Class) * CO(FileChange);
extern THIS_LIB_IMPORT C(Class) * CO(FileListing);
extern THIS_LIB_IMPORT C(Class) * CO(FileLock);
extern THIS_LIB_IMPORT C(Class) * CO(FileMonitor);
extern THIS_LIB_IMPORT C(Class) * CO(FileOpenMode);
extern THIS_LIB_IMPORT C(Class) * CO(FileSeekMode);
extern THIS_LIB_IMPORT C(Class) * CO(FileSize);
extern THIS_LIB_IMPORT C(Class) * CO(FileSize64);
extern THIS_LIB_IMPORT C(Class) * CO(FileStats);
extern THIS_LIB_IMPORT C(Class) * CO(GlobalAppSettings);
extern THIS_LIB_IMPORT C(Class) * CO(GlobalSettingType);
extern THIS_LIB_IMPORT C(Class) * CO(GlobalSettings);
extern THIS_LIB_IMPORT C(Class) * CO(GlobalSettingsData);
extern THIS_LIB_IMPORT C(Class) * CO(GlobalSettingsDriver);
extern THIS_LIB_IMPORT C(Class) * CO(GuiErrorCode);
extern THIS_LIB_IMPORT C(Class) * CO(JSONFirstLetterCapitalization);
extern THIS_LIB_IMPORT C(Class) * CO(JSONGlobalSettings);
extern THIS_LIB_IMPORT C(Class) * CO(JSONParser);
extern THIS_LIB_IMPORT C(Class) * CO(JSONResult);
extern THIS_LIB_IMPORT C(Class) * CO(JSONTypeOptions);
extern THIS_LIB_IMPORT C(Class) * CO(LoggingMode);
extern THIS_LIB_IMPORT C(Class) * CO(Meters);
extern THIS_LIB_IMPORT C(Class) * CO(MinMaxValue);
extern THIS_LIB_IMPORT C(Class) * CO(Month);
extern THIS_LIB_IMPORT C(Class) * CO(MoveFileOptions);
extern THIS_LIB_IMPORT C(Class) * CO(OptionsMap);
extern THIS_LIB_IMPORT C(Class) * CO(PipeOpenMode);
extern THIS_LIB_IMPORT C(Class) * CO(Point);
extern THIS_LIB_IMPORT C(Class) * CO(Pointd);
extern THIS_LIB_IMPORT C(Class) * CO(Pointf);
extern THIS_LIB_IMPORT C(Class) * CO(PredefinedCharCategories);
extern THIS_LIB_IMPORT C(Class) * CO(Radians);
extern THIS_LIB_IMPORT C(Class) * CO(RepButton);
extern THIS_LIB_IMPORT C(Class) * CO(SecSince1970);
extern THIS_LIB_IMPORT C(Class) * CO(Seconds);
extern THIS_LIB_IMPORT C(Class) * CO(Semaphore);
extern THIS_LIB_IMPORT C(Class) * CO(SetBool);
extern THIS_LIB_IMPORT C(Class) * CO(SettingsIOResult);
extern THIS_LIB_IMPORT C(Class) * CO(Size);
extern THIS_LIB_IMPORT C(Class) * CO(SysErrorCode);
extern THIS_LIB_IMPORT C(Class) * CO(TempFile);
extern THIS_LIB_IMPORT C(Class) * CO(Thread);
extern THIS_LIB_IMPORT C(Class) * CO(ThreadPriority);
extern THIS_LIB_IMPORT C(Class) * CO(Time);
extern THIS_LIB_IMPORT C(Class) * CO(TimeStamp);
extern THIS_LIB_IMPORT C(Class) * CO(TimeStamp32);
extern THIS_LIB_IMPORT C(Class) * CO(UnicodeDecomposition);
extern THIS_LIB_IMPORT C(Class) * CO(Camera);
extern THIS_LIB_IMPORT C(Class) * CO(CameraType);
extern THIS_LIB_IMPORT C(Class) * CO(ClippingPlane);
extern THIS_LIB_IMPORT C(Class) * CO(Euler);
extern THIS_LIB_IMPORT C(Class) * CO(EulerRotationOrder);
extern THIS_LIB_IMPORT C(Class) * CO(FovDirection);
extern THIS_LIB_IMPORT C(Class) * CO(FrameKey);
extern THIS_LIB_IMPORT C(Class) * CO(FrameTrack);
extern THIS_LIB_IMPORT C(Class) * CO(FrameTrackBits);
extern THIS_LIB_IMPORT C(Class) * CO(FrameTrackType);
extern THIS_LIB_IMPORT C(Class) * CO(FrustumPlacement);
extern THIS_LIB_IMPORT C(Class) * CO(Line);
extern THIS_LIB_IMPORT C(Class) * CO(Material);
extern THIS_LIB_IMPORT C(Class) * CO(MaterialFlags);
extern THIS_LIB_IMPORT C(Class) * CO(Matrix);
extern THIS_LIB_IMPORT C(Class) * CO(Matrixf);
extern THIS_LIB_IMPORT C(Class) * CO(Mesh);
extern THIS_LIB_IMPORT C(Class) * CO(MeshFeatures);
extern THIS_LIB_IMPORT C(Class) * CO(MeshMorph);
extern THIS_LIB_IMPORT C(Class) * CO(MeshPart);
extern THIS_LIB_IMPORT C(Class) * CO(MeshSkin);
extern THIS_LIB_IMPORT C(Class) * CO(Object);
extern THIS_LIB_IMPORT C(Class) * CO(ObjectFlags);
extern THIS_LIB_IMPORT C(Class) * CO(ObjectFormat);
extern THIS_LIB_IMPORT C(Class) * CO(Plane);
extern THIS_LIB_IMPORT C(Class) * CO(PrimitiveGroup);
extern THIS_LIB_IMPORT C(Class) * CO(PrimitiveGroupType);
extern THIS_LIB_IMPORT C(Class) * CO(PrimitiveSingle);
extern THIS_LIB_IMPORT C(Class) * CO(Quaternion);
extern THIS_LIB_IMPORT C(Class) * CO(RenderPrimitiveType);
extern THIS_LIB_IMPORT C(Class) * CO(SkinBone);
extern THIS_LIB_IMPORT C(Class) * CO(SkinVert);
extern THIS_LIB_IMPORT C(Class) * CO(Transform);
extern THIS_LIB_IMPORT C(Class) * CO(Vector3D);
extern THIS_LIB_IMPORT C(Class) * CO(Vector3Df);
extern THIS_LIB_IMPORT C(Class) * CO(Alignment);
extern THIS_LIB_IMPORT C(Class) * CO(AlphaWriteMode);
extern THIS_LIB_IMPORT C(Class) * CO(Bitmap);
extern THIS_LIB_IMPORT C(Class) * CO(BitmapFormat);
extern THIS_LIB_IMPORT C(Class) * CO(BitmapResource);
extern THIS_LIB_IMPORT C(Class) * CO(ClearType);
extern THIS_LIB_IMPORT C(Class) * CO(Color);
extern THIS_LIB_IMPORT C(Class) * CO(Color444);
extern THIS_LIB_IMPORT C(Class) * CO(Color555);
extern THIS_LIB_IMPORT C(Class) * CO(Color565);
extern THIS_LIB_IMPORT C(Class) * CO(ColorAlpha);
extern THIS_LIB_IMPORT C(Class) * CO(ColorCMYK);
extern THIS_LIB_IMPORT C(Class) * CO(ColorHSV);
extern THIS_LIB_IMPORT C(Class) * CO(ColorKey);
extern THIS_LIB_IMPORT C(Class) * CO(ColorLab);
extern THIS_LIB_IMPORT C(Class) * CO(ColorRGB);
extern THIS_LIB_IMPORT C(Class) * CO(ColorRGBA);
extern THIS_LIB_IMPORT C(Class) * CO(ColorRGBAf);
extern THIS_LIB_IMPORT C(Class) * CO(CubeMap);
extern THIS_LIB_IMPORT C(Class) * CO(DefinedColor);
extern THIS_LIB_IMPORT C(Class) * CO(Display);
extern THIS_LIB_IMPORT C(Class) * CO(DisplayDriver);
extern THIS_LIB_IMPORT C(Class) * CO(DisplayFlags);
extern THIS_LIB_IMPORT C(Class) * CO(DisplaySystem);
extern THIS_LIB_IMPORT C(Class) * CO(DisplaySystemResPtr);
extern THIS_LIB_IMPORT C(Class) * CO(DrawList);
extern THIS_LIB_IMPORT C(Class) * CO(DrawManager);
extern THIS_LIB_IMPORT C(Class) * CO(DrawSlot);
extern THIS_LIB_IMPORT C(Class) * CO(FMFont);
extern THIS_LIB_IMPORT C(Class) * CO(FMPathDraw);
extern THIS_LIB_IMPORT C(Class) * CO(FMTextAlignment);
extern THIS_LIB_IMPORT C(Class) * CO(FMVerticalAlignment);
extern THIS_LIB_IMPORT C(Class) * CO(FaceInfo);
extern THIS_LIB_IMPORT C(Class) * CO(FillModeValue);
extern THIS_LIB_IMPORT C(Class) * CO(Font);
extern THIS_LIB_IMPORT C(Class) * CO(FontFlags);
extern THIS_LIB_IMPORT C(Class) * CO(FontInfo);
extern THIS_LIB_IMPORT C(Class) * CO(FontManager);
extern THIS_LIB_IMPORT C(Class) * CO(FontManagerRenderer);
extern THIS_LIB_IMPORT C(Class) * CO(FontRenderer);
extern THIS_LIB_IMPORT C(Class) * CO(FontResource);
extern THIS_LIB_IMPORT C(Class) * CO(GLCapabilities);
extern THIS_LIB_IMPORT C(Class) * CO(GLSamplesCount);
extern THIS_LIB_IMPORT C(Class) * CO(GradientDirection);
extern THIS_LIB_IMPORT C(Class) * CO(HitRecord);
extern THIS_LIB_IMPORT C(Class) * CO(Light);
extern THIS_LIB_IMPORT C(Class) * CO(LightFlags);
extern THIS_LIB_IMPORT C(Class) * CO(PixelFormat);
extern THIS_LIB_IMPORT C(Class) * CO(RenderState);
extern THIS_LIB_IMPORT C(Class) * CO(RenderStateFloat);
extern THIS_LIB_IMPORT C(Class) * CO(Resolution);
extern THIS_LIB_IMPORT C(Class) * CO(Resource);
extern THIS_LIB_IMPORT C(Class) * CO(Surface);
extern THIS_LIB_IMPORT C(Class) * CO(SystemColor);
extern THIS_LIB_IMPORT C(Class) * CO(FreeSpots);
extern THIS_LIB_IMPORT C(Class) * CO(GLArrayTexture);
extern THIS_LIB_IMPORT C(Class) * CO(GLDrawCommand);
extern THIS_LIB_IMPORT C(Class) * CO(GLMultiDraw);
extern THIS_LIB_IMPORT C(Class) * CO(GLTextureFilter);
extern THIS_LIB_IMPORT C(Class) * CO(PNGOptions);
extern THIS_LIB_IMPORT C(Class) * CO(Cube);
extern THIS_LIB_IMPORT C(Class) * CO(SkyBox);
extern THIS_LIB_IMPORT C(Class) * CO(Sphere);
extern THIS_LIB_IMPORT C(Class) * CO(BoxAlignment);
extern THIS_LIB_IMPORT C(Class) * CO(BufferLocation);
extern THIS_LIB_IMPORT C(Class) * CO(Button);
extern THIS_LIB_IMPORT C(Class) * CO(ButtonState);
extern THIS_LIB_IMPORT C(Class) * CO(CalendarControl);
extern THIS_LIB_IMPORT C(Class) * CO(DataBox);
extern THIS_LIB_IMPORT C(Class) * CO(DataDisplayFlags);
extern THIS_LIB_IMPORT C(Class) * CO(DataField);
extern THIS_LIB_IMPORT C(Class) * CO(DataFieldSort);
extern THIS_LIB_IMPORT C(Class) * CO(DataRow);
extern THIS_LIB_IMPORT C(Class) * CO(DirPath);
extern THIS_LIB_IMPORT C(Class) * CO(DirectoriesBox);
extern THIS_LIB_IMPORT C(Class) * CO(DropBox);
extern THIS_LIB_IMPORT C(Class) * CO(EditBox);
extern THIS_LIB_IMPORT C(Class) * CO(EditBoxFindResult);
extern THIS_LIB_IMPORT C(Class) * CO(EditBoxStream);
extern THIS_LIB_IMPORT C(Class) * CO(EditLine);
extern THIS_LIB_IMPORT C(Class) * CO(EditSyntaxHL);
extern THIS_LIB_IMPORT C(Class) * CO(EditableSelectorButton);
extern THIS_LIB_IMPORT C(Class) * CO(FilePath);
extern THIS_LIB_IMPORT C(Class) * CO(Label);
extern THIS_LIB_IMPORT C(Class) * CO(ListBox);
extern THIS_LIB_IMPORT C(Class) * CO(Menu);
extern THIS_LIB_IMPORT C(Class) * CO(MenuDivider);
extern THIS_LIB_IMPORT C(Class) * CO(MenuItem);
extern THIS_LIB_IMPORT C(Class) * CO(MenuPlacement);
extern THIS_LIB_IMPORT C(Class) * CO(OldArray);
extern THIS_LIB_IMPORT C(Class) * CO(PaneSplitter);
extern THIS_LIB_IMPORT C(Class) * CO(PathBox);
extern THIS_LIB_IMPORT C(Class) * CO(PathTypeExpected);
extern THIS_LIB_IMPORT C(Class) * CO(Picture);
extern THIS_LIB_IMPORT C(Class) * CO(PopupMenu);
extern THIS_LIB_IMPORT C(Class) * CO(ProgressBar);
extern THIS_LIB_IMPORT C(Class) * CO(SavingDataBox);
extern THIS_LIB_IMPORT C(Class) * CO(ScrollBar);
extern THIS_LIB_IMPORT C(Class) * CO(ScrollBarAction);
extern THIS_LIB_IMPORT C(Class) * CO(ScrollDirection);
extern THIS_LIB_IMPORT C(Class) * CO(SelectorBar);
extern THIS_LIB_IMPORT C(Class) * CO(SelectorButton);
extern THIS_LIB_IMPORT C(Class) * CO(Stacker);
extern THIS_LIB_IMPORT C(Class) * CO(StatusBar);
extern THIS_LIB_IMPORT C(Class) * CO(StatusField);
extern THIS_LIB_IMPORT C(Class) * CO(Tab);
extern THIS_LIB_IMPORT C(Class) * CO(TabControl);
extern THIS_LIB_IMPORT C(Class) * CO(TabsPlacement);
extern THIS_LIB_IMPORT C(Class) * CO(ToolBar);
extern THIS_LIB_IMPORT C(Class) * CO(ToolButton);
extern THIS_LIB_IMPORT C(Class) * CO(ToolSeparator);
extern THIS_LIB_IMPORT C(Class) * CO(ToolTip);
extern THIS_LIB_IMPORT C(Class) * CO(UndoAction);
extern THIS_LIB_IMPORT C(Class) * CO(UndoBuffer);
extern THIS_LIB_IMPORT C(Class) * CO(Anchor);
extern THIS_LIB_IMPORT C(Class) * CO(AnchorValue);
extern THIS_LIB_IMPORT C(Class) * CO(AnchorValueType);
extern THIS_LIB_IMPORT C(Class) * CO(BorderBits);
extern THIS_LIB_IMPORT C(Class) * CO(BorderStyle);
extern THIS_LIB_IMPORT C(Class) * CO(ClipBoard);
extern THIS_LIB_IMPORT C(Class) * CO(CommonControl);
extern THIS_LIB_IMPORT C(Class) * CO(ControllableWindow);
extern THIS_LIB_IMPORT C(Class) * CO(CreationActivationOption);
extern THIS_LIB_IMPORT C(Class) * CO(Cursor);
extern THIS_LIB_IMPORT C(Class) * CO(DialogResult);
extern THIS_LIB_IMPORT C(Class) * CO(Extent);
extern THIS_LIB_IMPORT C(Class) * CO(GuiApplication);
extern THIS_LIB_IMPORT C(Class) * CO(Interface);
extern THIS_LIB_IMPORT C(Class) * CO(Joystick);
extern THIS_LIB_IMPORT C(Class) * CO(Key);
extern THIS_LIB_IMPORT C(Class) * CO(KeyCode);
extern THIS_LIB_IMPORT C(Class) * CO(MiddleAnchorValue);
extern THIS_LIB_IMPORT C(Class) * CO(Modifiers);
extern THIS_LIB_IMPORT C(Class) * CO(MouseButtons);
extern THIS_LIB_IMPORT C(Class) * CO(MultiLineString);
extern THIS_LIB_IMPORT C(Class) * CO(Percentage);
extern THIS_LIB_IMPORT C(Class) * CO(PredefinedKey);
extern THIS_LIB_IMPORT C(Class) * CO(SizeAnchor);
extern THIS_LIB_IMPORT C(Class) * CO(Skin);
extern THIS_LIB_IMPORT C(Class) * CO(SkinBitmap);
extern THIS_LIB_IMPORT C(Class) * CO(SmartKey);
extern THIS_LIB_IMPORT C(Class) * CO(SystemCursor);
extern THIS_LIB_IMPORT C(Class) * CO(Timer);
extern THIS_LIB_IMPORT C(Class) * CO(TouchPointerEvent);
extern THIS_LIB_IMPORT C(Class) * CO(TouchPointerInfo);
// extern THIS_LIB_IMPORT C(Class) * CO(Window);
extern THIS_LIB_IMPORT C(Class) * CO(WindowController);
extern THIS_LIB_IMPORT C(Class) * CO(WindowState);
extern THIS_LIB_IMPORT C(Class) * CO(ColorPicker);
extern THIS_LIB_IMPORT C(Class) * CO(CreateDirectoryDialog);
extern THIS_LIB_IMPORT C(Class) * CO(FileDialog);
extern THIS_LIB_IMPORT C(Class) * CO(FileDialogType);
extern THIS_LIB_IMPORT C(Class) * CO(FileFilter);
extern THIS_LIB_IMPORT C(Class) * CO(FileForceExtension);
extern THIS_LIB_IMPORT C(Class) * CO(FileName);
extern THIS_LIB_IMPORT C(Class) * CO(FileNameType);
extern THIS_LIB_IMPORT C(Class) * CO(FileType);
extern THIS_LIB_IMPORT C(Class) * CO(FindDialog);
extern THIS_LIB_IMPORT C(Class) * CO(GoToDialog);
extern THIS_LIB_IMPORT C(Class) * CO(MessageBox);
extern THIS_LIB_IMPORT C(Class) * CO(MessageBoxType);
extern THIS_LIB_IMPORT C(Class) * CO(ReplaceDialog);
extern THIS_LIB_IMPORT C(Class) * CO(WindowList);
extern THIS_LIB_IMPORT C(Class) * CO(TVisionSkin_Window);
extern THIS_LIB_IMPORT C(Class) * CO(WindowsSkin_Button);
extern THIS_LIB_IMPORT C(Class) * CO(WindowsSkin_Window);
extern THIS_LIB_IMPORT C(Class) * CO(DCOMClientObject);
extern THIS_LIB_IMPORT C(Class) * CO(DCOMSendControl);
extern THIS_LIB_IMPORT C(Class) * CO(DCOMServerObject);
extern THIS_LIB_IMPORT C(Class) * CO(DCOMServerSocket);
extern THIS_LIB_IMPORT C(Class) * CO(DCOMService);
extern THIS_LIB_IMPORT C(Class) * CO(DisconnectCode);
extern THIS_LIB_IMPORT C(Class) * CO(FileServerConnection);
extern THIS_LIB_IMPORT C(Class) * CO(HTTPFile);
extern THIS_LIB_IMPORT C(Class) * CO(NetworkClientFile);
extern THIS_LIB_IMPORT C(Class) * CO(Packet);
extern THIS_LIB_IMPORT C(Class) * CO(SSLSocket);
extern THIS_LIB_IMPORT C(Class) * CO(Service);
extern THIS_LIB_IMPORT C(Class) * CO(Socket);
extern THIS_LIB_IMPORT C(Class) * CO(SocketType);

extern THIS_LIB_IMPORT C(Module) ecere_init(C(Module) fromModule);



#ifdef __cplusplus

};

#endif

#endif // !defined(__ECERE_H__)
