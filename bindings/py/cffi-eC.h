typedef const void * any_object;
typedef const char * constString;

typedef int eC_Alignment;
enum
{
   Alignment_left = 0x0,
   Alignment_right = 0x1,
   Alignment_center = 0x2
};
typedef uint32_t eC_DataDisplayFlags;

typedef void eC_Type;
typedef void eC_Instantiation;
typedef void eC_ClassDefinition;

typedef struct class_members_Instance * eC_Instance;
typedef eC_Instance eC_Surface;
typedef eC_Instance eC_Window;
typedef eC_Window eC_CommonControl;
typedef eC_CommonControl eC_DataBox;
typedef eC_CommonControl eC_EditBox;

typedef int eC_MinMaxValue;
struct eC_Size
{
   eC_MinMaxValue w;
   eC_MinMaxValue h;
};
typedef struct eC_Size eC_Size;
typedef struct eC_Class eC_Class;
typedef eC_Instance eC_IOChannel;
typedef struct eC_Method eC_Method;
typedef uint32_t uint;
typedef uint eC_bool;
#define false 0
#define true 1

typedef eC_bool eC_ObjectNotationType;
enum
{
   ObjectNotationType_none = 0x0,
   ObjectNotationType_econ = 0x1,
   ObjectNotationType_json = 0x2
};

typedef struct eC_Property eC_Property;
typedef size_t uintsize;
int fstrcmp(const char *, const char *);

int strcmpi(const char *, const char *);

int strnicmp(const char *, const char *, uintsize n);

typedef char * eC_String;
typedef uint8_t byte;
typedef int64_t int64;
typedef intptr_t intptr;
typedef ssize_t intsize;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef uintptr_t uintptr;
typedef uint32_t unichar;

extern int class_onCompare_vTblID;
int _onCompare(eC_Class * __c, any_object __i, any_object object);
extern eC_Method * method_class_onCompare;

extern int class_onCopy_vTblID;
void _onCopy(eC_Class * __c, any_object __i, any_object newData);
extern eC_Method * method_class_onCopy;

extern int class_onDisplay_vTblID;
void _onDisplay(eC_Class * __c, any_object __i, eC_Surface surface, int x, int y, int width, void * fieldData, eC_Alignment alignment, eC_DataDisplayFlags displayFlags);
extern eC_Method * method_class_onDisplay;

extern int class_onEdit_vTblID;
eC_Window _onEdit(eC_Class * __c, any_object __i, eC_DataBox dataBox, eC_DataBox obsolete, int x, int y, int w, int h, void * userData);
extern eC_Method * method_class_onEdit;

extern int class_onFree_vTblID;
void _onFree(eC_Class * __c, any_object __i);
extern eC_Method * method_class_onFree;

extern int class_onGetDataFromString_vTblID;
eC_bool _onGetDataFromString(eC_Class * __c, any_object __i, const char * string);
extern eC_Method * method_class_onGetDataFromString;

extern int class_onGetString_vTblID;
const char * _onGetString(eC_Class * __c, any_object __i, char * tempString, void * reserved, eC_ObjectNotationType * onType);
extern eC_Method * method_class_onGetString;

extern int class_onSaveEdit_vTblID;
eC_bool _onSaveEdit(eC_Class * __c, any_object __i, eC_Window window, void * object);
extern eC_Method * method_class_onSaveEdit;

extern int class_onSerialize_vTblID;
void _onSerialize(eC_Class * __c, any_object __i, eC_IOChannel channel);
extern eC_Method * method_class_onSerialize;

extern int class_onUnserialize_vTblID;
void _onUnserialize(eC_Class * __c, any_object __i, eC_IOChannel channel);
extern eC_Method * method_class_onUnserialize;

extern int class_onCompare_vTblID;
int Instance_onCompare(eC_Class * __c, eC_Instance __i, any_object object);

extern int class_onCopy_vTblID;
void Instance_onCopy(eC_Class * __c, eC_Instance __i, any_object newData);

extern int class_onDisplay_vTblID;
void Instance_onDisplay(eC_Class * __c, eC_Instance __i, eC_Surface surface, int x, int y, int width, void * fieldData, eC_Alignment alignment, eC_DataDisplayFlags displayFlags);

extern int class_onEdit_vTblID;
eC_Window Instance_onEdit(eC_Class * __c, eC_Instance __i, eC_DataBox dataBox, eC_DataBox obsolete, int x, int y, int w, int h, void * userData);

extern int class_onFree_vTblID;
void Instance_onFree(eC_Class * __c, eC_Instance __i);

extern int class_onGetDataFromString_vTblID;
eC_bool Instance_onGetDataFromString(eC_Class * __c, eC_Instance __i, const char * string);

extern int class_onGetString_vTblID;
const char * Instance_onGetString(eC_Class * __c, eC_Instance __i, char * tempString, void * reserved, eC_ObjectNotationType * onType);

extern int class_onSaveEdit_vTblID;
eC_bool Instance_onSaveEdit(eC_Class * __c, eC_Instance __i, eC_Window window, void * object);

extern int class_onSerialize_vTblID;
void Instance_onSerialize(eC_Class * __c, eC_Instance __i, eC_IOChannel channel);

extern int class_onUnserialize_vTblID;
void Instance_onUnserialize(eC_Class * __c, eC_Instance __i, eC_IOChannel channel);

extern double (* double_inf)(void);

extern double (* double_nan)(void);

extern eC_Property * property_double_isNan;
extern eC_bool (* double_get_isNan)(const double d);

extern eC_Property * property_double_isInf;
extern eC_bool (* double_get_isInf)(const double d);

extern eC_Property * property_double_signBit;
extern int (* double_get_signBit)(const double d);

extern float (* float_inf)(void);

extern float (* float_nan)(void);

extern eC_Property * property_float_isNan;
extern eC_bool (* float_get_isNan)(const float f);

extern eC_Property * property_float_isInf;
extern eC_bool (* float_get_isInf)(const float f);

extern eC_Property * property_float_signBit;
extern int (* float_get_signBit)(const float f);

typedef struct eC_BTNode eC_BTNode;
struct eC_BTNode
{
   uintptr key;
   eC_BTNode * parent;
   eC_BTNode * left;
   eC_BTNode * right;
   int depth;
};
typedef struct eC_BinaryTree eC_BinaryTree;
struct eC_BinaryTree
{
   eC_BTNode * root;
   int count;
   int (* CompareKey)(eC_BinaryTree * tree, uintptr a, uintptr b);
   void (* FreeKey)(void * key);
};
typedef struct eC_Item eC_Item;
struct eC_Item
{
   eC_Item * prev;
   eC_Item * next;
};
typedef struct eC_NamedItem eC_NamedItem;
struct eC_NamedItem
{
   eC_NamedItem * prev;
   eC_NamedItem * next;
   char * name;
};
typedef struct eC_NamedLink eC_NamedLink;
struct eC_NamedLink
{
   eC_NamedLink * prev;
   eC_NamedLink * next;
   char * name;
   void * data;
};
typedef struct eC_NamedLink64 eC_NamedLink64;
struct eC_NamedLink64
{
   eC_NamedLink64 * prev;
   eC_NamedLink64 * next;
   char * name;
   int64 data;
};
typedef struct eC_OldLink eC_OldLink;
struct eC_OldLink
{
   eC_OldLink * prev;
   eC_OldLink * next;
   void * data;
};
typedef struct eC_StringBTNode eC_StringBTNode;
struct eC_StringBTNode
{
   eC_String key;
   eC_StringBTNode * parent;
   eC_StringBTNode * left;
   eC_StringBTNode * right;
   int depth;
};
typedef eC_bool eC_BackSlashEscaping;
enum
{
   BackSlashEscaping_forArgsPassing = 0x2
};

typedef uint32 eC_EscapeCStringOptions;
typedef struct eC_Mutex eC_Mutex;
typedef struct eC_OldList eC_OldList;
typedef int eC_StringAllocType;
enum
{
   StringAllocType_pointer = 0x0,
   StringAllocType_stack = 0x1,
   StringAllocType_heap = 0x2
};

typedef int eC_TreePrintStyle;
enum
{
   TreePrintStyle_inOrder = 0x0,
   TreePrintStyle_postOrder = 0x1,
   TreePrintStyle_preOrder = 0x2,
   TreePrintStyle_depthOrder = 0x3
};

typedef eC_Instance eC_ZString;
static const char DIR_SEP;

static const char * const DIR_SEPS;

#define MAX_DIRECTORY 534

#define MAX_EXTENSION 17

#define MAX_FILENAME 274

#define MAX_F_STRING 1025

#define MAX_LOCATION 797

typedef struct eC_StringBinaryTree eC_StringBinaryTree;
extern eC_BTNode * (* BTNode_findPrefix)(eC_BTNode * __this, const char * key);

extern eC_BTNode * (* BTNode_findString)(eC_BTNode * __this, const char * key);

extern eC_Property * property_BTNode_prev;
extern eC_BTNode * (* BTNode_get_prev)(const eC_BTNode * b);

extern eC_Property * property_BTNode_next;
extern eC_BTNode * (* BTNode_get_next)(const eC_BTNode * b);

extern eC_Property * property_BTNode_minimum;
extern eC_BTNode * (* BTNode_get_minimum)(const eC_BTNode * b);

extern eC_Property * property_BTNode_maximum;
extern eC_BTNode * (* BTNode_get_maximum)(const eC_BTNode * b);

extern eC_Property * property_BTNode_count;
extern int (* BTNode_get_count)(const eC_BTNode * b);

extern eC_Property * property_BTNode_depthProp;
extern int (* BTNode_get_depthProp)(const eC_BTNode * b);

extern eC_bool (* BinaryTree_add)(eC_BinaryTree * __this, eC_BTNode * node);

extern eC_bool (* BinaryTree_check)(eC_BinaryTree * __this);

extern int (* BinaryTree_compareInt)(eC_BinaryTree * __this, uintptr a, uintptr b);

extern int (* BinaryTree_compareString)(eC_BinaryTree * __this, const char * a, const char * b);

extern void (* BinaryTree_delete)(eC_BinaryTree * __this, eC_BTNode * node);

extern eC_BTNode * (* BinaryTree_find)(eC_BinaryTree * __this, uintptr key);

extern eC_BTNode * (* BinaryTree_findAll)(eC_BinaryTree * __this, uintptr key);

extern eC_BTNode * (* BinaryTree_findPrefix)(eC_BinaryTree * __this, const char * key);

extern eC_BTNode * (* BinaryTree_findString)(eC_BinaryTree * __this, const char * key);

extern void (* BinaryTree_free)(eC_BinaryTree * __this);

extern void (* BinaryTree_freeString)(char * string);

extern char * (* BinaryTree_print)(eC_BinaryTree * __this, char * output, eC_TreePrintStyle tps);

extern void (* BinaryTree_remove)(eC_BinaryTree * __this, eC_BTNode * node);

extern eC_Property * property_BinaryTree_first;
extern eC_BTNode * (* BinaryTree_get_first)(const eC_BinaryTree * b);

extern eC_Property * property_BinaryTree_last;
extern eC_BTNode * (* BinaryTree_get_last)(const eC_BinaryTree * b);

#define ESCAPECSTRINGOPTIONS_escapeSingleQuote_SHIFT     0
#define ESCAPECSTRINGOPTIONS_escapeSingleQuote_MASK      0x1
#define ESCAPECSTRINGOPTIONS_escapeDoubleQuotes_SHIFT    1
#define ESCAPECSTRINGOPTIONS_escapeDoubleQuotes_MASK     0x2
#define ESCAPECSTRINGOPTIONS_writeQuotes_SHIFT           2
#define ESCAPECSTRINGOPTIONS_writeQuotes_MASK            0x4
#define ESCAPECSTRINGOPTIONS_multiLine_SHIFT             3
#define ESCAPECSTRINGOPTIONS_multiLine_MASK              0x8
#define ESCAPECSTRINGOPTIONS_indent_SHIFT                4
#define ESCAPECSTRINGOPTIONS_indent_MASK                 0xFFFF0


extern void (* Item_copy)(eC_Item * __this, eC_Item * src, int size);

struct eC_Mutex
{
   byte __ecere_padding[56];
};
extern void (* Mutex_release)(eC_Mutex * __this);

extern void (* Mutex_wait)(eC_Mutex * __this);

extern eC_Property * property_Mutex_lockCount;
extern int (* Mutex_get_lockCount)(const eC_Mutex * m);

extern eC_Property * property_Mutex_owningThread;
extern int64 (* Mutex_get_owningThread)(const eC_Mutex * m);

extern void (* OldLink_free)(eC_OldLink * __this);

struct eC_OldList
{
   void * first;
   void * last;
   int count;
   uint offset;
   eC_bool circ;
};
extern void (* OldList_add)(eC_OldList * __this, void * item);

extern eC_bool (* OldList_addName)(eC_OldList * __this, void * item);

extern void (* OldList_clear)(eC_OldList * __this);

extern void (* OldList_copy)(eC_OldList * __this, eC_OldList * src, int size, void (* copy)(void * dest, void * src));

extern void (* OldList_delete)(eC_OldList * __this, void * item);

extern eC_OldLink * (* OldList_findLink)(eC_OldList * __this, void * data);

extern void * (* OldList_findName)(eC_OldList * __this, const char * name, eC_bool warn);

extern void * (* OldList_findNamedLink)(eC_OldList * __this, const char * name, eC_bool warn);

extern void (* OldList_free)(eC_OldList * __this, void (* freeFn)(void *));

extern eC_bool (* OldList_insert)(eC_OldList * __this, void * prevItem, void * item);

extern void (* OldList_move)(eC_OldList * __this, void * item, void * prevItem);

extern eC_bool (* OldList_placeName)(eC_OldList * __this, const char * name, void ** place);

extern void (* OldList_remove)(eC_OldList * __this, void * item);

extern void (* OldList_removeAll)(eC_OldList * __this, void (* freeFn)(void *));

extern void (* OldList_sort)(eC_OldList * __this, int (* compare)(void *, void *, void *), void * data);

extern void (* OldList_swap)(eC_OldList * __this, void * item1, void * item2);

struct eC_StringBinaryTree
{
   eC_BTNode * root;
   int count;
   int (* CompareKey)(eC_BinaryTree * tree, uintptr a, uintptr b);
   void (* FreeKey)(void * key);
};
struct class_members_ZString
{
   char * _string;
   int len;
   eC_StringAllocType allocType;
   int size;
   int minSize;
   int maxSize;
};
extern void (* ZString_concat)(eC_ZString __this, eC_ZString s);

extern void (* ZString_concatf)(eC_ZString __this, const char * format, ...);

extern void (* ZString_concatn)(eC_ZString __this, eC_ZString s, int l);

extern void (* ZString_concatx)(eC_ZString __this, eC_Class * class_object, const void * object, ...);

extern void (* ZString_copy)(eC_ZString __this, eC_ZString s);

extern void (* ZString_copyString)(eC_ZString __this, const char * value, int newLen);

extern eC_Property * property_ZString_string;
extern void (* ZString_set_string)(const eC_ZString z, const char * value);
extern const char * (* ZString_get_string)(const eC_ZString z);

extern eC_Property * property_ZString_char_ptr;
extern eC_ZString (* ZString_from_char_ptr)(const char * c);
extern const char * (* ZString_to_char_ptr)(const eC_ZString z);

extern eC_Property * property_ZString_String;
extern eC_ZString (* ZString_from_String)(const eC_String string);
extern constString (* ZString_to_String)(const eC_ZString z);

extern void (* eC_changeCh)(char * string, char ch1, char ch2);
extern void (* eC_changeChars)(char * string, const char * chars, char alt);
extern char * (* eC_changeExtension)(const char * string, const char * ext, char * output);
extern char * (* eC_copyString)(const char * string);
extern int (* eC_escapeCString)(eC_String outString, int bufferLen, constString s, eC_EscapeCStringOptions options);
extern double (* eC_floatFromString)(const char * string);
extern int64 (* eC_getCurrentThreadID)(void);
extern char * (* eC_getExtension)(const char * string, char * output);
extern uint (* eC_getHexValue)(const char ** buffer);
extern char * (* eC_getLastDirectory)(const char * string, char * output);
extern eC_bool (* eC_getString)(const char ** buffer, char * string, int max);
extern int (* eC_getValue)(const char ** buffer);
extern int (* eC_iSO8859_1toUTF8)(const char * source, char * dest, int max);
extern eC_bool (* eC_isPathInsideOf)(const char * path, const char * of);
extern char * (* eC_makePathRelative)(const char * path, const char * to, char * destination);
extern char * (* eC_pathCat)(char * string, const char * addedPath);
extern char * (* eC_pathCatSlash)(char * string, const char * addedPath);
extern void (* eC_printBigSize)(char * string, double size, int prec);
extern void (* eC_printSize)(char * string, uint64 size, int prec);
extern char * (* eC_rSearchString)(const char * buffer, const char * subStr, int maxLen, eC_bool matchCase, eC_bool matchWord);
extern void (* eC_repeatCh)(char * string, int count, char ch);
extern char * (* eC_searchString)(const char * buffer, int start, const char * subStr, eC_bool matchCase, eC_bool matchWord);
extern eC_bool (* eC_splitArchivePath)(const char * fileName, char * archiveName, const char ** archiveFile);
extern char * (* eC_splitDirectory)(const char * string, char * part, char * rest);
extern eC_bool (* eC_stringLikePattern)(constString string, constString pattern);
extern char * (* eC_stripChars)(eC_String string, constString chars);
extern eC_bool (* eC_stripExtension)(char * string);
extern char * (* eC_stripLastDirectory)(const char * string, char * output);
extern char * (* eC_stripQuotes)(const char * string, char * output);
extern int (* eC_tokenize)(char * string, int maxTokens, char * tokens[], eC_BackSlashEscaping esc);
extern int (* eC_tokenizeWith)(char * string, int maxTokens, char * tokens[], const char * tokenizers, eC_bool escapeBackSlashes);
extern char * (* eC_trimLSpaces)(const char * string, char * output);
extern char * (* eC_trimRSpaces)(const char * string, char * output);
extern char * (* eC_uTF16toUTF8)(const uint16 * source);
extern int (* eC_uTF16toUTF8Buffer)(const uint16 * source, char * dest, int max);
extern int (* eC_uTF32toUTF8Len)(const unichar * source, int count, char * dest, int max);
extern unichar (* eC_uTF8GetChar)(const char * string, int * numBytes);
extern eC_bool (* eC_uTF8Validate)(const char * source);
extern uint16 * (* eC_uTF8toUTF16)(const char * source, int * wordCount);
extern int (* eC_uTF8toUTF16Buffer)(const char * source, uint16 * dest, int max);
extern int (* eC_unescapeCString)(char * d, const char * s, int len);
extern int (* eC_unescapeCStringLoose)(char * d, const char * s, int len);
extern eC_bool (* eC_ishexdigit)(char x);
extern char * (* eC_strchrmax)(const char * s, int c, int max);
typedef uint64_t tparam_AVLNode_T;
typedef uint64_t tparam_Container_T;
typedef uint64_t tparam_CustomAVLTree_BT;
typedef uint64_t tparam_LinkElement_T;
typedef uint64_t tparam_LinkList_LT;
typedef uint64_t tparam_MapNode_V;
typedef struct eC_BTNamedLink eC_BTNamedLink;
struct eC_BTNamedLink
{
   const char * name;
   eC_BTNamedLink * parent;
   eC_BTNamedLink * left;
   eC_BTNamedLink * right;
   int depth;
   void * data;
};
typedef struct eC_NameSpace eC_NameSpace;
struct eC_NameSpace
{
   const char * name;
   eC_NameSpace * btParent;
   eC_NameSpace * left;
   eC_NameSpace * right;
   int depth;
   eC_NameSpace * parent;
   eC_BinaryTree nameSpaces;
   eC_BinaryTree classes;
   eC_BinaryTree defines;
   eC_BinaryTree functions;
};
typedef eC_Instance eC_Module;
typedef eC_Module eC_Application;
typedef int eC_ImportType;
enum
{
   ImportType_normalImport = 0x0,
   ImportType_staticImport = 0x1,
   ImportType_remoteImport = 0x2,
   ImportType_preDeclImport = 0x3,
   ImportType_comCheckImport = 0x4
};

struct class_members_Module
{
   eC_Application application;
   eC_OldList classes;
   eC_OldList defines;
   eC_OldList functions;
   eC_OldList modules;
   eC_Module prev;
   eC_Module next;
   const char * name;
   void * library;
   void * Unload;
   eC_ImportType importType;
   eC_ImportType origImportType;
   eC_NameSpace privateNameSpace;
   eC_NameSpace publicNameSpace;
};
typedef int eC_AccessMode;
enum
{
   AccessMode_defaultAccess = 0x0,
   AccessMode_publicAccess = 0x1,
   AccessMode_privateAccess = 0x2,
   AccessMode_staticAccess = 0x3,
   AccessMode_baseSystemAccess = 0x4
};

typedef struct eC_ClassTemplateArgument eC_ClassTemplateArgument;
typedef int eC_ClassType;
enum
{
   ClassType_normalClass = 0x0,
   ClassType_structClass = 0x1,
   ClassType_bitClass = 0x2,
   ClassType_unitClass = 0x3,
   ClassType_enumClass = 0x4,
   ClassType_noHeadClass = 0x5,
   ClassType_unionClass = 0x6,
   ClassType_systemClass = 0x3E8
};

struct eC_Class
{
   eC_Class * prev;
   eC_Class * next;
   const char * name;
   int offset;
   int structSize;
   void ** _vTbl;
   int vTblSize;
   eC_bool (* Constructor)(void *);
   void (* Destructor)(void *);
   int offsetClass;
   int sizeClass;
   eC_Class * base;
   eC_BinaryTree methods;
   eC_BinaryTree members;
   eC_BinaryTree prop;
   eC_OldList membersAndProperties;
   eC_BinaryTree classProperties;
   eC_OldList derivatives;
   int memberID;
   int startMemberID;
   eC_ClassType type;
   eC_Module module;
   eC_NameSpace * nameSpace;
   const char * dataTypeString;
   eC_Type * dataType;
   int typeSize;
   int defaultAlignment;
   void (* Initialize)(void);
   int memberOffset;
   eC_OldList selfWatchers;
   const char * designerClass;
   eC_bool noExpansion;
   const char * defaultProperty;
   eC_bool comRedefinition;
   int count;
   int isRemote;
   eC_bool internalDecl;
   void * data;
   eC_bool computeSize;
   short structAlignment;
   short pointerAlignment;
   int destructionWatchOffset;
   eC_bool fixed;
   eC_OldList delayedCPValues;
   eC_AccessMode inheritanceAccess;
   const char * fullName;
   void * symbol;
   eC_OldList conversions;
   eC_OldList templateParams;
   eC_ClassTemplateArgument * templateArgs;
   eC_Class * templateClass;
   eC_OldList templatized;
   int numParams;
   eC_bool isInstanceClass;
   eC_bool byValueSystemClass;
   void * bindingsClass;
};
typedef struct eC_BitMember eC_BitMember;
typedef int eC_DataMemberType;
enum
{
   DataMemberType_normalMember = 0x0,
   DataMemberType_unionMember = 0x1,
   DataMemberType_structMember = 0x2
};

struct eC_BitMember
{
   eC_BitMember * prev;
   eC_BitMember * next;
   const char * name;
   eC_bool isProperty;
   eC_AccessMode memberAccess;
   int id;
   eC_Class * _class;
   const char * dataTypeString;
   eC_Class * dataTypeClass;
   eC_Type * dataType;
   eC_DataMemberType type;
   int size;
   int pos;
   uint64 mask;
};
typedef struct eC_ClassProperty eC_ClassProperty;
struct eC_ClassProperty
{
   const char * name;
   eC_ClassProperty * parent;
   eC_ClassProperty * left;
   eC_ClassProperty * right;
   int depth;
   void (* Set)(eC_Class *, int64);
   int64 (* Get)(eC_Class *);
   const char * dataTypeString;
   eC_Type * dataType;
   eC_bool constant;
};
typedef struct eC_DataMember eC_DataMember;
struct eC_DataMember
{
   eC_DataMember * prev;
   eC_DataMember * next;
   const char * name;
   eC_bool isProperty;
   eC_AccessMode memberAccess;
   int id;
   eC_Class * _class;
   const char * dataTypeString;
   eC_Class * dataTypeClass;
   eC_Type * dataType;
   eC_DataMemberType type;
   int offset;
   int memberID;
   eC_OldList members;
   eC_BinaryTree membersAlpha;
   int memberOffset;
   short structAlignment;
   short pointerAlignment;
};
struct eC_DataValue
{
   union
   {
      char c;
      byte uc;
      short s;
      uint16 us;
      int i;
      uint ui;
      void * p;
      float f;
      double d;
      int64 i64;
      uint64 ui64;
   };
};
typedef int eC_MethodType;
enum
{
   MethodType_normalMethod = 0x0,
   MethodType_virtualMethod = 0x1
};

struct eC_Method
{
   const char * name;
   eC_Method * parent;
   eC_Method * left;
   eC_Method * right;
   int depth;
   int (* function)(void);
   int vid;
   eC_MethodType type;
   eC_Class * _class;
   void * symbol;
   const char * dataTypeString;
   eC_Type * dataType;
   eC_AccessMode memberAccess;
};
struct eC_Property
{
   eC_Property * prev;
   eC_Property * next;
   const char * name;
   eC_bool isProperty;
   eC_AccessMode memberAccess;
   int id;
   eC_Class * _class;
   const char * dataTypeString;
   eC_Class * dataTypeClass;
   eC_Type * dataType;
   void (* Set)(void *, int);
   int (* Get)(void *);
   eC_bool (* IsSet)(void *);
   void * data;
   void * symbol;
   int vid;
   eC_bool conversion;
   uint watcherOffset;
   const char * category;
   eC_bool compiled;
   eC_bool selfWatchable;
   eC_bool isWatchable;
};
typedef struct eC_DataValue eC_DataValue;
struct eC_ClassTemplateArgument
{
   union
   {
      struct
      {
         const char * dataTypeString;
         eC_Class * dataTypeClass;
      };
      eC_DataValue expression;
      struct
      {
         const char * memberString;
         union
         {
            eC_DataMember * member;
            eC_Property * prop;
            eC_Method * method;
         };
      };
   };
};
typedef struct eC_ClassTemplateParameter eC_ClassTemplateParameter;
typedef int eC_TemplateMemberType;
enum
{
   TemplateMemberType_dataMember = 0x0,
   TemplateMemberType_method = 0x1,
   TemplateMemberType_prop = 0x2
};

typedef int eC_TemplateParameterType;
enum
{
   TemplateParameterType_type = 0x0,
   TemplateParameterType_identifier = 0x1,
   TemplateParameterType_expression = 0x2
};

struct eC_ClassTemplateParameter
{
   eC_ClassTemplateParameter * prev;
   eC_ClassTemplateParameter * next;
   const char * name;
   eC_TemplateParameterType type;
   union
   {
      const char * dataTypeString;
      eC_TemplateMemberType memberType;
   };
   eC_ClassTemplateArgument defaultArg;
   void * param;
};
typedef struct eC_DefinedExpression eC_DefinedExpression;
struct eC_DefinedExpression
{
   eC_DefinedExpression * prev;
   eC_DefinedExpression * next;
   const char * name;
   const char * value;
   eC_NameSpace * nameSpace;
};
typedef struct eC_GlobalFunction eC_GlobalFunction;
struct eC_GlobalFunction
{
   eC_GlobalFunction * prev;
   eC_GlobalFunction * next;
   const char * name;
   int (* function)(void);
   eC_Module module;
   eC_NameSpace * nameSpace;
   const char * dataTypeString;
   eC_Type * dataType;
   void * symbol;
};
struct class_members_HashMap
{
   byte __ecerePrivateData0[8];
   eC_bool noRemResize;
   byte __ecere_padding[4];
};
struct class_members_Instance
{
   void ** _vTbl;
   eC_Class * _class;
   int _refCount;
};
struct eC_IteratorPointer
{
};
typedef eC_Instance eC_Container;
typedef struct eC_IteratorPointer eC_IteratorPointer;
struct eC_Iterator
{
   eC_Container container;
   eC_IteratorPointer * pointer;
};
struct eC_LinkElement
{
   tparam_LinkElement_T prev;
   tparam_LinkElement_T next;
};
typedef struct eC_ObjectInfo eC_ObjectInfo;
struct eC_ObjectInfo
{
   eC_ObjectInfo * prev;
   eC_ObjectInfo * next;
   eC_Instance instance;
   char * name;
   eC_Instantiation * instCode;
   eC_bool deleted;
   eC_ObjectInfo * oClass;
   eC_OldList instances;
   eC_ClassDefinition * classDefinition;
   eC_bool modified;
   void * i18nStrings;
};
typedef struct eC_SubModule eC_SubModule;
struct eC_SubModule
{
   eC_SubModule * prev;
   eC_SubModule * next;
   eC_Module module;
   eC_AccessMode importMode;
};
typedef struct eC_AVLNode eC_AVLNode;
typedef struct eC_BuiltInContainer eC_BuiltInContainer;
typedef eC_Window eC_ClassDesignerBase;
typedef eC_Container eC_CustomAVLTree;
typedef eC_Window eC_DesignerBase;
typedef eC_Container eC_HashMap;
typedef struct eC_Iterator eC_Iterator;
typedef struct eC_LinkElement eC_LinkElement;
typedef eC_Container eC_LinkList;
typedef eC_CustomAVLTree eC_Map;
typedef int eC_Platform;
enum
{
   Platform_unknown = 0x0,
   Platform_win32 = 0x1,
   Platform_tux = 0x2,
   Platform_apple = 0x3
};

typedef eC_IOChannel eC_SerialBuffer;
static const char * const FORMAT64D;

static const char * const FORMAT64DLL;

static const char * const FORMAT64HEX;

static const char * const FORMAT64HEXLL;

static const char * const FORMAT64U;

#define MAXBYTE 0xff

static const double MAXDOUBLE;

#define MAXDWORD 0xffffffff

static const float MAXFLOAT;

#define MAXINT 2147483647

static const int64 MAXINT64;

static const uint64 MAXQWORD;

#define MAXWORD 0xffff

static const double MINDOUBLE;

static const float MINFLOAT;

#define MININT -2147483648

static const int64 MININT64;

typedef eC_CustomAVLTree eC_AVLTree;
typedef double eC_Angle;
typedef eC_Container eC_Array;
typedef char * eC_CIString;
typedef struct eC_EnumClassData eC_EnumClassData;
typedef struct eC_HashMapIterator eC_HashMapIterator;
typedef eC_Container eC_HashTable;
typedef struct eC_Link eC_Link;
typedef eC_LinkList eC_List;
typedef struct eC_ListItem eC_ListItem;
typedef struct eC_MapIterator eC_MapIterator;
typedef struct eC_MapNode eC_MapNode;
typedef struct eC_StaticString eC_StaticString;
typedef uint64_t tparam_MapNode_KT;
typedef uint64_t tparam_Iterator_T;
typedef uint64_t tparam_MapIterator_V;
typedef uint64_t tparam_HashMapIterator_KT;
typedef uint64_t tparam_Container_D;
typedef uint64_t tparam_Container_I;
typedef uint64_t tparam_Iterator_IT;
typedef uint64_t tparam_HashMapIterator_VT;
typedef uint64_t tparam_MapIterator_KT;
struct eC_AVLNode
{
   byte __ecerePrivateData0[32];
   tparam_AVLNode_T key;
};
extern eC_AVLNode * (* AVLNode_find)(eC_AVLNode * __this, eC_Class * Tclass, tparam_AVLNode_T key);

extern eC_Property * property_AVLNode_prev;
extern eC_AVLNode * (* AVLNode_get_prev)(const eC_AVLNode * a);

extern eC_Property * property_AVLNode_next;
extern eC_AVLNode * (* AVLNode_get_next)(const eC_AVLNode * a);

extern eC_Property * property_AVLNode_minimum;
extern eC_AVLNode * (* AVLNode_get_minimum)(const eC_AVLNode * a);

extern eC_Property * property_AVLNode_maximum;
extern eC_AVLNode * (* AVLNode_get_maximum)(const eC_AVLNode * a);

extern eC_Property * property_AVLNode_count;
extern int (* AVLNode_get_count)(const eC_AVLNode * a);

extern eC_Property * property_AVLNode_depthProp;
extern int (* AVLNode_get_depthProp)(const eC_AVLNode * a);

struct class_members_Application
{
   int argc;
   const char ** argv;
   int exitCode;
   eC_bool isGUIApp;
   eC_OldList allModules;
   char * parsedCommand;
   eC_NameSpace systemNameSpace;
};
extern int Application_main_vTblID;
void Application_main(eC_Application __i);
extern eC_Method * method_Application_main;

struct class_members_Array
{
   tparam_Container_T * array;
   uint count;
   uint minAllocSize;
};
extern eC_Property * property_Array_size;
extern void (* Array_set_size)(const eC_Array a, uint value);
extern uint (* Array_get_size)(const eC_Array a);

extern eC_Property * property_Array_minAllocSize;
extern void (* Array_set_minAllocSize)(const eC_Array a, uint value);
extern uint (* Array_get_minAllocSize)(const eC_Array a);

struct eC_BuiltInContainer
{
   void ** _vTbl;
   eC_Class * _class;
   int _refCount;
   void * data;
   int count;
   eC_Class * type;
};
extern int BuiltInContainer_add_vTblID;
eC_IteratorPointer * BuiltInContainer_add(eC_BuiltInContainer * __i, uint64 value);
extern eC_Method * method_BuiltInContainer_add;

extern int BuiltInContainer_copy_vTblID;
void BuiltInContainer_copy(eC_BuiltInContainer * __i, eC_Container source);
extern eC_Method * method_BuiltInContainer_copy;

extern int BuiltInContainer_delete_vTblID;
void BuiltInContainer_delete(eC_BuiltInContainer * __i, eC_IteratorPointer * it);
extern eC_Method * method_BuiltInContainer_delete;

extern int BuiltInContainer_find_vTblID;
eC_IteratorPointer * BuiltInContainer_find(eC_BuiltInContainer * __i, uint64 value);
extern eC_Method * method_BuiltInContainer_find;

extern int BuiltInContainer_free_vTblID;
void BuiltInContainer_free(eC_BuiltInContainer * __i);
extern eC_Method * method_BuiltInContainer_free;

extern int BuiltInContainer_freeIterator_vTblID;
void BuiltInContainer_freeIterator(eC_BuiltInContainer * __i, eC_IteratorPointer * it);
extern eC_Method * method_BuiltInContainer_freeIterator;

extern int BuiltInContainer_getAtPosition_vTblID;
eC_IteratorPointer * BuiltInContainer_getAtPosition(eC_BuiltInContainer * __i, const uint64 pos, eC_bool create);
extern eC_Method * method_BuiltInContainer_getAtPosition;

extern int BuiltInContainer_getCount_vTblID;
int BuiltInContainer_getCount(eC_BuiltInContainer * __i);
extern eC_Method * method_BuiltInContainer_getCount;

extern int BuiltInContainer_getData_vTblID;
uint64 BuiltInContainer_getData(eC_BuiltInContainer * __i, eC_IteratorPointer * pointer);
extern eC_Method * method_BuiltInContainer_getData;

extern int BuiltInContainer_getFirst_vTblID;
eC_IteratorPointer * BuiltInContainer_getFirst(eC_BuiltInContainer * __i);
extern eC_Method * method_BuiltInContainer_getFirst;

extern int BuiltInContainer_getLast_vTblID;
eC_IteratorPointer * BuiltInContainer_getLast(eC_BuiltInContainer * __i);
extern eC_Method * method_BuiltInContainer_getLast;

extern int BuiltInContainer_getNext_vTblID;
eC_IteratorPointer * BuiltInContainer_getNext(eC_BuiltInContainer * __i, eC_IteratorPointer * pointer);
extern eC_Method * method_BuiltInContainer_getNext;

extern int BuiltInContainer_getPrev_vTblID;
eC_IteratorPointer * BuiltInContainer_getPrev(eC_BuiltInContainer * __i, eC_IteratorPointer * pointer);
extern eC_Method * method_BuiltInContainer_getPrev;

extern int BuiltInContainer_insert_vTblID;
eC_IteratorPointer * BuiltInContainer_insert(eC_BuiltInContainer * __i, eC_IteratorPointer * after, uint64 value);
extern eC_Method * method_BuiltInContainer_insert;

extern int BuiltInContainer_move_vTblID;
void BuiltInContainer_move(eC_BuiltInContainer * __i, eC_IteratorPointer * it, eC_IteratorPointer * after);
extern eC_Method * method_BuiltInContainer_move;

extern int BuiltInContainer_remove_vTblID;
void BuiltInContainer_remove(eC_BuiltInContainer * __i, eC_IteratorPointer * it);
extern eC_Method * method_BuiltInContainer_remove;

extern int BuiltInContainer_removeAll_vTblID;
void BuiltInContainer_removeAll(eC_BuiltInContainer * __i);
extern eC_Method * method_BuiltInContainer_removeAll;

extern int BuiltInContainer_setData_vTblID;
eC_bool BuiltInContainer_setData(eC_BuiltInContainer * __i, eC_IteratorPointer * pointer, uint64 data);
extern eC_Method * method_BuiltInContainer_setData;

extern int BuiltInContainer_sort_vTblID;
void BuiltInContainer_sort(eC_BuiltInContainer * __i, eC_bool ascending);
extern eC_Method * method_BuiltInContainer_sort;

extern eC_Property * property_BuiltInContainer_Container;
extern eC_Container (* BuiltInContainer_to_Container)(const eC_BuiltInContainer * b);

extern eC_Property * property_Class_char_ptr;
extern void (* Class_from_char_ptr)(const eC_Class * c, const char * value);
extern const char * (* Class_to_char_ptr)(const eC_Class * c);

extern int ClassDesignerBase_addObject_vTblID;
void ClassDesignerBase_addObject(eC_ClassDesignerBase __i);
extern eC_Method * method_ClassDesignerBase_addObject;

extern int ClassDesignerBase_createNew_vTblID;
void ClassDesignerBase_createNew(eC_ClassDesignerBase __i, eC_EditBox editBox, eC_Size * clientSize, const char * name, const char * inherit);
extern eC_Method * method_ClassDesignerBase_createNew;

extern int ClassDesignerBase_createObject_vTblID;
void ClassDesignerBase_createObject(eC_ClassDesignerBase __i, eC_DesignerBase designer, eC_Instance instance, eC_ObjectInfo * object, eC_bool isClass, eC_Instance _class);
extern eC_Method * method_ClassDesignerBase_createObject;

extern int ClassDesignerBase_destroyObject_vTblID;
void ClassDesignerBase_destroyObject(eC_ClassDesignerBase __i, eC_Instance object);
extern eC_Method * method_ClassDesignerBase_destroyObject;

extern int ClassDesignerBase_droppedObject_vTblID;
void ClassDesignerBase_droppedObject(eC_ClassDesignerBase __i, eC_Instance instance, eC_ObjectInfo * object, eC_bool isClass, eC_Instance _class);
extern eC_Method * method_ClassDesignerBase_droppedObject;

extern int ClassDesignerBase_fixProperty_vTblID;
void ClassDesignerBase_fixProperty(eC_ClassDesignerBase __i, eC_Property * prop, eC_Instance object);
extern eC_Method * method_ClassDesignerBase_fixProperty;

extern int ClassDesignerBase_listToolBoxClasses_vTblID;
void ClassDesignerBase_listToolBoxClasses(eC_ClassDesignerBase __i, eC_DesignerBase designer);
extern eC_Method * method_ClassDesignerBase_listToolBoxClasses;

extern int ClassDesignerBase_postCreateObject_vTblID;
void ClassDesignerBase_postCreateObject(eC_ClassDesignerBase __i, eC_Instance instance, eC_ObjectInfo * object, eC_bool isClass, eC_Instance _class);
extern eC_Method * method_ClassDesignerBase_postCreateObject;

extern int ClassDesignerBase_prepareTestObject_vTblID;
void ClassDesignerBase_prepareTestObject(eC_ClassDesignerBase __i, eC_DesignerBase designer, eC_Instance test);
extern eC_Method * method_ClassDesignerBase_prepareTestObject;

extern int ClassDesignerBase_reset_vTblID;
void ClassDesignerBase_reset(eC_ClassDesignerBase __i);
extern eC_Method * method_ClassDesignerBase_reset;

extern int ClassDesignerBase_selectObject_vTblID;
void ClassDesignerBase_selectObject(eC_ClassDesignerBase __i, eC_ObjectInfo * object, eC_Instance control);
extern eC_Method * method_ClassDesignerBase_selectObject;

extern int Container_add_vTblID;
eC_IteratorPointer * Container_add(eC_Container __i, tparam_Container_T value);
extern eC_Method * method_Container_add;

extern int Container_copy_vTblID;
void Container_copy(eC_Container __i, eC_Container source);
extern eC_Method * method_Container_copy;

extern int Container_delete_vTblID;
void Container_delete(eC_Container __i, eC_IteratorPointer * i);
extern eC_Method * method_Container_delete;

extern int Container_find_vTblID;
eC_IteratorPointer * Container_find(eC_Container __i, tparam_Container_D value);
extern eC_Method * method_Container_find;

extern int Container_free_vTblID;
void Container_free(eC_Container __i);
extern eC_Method * method_Container_free;

extern int Container_freeIterator_vTblID;
void Container_freeIterator(eC_Container __i, eC_IteratorPointer * it);
extern eC_Method * method_Container_freeIterator;

extern int Container_getAtPosition_vTblID;
eC_IteratorPointer * Container_getAtPosition(eC_Container __i, tparam_Container_I pos, eC_bool create, eC_bool * justAdded);
extern eC_Method * method_Container_getAtPosition;

extern int Container_getCount_vTblID;
int Container_getCount(eC_Container __i);
extern eC_Method * method_Container_getCount;

extern int Container_getData_vTblID;
tparam_Container_D Container_getData(eC_Container __i, eC_IteratorPointer * pointer);
extern eC_Method * method_Container_getData;

extern int Container_getFirst_vTblID;
eC_IteratorPointer * Container_getFirst(eC_Container __i);
extern eC_Method * method_Container_getFirst;

extern int Container_getLast_vTblID;
eC_IteratorPointer * Container_getLast(eC_Container __i);
extern eC_Method * method_Container_getLast;

extern int Container_getNext_vTblID;
eC_IteratorPointer * Container_getNext(eC_Container __i, eC_IteratorPointer * pointer);
extern eC_Method * method_Container_getNext;

extern int Container_getPrev_vTblID;
eC_IteratorPointer * Container_getPrev(eC_Container __i, eC_IteratorPointer * pointer);
extern eC_Method * method_Container_getPrev;

extern int Container_insert_vTblID;
eC_IteratorPointer * Container_insert(eC_Container __i, eC_IteratorPointer * after, tparam_Container_T value);
extern eC_Method * method_Container_insert;

extern int Container_move_vTblID;
void Container_move(eC_Container __i, eC_IteratorPointer * it, eC_IteratorPointer * after);
extern eC_Method * method_Container_move;

extern int Container_remove_vTblID;
void Container_remove(eC_Container __i, eC_IteratorPointer * it);
extern eC_Method * method_Container_remove;

extern int Container_removeAll_vTblID;
void Container_removeAll(eC_Container __i);
extern eC_Method * method_Container_removeAll;

extern int Container_setData_vTblID;
eC_bool Container_setData(eC_Container __i, eC_IteratorPointer * pointer, tparam_Container_D data);
extern eC_Method * method_Container_setData;

extern int Container_sort_vTblID;
void Container_sort(eC_Container __i, eC_bool ascending);
extern eC_Method * method_Container_sort;

extern eC_bool (* Container_takeOut)(eC_Container __this, tparam_Container_D d);

extern eC_Property * property_Container_copySrc;
extern void (* Container_set_copySrc)(const eC_Container c, eC_Container value);

extern eC_Property * property_Container_firstIterator;
extern void (* Container_get_firstIterator)(const eC_Container c, eC_Iterator * value);

extern eC_Property * property_Container_lastIterator;
extern void (* Container_get_lastIterator)(const eC_Container c, eC_Iterator * value);

struct class_members_CustomAVLTree
{
   tparam_CustomAVLTree_BT root;
   int count;
};
extern eC_bool (* CustomAVLTree_check)(eC_CustomAVLTree __this);

extern void (* CustomAVLTree_freeKey)(eC_CustomAVLTree __this, eC_AVLNode * item);

struct class_members_DesignerBase
{
   eC_ClassDesignerBase classDesigner;
   const char * objectClass;
   eC_bool isDragging;
};
extern int DesignerBase_addDefaultMethod_vTblID;
void DesignerBase_addDefaultMethod(eC_DesignerBase __i, eC_Instance instance, eC_Instance classInstance);
extern eC_Method * method_DesignerBase_addDefaultMethod;

extern int DesignerBase_addToolBoxClass_vTblID;
void DesignerBase_addToolBoxClass(eC_DesignerBase __i, eC_Class * _class);
extern eC_Method * method_DesignerBase_addToolBoxClass;

extern int DesignerBase_codeAddObject_vTblID;
void DesignerBase_codeAddObject(eC_DesignerBase __i, eC_Instance instance, eC_ObjectInfo * object);
extern eC_Method * method_DesignerBase_codeAddObject;

extern int DesignerBase_deleteObject_vTblID;
void DesignerBase_deleteObject(eC_DesignerBase __i, eC_ObjectInfo * object);
extern eC_Method * method_DesignerBase_deleteObject;

extern int DesignerBase_findObject_vTblID;
eC_bool DesignerBase_findObject(eC_DesignerBase __i, eC_Instance * instance, const char * string);
extern eC_Method * method_DesignerBase_findObject;

extern int DesignerBase_modifyCode_vTblID;
void DesignerBase_modifyCode(eC_DesignerBase __i);
extern eC_Method * method_DesignerBase_modifyCode;

extern int DesignerBase_objectContainsCode_vTblID;
eC_bool DesignerBase_objectContainsCode(eC_DesignerBase __i, eC_ObjectInfo * object);
extern eC_Method * method_DesignerBase_objectContainsCode;

extern int DesignerBase_renameObject_vTblID;
void DesignerBase_renameObject(eC_DesignerBase __i, eC_ObjectInfo * object, const char * name);
extern eC_Method * method_DesignerBase_renameObject;

extern int DesignerBase_selectObjectFromDesigner_vTblID;
void DesignerBase_selectObjectFromDesigner(eC_DesignerBase __i, eC_ObjectInfo * object);
extern eC_Method * method_DesignerBase_selectObjectFromDesigner;

extern int DesignerBase_sheetAddObject_vTblID;
void DesignerBase_sheetAddObject(eC_DesignerBase __i, eC_ObjectInfo * object);
extern eC_Method * method_DesignerBase_sheetAddObject;

extern int DesignerBase_updateProperties_vTblID;
void DesignerBase_updateProperties(eC_DesignerBase __i);
extern eC_Method * method_DesignerBase_updateProperties;

extern eC_Property * property_DesignerBase_classDesigner;
extern void (* DesignerBase_set_classDesigner)(const eC_DesignerBase d, eC_ClassDesignerBase value);
extern eC_ClassDesignerBase (* DesignerBase_get_classDesigner)(const eC_DesignerBase d);

extern eC_Property * property_DesignerBase_objectClass;
extern void (* DesignerBase_set_objectClass)(const eC_DesignerBase d, const char * value);
extern const char * (* DesignerBase_get_objectClass)(const eC_DesignerBase d);

extern eC_Property * property_DesignerBase_isDragging;
extern void (* DesignerBase_set_isDragging)(const eC_DesignerBase d, eC_bool value);
extern eC_bool (* DesignerBase_get_isDragging)(const eC_DesignerBase d);

struct eC_EnumClassData
{
   eC_OldList values;
   int64 largest;
};
extern void (* HashMap_removeIterating)(eC_HashMap __this, eC_IteratorPointer * it);

extern void (* HashMap_resize)(eC_HashMap __this, eC_IteratorPointer * movedEntry);

extern eC_Property * property_HashMap_count;
extern int (* HashMap_get_count)(const eC_HashMap h);

extern eC_Property * property_HashMap_initSize;
extern void (* HashMap_set_initSize)(const eC_HashMap h, int value);

struct eC_HashMapIterator
{
   eC_Container container;
   eC_IteratorPointer * pointer;
};
extern eC_Property * property_HashMapIterator_map;
extern void (* HashMapIterator_set_map)(const eC_HashMapIterator * h, eC_HashMap value);
extern eC_HashMap (* HashMapIterator_get_map)(const eC_HashMapIterator * h);

extern eC_Property * property_HashMapIterator_key;
extern tparam_HashMapIterator_KT (* HashMapIterator_get_key)(const eC_HashMapIterator * h);

extern eC_Property * property_HashMapIterator_value;
extern void (* HashMapIterator_set_value)(const eC_HashMapIterator * h, tparam_HashMapIterator_VT value);
extern tparam_HashMapIterator_VT (* HashMapIterator_get_value)(const eC_HashMapIterator * h);

extern eC_Property * property_HashTable_initSize;
extern void (* HashTable_set_initSize)(const eC_HashTable h, int value);

extern void (* IOChannel_get)(eC_IOChannel __this, eC_Class * class_data, void * data);

extern void (* IOChannel_put)(eC_IOChannel __this, eC_Class * class_data, void * data);

extern int IOChannel_readData_vTblID;
uintsize IOChannel_readData(eC_IOChannel __i, void * data, uintsize numBytes);
extern eC_Method * method_IOChannel_readData;

extern void (* IOChannel_serialize)(eC_IOChannel __this, eC_Class * class_data, void * data);

extern void (* IOChannel_unserialize)(eC_IOChannel __this, eC_Class * class_data, void * data);

extern int IOChannel_writeData_vTblID;
uintsize IOChannel_writeData(eC_IOChannel __i, const void * data, uintsize numBytes);
extern eC_Method * method_IOChannel_writeData;

extern eC_bool (* Iterator_find)(eC_Iterator * __this, tparam_Iterator_T value);

extern void (* Iterator_free)(eC_Iterator * __this);

extern tparam_Iterator_T (* Iterator_getData)(eC_Iterator * __this);

extern eC_bool (* Iterator_index)(eC_Iterator * __this, tparam_Iterator_IT index, eC_bool create);

extern eC_bool (* Iterator_next)(eC_Iterator * __this);

extern eC_bool (* Iterator_prev)(eC_Iterator * __this);

extern void (* Iterator_remove)(eC_Iterator * __this);

extern eC_bool (* Iterator_setData)(eC_Iterator * __this, tparam_Iterator_T value);

extern eC_Property * property_Iterator_data;
extern void (* Iterator_set_data)(const eC_Iterator * i, tparam_Iterator_T value);
extern tparam_Iterator_T (* Iterator_get_data)(const eC_Iterator * i);

struct eC_Link
{
   union
   {
      eC_LinkElement link;
      struct
      {
         eC_ListItem * prev;
         eC_ListItem * next;
      };
   };
   uint64 data;
};
struct class_members_LinkList
{
   tparam_LinkList_LT first;
   tparam_LinkList_LT last;
   int count;
};
extern void (* LinkList__Sort)(eC_LinkList __this, eC_bool ascending, eC_LinkList * lists);

struct eC_ListItem
{
   union
   {
      eC_LinkElement link;
      struct
      {
         eC_ListItem * prev;
         eC_ListItem * next;
      };
   };
};
extern eC_Property * property_Map_mapSrc;
extern void (* Map_set_mapSrc)(const eC_Map m, eC_Map value);

struct eC_MapIterator
{
   eC_Container container;
   eC_IteratorPointer * pointer;
};
extern eC_Property * property_MapIterator_map;
extern void (* MapIterator_set_map)(const eC_MapIterator * m, eC_Map value);
extern eC_Map (* MapIterator_get_map)(const eC_MapIterator * m);

extern eC_Property * property_MapIterator_key;
extern tparam_MapIterator_KT (* MapIterator_get_key)(const eC_MapIterator * m);

extern eC_Property * property_MapIterator_value;
extern void (* MapIterator_set_value)(const eC_MapIterator * m, tparam_MapIterator_V value);
extern tparam_MapIterator_V (* MapIterator_get_value)(const eC_MapIterator * m);

struct eC_MapNode
{
   byte __ecerePrivateData0[32];
   tparam_AVLNode_T key;
   tparam_MapNode_V value;
};
extern eC_Property * property_MapNode_key;
extern void (* MapNode_set_key)(const eC_MapNode * m, tparam_MapNode_KT value);
extern tparam_MapNode_KT (* MapNode_get_key)(const eC_MapNode * m);

extern eC_Property * property_MapNode_value;
extern void (* MapNode_set_value)(const eC_MapNode * m, tparam_MapNode_V value);
extern tparam_MapNode_V (* MapNode_get_value)(const eC_MapNode * m);

extern eC_Property * property_MapNode_prev;
extern eC_MapNode * (* MapNode_get_prev)(const eC_MapNode * m);

extern eC_Property * property_MapNode_next;
extern eC_MapNode * (* MapNode_get_next)(const eC_MapNode * m);

extern eC_Property * property_MapNode_minimum;
extern eC_MapNode * (* MapNode_get_minimum)(const eC_MapNode * m);

extern eC_Property * property_MapNode_maximum;
extern eC_MapNode * (* MapNode_get_maximum)(const eC_MapNode * m);


extern int Module_onLoad_vTblID;
eC_bool Module_onLoad(eC_Module __i);
extern eC_Method * method_Module_onLoad;

extern int Module_onUnload_vTblID;
void Module_onUnload(eC_Module __i);
extern eC_Method * method_Module_onUnload;


extern eC_Property * property_Platform_char_ptr;
extern eC_Platform (* Platform_from_char_ptr)(const char * c);
extern const char * (* Platform_to_char_ptr)(const eC_Platform platform);

struct class_members_SerialBuffer
{
   byte * _buffer;
   uintsize count;
   uintsize _size;
   uintsize pos;
};
extern void (* SerialBuffer_free)(eC_SerialBuffer __this);

extern eC_Property * property_SerialBuffer_buffer;
extern void (* SerialBuffer_set_buffer)(const eC_SerialBuffer s, byte * value);
extern byte * (* SerialBuffer_get_buffer)(const eC_SerialBuffer s);

extern eC_Property * property_SerialBuffer_size;
extern void (* SerialBuffer_set_size)(const eC_SerialBuffer s, uint value);
extern uint (* SerialBuffer_get_size)(const eC_SerialBuffer s);

struct eC_StaticString
{
   char string[1];
};
extern void (* eC_checkConsistency)(void);
extern void (* eC_checkMemory)(void);
extern eC_DesignerBase (* eC_getActiveDesigner)(void);
extern eC_Platform (* eC_getRuntimePlatform)(void);
extern eC_bool (* eC_locateModule)(const char * name, const char * fileName);
extern void (* eC_printx)(eC_Class * class_object, const void * object, ...);
extern int (* eC_printBuf)(char * buffer, int maxLen, eC_Class * class_object, const void * object, ...);
extern void (* eC_printLn)(eC_Class * class_object, const void * object, ...);
extern int (* eC_printLnBuf)(char * buffer, int maxLen, eC_Class * class_object, const void * object, ...);
extern char * (* eC_printLnString)(eC_Class * class_object, const void * object, ...);
extern char * (* eC_printString)(eC_Class * class_object, const void * object, ...);
extern void (* eC_setActiveDesigner)(eC_DesignerBase designer);
extern void (* eC_eSystem_LockMem)(void);
extern void (* eC_eSystem_UnlockMem)(void);
extern uint (* eC_log2i)(uint number);
extern void (* eC_memswap)(byte * a, byte * b, uint size);
extern uint (* eC_pow2i)(uint number);
extern void (* eC_qsortr)(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), void * arg);
extern void (* eC_qsortrx)(void * base, uintsize nel, uintsize width, int (* compare)(void * arg, const void * a, const void * b), int (* optCompareArgLast)(const void * a, const void * b, void * arg), void * arg, eC_bool deref, eC_bool ascending);
extern void (* eC_queryMemInfo)(char * string);
extern eC_Class * class_Window;
extern eC_Class * class_String;
extern eC_Class * class_byte;
extern eC_Class * class_char;
extern eC_Class * class_class;
extern eC_Class * class_double;
extern eC_Class * class_enum;
extern eC_Class * class_float;
extern eC_Class * class_int;
extern eC_Class * class_int64;
extern eC_Class * class_intptr;
extern eC_Class * class_intsize;
extern eC_Class * class_short;
extern eC_Class * class_struct;
extern eC_Class * class_uint;
extern eC_Class * class_uint16;
extern eC_Class * class_uint32;
extern eC_Class * class_uint64;
extern eC_Class * class_uintptr;
extern eC_Class * class_uintsize;
extern eC_Class * class_BTNode;
extern eC_Class * class_BackSlashEscaping;
extern eC_Class * class_BinaryTree;
extern eC_Class * class_EscapeCStringOptions;
extern eC_Class * class_Item;
extern eC_Class * class_Mutex;
extern eC_Class * class_NamedItem;
extern eC_Class * class_NamedLink;
extern eC_Class * class_NamedLink64;
extern eC_Class * class_OldLink;
extern eC_Class * class_OldList;
extern eC_Class * class_StringAllocType;
extern eC_Class * class_StringBTNode;
extern eC_Class * class_StringBinaryTree;
extern eC_Class * class_TreePrintStyle;
extern eC_Class * class_ZString;
extern eC_Class * class_AVLNode;
extern eC_Class * class_AVLTree;
extern eC_Class * class_AccessMode;
extern eC_Class * class_Angle;
extern eC_Class * class_Application;
extern eC_Class * class_Array;
extern eC_Class * class_BTNamedLink;
extern eC_Class * class_BitMember;
extern eC_Class * class_BuiltInContainer;
extern eC_Class * class_CIString;
extern eC_Class * class_Class;
extern eC_Class * class_ClassDesignerBase;
extern eC_Class * class_ClassProperty;
extern eC_Class * class_ClassTemplateArgument;
extern eC_Class * class_ClassTemplateParameter;
extern eC_Class * class_ClassType;
extern eC_Class * class_Container;
extern eC_Class * class_CustomAVLTree;
extern eC_Class * class_DataMember;
extern eC_Class * class_DataMemberType;
extern eC_Class * class_DataValue;
extern eC_Class * class_DefinedExpression;
extern eC_Class * class_DesignerBase;
extern eC_Class * class_EnumClassData;
extern eC_Class * class_GlobalFunction;
extern eC_Class * class_HashMap;
extern eC_Class * class_HashMapIterator;
extern eC_Class * class_HashTable;
extern eC_Class * class_IOChannel;
extern eC_Class * class_ImportType;
extern eC_Class * class_Instance;
extern eC_Class * class_Iterator;
extern eC_Class * class_IteratorPointer;
extern eC_Class * class_Link;
extern eC_Class * class_LinkElement;
extern eC_Class * class_LinkList;
extern eC_Class * class_List;
extern eC_Class * class_ListItem;
extern eC_Class * class_Map;
extern eC_Class * class_MapIterator;
extern eC_Class * class_MapNode;
extern eC_Class * class_Method;
extern eC_Class * class_MethodType;
extern eC_Class * class_Module;
extern eC_Class * class_NameSpace;
extern eC_Class * class_ObjectInfo;
extern eC_Class * class_ObjectNotationType;
extern eC_Class * class_Platform;
extern eC_Class * class_Property;
extern eC_Class * class_SerialBuffer;
extern eC_Class * class_StaticString;
extern eC_Class * class_SubModule;
extern eC_Class * class_TemplateMemberType;
extern eC_Class * class_TemplateParameterType;


////////////////////////////////////////////////// dll function imports //////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////
//////////////////////////////////////////////////////////////////////////////// ////////////////


extern const char * getTranslatedString(constString name, const char * string, const char * stringAndContext);
extern void loadTranslatedStrings(constString moduleName, const char * name);
extern void unloadTranslatedStrings(constString name);
extern void memoryGuard_popLoc(void);
extern void memoryGuard_pushLoc(const char * loc);
extern eC_Application eC_initApp(eC_bool guiApp, int argc, char * argv[]);
extern eC_BitMember * Class_addBitMember(eC_Class * _class, const char * name, const char * type, int bitSize, int bitPos, eC_AccessMode declMode);
extern eC_ClassProperty * Class_addClassProperty(eC_Class * _class, const char * name, const char * dataType, void * setStmt, void * getStmt);
extern eC_DataMember * Class_addDataMember(eC_Class * _class, const char * name, const char * type, uint size, uint alignment, eC_AccessMode declMode);
extern eC_bool Class_addMember(eC_Class * _class, eC_DataMember * dataMember);
extern eC_Method * Class_addMethod(eC_Class * _class, const char * name, const char * type, void * function, eC_AccessMode declMode);
extern eC_Property * Class_addProperty(eC_Class * _class, const char * name, const char * dataType, void * setStmt, void * getStmt, eC_AccessMode declMode);
extern eC_ClassTemplateParameter * Class_addTemplateParameter(eC_Class * _class, const char * name, eC_TemplateParameterType type, const void * info, eC_ClassTemplateArgument * defaultArg);
extern eC_Method * Class_addVirtualMethod(eC_Class * _class, const char * name, const char * type, void * function, eC_AccessMode declMode);
extern void Class_destructionWatchable(eC_Class * _class);
extern void Class_doneAddingTemplateParameters(eC_Class * base);
extern eC_ClassProperty * Class_findClassProperty(eC_Class * _class, const char * name);
extern eC_DataMember * Class_findDataMember(eC_Class * _class, const char * name, eC_Module module, eC_DataMember * subMemberStack, int * subMemberStackPos);
extern eC_DataMember * Class_findDataMemberAndId(eC_Class * _class, const char * name, int * id, eC_Module module, eC_DataMember * subMemberStack, int * subMemberStackPos);
extern eC_DataMember * Class_findDataMemberAndOffset(eC_Class * _class, const char * name, uint * offset, eC_Module module, eC_DataMember * subMemberStack, int * subMemberStackPos);
extern eC_Method * Class_findMethod(eC_Class * _class, const char * name, eC_Module module);
extern void Class_findNextMember(eC_Class * _class, eC_Class * curClass, eC_DataMember * curMember, eC_DataMember * subMemberStack, int * subMemberStackPos);
extern eC_Property * Class_findProperty(eC_Class * _class, const char * name, eC_Module module);
extern eC_Class * Class_getDesigner(eC_Class * _class);
extern int64 Class_getProperty(eC_Class * _class, const char * name);
extern eC_bool Class_isDerived(eC_Class * _class, eC_Class * from);
extern void Class_resize(eC_Class * _class, int newSize);
extern void Class_setProperty(eC_Class * _class, const char * name, int64 value);
extern void Class_unregister(eC_Class * _class);
extern void Enum_addFixedValue(eC_Class * _class, const char * string, int64 value);
extern int64 Enum_addValue(eC_Class * _class, const char * string);
extern void Instance_decRef(eC_Instance instance);
extern void Instance_delete(eC_Instance instance);
extern void Instance_evolve(eC_Instance * instancePtr, eC_Class * _class);
extern void Instance_fireSelfWatchers(eC_Instance instance, eC_Property * _property);
extern void Instance_fireWatchers(eC_Instance instance, eC_Property * _property);
extern eC_Class * Instance_getDesigner(eC_Instance instance);
extern void Instance_incRef(eC_Instance instance);
extern eC_bool Instance_isDerived(eC_Instance instance, eC_Class * from);
extern void * Instance_new(eC_Class * _class);
extern void * Instance_newEx(eC_Class * _class, eC_bool bindingsAlloc);
extern void Instance_setMethod(eC_Instance instance, const char * name, void * function);
extern void Instance_stopWatching(eC_Instance instance, eC_Property * _property, eC_Instance object);
extern void Instance_watch(eC_Instance instance, eC_Property * _property, void * object, void (* callback)(void *, void *));
extern void Instance_watchDestruction(eC_Instance instance, eC_Instance object, void (* callback)(void *, void *));
extern eC_DataMember * Member_addDataMember(eC_DataMember * member, const char * name, const char * type, uint size, uint alignment, eC_AccessMode declMode);
extern eC_bool Member_addMember(eC_DataMember * addTo, eC_DataMember * dataMember);
extern eC_DataMember * Member_new(eC_DataMemberType type, eC_AccessMode declMode);
extern eC_Module Module_load(eC_Module fromModule, const char * name, eC_AccessMode importAccess);
extern eC_Module Module_loadStatic(eC_Module fromModule, const char * name, eC_AccessMode importAccess, eC_bool (* Load)(eC_Module module), eC_bool (* Unload)(eC_Module module));
extern eC_Module Module_loadStrict(eC_Module fromModule, const char * name, eC_AccessMode importAccess);
extern void Module_unload(eC_Module fromModule, eC_Module module);
extern void Property_selfWatch(eC_Class * _class, const char * name, void (* callback)(void *));
extern void Property_watchable(eC_Property * _property);
extern void eC_delete(void * memory);
extern eC_Class * eC_findClass(eC_Module module, const char * name);
extern eC_DefinedExpression * eC_findDefine(eC_Module module, const char * name);
extern eC_GlobalFunction * eC_findFunction(eC_Module module, const char * name);
extern void * eC_new(uint size);
extern void * eC_new0(uint size);
extern eC_Class * eC_registerClass(eC_ClassType type, const char * name, const char * baseName, int size, int sizeClass, eC_bool (* Constructor)(void *), void (* Destructor)(void *), eC_Module module, eC_AccessMode declMode, eC_AccessMode inheritanceAccess);
extern eC_DefinedExpression * eC_registerDefine(const char * name, const char * value, eC_Module module, eC_AccessMode declMode);
extern eC_GlobalFunction * eC_registerFunction(const char * name, const char * type, void * func, eC_Module module, eC_AccessMode declMode);
extern void * eC_renew(void * memory, uint size);
extern void * eC_renew0(void * memory, uint size);
extern void eC_setArgs(eC_Application app, int argc, char * argv[]);
extern void eC_setPoolingDisabled(eC_bool disabled);

extern eC_Module __thisModule;

extern eC_Application eC_init(eC_Module fromModule, eC_bool loadEcere, eC_bool guiApp, int argc, char * argv[]);

/*
uint64 TAc(char x);
uint64 TAb(byte x);
uint64 TAs(short x);
uint64 TAus(uint16 x);
uint64 TAi(int x);
uint64 TAui(uint x);
uint64 TAi64(int64 x);
uint64 TAui64(uint64 x);
uint64 TAf(float x);
uint64 TAd(double x);
uint64 TAp(void * x);
uint64 TAo(Instance x);
*/

void * pTAvoid(uint64 x);
eC_Instance oTAInstance(uint64 x);
