#define jsonIndentWidth 3

typedef eC_LinkElement template_LinkElement_FMFont;
typedef eC_Array template_Array_BlockEntry;
typedef eC_Array template_Array_String;
typedef eC_Array template_Array_SkinVert;
typedef eC_Array template_Array_SkinBone;
typedef eC_Array template_Array_MeshPart;
typedef eC_Array template_Array_MeshMorph;
typedef eC_Array template_Array_int;
typedef eC_Array template_Array_Window;
typedef eC_Map template_Map_String_JSONTypeOptions;
typedef eC_Instance eC_Bitmap;
typedef uint32 eC_ColorAlpha;
typedef eC_Instance eC_DisplaySystem;
typedef int eC_PixelFormat;
enum
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

struct class_members_Bitmap
{
   int width;
   int height;
   eC_PixelFormat pixelFormat;
   byte * picture;
   uint stride;
   uint size;
   uint sizeBytes;
   eC_ColorAlpha * palette;
   eC_bool allocatePalette;
   eC_bool transparent;
   int shadeShift;
   byte * paletteShades;
   eC_bool alphaBlend;
   eC_DisplaySystem displaySystem;
   eC_Class * driver;
   void * driverData;
   eC_bool keepData;
   eC_bool mipMaps;
   eC_bool sRGB2Linear;
   int numMipMaps;
   eC_Bitmap * bitmaps;
};
struct eC_Box
{
   int left;
   int top;
   int right;
   int bottom;
};
struct eC_CompiledShader
{
   int program;
   int vertex;
   int fragment;
};
typedef uint64 eC_DefaultShaderBits;
struct class_members_DefaultShader
{
   byte __ecerePrivateData0[13184];
   eC_DefaultShaderBits backLightState;
};
struct class_members_Display
{
   int width;
   int height;
   void * driverData;
   byte __ecere_padding[64];
};
struct eC_Font
{
   byte __ecere_padding[688];
};
struct eC_GLB
{
   uint buffer;
};
typedef uint64 eC_BlockEntry;
typedef struct eC_Box eC_Box;
typedef eC_Instance eC_Camera;
typedef int eC_ClearType;
enum
{
   ClearType_colorBuffer = 0x0,
   ClearType_depthBuffer = 0x1,
   ClearType_colorAndDepth = 0x2
};

typedef uint32 eC_Color;
typedef struct eC_CompiledDefaultShader eC_CompiledDefaultShader;
typedef struct eC_CompiledShader eC_CompiledShader;
typedef eC_Instance eC_Shader;
typedef eC_Shader eC_DefaultShader;
typedef eC_Instance eC_Display;
typedef eC_Instance eC_DisplayDriver;
typedef struct eC_Font eC_Font;
typedef template_Array_BlockEntry eC_FreeBlockMap;
typedef struct eC_GLAB eC_GLAB;
typedef int eC_GLAttribMode;
enum
{
   GLAttribMode_none = 0x0,
   GLAttribMode_normalized = 0x1,
   GLAttribMode_integer = 0x2,
   GLAttribMode_longDouble = 0x3
};

typedef struct eC_GLB eC_GLB;
typedef int eC_GLBType;
enum
{
   GLBType_elements = 0x0,
   GLBType_attributes = 0x1,
   GLBType_commands = 0x2
};

typedef int eC_GLBufferContents;
enum
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

typedef int eC_GLBufferUsage;
enum
{
   GLBufferUsage_staticDraw = 0x0,
   GLBufferUsage_dynamicDraw = 0x1,
   GLBufferUsage_streamDraw = 0x2
};

typedef struct eC_GLCAB eC_GLCAB;
typedef struct eC_GLEAB eC_GLEAB;
typedef struct eC_GLFB eC_GLFB;
typedef int eC_GLIMTKMode;
enum
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

typedef eC_FreeBlockMap eC_GLMB;
typedef int eC_GLMSWhatToGet;
enum
{
   GLMSWhatToGet_modelViewMatrix = 0xBA6,
   GLMSWhatToGet_projectionMatrix = 0xBA7,
   GLMSWhatToGet_textureMatrix = 0xBA8
};

typedef struct eC_Light eC_Light;
typedef struct eC_Material eC_Material;
typedef struct eC_Matrix eC_Matrix;
typedef int eC_MatrixMode;
enum
{
   MatrixMode_modelView = 0x1700,
   MatrixMode_projection = 0x1701,
   MatrixMode_texture = 0x1702
};

typedef struct eC_Matrixf eC_Matrixf;
typedef uint32 eC_MeshFeatures;
typedef uint32 eC_ShaderModifiedUniforms;
typedef int eC_SwizzleMode;
enum
{
   SwizzleMode_off = 0x0,
   SwizzleMode_alpha = 0x1,
   SwizzleMode_red = 0x2
};

#define LIGHTSHIFT 5

#define LIGHTSTEPS 32

typedef eC_Instance eC_GLStats;
typedef struct eC_LFBDisplay eC_LFBDisplay;
typedef eC_DisplayDriver eC_LFBDisplayDriver;
typedef struct eC_LFBSurface eC_LFBSurface;
typedef struct eC_LFBSystem eC_LFBSystem;
typedef int eC_LightMode;
enum
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
#define BLOCKENTRY_end_SHIFT                             0
#define BLOCKENTRY_end_MASK                              0xFFFFFFFF


struct eC_CompiledDefaultShader
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
   eC_bool initialSetup;
   eC_bool useNearPlane;
};
extern void (* CompiledDefaultShader_registerUniforms)(eC_CompiledDefaultShader * __this, int program, eC_DefaultShaderBits state);

extern void (* CompiledShader_free)(eC_CompiledShader * __this);

extern void (* DefaultShader_debugging)(eC_DefaultShader __this, eC_bool on);

extern void (* DefaultShader_fog)(eC_DefaultShader __this, eC_bool on);

extern void (* DefaultShader_lighting)(eC_DefaultShader __this, eC_bool on);

extern void (* DefaultShader_setBoneMatrices)(eC_DefaultShader __this, int n, const eC_Matrixf * matrices);

extern void (* DefaultShader_setCamera)(eC_DefaultShader __this, eC_Camera camera);

extern void (* DefaultShader_setColor)(eC_DefaultShader __this, float r, float g, float b, float a);

extern void (* DefaultShader_setFogColor)(eC_DefaultShader __this, float r, float g, float b);

extern void (* DefaultShader_setFogDensity)(eC_DefaultShader __this, float density);

extern void (* DefaultShader_setGlobalAmbient)(eC_DefaultShader __this, float r, float g, float b, float a);

extern void (* DefaultShader_setLight)(eC_DefaultShader __this, eC_Display display, uint id, eC_Light * light);

extern void (* DefaultShader_setPerVertexColor)(eC_DefaultShader __this, eC_bool perVertexColor);

extern void (* DefaultShader_setSimpleMaterial)(eC_DefaultShader __this, eC_ColorAlpha color, eC_bool twoSided);

extern eC_DefaultShader (* DefaultShader_shader)(void);

extern void (* DefaultShader_swizzle)(eC_DefaultShader __this, eC_SwizzleMode swizzle);

extern void (* DefaultShader_texturing)(eC_DefaultShader __this, eC_bool on);

extern void (* DefaultShader_useExternalTexture)(eC_DefaultShader __this, eC_bool on);

extern eC_Property * property_DefaultShader_blackTint;
extern void (* DefaultShader_set_blackTint)(const eC_DefaultShader d, eC_Color value);

#define DEFAULTSHADERBITS_lighting_SHIFT                 0
#define DEFAULTSHADERBITS_lighting_MASK                  0x1
#define DEFAULTSHADERBITS_nonLocalViewer_SHIFT           1
#define DEFAULTSHADERBITS_nonLocalViewer_MASK            0x2
#define DEFAULTSHADERBITS_twoSided_SHIFT                 2
#define DEFAULTSHADERBITS_twoSided_MASK                  0x4
#define DEFAULTSHADERBITS_specular_SHIFT                 3
#define DEFAULTSHADERBITS_specular_MASK                  0x8
#define DEFAULTSHADERBITS_separateSpecular_SHIFT         4
#define DEFAULTSHADERBITS_separateSpecular_MASK          0x10
#define DEFAULTSHADERBITS_blinnSpecular_SHIFT            5
#define DEFAULTSHADERBITS_blinnSpecular_MASK             0x20
#define DEFAULTSHADERBITS_lightBits_SHIFT                6
#define DEFAULTSHADERBITS_lightBits_MASK                 0x3FFFFFC0
#define DEFAULTSHADERBITS_perVertexColor_SHIFT           30
#define DEFAULTSHADERBITS_perVertexColor_MASK            0x40000000
#define DEFAULTSHADERBITS_swizzle_SHIFT                  31
#define DEFAULTSHADERBITS_swizzle_MASK                   0x180000000LL
#define DEFAULTSHADERBITS_textureMatrix_SHIFT            33
#define DEFAULTSHADERBITS_textureMatrix_MASK             0x200000000LL
#define DEFAULTSHADERBITS_texturing_SHIFT                34
#define DEFAULTSHADERBITS_texturing_MASK                 0x400000000LL
#define DEFAULTSHADERBITS_alphaTest_SHIFT                35
#define DEFAULTSHADERBITS_alphaTest_MASK                 0x800000000LL
#define DEFAULTSHADERBITS_cubeMap_SHIFT                  36
#define DEFAULTSHADERBITS_cubeMap_MASK                   0x1000000000LL
#define DEFAULTSHADERBITS_modelView_SHIFT                37
#define DEFAULTSHADERBITS_modelView_MASK                 0x2000000000LL
#define DEFAULTSHADERBITS_fog_SHIFT                      38
#define DEFAULTSHADERBITS_fog_MASK                       0x4000000000LL
#define DEFAULTSHADERBITS_normalsMapping_SHIFT           39
#define DEFAULTSHADERBITS_normalsMapping_MASK            0x8000000000LL
#define DEFAULTSHADERBITS_specularMapping_SHIFT          40
#define DEFAULTSHADERBITS_specularMapping_MASK           0x10000000000LL
#define DEFAULTSHADERBITS_environmentMapping_SHIFT       41
#define DEFAULTSHADERBITS_environmentMapping_MASK        0x20000000000LL
#define DEFAULTSHADERBITS_reflection_SHIFT               42
#define DEFAULTSHADERBITS_reflection_MASK                0x40000000000LL
#define DEFAULTSHADERBITS_reflectionMap_SHIFT            43
#define DEFAULTSHADERBITS_reflectionMap_MASK             0x80000000000LL
#define DEFAULTSHADERBITS_refraction_SHIFT               44
#define DEFAULTSHADERBITS_refraction_MASK                0x100000000000LL
#define DEFAULTSHADERBITS_debugging_SHIFT                45
#define DEFAULTSHADERBITS_debugging_MASK                 0x200000000000LL
#define DEFAULTSHADERBITS_constantColor_SHIFT            46
#define DEFAULTSHADERBITS_constantColor_MASK             0x400000000000LL
#define DEFAULTSHADERBITS_normalsInvScale2_SHIFT         47
#define DEFAULTSHADERBITS_normalsInvScale2_MASK          0x800000000000LL
#define DEFAULTSHADERBITS_externalTexture_SHIFT          48
#define DEFAULTSHADERBITS_externalTexture_MASK           0x1000000000000LL
#define DEFAULTSHADERBITS_blackTint_SHIFT                49
#define DEFAULTSHADERBITS_blackTint_MASK                 0x2000000000000LL
#define DEFAULTSHADERBITS_textureArray_SHIFT             50
#define DEFAULTSHADERBITS_textureArray_MASK              0x4000000000000LL
#define DEFAULTSHADERBITS_multiDraw_SHIFT                51
#define DEFAULTSHADERBITS_multiDraw_MASK                 0x8000000000000LL
#define DEFAULTSHADERBITS_transform3D_SHIFT              52
#define DEFAULTSHADERBITS_transform3D_MASK               0x10000000000000LL
#define DEFAULTSHADERBITS_squishFactor_SHIFT             53
#define DEFAULTSHADERBITS_squishFactor_MASK              0x20000000000000LL
#define DEFAULTSHADERBITS_bones_SHIFT                    54
#define DEFAULTSHADERBITS_bones_MASK                     0x40000000000000LL


extern eC_BlockEntry (* FreeBlockMap_allocate)(eC_FreeBlockMap __this, eC_GLBType type, uint size);

extern void (* FreeBlockMap_freeBlock)(eC_FreeBlockMap __this, eC_BlockEntry block);

extern int FreeBlockMap_onExpand_vTblID;
uint FreeBlockMap_onExpand(eC_FreeBlockMap __i, eC_GLBType type, uint required);
extern eC_Method * method_FreeBlockMap_onExpand;

struct eC_GLAB
{
   uint buffer;
};
extern void (* GLAB_use)(eC_GLAB * __this, eC_GLBufferContents contents, int n, int type, uint stride, eC_GLAttribMode mode, const void * pointer);

extern void (* GLAB_useVertTrans)(eC_GLAB * __this, uint count, int n, int type, uint stride, eC_GLAttribMode mode, const void * pointer);

extern eC_bool (* GLB__allocate)(eC_GLB * __this, eC_GLBType type, uint size, const void * data, eC_GLBufferUsage usage);

extern void (* GLB__upload)(eC_GLB * __this, eC_GLBType type, uint offset, uint size, const void * data);

extern eC_bool (* GLB_allocate)(eC_GLB * __this, uint size, const void * data, eC_GLBufferUsage usage);

extern void (* GLB_copy)(eC_GLB * __this, eC_GLB * src, uint srcStart, uint dstStart, uint size);

extern void (* GLB_deleteBuffers)(int count, eC_GLB * buffers);

extern void (* GLB_free)(eC_GLB * __this);

extern eC_bool (* GLB_resize)(eC_GLB * __this, eC_GLBType type, uint oldSize, uint newSize, eC_GLBufferUsage usage, eC_bool keepSameBufferID);

extern void (* GLB_upload)(eC_GLB * __this, uint offset, uint size, const void * data);

struct eC_GLCAB
{
   uint buffer;
};
extern eC_bool (* GLCAB_allocate)(eC_GLCAB * __this, uint size, const void * data, eC_GLBufferUsage usage);

extern void (* GLCAB_upload)(eC_GLCAB * __this, uint offset, uint size, const void * data);

struct eC_GLEAB
{
   uint buffer;
};
extern eC_bool (* GLEAB_allocate)(eC_GLEAB * __this, uint size, const void * data, eC_GLBufferUsage usage);

extern void (* GLEAB_draw)(eC_GLEAB * __this, int primType, int count, int type, const void * indices);

extern void (* GLEAB_draw2)(eC_GLEAB * __this, int primType, int count, int type, const void * indices, uint baseVertex);

extern void (* GLEAB_upload)(eC_GLEAB * __this, uint offset, uint size, const void * data);

struct eC_GLFB
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
extern void (* GLFB_copy)(eC_GLFB * __this, const eC_GLFB * src, const eC_Box * srcExtent, const eC_Box * dstExtent, eC_ClearType buffers, eC_bool filter);

extern void (* GLFB_copyToTexture)(eC_GLFB * __this);

extern void (* GLFB_free)(eC_GLFB * __this);

extern void (* GLFB_read)(eC_GLFB * __this, eC_Bitmap bitmap, eC_ClearType buffer, eC_bool sRGB);

extern eC_bool (* GLFB_setup)(eC_GLFB * __this, eC_bool textureFBO, eC_bool allocTextures, int samples, int colorFormat, int depthFormat, int width, int height);

struct class_members_GLMB
{
   eC_GLB ab;
   eC_bool keepSameBufferID;
};
extern void (* GLMB_free)(eC_GLMB __this);

extern void (* GLMB_printStats)(eC_GLMB __this);

extern void (* GLStats_allocBuffer)(uint buf, uint size);

extern void (* GLStats_allocTexture)(uint tex, uint w, uint h, eC_bool mipMaps);

extern void (* GLStats_freeBuffers)(uint count, uint * bufs);

extern void (* GLStats_freeTextures)(uint count, uint * texs);

extern void (* GLStats_print)(void);

extern void (* GLStats_printBuf)(char * output, uint size);

struct eC_LFBDisplay
{
   eC_Bitmap bitmap;
   byte rgbLookup[32768];
   byte lightTable[256][LIGHTSTEPS];
   eC_OldList updateBoxes;
   int x;
   int y;
   eC_bool selfManaged;
   void (* displayCallback)(eC_Display display, eC_Box * updateBox);
};
struct eC_LFBSurface
{
   eC_Font * font;
   eC_bool opaqueText;
   int xOffset;
   eC_bool writingText;
   eC_bool writingOutline;
   eC_Bitmap bitmap;
   uint foreground;
   uint background;
   eC_ColorAlpha foregroundRgb;
   uint16 stipple;
   byte drawingChar;
   byte * paletteShades;
   eC_bool clearing;
};
struct eC_LFBSystem
{
   int format;
   eC_ColorAlpha * palette;
   byte rgbLookup[32768];
};
struct class_members_Shader
{
   byte __ecerePrivateData0[24];
   uint64 state;
   eC_ShaderModifiedUniforms modifiedUniforms;
   byte __ecere_padding[44];
};
extern eC_bool (* Shader_activate)(eC_Shader __this);

extern int Shader_bindAttribs_vTblID;
void Shader_bindAttribs(eC_Shader __i, int program);
extern eC_Method * method_Shader_bindAttribs;

extern void (* Shader_free)(eC_Shader __this);

extern int Shader_getDefinitions_vTblID;
eC_ZString Shader_getDefinitions(eC_Shader __i, uint64 state);
extern eC_Method * method_Shader_getDefinitions;

extern eC_CompiledShader * (* Shader_load)(eC_Shader __this, uint64 state);

extern int Shader_registerShader_vTblID;
eC_CompiledShader * Shader_registerShader(eC_Shader __i, int program, uint64 state);
extern eC_Method * method_Shader_registerShader;

extern void (* Shader_select)(eC_Shader __this);

extern int Shader_setMaterial_vTblID;
void Shader_setMaterial(eC_Shader __i, eC_Material * material, eC_MeshFeatures flags);
extern eC_Method * method_Shader_setMaterial;

extern int Shader_setupDrawCommand_vTblID;
void Shader_setupDrawCommand(eC_Shader __i, eC_GLAB * ab, uint vertexStride, uint baseVertex, uint drawID, void * transform);
extern eC_Method * method_Shader_setupDrawCommand;

extern int Shader_updateMatrix_vTblID;
void Shader_updateMatrix(eC_Shader __i, eC_MatrixMode mode, float * matrix, eC_bool isIdentity);
extern eC_Method * method_Shader_updateMatrix;

extern int Shader_uploadUniforms_vTblID;
void Shader_uploadUniforms(eC_Shader __i, eC_CompiledShader * shader);
extern eC_Method * method_Shader_uploadUniforms;

extern eC_Property * property_Shader_vertexShaderFile;
extern void (* Shader_set_vertexShaderFile)(const eC_Shader s, constString value);

extern eC_Property * property_Shader_fragmentShaderFile;
extern void (* Shader_set_fragmentShaderFile)(const eC_Shader s, constString value);

extern eC_Property * property_Shader_vertexShader;
extern void (* Shader_set_vertexShader)(const eC_Shader s, constString value);

extern eC_Property * property_Shader_fragmentShader;
extern void (* Shader_set_fragmentShader)(const eC_Shader s, constString value);

extern eC_Property * property_Shader_activeCompiledShader;
extern eC_CompiledShader * (* Shader_get_activeCompiledShader)(const eC_Shader s);

#define SHADERMODIFIEDUNIFORMS_matMV_SHIFT               0
#define SHADERMODIFIEDUNIFORMS_matMV_MASK                0x1
#define SHADERMODIFIEDUNIFORMS_light_SHIFT               1
#define SHADERMODIFIEDUNIFORMS_light_MASK                0x2
#define SHADERMODIFIEDUNIFORMS_material_SHIFT            2
#define SHADERMODIFIEDUNIFORMS_material_MASK             0x4
#define SHADERMODIFIEDUNIFORMS_matPrj_SHIFT              3
#define SHADERMODIFIEDUNIFORMS_matPrj_MASK               0x8
#define SHADERMODIFIEDUNIFORMS_matTex_SHIFT              4
#define SHADERMODIFIEDUNIFORMS_matTex_MASK               0x10
#define SHADERMODIFIEDUNIFORMS_pos_SHIFT                 5
#define SHADERMODIFIEDUNIFORMS_pos_MASK                  0x20
#define SHADERMODIFIEDUNIFORMS_layer_SHIFT               6
#define SHADERMODIFIEDUNIFORMS_layer_MASK                0x40


extern void (* eC_gLABBindBuffer)(int target, uint buffer);
extern void (* eC_gLABBindVertexArray)(uint vao);
extern void (* eC_gLSetupFog)(eC_bool enable);
extern void (* eC_gLSetupLighting)(eC_bool enable);
extern void (* eC_gLSetupTexturing)(eC_bool enable);
extern void (* eC_useSingleGLContext)(eC_bool useSingle);
extern void (* eC_glimtkBegin)(eC_GLIMTKMode mode);
extern void (* eC_glimtkColor3f)(float r, float g, float b);
extern void (* eC_glimtkColor4f)(float r, float g, float b, float a);
extern void (* eC_glimtkColor4fv)(float * a);
extern void (* eC_glimtkColor4ub)(byte r, byte g, byte b, byte a);
extern void (* eC_glimtkEnd)(void);
extern void (* eC_glimtkNormal3d)(double x, double y, double z);
extern void (* eC_glimtkNormal3f)(float x, float y, float z);
extern void (* eC_glimtkNormal3fd)(double * coords);
extern void (* eC_glimtkNormal3fv)(float * coords);
extern void (* eC_glimtkRecti)(int a, int b, int c, int d);
extern void (* eC_glimtkTexCoord2d)(double x, double y);
extern void (* eC_glimtkTexCoord2f)(float x, float y);
extern void (* eC_glimtkTexCoord2fv)(float * a);
extern void (* eC_glimtkTexCoord2i)(int x, int y);
extern void (* eC_glimtkVertex2d)(double x, double y);
extern void (* eC_glimtkVertex2f)(float x, float y);
extern void (* eC_glimtkVertex2i)(int x, int y);
extern void (* eC_glimtkVertex3d)(double x, double y, double z);
extern void (* eC_glimtkVertex3dv)(double * coords);
extern void (* eC_glimtkVertex3f)(float x, float y, float z);
extern void (* eC_glimtkVertex3fv)(float * coords);
extern void (* eC_glmsFlushMatrices)(void);
extern void (* eC_glmsFrustum)(double l, double r, double b, double t, double n, double f);
extern void (* eC_glmsGetDoublev)(eC_GLMSWhatToGet what, double * i);
extern double (* eC_glmsGetNearPlane)(void);
extern void (* eC_glmsLoadIdentity)(void);
extern void (* eC_glmsLoadMatrix)(eC_Matrix * matrix);
extern void (* eC_glmsLoadMatrixd)(double * i);
extern void (* eC_glmsLoadMatrixf)(float * i);
extern void (* eC_glmsMatrixMode)(eC_MatrixMode mode);
extern void (* eC_glmsMultMatrixd)(double * i);
extern void (* eC_glmsMultMatrixf)(float * i);
extern void (* eC_glmsOrtho)(double l, double r, double b, double t, double n, double f);
extern void (* eC_glmsPopMatrix)(void);
extern void (* eC_glmsPushMatrix)(void);
extern void (* eC_glmsRotated)(double angle, double x, double y, double z);
extern void (* eC_glmsScaled)(double a, double b, double c);
extern void (* eC_glmsSetNearPlane)(double value);
extern void (* eC_glmsTranslated)(double a, double b, double c);
extern void (* eC_glsupLightModeli)(uint pname, int param);
extern void (* eC_glsupLineStipple)(int i, uint16 j);
typedef uint32 eC_FileAttribs;
typedef int64 eC_SecSince1970;
struct eC_FileStats
{
   eC_FileAttribs attribs;
   uint64 size;
   eC_SecSince1970 accessed;
   eC_SecSince1970 modified;
   eC_SecSince1970 created;
};
typedef eC_Instance eC_Archive;
typedef int eC_ArchiveAddMode;
enum
{
   ArchiveAddMode_replace = 0x0,
   ArchiveAddMode_refresh = 0x1,
   ArchiveAddMode_update = 0x2,
   ArchiveAddMode_readOnlyDir = 0x3
};

typedef eC_Instance eC_ArchiveDir;
typedef uint32 eC_ArchiveOpenFlags;
typedef eC_IOChannel eC_File;
typedef eC_File eC_BufferedFile;
typedef eC_CommonControl eC_Button;
typedef uint32 eC_CharCategories;
typedef int eC_CharCategory;
enum
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

typedef struct eC_Condition eC_Condition;
typedef struct eC_Date eC_Date;
typedef struct eC_DateTime eC_DateTime;
typedef int eC_DayOfTheWeek;
enum
{
   DayOfTheWeek_sunday = 0x0,
   DayOfTheWeek_monday = 0x1,
   DayOfTheWeek_tuesday = 0x2,
   DayOfTheWeek_wednesday = 0x3,
   DayOfTheWeek_thursday = 0x4,
   DayOfTheWeek_friday = 0x5,
   DayOfTheWeek_saturday = 0x6
};

typedef eC_File eC_DualPipe;
typedef uint32 eC_ErrorCode;
typedef int eC_ErrorLevel;
enum
{
   ErrorLevel_veryFatal = 0x0,
   ErrorLevel_fatal = 0x1,
   ErrorLevel_major = 0x2,
   ErrorLevel_minor = 0x3
};

typedef uint32 eC_FileChange;
typedef struct eC_FileListing eC_FileListing;
typedef int eC_FileLock;
enum
{
   FileLock_unlocked = 0x0,
   FileLock_shared = 0x1,
   FileLock_exclusive = 0x2
};

typedef eC_Instance eC_FileMonitor;
typedef int eC_FileOpenMode;
enum
{
   FileOpenMode_read = 0x1,
   FileOpenMode_write = 0x2,
   FileOpenMode_append = 0x3,
   FileOpenMode_readWrite = 0x4,
   FileOpenMode_writeRead = 0x5,
   FileOpenMode_appendRead = 0x6
};

typedef int eC_FileSeekMode;
enum
{
   FileSeekMode_start = 0x0,
   FileSeekMode_current = 0x1,
   FileSeekMode_end = 0x2
};

typedef uint eC_FileSize;
typedef uint64 eC_FileSize64;
typedef struct eC_FileStats eC_FileStats;
typedef eC_Instance eC_GlobalSettings;
typedef eC_GlobalSettings eC_GlobalAppSettings;
typedef int eC_GlobalSettingType;
enum
{
   GlobalSettingType_integer = 0x0,
   GlobalSettingType_singleString = 0x1,
   GlobalSettingType_stringList = 0x2
};

typedef eC_Instance eC_GlobalSettingsData;
typedef eC_Instance eC_GlobalSettingsDriver;
typedef int eC_JSONFirstLetterCapitalization;
enum
{
   JSONFirstLetterCapitalization_keepCase = 0x0,
   JSONFirstLetterCapitalization_upperCase = 0x1,
   JSONFirstLetterCapitalization_lowerCase = 0x2
};

typedef eC_Instance eC_JSONParser;
typedef int eC_JSONResult;
enum
{
   JSONResult_syntaxError = 0x0,
   JSONResult_success = 0x1,
   JSONResult_typeMismatch = 0x2,
   JSONResult_noItem = 0x3
};

typedef int eC_LoggingMode;
enum
{
   LoggingMode_noLogging = 0x0,
   LoggingMode_stdOut = 0x1,
   LoggingMode_stdErr = 0x2,
   LoggingMode_debug = 0x3,
   LoggingMode_logFile = 0x4,
   LoggingMode_msgBox = 0x5,
   LoggingMode_buffer = 0x6
};

typedef int eC_Month;
enum
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

typedef uint32 eC_MoveFileOptions;
typedef template_Map_String_JSONTypeOptions eC_OptionsMap;
typedef uint32 eC_PipeOpenMode;
typedef struct eC_Point eC_Point;
typedef struct eC_Semaphore eC_Semaphore;
typedef int eC_SettingsIOResult;
enum
{
   SettingsIOResult_error = 0x0,
   SettingsIOResult_success = 0x1,
   SettingsIOResult_fileNotFound = 0x2,
   SettingsIOResult_fileNotCompatibleWithDriver = 0x3
};

typedef eC_File eC_TempFile;
typedef eC_Instance eC_Thread;
typedef int eC_ThreadPriority;
enum
{
   ThreadPriority_normal = 0x0,
   ThreadPriority_aboveNormal = 0x1,
   ThreadPriority_belowNormal = -1,
   ThreadPriority_highest = 0x2,
   ThreadPriority_lowest = -2,
   ThreadPriority_idle = -15,
   ThreadPriority_timeCritical = 0xF
};

typedef double eC_Time;
typedef eC_Instance eC_Timer;
typedef uint32 eC_UnicodeDecomposition;
static const eC_ErrorLevel AllErrors;

#define unicodeCompatibilityMappings 0xffffffff

typedef eC_File eC_ConsoleFile;
typedef double eC_Distance;
typedef eC_GlobalSettingsDriver eC_ECONGlobalSettings;
typedef eC_JSONParser eC_ECONParser;
typedef eC_ErrorCode eC_GuiErrorCode;
enum
{
   GuiErrorCode_driverNotSupported = 0x101,
   GuiErrorCode_windowCreationFailed = 0x102,
   GuiErrorCode_graphicsLoadingFailed = 0x103,
   GuiErrorCode_modeSwitchFailed = 0x104
};

typedef eC_GlobalSettingsDriver eC_JSONGlobalSettings;
typedef uint32 eC_JSONTypeOptions;
typedef struct eC_Pointd eC_Pointd;
typedef struct eC_Pointf eC_Pointf;
typedef eC_CharCategories eC_PredefinedCharCategories;
enum
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

typedef eC_Button eC_RepButton;
typedef uint eC_SetBool;
enum
{
   SetBool_unset = 0x0,
   SetBool_false = 0x1,
   SetBool_true = 0x2
};

typedef eC_ErrorCode eC_SysErrorCode;
enum
{
   SysErrorCode_allocationFailed = 0x1001,
   SysErrorCode_nameInexistant = 0x1002,
   SysErrorCode_nameExists = 0x1003,
   SysErrorCode_missingLibrary = 0x1004,
   SysErrorCode_fileNotFound = 0x3005,
   SysErrorCode_writeFailed = 0x2006
};

typedef uint eC_TimeStamp32;
extern int Archive_clear_vTblID;
eC_bool Archive_clear(eC_Archive __i);
extern eC_Method * method_Archive_clear;

extern int Archive_fileExists_vTblID;
eC_FileAttribs Archive_fileExists(eC_Archive __i, const char * fileName);
extern eC_Method * method_Archive_fileExists;

extern int Archive_fileOpen_vTblID;
eC_File Archive_fileOpen(eC_Archive __i, const char * fileName);
extern eC_Method * method_Archive_fileOpen;

extern int Archive_fileOpenAtPosition_vTblID;
eC_File Archive_fileOpenAtPosition(eC_Archive __i, uint position);
extern eC_Method * method_Archive_fileOpenAtPosition;

extern int Archive_fileOpenCompressed_vTblID;
eC_File Archive_fileOpenCompressed(eC_Archive __i, const char * fileName, eC_bool * isCompressed, uint64 * ucSize);
extern eC_Method * method_Archive_fileOpenCompressed;

extern int Archive_openDirectory_vTblID;
eC_ArchiveDir Archive_openDirectory(eC_Archive __i, const char * name, eC_FileStats * stats, eC_ArchiveAddMode addMode);
extern eC_Method * method_Archive_openDirectory;

extern int Archive_setBufferRead_vTblID;
void Archive_setBufferRead(eC_Archive __i, uint bufferRead);
extern eC_Method * method_Archive_setBufferRead;

extern int Archive_setBufferSize_vTblID;
void Archive_setBufferSize(eC_Archive __i, uint bufferSize);
extern eC_Method * method_Archive_setBufferSize;

extern eC_Property * property_Archive_totalSize;
extern void (* Archive_set_totalSize)(const eC_Archive a, eC_FileSize value);
extern eC_FileSize (* Archive_get_totalSize)(const eC_Archive a);

extern eC_Property * property_Archive_bufferSize;
extern void (* Archive_set_bufferSize)(const eC_Archive a, uint value);

extern eC_Property * property_Archive_bufferRead;
extern void (* Archive_set_bufferRead)(const eC_Archive a, uint value);

extern eC_bool (* ArchiveDir_add)(eC_ArchiveDir __this, const char * name, const char * path, eC_ArchiveAddMode addMode, int compression, int * ratio, uint * newPosition);

extern int ArchiveDir_addFromFile_vTblID;
eC_bool ArchiveDir_addFromFile(eC_ArchiveDir __i, const char * name, eC_File input, eC_FileStats * stats, eC_ArchiveAddMode addMode, int compression, int * ratio, uint * newPosition);
extern eC_Method * method_ArchiveDir_addFromFile;

extern int ArchiveDir_addFromFileAtPosition_vTblID;
eC_bool ArchiveDir_addFromFileAtPosition(eC_ArchiveDir __i, uint position, const char * name, eC_File input, eC_FileStats * stats, eC_ArchiveAddMode addMode, int compression, int * ratio, uint * newPosition);
extern eC_Method * method_ArchiveDir_addFromFileAtPosition;

extern int ArchiveDir_delete_vTblID;
eC_bool ArchiveDir_delete(eC_ArchiveDir __i, const char * fileName);
extern eC_Method * method_ArchiveDir_delete;

extern int ArchiveDir_fileExists_vTblID;
eC_FileAttribs ArchiveDir_fileExists(eC_ArchiveDir __i, const char * fileName);
extern eC_Method * method_ArchiveDir_fileExists;

extern int ArchiveDir_fileOpen_vTblID;
eC_File ArchiveDir_fileOpen(eC_ArchiveDir __i, const char * fileName);
extern eC_Method * method_ArchiveDir_fileOpen;

extern int ArchiveDir_move_vTblID;
eC_bool ArchiveDir_move(eC_ArchiveDir __i, const char * name, eC_ArchiveDir to);
extern eC_Method * method_ArchiveDir_move;

extern int ArchiveDir_openDirectory_vTblID;
eC_ArchiveDir ArchiveDir_openDirectory(eC_ArchiveDir __i, const char * name, eC_FileStats * stats, eC_ArchiveAddMode addMode);
extern eC_Method * method_ArchiveDir_openDirectory;

extern int ArchiveDir_rename_vTblID;
eC_bool ArchiveDir_rename(eC_ArchiveDir __i, const char * name, const char * newName);
extern eC_Method * method_ArchiveDir_rename;

#define ARCHIVEOPENFLAGS_writeAccess_SHIFT               0
#define ARCHIVEOPENFLAGS_writeAccess_MASK                0x1
#define ARCHIVEOPENFLAGS_buffered_SHIFT                  1
#define ARCHIVEOPENFLAGS_buffered_MASK                   0x2
#define ARCHIVEOPENFLAGS_exclusive_SHIFT                 2
#define ARCHIVEOPENFLAGS_exclusive_MASK                  0x4
#define ARCHIVEOPENFLAGS_waitLock_SHIFT                  3
#define ARCHIVEOPENFLAGS_waitLock_MASK                   0x8


extern void (* Box_clip)(eC_Box * __this, eC_Box * against);

extern void (* Box_clipOffset)(eC_Box * __this, eC_Box * against, int x, int y);

extern eC_bool (* Box_isPointInside)(eC_Box * __this, eC_Point * point);

extern eC_bool (* Box_overlap)(eC_Box * __this, eC_Box * box);

extern eC_Property * property_Box_width;
extern void (* Box_set_width)(const eC_Box * b, int value);
extern int (* Box_get_width)(const eC_Box * b);

extern eC_Property * property_Box_height;
extern void (* Box_set_height)(const eC_Box * b, int value);
extern int (* Box_get_height)(const eC_Box * b);

extern eC_Property * property_BufferedFile_handle;
extern void (* BufferedFile_set_handle)(const eC_BufferedFile b, eC_File value);
extern eC_File (* BufferedFile_get_handle)(const eC_BufferedFile b);

extern eC_Property * property_BufferedFile_bufferSize;
extern void (* BufferedFile_set_bufferSize)(const eC_BufferedFile b, uintsize value);
extern uintsize (* BufferedFile_get_bufferSize)(const eC_BufferedFile b);

extern eC_Property * property_BufferedFile_bufferRead;
extern void (* BufferedFile_set_bufferRead)(const eC_BufferedFile b, uintsize value);
extern uintsize (* BufferedFile_get_bufferRead)(const eC_BufferedFile b);

extern eC_Property * property_Centimeters_Meters;
extern double (* Centimeters_from_Meters)(const eC_Distance meters);
extern eC_Distance (* Centimeters_to_Meters)(const double centimeters);

#define CHARCATEGORIES_none_SHIFT                        0
#define CHARCATEGORIES_none_MASK                         0x1
#define CHARCATEGORIES_markNonSpacing_SHIFT              1
#define CHARCATEGORIES_markNonSpacing_MASK               0x2
#define CHARCATEGORIES_markSpacing_SHIFT                 2
#define CHARCATEGORIES_markSpacing_MASK                  0x4
#define CHARCATEGORIES_markEnclosing_SHIFT               3
#define CHARCATEGORIES_markEnclosing_MASK                0x8
#define CHARCATEGORIES_numberDecimalDigit_SHIFT          4
#define CHARCATEGORIES_numberDecimalDigit_MASK           0x10
#define CHARCATEGORIES_numberLetter_SHIFT                5
#define CHARCATEGORIES_numberLetter_MASK                 0x20
#define CHARCATEGORIES_numberOther_SHIFT                 6
#define CHARCATEGORIES_numberOther_MASK                  0x40
#define CHARCATEGORIES_separatorSpace_SHIFT              7
#define CHARCATEGORIES_separatorSpace_MASK               0x80
#define CHARCATEGORIES_separatorLine_SHIFT               8
#define CHARCATEGORIES_separatorLine_MASK                0x100
#define CHARCATEGORIES_separatorParagraph_SHIFT          9
#define CHARCATEGORIES_separatorParagraph_MASK           0x200
#define CHARCATEGORIES_otherControl_SHIFT                10
#define CHARCATEGORIES_otherControl_MASK                 0x400
#define CHARCATEGORIES_otherFormat_SHIFT                 11
#define CHARCATEGORIES_otherFormat_MASK                  0x800
#define CHARCATEGORIES_otherSurrogate_SHIFT              12
#define CHARCATEGORIES_otherSurrogate_MASK               0x1000
#define CHARCATEGORIES_otherPrivateUse_SHIFT             13
#define CHARCATEGORIES_otherPrivateUse_MASK              0x2000
#define CHARCATEGORIES_otherNotAssigned_SHIFT            14
#define CHARCATEGORIES_otherNotAssigned_MASK             0x4000
#define CHARCATEGORIES_letterUpperCase_SHIFT             15
#define CHARCATEGORIES_letterUpperCase_MASK              0x8000
#define CHARCATEGORIES_letterLowerCase_SHIFT             16
#define CHARCATEGORIES_letterLowerCase_MASK              0x10000
#define CHARCATEGORIES_letterTitleCase_SHIFT             17
#define CHARCATEGORIES_letterTitleCase_MASK              0x20000
#define CHARCATEGORIES_letterModifier_SHIFT              18
#define CHARCATEGORIES_letterModifier_MASK               0x40000
#define CHARCATEGORIES_letterOther_SHIFT                 19
#define CHARCATEGORIES_letterOther_MASK                  0x80000
#define CHARCATEGORIES_punctuationConnector_SHIFT        20
#define CHARCATEGORIES_punctuationConnector_MASK         0x100000
#define CHARCATEGORIES_punctuationDash_SHIFT             21
#define CHARCATEGORIES_punctuationDash_MASK              0x200000
#define CHARCATEGORIES_punctuationOpen_SHIFT             22
#define CHARCATEGORIES_punctuationOpen_MASK              0x400000
#define CHARCATEGORIES_punctuationClose_SHIFT            23
#define CHARCATEGORIES_punctuationClose_MASK             0x800000
#define CHARCATEGORIES_punctuationInitial_SHIFT          24
#define CHARCATEGORIES_punctuationInitial_MASK           0x1000000
#define CHARCATEGORIES_punctuationFinal_SHIFT            25
#define CHARCATEGORIES_punctuationFinal_MASK             0x2000000
#define CHARCATEGORIES_punctuationOther_SHIFT            26
#define CHARCATEGORIES_punctuationOther_MASK             0x4000000
#define CHARCATEGORIES_symbolMath_SHIFT                  27
#define CHARCATEGORIES_symbolMath_MASK                   0x8000000
#define CHARCATEGORIES_symbolCurrency_SHIFT              28
#define CHARCATEGORIES_symbolCurrency_MASK               0x10000000
#define CHARCATEGORIES_symbolModifier_SHIFT              29
#define CHARCATEGORIES_symbolModifier_MASK               0x20000000
#define CHARCATEGORIES_symbolOther_SHIFT                 30
#define CHARCATEGORIES_symbolOther_MASK                  0x40000000


struct eC_Condition
{
   byte __ecere_padding[40];
};
extern void (* Condition_signal)(eC_Condition * __this);

extern void (* Condition_wait)(eC_Condition * __this, eC_Mutex * mutex);

extern eC_Property * property_Condition_name;
extern void (* Condition_set_name)(const eC_Condition * c, const char * value);
extern const char * (* Condition_get_name)(const eC_Condition * c);

struct eC_Date
{
   int year;
   eC_Month month;
   int day;
};
extern const char * (* Date_onGetStringEn)(eC_Date * __this, char * stringOutput, void * fieldData, eC_ObjectNotationType * onType);

extern eC_Property * property_Date_dayOfTheWeek;
extern eC_DayOfTheWeek (* Date_get_dayOfTheWeek)(const eC_Date * d);

struct eC_DateTime
{
   int year;
   eC_Month month;
   int day;
   int hour;
   int minute;
   int second;
   eC_DayOfTheWeek dayOfTheWeek;
   int dayInTheYear;
};
extern eC_bool (* DateTime_fixDayOfYear)(eC_DateTime * __this);

extern eC_bool (* DateTime_getLocalTime)(eC_DateTime * __this);

extern eC_Property * property_DateTime_global;
extern void (* DateTime_set_global)(const eC_DateTime * d, const eC_DateTime * value);
extern void (* DateTime_get_global)(const eC_DateTime * d, eC_DateTime * value);

extern eC_Property * property_DateTime_local;
extern void (* DateTime_set_local)(const eC_DateTime * d, const eC_DateTime * value);
extern void (* DateTime_get_local)(const eC_DateTime * d, eC_DateTime * value);

extern eC_Property * property_DateTime_daysSince1970;
extern int64 (* DateTime_get_daysSince1970)(const eC_DateTime * d);

extern eC_Property * property_DateTime_SecSince1970;
extern void (* DateTime_from_SecSince1970)(const eC_DateTime * d, eC_SecSince1970 value);
extern eC_SecSince1970 (* DateTime_to_SecSince1970)(const eC_DateTime * d);

extern eC_Property * property_DateTime_Date;
extern void (* DateTime_from_Date)(const eC_DateTime * d, const eC_Date * value);
extern void (* DateTime_to_Date)(const eC_DateTime * d, eC_Date * value);

extern eC_Property * property_Degrees_Radians;
extern double (* Degrees_from_Radians)(const eC_Angle radians);
extern eC_Angle (* Degrees_to_Radians)(const double degrees);

extern int (* DualPipe_getExitCode)(eC_DualPipe __this);

extern eC_bool (* DualPipe_getLinePeek)(eC_DualPipe __this, char * s, int max, int * charsRead);

extern int (* DualPipe_getProcessID)(eC_DualPipe __this);

extern eC_bool (* DualPipe_peek)(eC_DualPipe __this);

extern void (* DualPipe_terminate)(eC_DualPipe __this);

extern void (* DualPipe_wait)(eC_DualPipe __this);

#define ERRORCODE_level_SHIFT                            12
#define ERRORCODE_level_MASK                             0x3000
#define ERRORCODE_code_SHIFT                             0
#define ERRORCODE_code_MASK                              0xFFF


extern eC_Property * property_Feet_Meters;
extern double (* Feet_from_Meters)(const eC_Distance meters);
extern eC_Distance (* Feet_to_Meters)(const double feet);

extern int File_close_vTblID;
void File_close(eC_File __i);
extern eC_Method * method_File_close;

extern int File_closeInput_vTblID;
void File_closeInput(eC_File __i);
extern eC_Method * method_File_closeInput;

extern int File_closeOutput_vTblID;
void File_closeOutput(eC_File __i);
extern eC_Method * method_File_closeOutput;

extern eC_bool (* File_copyTo)(eC_File __this, const char * outputFileName);

extern eC_bool (* File_copyToFile)(eC_File __this, eC_File f);

extern int File_eof_vTblID;
eC_bool File_eof(eC_File __i);
extern eC_Method * method_File_eof;

extern eC_bool (* File_flush)(eC_File __this);

extern double (* File_getDouble)(eC_File __this);

extern float (* File_getFloat)(eC_File __this);

extern uint (* File_getHexValue)(eC_File __this);

extern eC_bool (* File_getLine)(eC_File __this, char * s, int max);

extern int (* File_getLineEx)(eC_File __this, char * s, int max, eC_bool * hasNewLineChar);

extern int File_getSize_vTblID;
uint64 File_getSize(eC_File __i);
extern eC_Method * method_File_getSize;

extern eC_bool (* File_getString)(eC_File __this, char * string, int max);

extern int (* File_getValue)(eC_File __this);

extern int File_getc_vTblID;
eC_bool File_getc(eC_File __i, char * ch);
extern eC_Method * method_File_getc;

extern int File_lock_vTblID;
eC_bool File_lock(eC_File __i, eC_FileLock type, uint64 start, uint64 length, eC_bool wait);
extern eC_Method * method_File_lock;

extern void (* File_print)(eC_File __this, eC_Class * class_object, const void * object, ...);

extern void (* File_printLn)(eC_File __this, eC_Class * class_object, const void * object, ...);

extern int (* File_printf)(eC_File __this, const char * format, ...);

extern int File_putc_vTblID;
eC_bool File_putc(eC_File __i, char ch);
extern eC_Method * method_File_putc;

extern int File_puts_vTblID;
eC_bool File_puts(eC_File __i, const char * string);
extern eC_Method * method_File_puts;

extern int File_read_vTblID;
uintsize File_read(eC_File __i, void * buffer, uintsize size, uintsize count);
extern eC_Method * method_File_read;

extern int File_seek_vTblID;
eC_bool File_seek(eC_File __i, int64 pos, eC_FileSeekMode mode);
extern eC_Method * method_File_seek;

extern int File_tell_vTblID;
uint64 File_tell(eC_File __i);
extern eC_Method * method_File_tell;

extern int File_truncate_vTblID;
eC_bool File_truncate(eC_File __i, uint64 size);
extern eC_Method * method_File_truncate;

extern int File_unlock_vTblID;
eC_bool File_unlock(eC_File __i, uint64 start, uint64 length, eC_bool wait);
extern eC_Method * method_File_unlock;

extern int File_write_vTblID;
uintsize File_write(eC_File __i, const void * buffer, uintsize size, uintsize count);
extern eC_Method * method_File_write;

extern eC_Property * property_File_input;
extern void (* File_set_input)(const eC_File f, void * value);
extern void * (* File_get_input)(const eC_File f);

extern eC_Property * property_File_output;
extern void (* File_set_output)(const eC_File f, void * value);
extern void * (* File_get_output)(const eC_File f);

extern eC_Property * property_File_buffered;
extern void (* File_set_buffered)(const eC_File f, eC_bool value);

extern eC_Property * property_File_eof;
extern eC_bool (* File_get_eof)(const eC_File f);

#define FILEATTRIBS_isFile_SHIFT                         0
#define FILEATTRIBS_isFile_MASK                          0x1
#define FILEATTRIBS_isArchive_SHIFT                      1
#define FILEATTRIBS_isArchive_MASK                       0x2
#define FILEATTRIBS_isHidden_SHIFT                       2
#define FILEATTRIBS_isHidden_MASK                        0x4
#define FILEATTRIBS_isReadOnly_SHIFT                     3
#define FILEATTRIBS_isReadOnly_MASK                      0x8
#define FILEATTRIBS_isSystem_SHIFT                       4
#define FILEATTRIBS_isSystem_MASK                        0x10
#define FILEATTRIBS_isTemporary_SHIFT                    5
#define FILEATTRIBS_isTemporary_MASK                     0x20
#define FILEATTRIBS_isDirectory_SHIFT                    6
#define FILEATTRIBS_isDirectory_MASK                     0x40
#define FILEATTRIBS_isDrive_SHIFT                        7
#define FILEATTRIBS_isDrive_MASK                         0x80
#define FILEATTRIBS_isCDROM_SHIFT                        8
#define FILEATTRIBS_isCDROM_MASK                         0x100
#define FILEATTRIBS_isRemote_SHIFT                       9
#define FILEATTRIBS_isRemote_MASK                        0x200
#define FILEATTRIBS_isRemovable_SHIFT                    10
#define FILEATTRIBS_isRemovable_MASK                     0x400
#define FILEATTRIBS_isServer_SHIFT                       11
#define FILEATTRIBS_isServer_MASK                        0x800
#define FILEATTRIBS_isShare_SHIFT                        12
#define FILEATTRIBS_isShare_MASK                         0x1000


#define FILECHANGE_created_SHIFT                         0
#define FILECHANGE_created_MASK                          0x1
#define FILECHANGE_renamed_SHIFT                         1
#define FILECHANGE_renamed_MASK                          0x2
#define FILECHANGE_modified_SHIFT                        2
#define FILECHANGE_modified_MASK                         0x4
#define FILECHANGE_deleted_SHIFT                         3
#define FILECHANGE_deleted_MASK                          0x8
#define FILECHANGE_attribs_SHIFT                         4
#define FILECHANGE_attribs_MASK                          0x10


struct eC_FileListing
{
   const char * directory;
   const char * extensions;
   byte __ecere_padding[8];
};
extern eC_bool (* FileListing_find)(eC_FileListing * __this);

extern void (* FileListing_stop)(eC_FileListing * __this);

extern eC_Property * property_FileListing_name;
extern const char * (* FileListing_get_name)(const eC_FileListing * f);

extern eC_Property * property_FileListing_path;
extern const char * (* FileListing_get_path)(const eC_FileListing * f);

extern eC_Property * property_FileListing_stats;
extern void (* FileListing_get_stats)(const eC_FileListing * f, eC_FileStats * value);

extern int FileMonitor_onDirNotify_vTblID;
eC_bool FileMonitor_onDirNotify(eC_FileMonitor __i, any_object __t, eC_FileChange action, const char * fileName, const char * param);
extern eC_Method * method_FileMonitor_onDirNotify;

extern int FileMonitor_onFileNotify_vTblID;
eC_bool FileMonitor_onFileNotify(eC_FileMonitor __i, any_object __t, eC_FileChange action, const char * param);
extern eC_Method * method_FileMonitor_onFileNotify;

extern void (* FileMonitor_startMonitoring)(eC_FileMonitor __this);

extern void (* FileMonitor_stopMonitoring)(eC_FileMonitor __this);

extern eC_Property * property_FileMonitor_userData;
extern void (* FileMonitor_set_userData)(const eC_FileMonitor f, void * value);

extern eC_Property * property_FileMonitor_fileChange;
extern void (* FileMonitor_set_fileChange)(const eC_FileMonitor f, eC_FileChange value);

extern eC_Property * property_FileMonitor_fileName;
extern void (* FileMonitor_set_fileName)(const eC_FileMonitor f, const char * value);
extern const char * (* FileMonitor_get_fileName)(const eC_FileMonitor f);

extern eC_Property * property_FileMonitor_directoryName;
extern void (* FileMonitor_set_directoryName)(const eC_FileMonitor f, const char * value);
extern const char * (* FileMonitor_get_directoryName)(const eC_FileMonitor f);

extern eC_bool (* GlobalAppSettings_getGlobalValue)(eC_GlobalAppSettings __this, const char * section, const char * name, eC_GlobalSettingType type, void * value);

extern eC_bool (* GlobalAppSettings_putGlobalValue)(eC_GlobalAppSettings __this, const char * section, const char * name, eC_GlobalSettingType type, const void * value);

struct class_members_GlobalSettings
{
   eC_GlobalSettingsData data;
   eC_GlobalSettingsData * dataOwner;
   eC_Class * dataClass;
   byte __ecere_padding[96];
};
extern void (* GlobalSettings_close)(eC_GlobalSettings __this);

extern void (* GlobalSettings_closeAndMonitor)(eC_GlobalSettings __this);

extern int GlobalSettings_load_vTblID;
eC_SettingsIOResult GlobalSettings_load(eC_GlobalSettings __i);
extern eC_Method * method_GlobalSettings_load;

extern int GlobalSettings_onAskReloadSettings_vTblID;
void GlobalSettings_onAskReloadSettings(eC_GlobalSettings __i);
extern eC_Method * method_GlobalSettings_onAskReloadSettings;

extern eC_bool (* GlobalSettings_openAndLock)(eC_GlobalSettings __this, eC_FileSize * fileSize);

extern int GlobalSettings_save_vTblID;
eC_SettingsIOResult GlobalSettings_save(eC_GlobalSettings __i);
extern eC_Method * method_GlobalSettings_save;

extern eC_Property * property_GlobalSettings_settingsName;
extern void (* GlobalSettings_set_settingsName)(const eC_GlobalSettings g, const char * value);
extern const char * (* GlobalSettings_get_settingsName)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_settingsExtension;
extern void (* GlobalSettings_set_settingsExtension)(const eC_GlobalSettings g, const char * value);
extern const char * (* GlobalSettings_get_settingsExtension)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_settingsDirectory;
extern void (* GlobalSettings_set_settingsDirectory)(const eC_GlobalSettings g, const char * value);
extern const char * (* GlobalSettings_get_settingsDirectory)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_settingsLocation;
extern void (* GlobalSettings_set_settingsLocation)(const eC_GlobalSettings g, const char * value);
extern const char * (* GlobalSettings_get_settingsLocation)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_settingsFilePath;
extern void (* GlobalSettings_set_settingsFilePath)(const eC_GlobalSettings g, const char * value);
extern const char * (* GlobalSettings_get_settingsFilePath)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_allowDefaultLocations;
extern void (* GlobalSettings_set_allowDefaultLocations)(const eC_GlobalSettings g, eC_bool value);
extern eC_bool (* GlobalSettings_get_allowDefaultLocations)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_allUsers;
extern void (* GlobalSettings_set_allUsers)(const eC_GlobalSettings g, eC_bool value);
extern eC_bool (* GlobalSettings_get_allUsers)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_portable;
extern void (* GlobalSettings_set_portable)(const eC_GlobalSettings g, eC_bool value);
extern eC_bool (* GlobalSettings_get_portable)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_driver;
extern void (* GlobalSettings_set_driver)(const eC_GlobalSettings g, constString value);
extern constString (* GlobalSettings_get_driver)(const eC_GlobalSettings g);

extern eC_Property * property_GlobalSettings_isGlobalPath;
extern eC_bool (* GlobalSettings_get_isGlobalPath)(const eC_GlobalSettings g);

extern int GlobalSettingsDriver_load_vTblID;
eC_SettingsIOResult GlobalSettingsDriver_load(eC_GlobalSettingsDriver __i, eC_File f, eC_GlobalSettings globalSettings);
extern eC_Method * method_GlobalSettingsDriver_load;

extern int GlobalSettingsDriver_save_vTblID;
eC_SettingsIOResult GlobalSettingsDriver_save(eC_GlobalSettingsDriver __i, eC_File f, eC_GlobalSettings globalSettings);
extern eC_Method * method_GlobalSettingsDriver_save;

struct class_members_JSONParser
{
   eC_File f;
   eC_OptionsMap customJsonOptions;
   byte __ecere_padding[32];
};
extern eC_JSONResult (* JSONParser_getObject)(eC_JSONParser __this, eC_Class * objectType, void ** object);

extern eC_Property * property_JSONParser_debug;
extern void (* JSONParser_set_debug)(const eC_JSONParser j, eC_bool value);
extern eC_bool (* JSONParser_get_debug)(const eC_JSONParser j);

extern eC_Property * property_JSONParser_warnings;
extern void (* JSONParser_set_warnings)(const eC_JSONParser j, eC_bool value);
extern eC_bool (* JSONParser_get_warnings)(const eC_JSONParser j);

#define JSONTYPEOPTIONS_numbersUseOGDFS_SHIFT            0
#define JSONTYPEOPTIONS_numbersUseOGDFS_MASK             0x1
#define JSONTYPEOPTIONS_boolUseOGDFS_SHIFT               1
#define JSONTYPEOPTIONS_boolUseOGDFS_MASK                0x2
#define JSONTYPEOPTIONS_nullUseOGDFS_SHIFT               2
#define JSONTYPEOPTIONS_nullUseOGDFS_MASK                0x4
#define JSONTYPEOPTIONS_stringUseOGDFS_SHIFT             3
#define JSONTYPEOPTIONS_stringUseOGDFS_MASK              0x8
#define JSONTYPEOPTIONS_arrayUseOGDFS_SHIFT              4
#define JSONTYPEOPTIONS_arrayUseOGDFS_MASK               0x10
#define JSONTYPEOPTIONS_objectUseOGDFS_SHIFT             5
#define JSONTYPEOPTIONS_objectUseOGDFS_MASK              0x20
#define JSONTYPEOPTIONS_stripQuotesForOGDFS_SHIFT        6
#define JSONTYPEOPTIONS_stripQuotesForOGDFS_MASK         0x40
#define JSONTYPEOPTIONS_strictOGDFS_SHIFT                7
#define JSONTYPEOPTIONS_strictOGDFS_MASK                 0x80



extern int (* Month_getNumDays)(eC_Month __this, int year);

#define MOVEFILEOPTIONS_overwrite_SHIFT                  0
#define MOVEFILEOPTIONS_overwrite_MASK                   0x1
#define MOVEFILEOPTIONS_sync_SHIFT                       1
#define MOVEFILEOPTIONS_sync_MASK                        0x2


#define PIPEOPENMODE_output_SHIFT                        0
#define PIPEOPENMODE_output_MASK                         0x1
#define PIPEOPENMODE_error_SHIFT                         1
#define PIPEOPENMODE_error_MASK                          0x2
#define PIPEOPENMODE_input_SHIFT                         2
#define PIPEOPENMODE_input_MASK                          0x4
#define PIPEOPENMODE_showWindow_SHIFT                    3
#define PIPEOPENMODE_showWindow_MASK                     0x8


struct eC_Point
{
   int x;
   int y;
};
struct eC_Pointd
{
   double x;
   double y;
};
struct eC_Pointf
{
   float x;
   float y;
};

struct class_members_RepButton
{
   eC_bool pressing;
   eC_Timer timer;
   eC_Timer timer2;
};
extern eC_Property * property_RepButton_delay;
extern void (* RepButton_set_delay)(const eC_RepButton r, eC_Time value);

extern eC_Property * property_RepButton_delay0;
extern void (* RepButton_set_delay0)(const eC_RepButton r, eC_Time value);

extern eC_Property * property_SecSince1970_global;
extern eC_SecSince1970 (* SecSince1970_get_global)(const int64 s);

extern eC_Property * property_SecSince1970_local;
extern eC_SecSince1970 (* SecSince1970_get_local)(const int64 s);


struct eC_Semaphore
{
   byte __ecere_padding[40];
};
extern void (* Semaphore_release)(eC_Semaphore * __this);

extern eC_bool (* Semaphore_tryWait)(eC_Semaphore * __this);

extern void (* Semaphore_wait)(eC_Semaphore * __this);

extern eC_Property * property_Semaphore_initCount;
extern void (* Semaphore_set_initCount)(const eC_Semaphore * s, int value);
extern int (* Semaphore_get_initCount)(const eC_Semaphore * s);

extern eC_Property * property_Semaphore_maxCount;
extern void (* Semaphore_set_maxCount)(const eC_Semaphore * s, int value);
extern int (* Semaphore_get_maxCount)(const eC_Semaphore * s);

extern byte * (* TempFile_stealBuffer)(eC_TempFile __this);

extern eC_Property * property_TempFile_openMode;
extern void (* TempFile_set_openMode)(const eC_TempFile t, eC_FileOpenMode value);
extern eC_FileOpenMode (* TempFile_get_openMode)(const eC_TempFile t);

extern eC_Property * property_TempFile_buffer;
extern void (* TempFile_set_buffer)(const eC_TempFile t, byte * value);
extern byte * (* TempFile_get_buffer)(const eC_TempFile t);

extern eC_Property * property_TempFile_size;
extern void (* TempFile_set_size)(const eC_TempFile t, uintsize value);
extern uintsize (* TempFile_get_size)(const eC_TempFile t);

extern eC_Property * property_TempFile_allocated;
extern void (* TempFile_set_allocated)(const eC_TempFile t, uintsize value);
extern uintsize (* TempFile_get_allocated)(const eC_TempFile t);

extern void (* Thread_create)(eC_Thread __this);

extern void (* Thread_kill)(eC_Thread __this);

extern int Thread_main_vTblID;
uint Thread_main(eC_Thread __i);
extern eC_Method * method_Thread_main;

extern void (* Thread_setPriority)(eC_Thread __this, eC_ThreadPriority priority);

extern void (* Thread_wait)(eC_Thread __this);

extern eC_Property * property_Thread_created;
extern eC_bool (* Thread_get_created)(const eC_Thread t);


#define UNICODEDECOMPOSITION_canonical_SHIFT             0
#define UNICODEDECOMPOSITION_canonical_MASK              0x1
#define UNICODEDECOMPOSITION_compat_SHIFT                1
#define UNICODEDECOMPOSITION_compat_MASK                 0x2
#define UNICODEDECOMPOSITION_fraction_SHIFT              2
#define UNICODEDECOMPOSITION_fraction_MASK               0x4
#define UNICODEDECOMPOSITION_font_SHIFT                  3
#define UNICODEDECOMPOSITION_font_MASK                   0x8
#define UNICODEDECOMPOSITION_noBreak_SHIFT               4
#define UNICODEDECOMPOSITION_noBreak_MASK                0x10
#define UNICODEDECOMPOSITION_initial_SHIFT               5
#define UNICODEDECOMPOSITION_initial_MASK                0x20
#define UNICODEDECOMPOSITION_final_SHIFT                 6
#define UNICODEDECOMPOSITION_final_MASK                  0x40
#define UNICODEDECOMPOSITION_medial_SHIFT                7
#define UNICODEDECOMPOSITION_medial_MASK                 0x80
#define UNICODEDECOMPOSITION_isolated_SHIFT              8
#define UNICODEDECOMPOSITION_isolated_MASK               0x100
#define UNICODEDECOMPOSITION_circle_SHIFT                9
#define UNICODEDECOMPOSITION_circle_MASK                 0x200
#define UNICODEDECOMPOSITION_square_SHIFT                10
#define UNICODEDECOMPOSITION_square_MASK                 0x400
#define UNICODEDECOMPOSITION_sub_SHIFT                   11
#define UNICODEDECOMPOSITION_sub_MASK                    0x800
#define UNICODEDECOMPOSITION_super_SHIFT                 12
#define UNICODEDECOMPOSITION_super_MASK                  0x1000
#define UNICODEDECOMPOSITION_small_SHIFT                 13
#define UNICODEDECOMPOSITION_small_MASK                  0x2000
#define UNICODEDECOMPOSITION_vertical_SHIFT              14
#define UNICODEDECOMPOSITION_vertical_MASK               0x4000
#define UNICODEDECOMPOSITION_wide_SHIFT                  15
#define UNICODEDECOMPOSITION_wide_MASK                   0x8000
#define UNICODEDECOMPOSITION_narrow_SHIFT                16
#define UNICODEDECOMPOSITION_narrow_MASK                 0x10000


extern eC_Archive (* eC_archiveOpen)(const char * fileName, eC_ArchiveOpenFlags flags);
extern eC_bool (* eC_archiveQuerySize)(const char * fileName, eC_FileSize * size);
extern eC_bool (* eC_changeWorkingDir)(const char * buf);
extern eC_bool (* eC_charMatchCategories)(unichar ch, eC_CharCategories categories);
extern void (* eC_copyBytes)(void * dest, const void * source, uint64 count);
extern void (* eC_copyBytesBy2)(void * dest, const void * source, uint count);
extern void (* eC_copyBytesBy4)(void * dest, const void * source, uint count);
extern char * (* eC_copySystemPath)(const char * p);
extern char * (* eC_copyUnixPath)(const char * p);
extern void (* eC_createTemporaryDir)(char * tempFileName, const char * _template);
extern eC_File (* eC_createTemporaryFile)(char * tempFileName, const char * _template);
extern eC_bool (* eC_deleteFile)(const char * fileName);
extern eC_DualPipe (* eC_dualPipeOpen)(eC_PipeOpenMode mode, const char * commandLine);
extern eC_DualPipe (* eC_dualPipeOpenEnv)(eC_PipeOpenMode mode, const char * env, const char * commandLine);
extern eC_DualPipe (* eC_dualPipeOpenEnvf)(eC_PipeOpenMode mode, const char * env, const char * command, ...);
extern eC_DualPipe (* eC_dualPipeOpenf)(eC_PipeOpenMode mode, const char * command, ...);
extern void (* eC_dumpErrors)(eC_bool display);
extern eC_bool (* eC_execute)(const char * command, ...);
extern eC_bool (* eC_executeEnv)(const char * env, const char * command, ...);
extern eC_bool (* eC_executeWait)(const char * command, ...);
extern eC_FileAttribs (* eC_fileExists)(const char * fileName);
extern void (* eC_fileFixCase)(char * file);
extern eC_bool (* eC_fileGetSize)(const char * fileName, eC_FileSize * size);
extern eC_bool (* eC_fileGetStats)(const char * fileName, eC_FileStats * stats);
extern eC_File (* eC_fileOpen)(const char * fileName, eC_FileOpenMode mode);
extern eC_BufferedFile (* eC_fileOpenBuffered)(const char * fileName, eC_FileOpenMode mode);
extern eC_bool (* eC_fileSetAttribs)(const char * fileName, eC_FileAttribs attribs);
extern eC_bool (* eC_fileSetTime)(const char * fileName, eC_SecSince1970 created, eC_SecSince1970 accessed, eC_SecSince1970 modified);
extern eC_bool (* eC_fileTruncate)(const char * fileName, uint64 size);
extern void (* eC_fillBytes)(void * area, byte value, uint count);
extern void (* eC_fillBytesBy2)(void * area, uint16 value, uint count);
extern void (* eC_fillBytesBy4)(void * area, uint value, uint count);
extern eC_bool (* eC_getAlNum)(const char ** input, char * string, int max);
extern eC_CharCategory (* eC_getCharCategory)(unichar ch);
extern uint (* eC_getCombiningClass)(unichar ch);
extern char * (* eC_getEnvironment)(const char * envName, char * envValue, int max);
extern void (* eC_getFreeSpace)(const char * path, eC_FileSize64 * size);
extern uint (* eC_getLastErrorCode)(void);
extern int (* eC_getRandom)(int lo, int hi);
extern char * (* eC_getSlashPathBuffer)(char * d, const char * p);
extern char * (* eC_getSystemPathBuffer)(char * d, const char * p);
extern eC_Time (* eC_getTime)(void);
extern char * (* eC_getWorkingDir)(char * buf, int size);
extern void (* eC___e_log)(const char * text);
extern void (* eC_logErrorCode)(eC_ErrorCode errorCode, const char * details);
extern void (* eC___e_logf)(const char * format, ...);
extern eC_bool (* eC_makeDir)(const char * path);
extern void (* eC_makeSlashPath)(char * p);
extern void (* eC_makeSystemPath)(char * p);
extern void (* eC_moveBytes)(void * dest, const void * source, uint count);
extern eC_bool (* eC_moveFile)(const char * source, const char * dest);
extern eC_bool (* eC_moveFileEx)(const char * source, const char * dest, eC_MoveFileOptions options);
extern eC_String (* eC_printECONObject)(eC_Class * objectType, void * object, int indent);
extern eC_String (* eC_printObjectNotationString)(eC_Class * objectType, void * object, eC_ObjectNotationType onType, int indent, eC_bool indentFirst, eC_JSONFirstLetterCapitalization capitalize);
extern void (* eC_randomSeed)(uint seed);
extern eC_bool (* eC_removeDir)(const char * path);
extern eC_bool (* eC_renameFile)(const char * oldName, const char * newName);
extern void (* eC_resetError)(void);
extern void (* eC_setEnvironment)(const char * envName, const char * envValue);
extern void (* eC_setErrorLevel)(eC_ErrorLevel level);
extern void (* eC_setLoggingMode)(eC_LoggingMode mode, void * where);
extern eC_bool (* eC_shellOpen)(const char * fileName, ...);
extern void (* eC___sleep)(eC_Time seconds);
extern eC_String (* eC_stringIndent)(constString base, int nSpaces, eC_bool indentFirst);
extern int (* eC_uTF16BEtoUTF8Buffer)(const uint16 * source, byte * dest, int max);
extern int (* eC_uTF8toISO8859_1)(const char * source, char * dest, int max);
extern int (* eC_uTF8toUTF16BufferLen)(const char * source, uint16 * dest, int max, int len);
extern uint16 * (* eC_uTF8toUTF16Len)(const char * source, int byteCount, int * wordCount);
extern void (* eC_unsetEnvironment)(const char * envName);
extern eC_bool (* eC_writeECONObject)(eC_File f, eC_Class * objectType, void * object, int indent);
extern eC_bool (* eC_writeJSONObject)(eC_File f, eC_Class * objectType, void * object, int indent);
extern eC_bool (* eC_writeJSONObject2)(eC_File f, eC_Class * objectType, void * object, int indent, eC_JSONFirstLetterCapitalization capitalize);
extern eC_bool (* eC_writeJSONObjectMapped)(eC_File f, eC_Class * objectType, void * object, int indent, eC_Map stringMap);
extern eC_bool (* eC_writeONString)(eC_File f, constString s, eC_bool eCON, int indent);
extern eC_String (* eC_accenti)(constString string);
extern eC_String (* eC_casei)(constString string);
extern void (* eC_debugBreakpoint)(void);
extern eC_String (* eC_encodeArrayToString)(eC_Array array);
extern eC_String (* eC_normalizeNFC)(constString string);
extern eC_String (* eC_normalizeNFD)(constString string);
extern eC_String (* eC_normalizeNFKC)(constString string);
extern eC_String (* eC_normalizeNFKD)(constString string);
extern eC_Array (* eC_normalizeNFKDArray)(constString string);
extern eC_String (* eC_normalizeUnicode)(constString string, eC_UnicodeDecomposition type, eC_bool compose);
extern eC_Array (* eC_normalizeUnicodeArray)(constString string, eC_UnicodeDecomposition type, eC_bool compose);
extern eC_String (* eC_stripUnicodeCategory)(constString string, eC_CharCategory c);
struct eC_Vector3D
{
   double x;
   double y;
   double z;
};
typedef struct eC_Vector3D eC_Vector3D;
struct class_members_Camera
{
   byte __ecerePrivateData0[24];
   eC_Vector3D position;
   byte __ecere_padding[1056];
};
struct eC_ColorRGB
{
   float r;
   float g;
   float b;
};
typedef uint32 eC_DisplayFlags;
struct class_members_DisplaySystem
{
   byte __ecerePrivateData0[24];
   eC_PixelFormat pixelFormat;
   eC_DisplayFlags flags;
   byte __ecere_padding[160];
};
struct eC_Euler
{
   eC_Angle yaw;
   eC_Angle pitch;
   eC_Angle roll;
};
struct eC_Quaternion
{
   double w;
   double x;
   double y;
   double z;
};
struct eC_Vector3Df
{
   float x;
   float y;
   float z;
};
typedef struct eC_Quaternion eC_Quaternion;
typedef struct eC_Vector3Df eC_Vector3Df;
struct eC_Transform
{
   eC_Vector3D position;
   eC_Quaternion orientation;
   eC_Vector3Df scaling;
};
typedef struct eC_Transform eC_Transform;
struct eC_Object
{
   byte __ecerePrivateData0[128];
   eC_Transform transform;
   byte __ecere_padding[680];
};
typedef struct eC_ColorRGB eC_ColorRGB;
typedef uint32 eC_LightFlags;
typedef struct eC_Object eC_Object;
struct eC_Light
{
   eC_LightFlags flags;
   eC_ColorRGB ambient;
   eC_ColorRGB diffuse;
   eC_ColorRGB specular;
   eC_Vector3D direction;
   eC_Quaternion orientation;
   eC_Object * lightObject;
   eC_Object * target;
   eC_Angle fallOff;
   eC_Angle hotSpot;
   float Kc;
   float Kl;
   float Kq;
   eC_Angle start;
   eC_Angle end;
   float multiplier;
};
typedef eC_Bitmap eC_CubeMap;
typedef uint32 eC_MaterialFlags;
struct eC_Material
{
   eC_Material * prev;
   eC_Material * next;
   char * name;
   float opacity;
   eC_ColorRGB diffuse;
   eC_ColorRGB ambient;
   eC_ColorRGB specular;
   eC_ColorRGB emissive;
   float power;
   eC_Bitmap baseMap;
   eC_Bitmap bumpMap;
   eC_Bitmap specularMap;
   eC_Bitmap reflectMap;
   eC_CubeMap envMap;
   float reflectivity;
   float refractiveIndex;
   float refractiveIndexContainer;
   eC_MaterialFlags flags;
   float uScale;
   float vScale;
   byte __ecere_padding[8];
};
struct eC_Matrix
{
   union
   {
      double array[16];
      double m[4][4];
   };
};
struct eC_Mesh
{
   byte __ecerePrivateData0[56];
   eC_OldList groups;
   byte __ecere_padding[184];
};
struct class_members_MeshSkin
{
   eC_Matrix bindShapeMatrix;
   eC_Array bones;
   eC_Array skinVerts;
   eC_Matrix invShape;
   eC_bool bsIsIdentity;
   byte __ecere_padding[28];
};
struct eC_Plane
{
   union
   {
      struct
      {
         double a;
         double b;
         double c;
      };
      eC_Vector3D normal;
   };
   double d;
};
typedef struct eC_PrimitiveGroup eC_PrimitiveGroup;
typedef uint32 eC_PrimitiveGroupType;
struct eC_PrimitiveGroup
{
   eC_PrimitiveGroup * prev;
   eC_PrimitiveGroup * next;
   eC_PrimitiveGroupType type;
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
   eC_Material * material;
};
typedef int eC_CameraType;
enum
{
   CameraType_fixed = 0x0,
   CameraType_fixedQuaternion = 0x1,
   CameraType_attached = 0x2,
   CameraType_attachedQuaternion = 0x3,
   CameraType_lookAt = 0x4,
   CameraType_lookAtObject = 0x5
};

typedef struct eC_ColorRGBAf eC_ColorRGBAf;
typedef struct eC_Euler eC_Euler;
typedef int eC_EulerRotationOrder;
enum
{
   EulerRotationOrder_xyz = 0x0,
   EulerRotationOrder_xzy = 0x1,
   EulerRotationOrder_yxz = 0x2,
   EulerRotationOrder_yzx = 0x3,
   EulerRotationOrder_zxy = 0x4,
   EulerRotationOrder_zyx = 0x5
};

typedef int eC_FovDirection;
enum
{
   FovDirection_widest = 0x0,
   FovDirection_horizontal = 0x1,
   FovDirection_vertical = 0x2
};

typedef struct eC_FrameKey eC_FrameKey;
typedef struct eC_FrameTrack eC_FrameTrack;
typedef uint32 eC_FrameTrackBits;
typedef int eC_FrustumPlacement;
enum
{
   FrustumPlacement_outside = 0x0,
   FrustumPlacement_inside = 0x1,
   FrustumPlacement_intersecting = 0x2
};

typedef struct eC_GLArrayTexture eC_GLArrayTexture;
typedef struct eC_Line eC_Line;
typedef struct eC_Mesh eC_Mesh;
typedef eC_Instance eC_MeshSkin;
typedef uint32 eC_ObjectFlags;
typedef eC_Instance eC_ObjectFormat;
typedef struct eC_Plane eC_Plane;
typedef struct eC_PrimitiveSingle eC_PrimitiveSingle;
typedef struct eC_SkinBone eC_SkinBone;
#define MAX_BONES 10

#define NO_BONE 255

typedef int eC_ClippingPlane;
enum
{
   ClippingPlane_left = 0x0,
   ClippingPlane_right = 0x1,
   ClippingPlane_top = 0x2,
   ClippingPlane_bottom = 0x3,
   ClippingPlane_near = 0x4,
   ClippingPlane_far = 0x5
};

typedef uint16 eC_FrameTrackType;
enum
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

typedef struct eC_MeshMorph eC_MeshMorph;
typedef struct eC_MeshPart eC_MeshPart;
typedef eC_PrimitiveGroupType eC_RenderPrimitiveType;
enum
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

typedef struct eC_SkinVert eC_SkinVert;
extern void (* Camera_adjustAngle)(eC_Camera __this, eC_Quaternion * angle);

extern void (* Camera_adjustPosition)(eC_Camera __this, eC_Vector3D * position);

extern void (* Camera_move)(eC_Camera __this, eC_Vector3D * direction);

extern eC_bool (* Camera_pointsVisible)(eC_Camera __this, eC_Vector3D * points, int numPoints, double threshold);

extern eC_bool (* Camera_project)(eC_Camera __this, eC_Vector3D * vector, eC_Vector3D * point);

extern eC_bool (* Camera_projectSize)(eC_Camera __this, eC_Vector3D * vector, eC_Point * point);

extern void (* Camera_rotatePitch)(eC_Camera __this, eC_Angle amount, eC_Angle min, eC_Angle max);

extern void (* Camera_rotateRoll)(eC_Camera __this, eC_Angle amount, eC_Angle min, eC_Angle max);

extern void (* Camera_rotateYaw)(eC_Camera __this, eC_Angle amount, eC_Angle min, eC_Angle max);

extern void (* Camera_setup)(eC_Camera __this, int width, int height, const eC_Point * origin);

extern void (* Camera_setupVR)(eC_Camera __this, int width, int height, const eC_Matrix * prjMatrix);

extern void (* Camera_slerp)(eC_Camera __this, float amount);

extern eC_bool (* Camera_sphereVisible)(eC_Camera __this, eC_Vector3D * center, float radius);

extern void (* Camera_transformMatrix)(eC_Camera __this, eC_Matrix * dest, eC_Matrix * src);

extern void (* Camera_transformNormal)(eC_Camera __this, eC_Vector3D * dest, eC_Vector3D * src);

extern void (* Camera_transformPoint)(eC_Camera __this, eC_Vector3D * dest, eC_Vector3D * src);

extern void (* Camera_unproject)(eC_Camera __this, eC_Vector3D * point, eC_Vector3D * vector);

extern void (* Camera_untransform)(eC_Camera __this, eC_Vector3D * src, eC_Vector3D * result);

extern eC_bool (* Camera_update)(eC_Camera __this);

extern void (* Camera_setCPosition)(eC_Camera __this, eC_Vector3D * value);

extern void (* Camera_setViewMatrix)(eC_Camera __this, eC_Matrix * value);

extern eC_Property * property_Camera_type;
extern void (* Camera_set_type)(const eC_Camera c, eC_CameraType value);
extern eC_CameraType (* Camera_get_type)(const eC_Camera c);

extern eC_Property * property_Camera_position;
extern void (* Camera_set_position)(const eC_Camera c, const eC_Vector3D * value);
extern void (* Camera_get_position)(const eC_Camera c, eC_Vector3D * value);

extern eC_Property * property_Camera_orientation;
extern void (* Camera_set_orientation)(const eC_Camera c, const eC_Quaternion * value);
extern void (* Camera_get_orientation)(const eC_Camera c, eC_Quaternion * value);

extern eC_Property * property_Camera_eulerOrientation;
extern void (* Camera_set_eulerOrientation)(const eC_Camera c, const eC_Euler * value);
extern void (* Camera_get_eulerOrientation)(const eC_Camera c, eC_Euler * value);

extern eC_Property * property_Camera_cPosition;
extern void (* Camera_get_cPosition)(const eC_Camera c, eC_Vector3D * value);

extern eC_Property * property_Camera_cOrientation;
extern void (* Camera_get_cOrientation)(const eC_Camera c, eC_Quaternion * value);

extern eC_Property * property_Camera_fov;
extern void (* Camera_set_fov)(const eC_Camera c, eC_Angle value);
extern eC_Angle (* Camera_get_fov)(const eC_Camera c);

extern eC_Property * property_Camera_zMin;
extern void (* Camera_set_zMin)(const eC_Camera c, float value);
extern float (* Camera_get_zMin)(const eC_Camera c);

extern eC_Property * property_Camera_zMax;
extern void (* Camera_set_zMax)(const eC_Camera c, float value);
extern float (* Camera_get_zMax)(const eC_Camera c);

extern eC_Property * property_Camera_target;
extern void (* Camera_set_target)(const eC_Camera c, eC_Object * value);
extern eC_Object * (* Camera_get_target)(const eC_Camera c);

extern eC_Property * property_Camera_fovDirection;
extern void (* Camera_set_fovDirection)(const eC_Camera c, eC_FovDirection value);
extern eC_FovDirection (* Camera_get_fovDirection)(const eC_Camera c);

extern eC_Property * property_Camera_aspectRatio;
extern void (* Camera_set_aspectRatio)(const eC_Camera c, float value);
extern float (* Camera_get_aspectRatio)(const eC_Camera c);

extern eC_Property * property_Camera_focal;
extern void (* Camera_set_focal)(const eC_Camera c, const eC_Size * value);
extern void (* Camera_get_focal)(const eC_Camera c, eC_Size * value);

extern void (* Euler_add)(eC_Euler * __this, const eC_Euler * e1, const eC_Euler * e2);

extern void (* Euler_fromMatrix)(eC_Euler * __this, const eC_Matrix * m, eC_EulerRotationOrder order);

extern void (* Euler_fromQuaternion)(eC_Euler * __this, const eC_Quaternion * q, eC_EulerRotationOrder order);

extern eC_Property * property_Euler_Quaternion;
extern void (* Euler_from_Quaternion)(const eC_Euler * e, const eC_Quaternion * value);
extern void (* Euler_to_Quaternion)(const eC_Euler * e, eC_Quaternion * value);

struct eC_FrameKey
{
   uint frame;
   float tension;
   float continuity;
   float bias;
   float easeFrom;
   float easeTo;
   union
   {
      eC_Vector3Df position;
      eC_Quaternion orientation;
      eC_Vector3Df scaling;
      float roll;
      float fov;
      eC_ColorRGB color;
      float hotSpot;
      float fallOff;
      float weight;
      eC_bool hide;
   };
};
struct eC_FrameTrack
{
   byte __ecerePrivateData0[16];
   eC_FrameTrackBits type;
   uint numKeys;
   eC_FrameKey * keys;
   int morphIndex;
};
#define FRAMETRACKBITS_type_SHIFT                        0
#define FRAMETRACKBITS_type_MASK                         0xFFFF
#define FRAMETRACKBITS_loop_SHIFT                        16
#define FRAMETRACKBITS_loop_MASK                         0x10000
#define FRAMETRACKBITS_rotationOrder_SHIFT               17
#define FRAMETRACKBITS_rotationOrder_MASK                0x1FE0000


struct eC_Line
{
   eC_Vector3D p0;
   eC_Vector3D delta;
};
extern eC_bool (* Line_intersectSphere)(eC_Line * __this, double radius, double * t);

extern void (* Material_free)(eC_Material * __this);

extern eC_Property * property_Material_shader;
extern void (* Material_set_shader)(const eC_Material * m, eC_Shader value);
extern eC_Shader (* Material_get_shader)(const eC_Material * m);

#define MATERIALFLAGS_doubleSided_SHIFT                  0
#define MATERIALFLAGS_doubleSided_MASK                   0x1
#define MATERIALFLAGS_translucent_SHIFT                  1
#define MATERIALFLAGS_translucent_MASK                   0x2
#define MATERIALFLAGS_tile_SHIFT                         2
#define MATERIALFLAGS_tile_MASK                          0x4
#define MATERIALFLAGS_noFog_SHIFT                        3
#define MATERIALFLAGS_noFog_MASK                         0x8
#define MATERIALFLAGS_singleSideLight_SHIFT              4
#define MATERIALFLAGS_singleSideLight_MASK               0x10
#define MATERIALFLAGS_separateSpecular_SHIFT             5
#define MATERIALFLAGS_separateSpecular_MASK              0x20
#define MATERIALFLAGS_cubeMap_SHIFT                      6
#define MATERIALFLAGS_cubeMap_MASK                       0x40
#define MATERIALFLAGS_noLighting_SHIFT                   7
#define MATERIALFLAGS_noLighting_MASK                    0x80
#define MATERIALFLAGS_partlyTransparent_SHIFT            8
#define MATERIALFLAGS_partlyTransparent_MASK             0x100
#define MATERIALFLAGS_setupTextures_SHIFT                9
#define MATERIALFLAGS_setupTextures_MASK                 0x200
#define MATERIALFLAGS_update_SHIFT                       10
#define MATERIALFLAGS_update_MASK                        0x400
#define MATERIALFLAGS_constantColor_SHIFT                11
#define MATERIALFLAGS_constantColor_MASK                 0x800


extern double (* Matrix_determinant)(eC_Matrix * __this);

extern void (* Matrix_identity)(eC_Matrix * __this);

extern void (* Matrix_inverse)(eC_Matrix * __this, const eC_Matrix * source);

extern void (* Matrix_inverseTransposeTransform)(eC_Matrix * __this, const eC_Matrix * source);

extern void (* Matrix_multiply)(eC_Matrix * __this, const eC_Matrix * a, const eC_Matrix * b);

extern void (* Matrix_multiply3x4)(eC_Matrix * __this, const eC_Matrix * a, const eC_Matrix * b);

extern void (* Matrix_rotate)(eC_Matrix * __this, const eC_Quaternion * quat);

extern void (* Matrix_rotationQuaternion)(eC_Matrix * __this, const eC_Quaternion * quat);

extern void (* Matrix_scale)(eC_Matrix * __this, double sx, double sy, double sz);

extern void (* Matrix_toEuler)(eC_Matrix * __this, eC_Euler * euler);

extern void (* Matrix_translate)(eC_Matrix * __this, double tx, double ty, double tz);

extern void (* Matrix_transpose)(eC_Matrix * __this, const eC_Matrix * source);

extern eC_bool (* Matrix_isIdentity)(eC_Matrix * __this);

extern eC_Property * property_Matrix_Quaternion;
extern void (* Matrix_from_Quaternion)(const eC_Matrix * m, const eC_Quaternion * value);
extern void (* Matrix_to_Quaternion)(const eC_Matrix * m, eC_Quaternion * value);

struct eC_Matrixf
{
   union
   {
      float m[4][4];
      float array[16];
   };
};
extern void (* Matrixf_identity)(eC_Matrixf * __this);

extern void (* Matrixf_fromMatrix)(eC_Matrixf * __this, eC_Matrix * m);

extern eC_Property * property_Matrixf_Matrix;
extern void (* Matrixf_from_Matrix)(const eC_Matrixf * m, const eC_Matrix * value);
extern void (* Matrixf_to_Matrix)(const eC_Matrixf * m, eC_Matrix * value);

extern eC_PrimitiveGroup * (* Mesh_addPrimitiveGroup)(eC_Mesh * __this, eC_PrimitiveGroupType flags, int nIndices);

extern eC_bool (* Mesh_allocate)(eC_Mesh * __this, eC_MeshFeatures what, int nVertices, eC_DisplaySystem displaySystem);

extern eC_bool (* Mesh_allocatePrimitive)(eC_Mesh * __this, eC_PrimitiveSingle * primitive, eC_PrimitiveGroupType flags, int nIndices);

extern void (* Mesh_applyMaterial)(eC_Mesh * __this, eC_Material * material);

extern void (* Mesh_applyMorphs)(eC_Mesh * __this, eC_bool recomputeNormals);

extern void (* Mesh_applySkin)(eC_Mesh * __this);

extern eC_bool (* Mesh_applyTranslucency)(eC_Mesh * __this, eC_Object * object);

extern void (* Mesh_combineMorphs)(eC_Mesh * __this, eC_Array combined);

extern void (* Mesh_computeNormals)(eC_Mesh * __this);

extern void (* Mesh_computeNormals2)(eC_Mesh * __this, eC_bool computeNormals, eC_bool computeTangents);

extern void (* Mesh_computeNormals3)(eC_Mesh * __this, eC_bool computeNormals, eC_bool computeTangents, eC_bool unlock);

extern eC_Mesh * (* Mesh_copy)(eC_Mesh * __this);

extern int (* Mesh_findClosestVertex)(eC_Mesh * __this, const eC_Vector3D * local, eC_Vector3Df * actual);

extern void (* Mesh_free)(eC_Mesh * __this, eC_MeshFeatures what);

extern void (* Mesh_freeCPUVertexAttributes)(eC_Mesh * __this, eC_MeshFeatures what);

extern void (* Mesh_freePrimitive)(eC_Mesh * __this, eC_PrimitiveSingle * primitive);

extern void (* Mesh_freePrimitiveGroup)(eC_Mesh * __this, eC_PrimitiveGroup * group);

extern void * (* Mesh_getData)(eC_Mesh * __this);

extern eC_bool (* Mesh_lock)(eC_Mesh * __this, eC_MeshFeatures flags);

extern eC_bool (* Mesh_lockPrimitive)(eC_Mesh * __this, eC_PrimitiveSingle * primitive);

extern eC_bool (* Mesh_lockPrimitiveGroup)(eC_Mesh * __this, eC_PrimitiveGroup * group);

extern void (* Mesh_setData)(eC_Mesh * __this, void * value);

extern void (* Mesh_unapplySkin)(eC_Mesh * __this);

extern eC_bool (* Mesh_unapplyTranslucency)(eC_Mesh * __this, eC_Object * object);

extern void (* Mesh_unlock)(eC_Mesh * __this, eC_MeshFeatures flags);

extern void (* Mesh_unlockPrimitive)(eC_Mesh * __this, eC_PrimitiveSingle * primitive);

extern void (* Mesh_unlockPrimitiveGroup)(eC_Mesh * __this, eC_PrimitiveGroup * group);

extern eC_bool (* Mesh_upload)(eC_Mesh * __this, eC_DisplaySystem displaySystem, eC_bool uploadTextures, eC_GLMB mab, eC_GLMB meab, int nAT, eC_GLArrayTexture * mAT);

extern void (* Mesh_uploadPrimitive)(eC_Mesh * __this, eC_PrimitiveSingle * g, eC_DisplaySystem displaySystem, eC_bool uploadTextures, int nAT, eC_GLArrayTexture * mAT, eC_bool clearData, eC_bool unlockAndDelete);

extern void (* Mesh_uploadTexture)(eC_Mesh * __this, eC_Bitmap bitmap, eC_DisplaySystem displaySystem, eC_GLArrayTexture * at);

extern void (* Mesh_fixMorphSkin)(eC_Mesh * __this);

extern void (* Mesh_fixSkeletonBones)(eC_Mesh * __this, eC_SkinBone * bone, int boneIx);

extern eC_Property * property_Mesh_texCoords;
extern void (* Mesh_set_texCoords)(const eC_Mesh * m, eC_Pointf * value);
extern eC_Pointf * (* Mesh_get_texCoords)(const eC_Mesh * m);

extern eC_Property * property_Mesh_nVertices;
extern void (* Mesh_set_nVertices)(const eC_Mesh * m, int value);
extern int (* Mesh_get_nVertices)(const eC_Mesh * m);

extern eC_Property * property_Mesh_vertices;
extern void (* Mesh_set_vertices)(const eC_Mesh * m, eC_Vector3Df * value);
extern eC_Vector3Df * (* Mesh_get_vertices)(const eC_Mesh * m);

extern eC_Property * property_Mesh_nIndices;
extern void (* Mesh_set_nIndices)(const eC_Mesh * m, int value);
extern int (* Mesh_get_nIndices)(const eC_Mesh * m);

extern eC_Property * property_Mesh_meab;
extern void (* Mesh_set_meab)(const eC_Mesh * m, eC_GLMB value);
extern eC_GLMB (* Mesh_get_meab)(const eC_Mesh * m);

extern eC_Property * property_Mesh_baseIndex;
extern void (* Mesh_set_baseIndex)(const eC_Mesh * m, int value);
extern int (* Mesh_get_baseIndex)(const eC_Mesh * m);

extern eC_Property * property_Mesh_baseVertex;
extern void (* Mesh_set_baseVertex)(const eC_Mesh * m, int value);
extern int (* Mesh_get_baseVertex)(const eC_Mesh * m);

extern eC_Property * property_Mesh_indices;
extern void (* Mesh_set_indices)(const eC_Mesh * m, uint * value);
extern uint * (* Mesh_get_indices)(const eC_Mesh * m);

extern eC_Property * property_Mesh_normals;
extern void (* Mesh_set_normals)(const eC_Mesh * m, eC_Vector3Df * value);
extern eC_Vector3Df * (* Mesh_get_normals)(const eC_Mesh * m);

extern eC_Property * property_Mesh_tangents;
extern void (* Mesh_set_tangents)(const eC_Mesh * m, eC_Vector3Df * value);
extern eC_Vector3Df * (* Mesh_get_tangents)(const eC_Mesh * m);

extern eC_Property * property_Mesh_colors;
extern void (* Mesh_set_colors)(const eC_Mesh * m, eC_ColorRGBAf * value);
extern eC_ColorRGBAf * (* Mesh_get_colors)(const eC_Mesh * m);

extern eC_Property * property_Mesh_lightVectors;
extern void (* Mesh_set_lightVectors)(const eC_Mesh * m, eC_ColorRGB * value);
extern eC_ColorRGB * (* Mesh_get_lightVectors)(const eC_Mesh * m);

extern eC_Property * property_Mesh_groups;
extern void (* Mesh_get_groups)(const eC_Mesh * m, eC_OldList * value);

extern eC_Property * property_Mesh_flags;
extern void (* Mesh_set_flags)(const eC_Mesh * m, eC_MeshFeatures value);
extern eC_MeshFeatures (* Mesh_get_flags)(const eC_Mesh * m);

extern eC_Property * property_Mesh_skin;
extern void (* Mesh_set_skin)(const eC_Mesh * m, eC_MeshSkin value);
extern eC_MeshSkin (* Mesh_get_skin)(const eC_Mesh * m);

extern eC_Property * property_Mesh_dupVerts;
extern void (* Mesh_set_dupVerts)(const eC_Mesh * m, eC_Array value);
extern eC_Array (* Mesh_get_dupVerts)(const eC_Mesh * m);

extern eC_Property * property_Mesh_morphs;
extern void (* Mesh_set_morphs)(const eC_Mesh * m, eC_Array value);
extern eC_Array (* Mesh_get_morphs)(const eC_Mesh * m);

extern eC_Property * property_Mesh_unmorphedMesh;
extern void (* Mesh_set_unmorphedMesh)(const eC_Mesh * m, eC_Mesh * value);
extern eC_Mesh * (* Mesh_get_unmorphedMesh)(const eC_Mesh * m);

extern eC_Property * property_Mesh_translucentPrimitives;
extern eC_PrimitiveSingle * (* Mesh_get_translucentPrimitives)(const eC_Mesh * m);

extern eC_Property * property_Mesh_nTranslucentPrimitives;
extern int (* Mesh_get_nTranslucentPrimitives)(const eC_Mesh * m);

extern eC_Property * property_Mesh_parts;
extern void (* Mesh_set_parts)(const eC_Mesh * m, eC_Array value);
extern eC_Array (* Mesh_get_parts)(const eC_Mesh * m);

#define MESHFEATURES_vertices_SHIFT                      0
#define MESHFEATURES_vertices_MASK                       0x1
#define MESHFEATURES_normals_SHIFT                       1
#define MESHFEATURES_normals_MASK                        0x2
#define MESHFEATURES_texCoords1_SHIFT                    2
#define MESHFEATURES_texCoords1_MASK                     0x4
#define MESHFEATURES_texCoords2_SHIFT                    3
#define MESHFEATURES_texCoords2_MASK                     0x8
#define MESHFEATURES_doubleNormals_SHIFT                 4
#define MESHFEATURES_doubleNormals_MASK                  0x10
#define MESHFEATURES_doubleVertices_SHIFT                5
#define MESHFEATURES_doubleVertices_MASK                 0x20
#define MESHFEATURES_colors_SHIFT                        6
#define MESHFEATURES_colors_MASK                         0x40
#define MESHFEATURES_lightVectors_SHIFT                  7
#define MESHFEATURES_lightVectors_MASK                   0x80
#define MESHFEATURES_tangents_SHIFT                      8
#define MESHFEATURES_tangents_MASK                       0x100
#define MESHFEATURES_intVertices_SHIFT                   9
#define MESHFEATURES_intVertices_MASK                    0x200
#define MESHFEATURES_memAllocOnly_SHIFT                  10
#define MESHFEATURES_memAllocOnly_MASK                   0x400
#define MESHFEATURES_interleaved_SHIFT                   11
#define MESHFEATURES_interleaved_MASK                    0x800
#define MESHFEATURES_ownMEAB_SHIFT                       12
#define MESHFEATURES_ownMEAB_MASK                        0x1000
#define MESHFEATURES_bones_SHIFT                         13
#define MESHFEATURES_bones_MASK                          0x2000


struct eC_MeshMorph
{
   eC_Mesh * target;
   float weight;
   eC_String name;
   eC_bool updated;
   int firstV;
   int lastV;
};
struct eC_MeshPart
{
   uint64 id;
   uint start;
   uint count;
};
extern void (* Object_add)(eC_Object * __this, eC_Object * object);

extern void (* Object_addFrameTrack)(eC_Object * __this, eC_FrameTrack * track);

extern eC_bool (* Object_addName)(eC_Object * __this, eC_Object * object, const char * name);

extern void (* Object_animate)(eC_Object * __this, int frame);

extern void (* Object_applyMorphs)(eC_Object * __this, eC_bool recomputeNormals);

extern void (* Object_applySkins)(eC_Object * __this);

extern void (* Object_combineMorphs)(eC_Object * __this);

extern void (* Object_delete)(eC_Object * __this, eC_Object * child, eC_DisplaySystem displaySystem);

extern void (* Object_doubleSided)(eC_Object * __this, eC_bool flag);

extern void (* Object_duplicate)(eC_Object * __this, eC_Object * model);

extern void (* Object_duplicate2)(eC_Object * __this, eC_Object * model, eC_bool takeOwnership);

extern eC_Object * (* Object_find)(eC_Object * __this, const char * name);

extern void (* Object_free)(eC_Object * __this, const eC_DisplaySystem displaySystem);

extern void (* Object_freeMesh)(eC_Object * __this, eC_DisplaySystem displaySystem);

extern void (* Object_initialize)(eC_Object * __this);

extern eC_Mesh * (* Object_initializeMesh)(eC_Object * __this, eC_DisplaySystem displaySystem);

extern eC_FrustumPlacement (* Object_insideFrustum)(eC_Object * __this, eC_Plane * planes);

extern eC_bool (* Object_intersectsGroundPolygon)(eC_Object * __this, int count, eC_Pointf * pointfs);

extern void (* Object_inverseKinematics)(eC_Object * __this, int boneIX, eC_Array limits, int vertex, const eC_Vector3D * target, int maxDepth);

extern eC_bool (* Object_load)(eC_Object * __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Object_loadEx)(eC_Object * __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem, void * options);

extern eC_bool (* Object_merge)(eC_Object * __this, eC_DisplaySystem displaySystem);

extern eC_bool (* Object_mergeEx)(eC_Object * __this, eC_DisplaySystem displaySystem, eC_MeshFeatures deleteCPUAttrOptions);

extern void (* Object_move)(eC_Object * __this, eC_Vector3D * direction);

extern void (* Object_remove)(eC_Object * __this, eC_Object * child);

extern void (* Object_resetPose)(eC_Object * __this);

extern void (* Object_rotateEuler)(eC_Object * __this, eC_Euler * rotation, eC_Euler * min, eC_Euler * max);

extern eC_bool (* Object_save)(eC_Object * __this, const char * fileName, const char * type);

extern eC_bool (* Object_saveEx)(eC_Object * __this, const char * fileName, const char * type, void * options);

extern void (* Object_setMinMaxRadius)(eC_Object * __this, eC_bool processMesh);

extern void (* Object_updateTransform)(eC_Object * __this);

extern void (* Object_upload)(eC_Object * __this, eC_DisplaySystem displaySystem, eC_GLMB mab, eC_GLMB meab, int nAT, eC_GLArrayTexture * mAT);

extern eC_Array (* Object_listTextures)(eC_File file, const char * fileName, const char * type, void * options);

extern eC_Property * property_Object_transform;
extern void (* Object_set_transform)(const eC_Object * o, const eC_Transform * value);
extern void (* Object_get_transform)(const eC_Object * o, eC_Transform * value);

extern eC_Property * property_Object_eulerOrientation;
extern void (* Object_set_eulerOrientation)(const eC_Object * o, const eC_Euler * value);
extern void (* Object_get_eulerOrientation)(const eC_Object * o, eC_Euler * value);

extern eC_Property * property_Object_material;
extern void (* Object_set_material)(const eC_Object * o, eC_Material * value);
extern eC_Material * (* Object_get_material)(const eC_Object * o);

extern eC_Property * property_Object_max;
extern void (* Object_get_max)(const eC_Object * o, eC_Vector3Df * value);

extern eC_Property * property_Object_min;
extern void (* Object_get_min)(const eC_Object * o, eC_Vector3Df * value);

extern eC_Property * property_Object_center;
extern void (* Object_get_center)(const eC_Object * o, eC_Vector3Df * value);

extern eC_Property * property_Object_radius;
extern float (* Object_get_radius)(const eC_Object * o);

extern eC_Property * property_Object_wmax;
extern void (* Object_get_wmax)(const eC_Object * o, eC_Vector3D * value);

extern eC_Property * property_Object_wmin;
extern void (* Object_get_wmin)(const eC_Object * o, eC_Vector3D * value);

extern eC_Property * property_Object_wcenter;
extern void (* Object_get_wcenter)(const eC_Object * o, eC_Vector3D * value);

extern eC_Property * property_Object_wradius;
extern double (* Object_get_wradius)(const eC_Object * o);

extern eC_Property * property_Object_tag;
extern void (* Object_set_tag)(const eC_Object * o, void * value);
extern void * (* Object_get_tag)(const eC_Object * o);

extern eC_Property * property_Object_frame;
extern void (* Object_set_frame)(const eC_Object * o, int value);
extern int (* Object_get_frame)(const eC_Object * o);

extern eC_Property * property_Object_startFrame;
extern void (* Object_set_startFrame)(const eC_Object * o, int value);
extern int (* Object_get_startFrame)(const eC_Object * o);

extern eC_Property * property_Object_endFrame;
extern void (* Object_set_endFrame)(const eC_Object * o, int value);
extern int (* Object_get_endFrame)(const eC_Object * o);

extern eC_Property * property_Object_mesh;
extern void (* Object_set_mesh)(const eC_Object * o, eC_Mesh * value);
extern eC_Mesh * (* Object_get_mesh)(const eC_Object * o);

extern eC_Property * property_Object_camera;
extern eC_Camera (* Object_get_camera)(const eC_Object * o);

extern eC_Property * property_Object_firstChild;
extern eC_Object * (* Object_get_firstChild)(const eC_Object * o);

extern eC_Property * property_Object_next;
extern eC_Object * (* Object_get_next)(const eC_Object * o);

extern eC_Property * property_Object_name;
extern void (* Object_set_name)(const eC_Object * o, const char * value);
extern const char * (* Object_get_name)(const eC_Object * o);

extern eC_Property * property_Object_matrix;
extern void (* Object_get_matrix)(const eC_Object * o, eC_Matrix * value);

extern eC_Property * property_Object_cameraTarget;
extern void (* Object_set_cameraTarget)(const eC_Object * o, eC_Object * value);
extern eC_Object * (* Object_get_cameraTarget)(const eC_Object * o);

extern eC_Property * property_Object_tracks;
extern eC_OldList * (* Object_get_tracks)(const eC_Object * o);

extern eC_Property * property_Object_flags;
extern void (* Object_set_flags)(const eC_Object * o, eC_ObjectFlags value);
extern eC_ObjectFlags (* Object_get_flags)(const eC_Object * o);

extern eC_Property * property_Object_parent;
extern eC_Object * (* Object_get_parent)(const eC_Object * o);

extern eC_Property * property_Object_numChildren;
extern uint (* Object_get_numChildren)(const eC_Object * o);

extern eC_Property * property_Object_localMatrixPtr;
extern eC_Matrix * (* Object_get_localMatrixPtr)(const eC_Object * o);

extern eC_Property * property_Object_matrixPtr;
extern eC_Matrix * (* Object_get_matrixPtr)(const eC_Object * o);

extern eC_Property * property_Object_light;
extern void (* Object_set_light)(const eC_Object * o, const eC_Light * value);
extern void (* Object_get_light)(const eC_Object * o, eC_Light * value);

extern eC_Property * property_Object_rotationOrder;
extern void (* Object_set_rotationOrder)(const eC_Object * o, eC_EulerRotationOrder value);
extern eC_EulerRotationOrder (* Object_get_rotationOrder)(const eC_Object * o);

extern eC_Property * property_Object_displaySystem;
extern void (* Object_set_displaySystem)(const eC_Object * o, eC_DisplaySystem value);
extern eC_DisplaySystem (* Object_get_displaySystem)(const eC_Object * o);

#define OBJECTFLAGS_root_SHIFT                           0
#define OBJECTFLAGS_root_MASK                            0x1
#define OBJECTFLAGS_viewSpace_SHIFT                      1
#define OBJECTFLAGS_viewSpace_MASK                       0x2
#define OBJECTFLAGS_ownMesh_SHIFT                        2
#define OBJECTFLAGS_ownMesh_MASK                         0x4
#define OBJECTFLAGS_translucent_SHIFT                    3
#define OBJECTFLAGS_translucent_MASK                     0x8
#define OBJECTFLAGS_flipWindings_SHIFT                   4
#define OBJECTFLAGS_flipWindings_MASK                    0x10
#define OBJECTFLAGS_keysLoaded_SHIFT                     5
#define OBJECTFLAGS_keysLoaded_MASK                      0x20
#define OBJECTFLAGS_transform_SHIFT                      6
#define OBJECTFLAGS_transform_MASK                       0x40
#define OBJECTFLAGS_mesh_SHIFT                           7
#define OBJECTFLAGS_mesh_MASK                            0x80
#define OBJECTFLAGS_light_SHIFT                          8
#define OBJECTFLAGS_light_MASK                           0x100
#define OBJECTFLAGS_camera_SHIFT                         9
#define OBJECTFLAGS_camera_MASK                          0x200
#define OBJECTFLAGS_localMatrixSet_SHIFT                 10
#define OBJECTFLAGS_localMatrixSet_MASK                  0x400
#define OBJECTFLAGS_computeLightVectors_SHIFT            11
#define OBJECTFLAGS_computeLightVectors_MASK             0x800
#define OBJECTFLAGS_skinApplied_SHIFT                    12
#define OBJECTFLAGS_skinApplied_MASK                     0x1000
#define OBJECTFLAGS_hide_SHIFT                           13
#define OBJECTFLAGS_hide_MASK                            0x2000
#define OBJECTFLAGS_skeleton_SHIFT                       14
#define OBJECTFLAGS_skeleton_MASK                        0x4000
#define OBJECTFLAGS_bone_SHIFT                           15
#define OBJECTFLAGS_bone_MASK                            0x8000
#define OBJECTFLAGS_hierarchy_SHIFT                      16
#define OBJECTFLAGS_hierarchy_MASK                       0xFFFF0000


extern int ObjectFormat_load_vTblID;
eC_bool ObjectFormat_load(eC_ObjectFormat __i, eC_Object * object, const char * fileName, eC_DisplaySystem displaySystem, void * options);
extern eC_Method * method_ObjectFormat_load;

extern int ObjectFormat_save_vTblID;
eC_bool ObjectFormat_save(eC_ObjectFormat __i, eC_Object * object, const char * fileName, void * options);
extern eC_Method * method_ObjectFormat_save;

extern int ObjectFormat_listTextures_vTblID;
eC_Array ObjectFormat_listTextures(eC_ObjectFormat __i, eC_File f, const char * fileName, void * options);
extern eC_Method * method_ObjectFormat_listTextures;

extern void (* Plane_fromPointNormal)(eC_Plane * __this, const eC_Vector3D * normal, const eC_Vector3D * point);

extern void (* Plane_fromPoints)(eC_Plane * __this, const eC_Vector3D * v1, const eC_Vector3D * v2, const eC_Vector3D * v3);

extern void (* Plane_fromPointsf)(eC_Plane * __this, const eC_Vector3Df * v1, const eC_Vector3Df * v2, const eC_Vector3Df * v3);

extern void (* Plane_intersectLine)(eC_Plane * __this, const eC_Line * line, eC_Vector3D * result);

extern void (* Plane_intersectLinef)(eC_Plane * __this, const eC_Line * line, eC_Vector3Df * result);

extern int (* Plane_intersectLinefT)(eC_Plane * __this, const eC_Line * line, eC_Vector3Df * result, double * rt);

extern void (* Plane_multMatrix)(eC_Plane * __this, const eC_Plane * source, const eC_Matrix * inverseTranspose);

#define PRIMITIVEGROUPTYPE_primitiveType_SHIFT           0
#define PRIMITIVEGROUPTYPE_primitiveType_MASK            0xFF
#define PRIMITIVEGROUPTYPE_vertexRange_SHIFT             8
#define PRIMITIVEGROUPTYPE_vertexRange_MASK              0x100
#define PRIMITIVEGROUPTYPE_indices32bit_SHIFT            9
#define PRIMITIVEGROUPTYPE_indices32bit_MASK             0x200
#define PRIMITIVEGROUPTYPE_sharedIndices_SHIFT           10
#define PRIMITIVEGROUPTYPE_sharedIndices_MASK            0x400
#define PRIMITIVEGROUPTYPE_hide_SHIFT                    11
#define PRIMITIVEGROUPTYPE_hide_MASK                     0x800


struct eC_PrimitiveSingle
{
   eC_PrimitiveGroupType type;
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
   eC_Material * material;
   void * data;
   eC_Vector3Df middle;
   eC_Plane plane;
};
extern void (* Quaternion_divide)(eC_Quaternion * __this, const eC_Quaternion * q1, const eC_Quaternion * q2);

extern void (* Quaternion_identity)(eC_Quaternion * __this);

extern void (* Quaternion_inverse)(eC_Quaternion * __this, const eC_Quaternion * source);

extern void (* Quaternion_multiply)(eC_Quaternion * __this, const eC_Quaternion * q1, const eC_Quaternion * q2);

extern void (* Quaternion_normalize)(eC_Quaternion * __this, const eC_Quaternion * source);

extern void (* Quaternion_pitch)(eC_Quaternion * __this, eC_Angle angle);

extern void (* Quaternion_roll)(eC_Quaternion * __this, eC_Angle angle);

extern void (* Quaternion_rotatePitch)(eC_Quaternion * __this, eC_Angle pitch);

extern void (* Quaternion_rotateRoll)(eC_Quaternion * __this, eC_Angle roll);

extern void (* Quaternion_rotateYaw)(eC_Quaternion * __this, eC_Angle yaw);

extern void (* Quaternion_rotateYawPitch)(eC_Quaternion * __this, eC_Angle yaw, eC_Angle pitch);

extern void (* Quaternion_rotationAxis)(eC_Quaternion * __this, const eC_Vector3D * axis, eC_Angle angle);

extern void (* Quaternion_rotationDirection)(eC_Quaternion * __this, const eC_Vector3D * direction);

extern void (* Quaternion_rotationEuler)(eC_Quaternion * __this, const eC_Euler * euler, eC_EulerRotationOrder rotationOrder);

extern void (* Quaternion_rotationMatrix)(eC_Quaternion * __this, const eC_Matrix * m);

extern void (* Quaternion_rotationYawPitchRoll)(eC_Quaternion * __this, const eC_Euler * euler);

extern void (* Quaternion_slerp)(eC_Quaternion * __this, const eC_Quaternion * from, const eC_Quaternion * to, float t);

extern void (* Quaternion_toDirection)(eC_Quaternion * __this, eC_Vector3D * direction);

extern void (* Quaternion_yaw)(eC_Quaternion * __this, eC_Angle angle);

extern void (* Quaternion_yawPitch)(eC_Quaternion * __this, eC_Angle yaw, eC_Angle pitch);

extern void (* Quaternion_rotateQuats)(eC_Quaternion * __this, const eC_Quaternion * qPitch, const eC_Quaternion * qYaw, const eC_Quaternion * qRoll, eC_EulerRotationOrder rotationOrder);

struct eC_SkinBone
{
   eC_String name;
   eC_Matrix invBindMatrix;
   eC_Matrix bsInvBindMatrix;
   eC_Object * object;
   eC_Vector3Df min;
   eC_Vector3Df max;
   eC_Transform origTransform;
};
struct eC_SkinVert
{
   byte bones[MAX_BONES];
   byte weights[MAX_BONES];
};
extern void (* Transform_getMatrix3x4f)(eC_Transform * __this, float m[]);

extern eC_Property * property_Transform_Matrix;
extern void (* Transform_from_Matrix)(const eC_Transform * t, const eC_Matrix * value);
extern void (* Transform_to_Matrix)(const eC_Transform * t, eC_Matrix * value);

extern void (* Vector3D_add)(eC_Vector3D * __this, const eC_Vector3D * vector1, const eC_Vector3D * vector2);

extern void (* Vector3D_crossProduct)(eC_Vector3D * __this, const eC_Vector3D * vector1, const eC_Vector3D * vector2);

extern void (* Vector3D_divideMatrix)(eC_Vector3D * __this, const eC_Vector3D * v, const eC_Matrix * m);

extern double (* Vector3D_dotProduct)(eC_Vector3D * __this, const eC_Vector3D * vector2);

extern double (* Vector3D_dotProductf)(eC_Vector3D * __this, const eC_Vector3Df * vector2);

extern void (* Vector3D_multMatrix)(eC_Vector3D * __this, const eC_Vector3D * source, const eC_Matrix * matrix);

extern void (* Vector3D_multMatrixf)(eC_Vector3D * __this, const eC_Vector3Df * source, const eC_Matrix * matrix);

extern void (* Vector3D_multQuaternion)(eC_Vector3D * __this, const eC_Vector3D * s, const eC_Quaternion * quat);

extern void (* Vector3D_normalize)(eC_Vector3D * __this, const eC_Vector3D * source);

extern void (* Vector3D_scale)(eC_Vector3D * __this, const eC_Vector3D * vector1, double s);

extern void (* Vector3D_subtract)(eC_Vector3D * __this, const eC_Vector3D * vector1, const eC_Vector3D * vector2);

extern eC_Property * property_Vector3D_length;
extern double (* Vector3D_get_length)(const eC_Vector3D * v);

extern eC_Property * property_Vector3D_lengthApprox;
extern double (* Vector3D_get_lengthApprox)(const eC_Vector3D * v);

extern void (* Vector3Df_add)(eC_Vector3Df * __this, const eC_Vector3Df * vector1, const eC_Vector3Df * vector2);

extern void (* Vector3Df_crossProduct)(eC_Vector3Df * __this, const eC_Vector3Df * vector1, const eC_Vector3Df * vector2);

extern void (* Vector3Df_divideMatrix)(eC_Vector3Df * __this, const eC_Vector3Df * source, const eC_Matrix * matrix);

extern double (* Vector3Df_dotProduct)(eC_Vector3Df * __this, const eC_Vector3Df * vector2);

extern void (* Vector3Df_multMatrix)(eC_Vector3Df * __this, const eC_Vector3Df * source, const eC_Matrix * matrix);

extern void (* Vector3Df_multQuaternion)(eC_Vector3Df * __this, const eC_Vector3Df * source, const eC_Quaternion * quat);

extern void (* Vector3Df_normalize)(eC_Vector3Df * __this, const eC_Vector3Df * source);

extern void (* Vector3Df_scale)(eC_Vector3Df * __this, const eC_Vector3Df * vector1, float s);

extern void (* Vector3Df_subtract)(eC_Vector3Df * __this, const eC_Vector3Df * vector1, const eC_Vector3Df * vector2);

extern eC_Property * property_Vector3Df_length;
extern float (* Vector3Df_get_length)(const eC_Vector3Df * v);

extern eC_Property * property_Vector3Df_lengthApprox;
extern float (* Vector3Df_get_lengthApprox)(const eC_Vector3Df * v);

extern float (* eC_fastInvSqrt)(float x);
extern double (* eC_fastInvSqrtDouble)(double x);
struct eC_FMFont
{
   eC_LinkElement link;
   byte __ecere_padding[16480];
};
typedef eC_Instance eC_FontManager;
struct class_members_FontManagerRenderer
{
   eC_FontManager fm;
};
typedef struct eC_HitRecord eC_HitRecord;
struct eC_HitRecord
{
   eC_HitRecord * prev;
   eC_HitRecord * next;
   uint pos;
   uint numTags;
   eC_Vector3D center;
   void * tags[1];
};
struct class_members_Surface
{
   int width;
   int height;
   eC_Point offset;
   eC_Box box;
   eC_Box unclippedBox;
   void * driverData;
   byte __ecere_padding[72];
};
typedef int eC_AlphaWriteMode;
enum
{
   AlphaWriteMode_dontWrite = 0x0,
   AlphaWriteMode_write = 0x1,
   AlphaWriteMode_blend = 0x2
};

typedef struct eC_ColorKey eC_ColorKey;
typedef struct eC_DisplaySystemResPtr eC_DisplaySystemResPtr;
typedef eC_Instance eC_DrawList;
typedef eC_Instance eC_DrawManager;
typedef struct eC_Extent eC_Extent;
typedef struct eC_FMFont eC_FMFont;
typedef struct eC_FMPathDraw eC_FMPathDraw;
typedef struct eC_FaceInfo eC_FaceInfo;
typedef int eC_FillModeValue;
enum
{
   FillModeValue_solid = 0x0,
   FillModeValue_wireframe = 0x1
};

typedef uint32 eC_FontFlags;
typedef eC_Instance eC_FontManagerRenderer;
typedef eC_FontManagerRenderer eC_FontRenderer;
typedef eC_Instance eC_Resource;
typedef eC_Resource eC_FontResource;
typedef uint32 eC_GLCapabilities;
typedef int eC_GradientDirection;
enum
{
   GradientDirection_vertical = 0x0,
   GradientDirection_horizontal = 0x1
};

typedef int eC_RenderState;
enum
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

typedef int eC_Resolution;
enum
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

#define NumberOfLights 8

typedef eC_Instance eC_BitmapFormat;
typedef eC_Resource eC_BitmapResource;
typedef uint16 eC_Color444;
typedef uint16 eC_Color555;
typedef uint16 eC_Color565;
typedef struct eC_ColorCMYK eC_ColorCMYK;
typedef struct eC_ColorHSV eC_ColorHSV;
typedef struct eC_ColorLab eC_ColorLab;
typedef uint32 eC_ColorRGBA;
typedef eC_Color eC_DefinedColor;
enum
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

typedef struct eC_DrawSlot eC_DrawSlot;
typedef uint16 eC_FMTextAlignment;
typedef int eC_FMVerticalAlignment;
enum
{
   FMVerticalAlignment_baseline = 0x0,
   FMVerticalAlignment_top = 0x1,
   FMVerticalAlignment_middle = 0x2,
   FMVerticalAlignment_bottom = 0x3
};

typedef struct eC_FontInfo eC_FontInfo;
typedef int eC_GLSamplesCount;
enum
{
   GLSamplesCount_none = 0x0,
   GLSamplesCount_ms2 = 0x1,
   GLSamplesCount_ms4 = 0x2,
   GLSamplesCount_ms8 = 0x3,
   GLSamplesCount_ms16 = 0x4
};

typedef struct eC_RenderStateFloat eC_RenderStateFloat;
typedef eC_Color eC_SystemColor;
enum
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

extern eC_bool (* Bitmap_allocate)(eC_Bitmap __this, const char * driverName, int width, int height, int stride, eC_PixelFormat format, eC_bool allocatePalette);

extern eC_bool (* Bitmap_allocateDD)(eC_Bitmap __this, eC_DisplaySystem displaySystem, int width, int height);

extern eC_bool (* Bitmap_convert)(eC_Bitmap __this, eC_DisplaySystem displaySystem, eC_PixelFormat format, eC_ColorAlpha * palette);

extern eC_bool (* Bitmap_copy)(eC_Bitmap __this, eC_Bitmap source);

extern eC_bool (* Bitmap_copy2)(eC_Bitmap __this, eC_Bitmap source, eC_bool moveStuff);

extern void (* Bitmap_free)(eC_Bitmap __this);

extern eC_Surface (* Bitmap_getSurface)(eC_Bitmap __this, int x, int y, eC_Box * clip);

extern void (* Bitmap_grab)(eC_Bitmap __this, eC_Bitmap src, int x, int y);

extern eC_bool (* Bitmap_load)(eC_Bitmap __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_loadFromFile)(eC_Bitmap __this, eC_File file, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_loadGrayed)(eC_Bitmap __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_loadMipMaps)(eC_Bitmap __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_loadMonochrome)(eC_Bitmap __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_loadT)(eC_Bitmap __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_loadTMipMaps)(eC_Bitmap __this, const char * fileName, const char * type, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_makeDD)(eC_Bitmap __this, eC_DisplaySystem displaySystem);

extern eC_bool (* Bitmap_makeMipMaps)(eC_Bitmap __this, eC_DisplaySystem displaySystem);

extern eC_Bitmap (* Bitmap_processDD)(eC_Bitmap __this, eC_bool mipMaps, uint cubeMapFace, eC_bool compress, int maxTextureSize, eC_bool makePow2, int enforcedWidth, int enforcedHeight);

extern eC_ColorAlpha * (* Bitmap_quantize)(eC_Bitmap __this, uint start, uint end);

extern eC_bool (* Bitmap_save)(eC_Bitmap __this, const char * fileName, const char * type, void * options);

extern void (* Bitmap_smoothEdges)(eC_Bitmap __this, int size);

extern eC_Property * property_BitmapResource_fileName;
extern void (* BitmapResource_set_fileName)(const eC_BitmapResource b, const char * value);
extern const char * (* BitmapResource_get_fileName)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_grayed;
extern void (* BitmapResource_set_grayed)(const eC_BitmapResource b, eC_bool value);
extern eC_bool (* BitmapResource_get_grayed)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_monochrome;
extern void (* BitmapResource_set_monochrome)(const eC_BitmapResource b, eC_bool value);
extern eC_bool (* BitmapResource_get_monochrome)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_transparent;
extern void (* BitmapResource_set_transparent)(const eC_BitmapResource b, eC_bool value);
extern eC_bool (* BitmapResource_get_transparent)(const eC_BitmapResource b);
extern eC_bool (* BitmapResource_isSet_transparent)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_alphaBlend;
extern void (* BitmapResource_set_alphaBlend)(const eC_BitmapResource b, eC_bool value);
extern eC_bool (* BitmapResource_get_alphaBlend)(const eC_BitmapResource b);
extern eC_bool (* BitmapResource_isSet_alphaBlend)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_mipMaps;
extern void (* BitmapResource_set_mipMaps)(const eC_BitmapResource b, eC_bool value);
extern eC_bool (* BitmapResource_get_mipMaps)(const eC_BitmapResource b);
extern eC_bool (* BitmapResource_isSet_mipMaps)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_keepData;
extern void (* BitmapResource_set_keepData)(const eC_BitmapResource b, eC_bool value);
extern eC_bool (* BitmapResource_get_keepData)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_bitmap;
extern void (* BitmapResource_set_bitmap)(const eC_BitmapResource b, eC_Bitmap value);
extern eC_Bitmap (* BitmapResource_get_bitmap)(const eC_BitmapResource b);

extern eC_Property * property_BitmapResource_window;
extern void (* BitmapResource_set_window)(const eC_BitmapResource b, eC_Window value);

#define COLOR_r_SHIFT                                    16
#define COLOR_r_MASK                                     0xFF0000
#define COLOR_g_SHIFT                                    8
#define COLOR_g_MASK                                     0xFF00
#define COLOR_b_SHIFT                                    0
#define COLOR_b_MASK                                     0xFF


extern eC_Property * property_Color_ColorRGB;
extern eC_Color (* Color_from_ColorRGB)(const eC_ColorRGB * colorRGB);
extern void (* Color_to_ColorRGB)(const eC_Color color, eC_ColorRGB * value);

#define COLOR444_r_SHIFT                                 8
#define COLOR444_r_MASK                                  0xF00
#define COLOR444_g_SHIFT                                 4
#define COLOR444_g_MASK                                  0xF0
#define COLOR444_b_SHIFT                                 0
#define COLOR444_b_MASK                                  0xF


extern eC_Property * property_Color444_Color;
extern eC_Color444 (* Color444_from_Color)(const eC_Color color);
extern eC_Color (* Color444_to_Color)(const eC_Color444 color444);

#define COLOR555_r_SHIFT                                 10
#define COLOR555_r_MASK                                  0x7C00
#define COLOR555_g_SHIFT                                 5
#define COLOR555_g_MASK                                  0x3E0
#define COLOR555_b_SHIFT                                 0
#define COLOR555_b_MASK                                  0x1F


extern eC_Property * property_Color555_Color;
extern eC_Color555 (* Color555_from_Color)(const eC_Color color);
extern eC_Color (* Color555_to_Color)(const eC_Color555 color555);

#define COLOR565_r_SHIFT                                 11
#define COLOR565_r_MASK                                  0xF800
#define COLOR565_g_SHIFT                                 5
#define COLOR565_g_MASK                                  0x7E0
#define COLOR565_b_SHIFT                                 0
#define COLOR565_b_MASK                                  0x1F


extern eC_Property * property_Color565_Color;
extern eC_Color565 (* Color565_from_Color)(const eC_Color color);
extern eC_Color (* Color565_to_Color)(const eC_Color565 color565);

#define COLORALPHA_a_SHIFT                               24
#define COLORALPHA_a_MASK                                0xFF000000
#define COLORALPHA_color_SHIFT                           0
#define COLORALPHA_color_MASK                            0xFFFFFF


extern eC_Property * property_ColorAlpha_Color;
extern eC_ColorAlpha (* ColorAlpha_from_Color)(const eC_Color color);
extern eC_Color (* ColorAlpha_to_Color)(const eC_ColorAlpha colorAlpha);

struct eC_ColorCMYK
{
   float c;
   float m;
   float y;
   float k;
};
extern eC_Property * property_ColorCMYK_ColorRGB;
extern void (* ColorCMYK_from_ColorRGB)(const eC_ColorCMYK * c, const eC_ColorRGB * value);
extern void (* ColorCMYK_to_ColorRGB)(const eC_ColorCMYK * c, eC_ColorRGB * value);

struct eC_ColorHSV
{
   eC_Angle h;
   float s;
   float v;
};
extern eC_Property * property_ColorHSV_ColorRGB;
extern void (* ColorHSV_from_ColorRGB)(const eC_ColorHSV * c, const eC_ColorRGB * value);
extern void (* ColorHSV_to_ColorRGB)(const eC_ColorHSV * c, eC_ColorRGB * value);

struct eC_ColorKey
{
   eC_ColorAlpha color;
   float percent;
};
struct eC_ColorLab
{
   float l;
   float a;
   float b;
};
extern eC_Property * property_ColorLab_ColorRGB;
extern void (* ColorLab_from_ColorRGB)(const eC_ColorLab * c, const eC_ColorRGB * value);
extern void (* ColorLab_to_ColorRGB)(const eC_ColorLab * c, eC_ColorRGB * value);

#define COLORRGBA_r_SHIFT                                0
#define COLORRGBA_r_MASK                                 0xFF
#define COLORRGBA_g_SHIFT                                8
#define COLORRGBA_g_MASK                                 0xFF00
#define COLORRGBA_b_SHIFT                                16
#define COLORRGBA_b_MASK                                 0xFF0000
#define COLORRGBA_a_SHIFT                                24
#define COLORRGBA_a_MASK                                 0xFF000000


extern eC_Property * property_ColorRGBA_ColorAlpha;
extern eC_ColorRGBA (* ColorRGBA_from_ColorAlpha)(const eC_ColorAlpha colorAlpha);
extern eC_ColorAlpha (* ColorRGBA_to_ColorAlpha)(const eC_ColorRGBA colorRGBA);

extern eC_Property * property_ColorRGBA_Color;
extern eC_ColorRGBA (* ColorRGBA_from_Color)(const eC_Color color);
extern eC_Color (* ColorRGBA_to_Color)(const eC_ColorRGBA colorRGBA);

struct eC_ColorRGBAf
{
   float r;
   float g;
   float b;
   float a;
};
extern eC_Property * property_ColorRGBAf_ColorAlpha;
extern void (* ColorRGBAf_from_ColorAlpha)(const eC_ColorRGBAf * c, eC_ColorAlpha value);
extern eC_ColorAlpha (* ColorRGBAf_to_ColorAlpha)(const eC_ColorRGBAf * c);

extern eC_Property * property_ColorRGBAf_Color;
extern void (* ColorRGBAf_from_Color)(const eC_ColorRGBAf * c, eC_Color value);
extern eC_Color (* ColorRGBAf_to_Color)(const eC_ColorRGBAf * c);

extern eC_bool (* CubeMap_load)(eC_CubeMap __this, eC_DisplaySystem displaySystem, constString * names, constString extension, eC_bool oldStyle);

extern eC_bool (* CubeMap_loadFromFiles)(eC_CubeMap __this, eC_DisplaySystem displaySystem, eC_File files[], constString extension, eC_bool oldStyle);

extern void (* Display_applyMaterial)(eC_Display __this, eC_Material * material, eC_Mesh * mesh);

extern void (* Display_collectHits)(eC_Display __this);

extern eC_bool (* Display_create)(eC_Display __this, eC_DisplaySystem displaySystem, void * window);

extern eC_bool (* Display_drawMesh)(eC_Display __this, eC_Object * object);

extern eC_bool (* Display_drawMeshEx)(eC_Display __this, eC_Object * object, uint64 * id);

extern eC_bool (* Display_drawObject)(eC_Display __this, eC_Object * object);

extern eC_bool (* Display_drawObjectEx)(eC_Display __this, eC_Object * object, uint64 * id);

extern void (* Display_drawPrimitives)(eC_Display __this, eC_PrimitiveSingle * primitive, eC_Mesh * mesh);

extern void (* Display_drawTranslucency)(eC_Display __this);

extern void (* Display_endUpdate)(eC_Display __this);

extern void (* Display_fontExtent)(eC_Display __this, eC_Font * font, const char * text, int len, int * width, int * height);

extern void (* Display_fontExtent2)(eC_Display __this, eC_Font * font, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);

extern int (* Display_getHits)(eC_Display __this, eC_OldList * list);

extern eC_bool (* Display_getIntersect)(eC_Display __this, eC_Vector3D * intersect);

extern eC_Surface (* Display_getSurface)(eC_Display __this, int x, int y, eC_Box * clip);

extern eC_bool (* Display_grab)(eC_Display __this, eC_Bitmap bitmap, int x, int y, int w, int h);

extern void (* Display_intersectPolygons)(eC_Display __this);

extern eC_bool (* Display_isObjectVisible)(eC_Display __this, eC_Object * object);

extern eC_bool (* Display_lock)(eC_Display __this, eC_bool render);

extern void (* Display_nextPage)(eC_Display __this);

extern void (* Display_popMatrix)(eC_Display __this);

extern void (* Display_position)(eC_Display __this, int x, int y);

extern void (* Display_pushMatrix)(eC_Display __this);

extern eC_bool (* Display_resize)(eC_Display __this, int width, int height);

extern void (* Display_restorePalette)(eC_Display __this);

extern void (* Display_scroll)(eC_Display __this, eC_Box * scroll, int x, int y, eC_Extent * dirty);

extern void (* Display_selectMesh)(eC_Display __this, eC_Mesh * mesh);

extern void (* Display_setCamera)(eC_Display __this, eC_Surface surface, const eC_Camera camera);

extern void (* Display_setCameraVR)(eC_Display __this, eC_Camera camera, int eye, int w, int h, eC_GLFB * output, const eC_Matrix * prjMat);

extern void (* Display_setLight)(eC_Display __this, int id, eC_Light * light);

extern void (* Display_setLights)(eC_Display __this, eC_Object * object);

extern void (* Display_setPalette)(eC_Display __this, eC_ColorAlpha * palette, eC_bool colorMatch);

extern void (* Display_setTransform)(eC_Display __this, eC_Matrix * matrix, eC_bool viewSpace);

extern void (* Display_startSelection)(eC_Display __this, int pickX, int pickY, int pickW, int pickH);

extern void (* Display_startUpdate)(eC_Display __this);

extern void (* Display_stopSelection)(eC_Display __this);

extern void (* Display_unlock)(eC_Display __this);

extern void (* Display_update)(eC_Display __this, eC_Box * updateBox);

extern eC_Property * property_Display_fillMode;
extern void (* Display_set_fillMode)(const eC_Display d, eC_FillModeValue value);

extern eC_Property * property_Display_depthTest;
extern void (* Display_set_depthTest)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_depthWrite;
extern void (* Display_set_depthWrite)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_fogDensity;
extern void (* Display_set_fogDensity)(const eC_Display d, float value);

extern eC_Property * property_Display_fogColor;
extern void (* Display_set_fogColor)(const eC_Display d, eC_Color value);

extern eC_Property * property_Display_blend;
extern void (* Display_set_blend)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_ambient;
extern void (* Display_set_ambient)(const eC_Display d, eC_Color value);

extern eC_Property * property_Display_alphaWrite;
extern void (* Display_set_alphaWrite)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_antiAlias;
extern void (* Display_set_antiAlias)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_vSync;
extern void (* Display_set_vSync)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_pickingPlanes;
extern void (* Display_set_pickingPlanes)(const eC_Display d, eC_bool value);

extern eC_Property * property_Display_maxFullSort;
extern void (* Display_set_maxFullSort)(const eC_Display d, int value);
extern int (* Display_get_maxFullSort)(const eC_Display d);

extern eC_Property * property_Display_fullProjCheck;
extern void (* Display_set_fullProjCheck)(const eC_Display d, eC_bool value);
extern eC_bool (* Display_get_fullProjCheck)(const eC_Display d);

extern eC_Property * property_Display_flags;
extern eC_DisplayFlags (* Display_get_flags)(const eC_Display d);

extern eC_Property * property_Display_pixelFormat;
extern eC_PixelFormat (* Display_get_pixelFormat)(const eC_Display d);

extern eC_Property * property_Display_alphaBlend;
extern void (* Display_set_alphaBlend)(const eC_Display d, eC_bool value);
extern eC_bool (* Display_get_alphaBlend)(const eC_Display d);

extern eC_Property * property_Display_useSharedMemory;
extern void (* Display_set_useSharedMemory)(const eC_Display d, eC_bool value);
extern eC_bool (* Display_get_useSharedMemory)(const eC_Display d);

extern eC_Property * property_Display_systemWindow;
extern void * (* Display_get_systemWindow)(const eC_Display d);

extern eC_Property * property_Display_displaySystem;
extern eC_DisplaySystem (* Display_get_displaySystem)(const eC_Display d);

extern eC_Property * property_Display_glCapabilities;
extern void (* Display_set_glCapabilities)(const eC_Display d, eC_GLCapabilities value);
extern eC_GLCapabilities (* Display_get_glCapabilities)(const eC_Display d);

extern eC_Property * property_Display_glVersion;
extern int (* Display_get_glVersion)(const eC_Display d);

extern int DisplayDriver_allocateBitmap_vTblID;
eC_bool DisplayDriver_allocateBitmap(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Bitmap ap2, int ap3, int ap4, int ap5, eC_PixelFormat ap6, eC_bool ap7);
extern eC_Method * method_DisplayDriver_allocateBitmap;

extern int DisplayDriver_allocateIndices_vTblID;
void * DisplayDriver_allocateIndices(eC_DisplayDriver __i, eC_DisplaySystem ap1, int nIndices, eC_bool indices32bit);
extern eC_Method * method_DisplayDriver_allocateIndices;

extern int DisplayDriver_allocateMesh_vTblID;
eC_bool DisplayDriver_allocateMesh(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Mesh * ap2, eC_MeshFeatures ap3, int nVertices);
extern eC_Method * method_DisplayDriver_allocateMesh;

extern int DisplayDriver_applyMaterial_vTblID;
void DisplayDriver_applyMaterial(eC_DisplayDriver __i, eC_Display ap1, eC_Material * ap2, eC_Mesh * ap3);
extern eC_Method * method_DisplayDriver_applyMaterial;

extern int DisplayDriver_area_vTblID;
void DisplayDriver_area(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, int x1, int y1, int x2, int y2);
extern eC_Method * method_DisplayDriver_area;

extern int DisplayDriver_blit_vTblID;
void DisplayDriver_blit(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, int dx, int dy, int sx, int sy, int w, int h);
extern eC_Method * method_DisplayDriver_blit;

extern int DisplayDriver_blitDI_vTblID;
void DisplayDriver_blitDI(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, int dx, int dy, int sx, int sy, int w, int h);
extern eC_Method * method_DisplayDriver_blitDI;

extern int DisplayDriver_clear_vTblID;
void DisplayDriver_clear(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_ClearType ap3);
extern eC_Method * method_DisplayDriver_clear;

extern int DisplayDriver_clip_vTblID;
void DisplayDriver_clip(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Box * ap3);
extern eC_Method * method_DisplayDriver_clip;

extern int DisplayDriver_convertBitmap_vTblID;
eC_bool DisplayDriver_convertBitmap(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Bitmap ap2, eC_PixelFormat ap3, eC_ColorAlpha * ap4);
extern eC_Method * method_DisplayDriver_convertBitmap;

extern int DisplayDriver_createDisplay_vTblID;
eC_bool DisplayDriver_createDisplay(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_createDisplay;

extern int DisplayDriver_createDisplaySystem_vTblID;
eC_bool DisplayDriver_createDisplaySystem(eC_DisplayDriver __i, eC_DisplaySystem ap1);
extern eC_Method * method_DisplayDriver_createDisplaySystem;

extern int DisplayDriver_destroyDisplay_vTblID;
void DisplayDriver_destroyDisplay(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_destroyDisplay;

extern int DisplayDriver_destroyDisplaySystem_vTblID;
void DisplayDriver_destroyDisplaySystem(eC_DisplayDriver __i, eC_DisplaySystem ap1);
extern eC_Method * method_DisplayDriver_destroyDisplaySystem;

extern int DisplayDriver_displayPosition_vTblID;
void DisplayDriver_displayPosition(eC_DisplayDriver __i, eC_Display ap1, int ap2, int ap3);
extern eC_Method * method_DisplayDriver_displayPosition;

extern int DisplayDriver_displaySize_vTblID;
eC_bool DisplayDriver_displaySize(eC_DisplayDriver __i, eC_Display ap1, int ap2, int ap3);
extern eC_Method * method_DisplayDriver_displaySize;

extern int DisplayDriver_drawLine_vTblID;
void DisplayDriver_drawLine(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, int x1, int y1, int x2, int y2);
extern eC_Method * method_DisplayDriver_drawLine;

extern int DisplayDriver_drawPrimitives_vTblID;
void DisplayDriver_drawPrimitives(eC_DisplayDriver __i, eC_Display ap1, eC_PrimitiveSingle * ap2, eC_Mesh * mesh);
extern eC_Method * method_DisplayDriver_drawPrimitives;

extern int DisplayDriver_drawingChar_vTblID;
void DisplayDriver_drawingChar(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, char ch);
extern eC_Method * method_DisplayDriver_drawingChar;

extern int DisplayDriver_endUpdate_vTblID;
void DisplayDriver_endUpdate(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_endUpdate;

extern int DisplayDriver_filter_vTblID;
void DisplayDriver_filter(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
extern eC_Method * method_DisplayDriver_filter;

extern int DisplayDriver_filterDI_vTblID;
void DisplayDriver_filterDI(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
extern eC_Method * method_DisplayDriver_filterDI;

extern int DisplayDriver_fontExtent_vTblID;
void DisplayDriver_fontExtent(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Font * ap2, constString text, int len, int * tw, int * th, int prevGlyph, int * rPrevGlyph, int * overHang);
extern eC_Method * method_DisplayDriver_fontExtent;

extern int DisplayDriver_freeBitmap_vTblID;
void DisplayDriver_freeBitmap(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Bitmap ap2);
extern eC_Method * method_DisplayDriver_freeBitmap;

extern int DisplayDriver_freeIndices_vTblID;
void DisplayDriver_freeIndices(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_PrimitiveSingle * group);
extern eC_Method * method_DisplayDriver_freeIndices;

extern int DisplayDriver_freeMesh_vTblID;
void DisplayDriver_freeMesh(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Mesh * ap2);
extern eC_Method * method_DisplayDriver_freeMesh;

extern int DisplayDriver_getBitmapSurface_vTblID;
eC_bool DisplayDriver_getBitmapSurface(eC_DisplayDriver __i, eC_DisplaySystem displaySystem, eC_Surface surface, eC_Bitmap bitmap, int ap1, int ap2, eC_Box * ap3);
extern eC_Method * method_DisplayDriver_getBitmapSurface;

extern int DisplayDriver_getPixel_vTblID;
eC_ColorAlpha DisplayDriver_getPixel(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, int x, int y);
extern eC_Method * method_DisplayDriver_getPixel;

extern int DisplayDriver_getSurface_vTblID;
eC_bool DisplayDriver_getSurface(eC_DisplayDriver __i, eC_Display ap1, eC_Surface surface, int ap2, int ap3, eC_Box * ap4);
extern eC_Method * method_DisplayDriver_getSurface;

extern int DisplayDriver_grabScreen_vTblID;
eC_bool DisplayDriver_grabScreen(eC_DisplayDriver __i, eC_Display ap1, eC_Bitmap ap2, int ap3, int ap4, uint ap5, uint ap6);
extern eC_Method * method_DisplayDriver_grabScreen;

extern int DisplayDriver_lineStipple_vTblID;
void DisplayDriver_lineStipple(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, uint pattern);
extern eC_Method * method_DisplayDriver_lineStipple;

extern int DisplayDriver_loadFont_vTblID;
eC_Font * DisplayDriver_loadFont(eC_DisplayDriver __i, eC_DisplaySystem displaySystem, const char * faceName, float size, eC_FontFlags flags, float outlineSize, float outlineFade);
extern eC_Method * method_DisplayDriver_loadFont;

extern int DisplayDriver_lock_vTblID;
eC_bool DisplayDriver_lock(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_lock;

extern int DisplayDriver_lockIndices_vTblID;
uint16 * DisplayDriver_lockIndices(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_PrimitiveSingle * group);
extern eC_Method * method_DisplayDriver_lockIndices;

extern int DisplayDriver_lockMesh_vTblID;
eC_bool DisplayDriver_lockMesh(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Mesh * ap2, eC_MeshFeatures flags);
extern eC_Method * method_DisplayDriver_lockMesh;

extern int DisplayDriver_lockSystem_vTblID;
eC_bool DisplayDriver_lockSystem(eC_DisplayDriver __i, eC_DisplaySystem displaySystem);
extern eC_Method * method_DisplayDriver_lockSystem;

extern int DisplayDriver_makeDDBitmap_vTblID;
eC_bool DisplayDriver_makeDDBitmap(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Bitmap ap2, eC_bool mipMaps, int cubeMapFace);
extern eC_Method * method_DisplayDriver_makeDDBitmap;

extern int DisplayDriver_nextPage_vTblID;
void DisplayDriver_nextPage(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_nextPage;

extern int DisplayDriver_popMatrix_vTblID;
void DisplayDriver_popMatrix(eC_DisplayDriver __i, eC_Display ap1, eC_bool ap2);
extern eC_Method * method_DisplayDriver_popMatrix;

extern int DisplayDriver_pushMatrix_vTblID;
void DisplayDriver_pushMatrix(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_pushMatrix;

extern int DisplayDriver_putPixel_vTblID;
void DisplayDriver_putPixel(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, int x, int y);
extern eC_Method * method_DisplayDriver_putPixel;

extern int DisplayDriver_rectangle_vTblID;
void DisplayDriver_rectangle(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, int x1, int y1, int x2, int y2);
extern eC_Method * method_DisplayDriver_rectangle;

extern int DisplayDriver_releaseSurface_vTblID;
void DisplayDriver_releaseSurface(eC_DisplayDriver __i, eC_Display this, eC_Surface ap1);
extern eC_Method * method_DisplayDriver_releaseSurface;

extern int DisplayDriver_restorePalette_vTblID;
void DisplayDriver_restorePalette(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_restorePalette;

extern int DisplayDriver_scroll_vTblID;
void DisplayDriver_scroll(eC_DisplayDriver __i, eC_Display ap1, eC_Box * ap2, int ap3, int ap4, eC_Extent * ap5);
extern eC_Method * method_DisplayDriver_scroll;

extern int DisplayDriver_selectMesh_vTblID;
void DisplayDriver_selectMesh(eC_DisplayDriver __i, eC_Display ap1, eC_Mesh * ap2);
extern eC_Method * method_DisplayDriver_selectMesh;

extern int DisplayDriver_setBackground_vTblID;
void DisplayDriver_setBackground(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_ColorAlpha ap3);
extern eC_Method * method_DisplayDriver_setBackground;

extern int DisplayDriver_setBlitTint_vTblID;
void DisplayDriver_setBlitTint(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_ColorAlpha ap3);
extern eC_Method * method_DisplayDriver_setBlitTint;

extern int DisplayDriver_setCamera_vTblID;
void DisplayDriver_setCamera(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Camera ap3);
extern eC_Method * method_DisplayDriver_setCamera;

extern int DisplayDriver_setCameraVR_vTblID;
void DisplayDriver_setCameraVR(eC_DisplayDriver __i, eC_Display ap1, eC_Camera ap2, int eye, int w, int h, void * fb, const eC_Matrix * prjMat);
extern eC_Method * method_DisplayDriver_setCameraVR;

extern int DisplayDriver_setForeground_vTblID;
void DisplayDriver_setForeground(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_ColorAlpha ap3);
extern eC_Method * method_DisplayDriver_setForeground;

extern int DisplayDriver_setLight_vTblID;
void DisplayDriver_setLight(eC_DisplayDriver __i, eC_Display ap1, int ap2, eC_Light * ap3);
extern eC_Method * method_DisplayDriver_setLight;

extern int DisplayDriver_setPalette_vTblID;
void DisplayDriver_setPalette(eC_DisplayDriver __i, eC_Display ap1, eC_ColorAlpha * ap2, eC_bool ap3);
extern eC_Method * method_DisplayDriver_setPalette;

extern int DisplayDriver_setRenderState_vTblID;
void DisplayDriver_setRenderState(eC_DisplayDriver __i, eC_Display ap1, eC_RenderState ap2, uint ap3);
extern eC_Method * method_DisplayDriver_setRenderState;

extern int DisplayDriver_setTransform_vTblID;
void DisplayDriver_setTransform(eC_DisplayDriver __i, eC_Display ap1, eC_Matrix * ap2, eC_bool ap3, eC_bool ap4);
extern eC_Method * method_DisplayDriver_setTransform;

extern int DisplayDriver_startUpdate_vTblID;
void DisplayDriver_startUpdate(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_startUpdate;

extern int DisplayDriver_stretch_vTblID;
void DisplayDriver_stretch(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
extern eC_Method * method_DisplayDriver_stretch;

extern int DisplayDriver_stretchDI_vTblID;
void DisplayDriver_stretchDI(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);
extern eC_Method * method_DisplayDriver_stretchDI;

extern int DisplayDriver_stretchf_vTblID;
void DisplayDriver_stretchf(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Bitmap ap3, float dx, float dy, float sx, float sy, float w, float h, float sw, float sh);
extern eC_Method * method_DisplayDriver_stretchf;

extern int DisplayDriver_textExtent_vTblID;
void DisplayDriver_textExtent(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, constString text, int len, int * tw, int * th, int prevGlyph, int * rPrevGlyph, int * overHang);
extern eC_Method * method_DisplayDriver_textExtent;

extern int DisplayDriver_textFont_vTblID;
void DisplayDriver_textFont(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_Font * ap3);
extern eC_Method * method_DisplayDriver_textFont;

extern int DisplayDriver_textOpacity_vTblID;
void DisplayDriver_textOpacity(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, eC_bool ap3);
extern eC_Method * method_DisplayDriver_textOpacity;

extern int DisplayDriver_unloadFont_vTblID;
void DisplayDriver_unloadFont(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Font * ap2);
extern eC_Method * method_DisplayDriver_unloadFont;

extern int DisplayDriver_unlock_vTblID;
void DisplayDriver_unlock(eC_DisplayDriver __i, eC_Display ap1);
extern eC_Method * method_DisplayDriver_unlock;

extern int DisplayDriver_unlockIndices_vTblID;
void DisplayDriver_unlockIndices(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_PrimitiveSingle * group, eC_bool indices32bit, int nIndices, void * maeb);
extern eC_Method * method_DisplayDriver_unlockIndices;

extern int DisplayDriver_unlockMesh_vTblID;
void DisplayDriver_unlockMesh(eC_DisplayDriver __i, eC_DisplaySystem ap1, eC_Mesh * ap2, eC_MeshFeatures flags);
extern eC_Method * method_DisplayDriver_unlockMesh;

extern int DisplayDriver_unlockSystem_vTblID;
void DisplayDriver_unlockSystem(eC_DisplayDriver __i, eC_DisplaySystem displaySystem);
extern eC_Method * method_DisplayDriver_unlockSystem;

extern int DisplayDriver_update_vTblID;
void DisplayDriver_update(eC_DisplayDriver __i, eC_Display ap1, eC_Box * ap2);
extern eC_Method * method_DisplayDriver_update;

extern int DisplayDriver_writeText_vTblID;
void DisplayDriver_writeText(eC_DisplayDriver __i, eC_Display ap1, eC_Surface ap2, int x, int y, constString text, int len, int prevGlyph, int * rPrevGlyph);
extern eC_Method * method_DisplayDriver_writeText;

#define DISPLAYFLAGS_fullScreen_SHIFT                    0
#define DISPLAYFLAGS_fullScreen_MASK                     0x1
#define DISPLAYFLAGS_flipping_SHIFT                      1
#define DISPLAYFLAGS_flipping_MASK                       0x2
#define DISPLAYFLAGS_alpha_SHIFT                         2
#define DISPLAYFLAGS_alpha_MASK                          0x4
#define DISPLAYFLAGS_memBackBuffer_SHIFT                 3
#define DISPLAYFLAGS_memBackBuffer_MASK                  0x8
#define DISPLAYFLAGS_text_SHIFT                          4
#define DISPLAYFLAGS_text_MASK                           0x10
#define DISPLAYFLAGS_scrolling_SHIFT                     5
#define DISPLAYFLAGS_scrolling_MASK                      0x20
#define DISPLAYFLAGS_printer_SHIFT                       6
#define DISPLAYFLAGS_printer_MASK                        0x40


extern eC_bool (* DisplaySystem_addMaterial)(eC_DisplaySystem __this, eC_Material * material);

extern eC_OldLink * (* DisplaySystem_addMesh)(eC_DisplaySystem __this, eC_Mesh * mesh);

extern eC_Material * (* DisplaySystem_addNamedMaterial)(eC_DisplaySystem __this, const char * name);

extern eC_NamedLink * (* DisplaySystem_addTexture)(eC_DisplaySystem __this, const char * name, eC_Bitmap bitmap);

extern void (* DisplaySystem_clearMaterials)(eC_DisplaySystem __this);

extern void (* DisplaySystem_clearMeshes)(eC_DisplaySystem __this);

extern void (* DisplaySystem_clearTextures)(eC_DisplaySystem __this);

extern eC_bool (* DisplaySystem_create)(eC_DisplaySystem __this, const char * driverName, void * window, eC_bool fullScreen);

extern void (* DisplaySystem_fontExtent)(eC_DisplaySystem __this, eC_Font * font, const char * text, int len, int * width, int * height);

extern void (* DisplaySystem_fontExtent2)(eC_DisplaySystem __this, eC_Font * font, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);

extern eC_Material * (* DisplaySystem_getMaterial)(eC_DisplaySystem __this, const char * name);

extern eC_Bitmap (* DisplaySystem_getTexture)(eC_DisplaySystem __this, const char * name);

extern eC_Font * (* DisplaySystem_loadFont)(eC_DisplaySystem __this, const char * faceName, float size, eC_FontFlags flags);

extern eC_Font * (* DisplaySystem_loadOutlineFont)(eC_DisplaySystem __this, const char * faceName, float size, eC_FontFlags flags, float outlineSize, float outlineFade);

extern void * (* DisplaySystem_loadResource)(eC_DisplaySystem __this, eC_Resource resource);

extern void * (* DisplaySystem_loadResourceFM)(eC_DisplaySystem __this, eC_Resource resource, eC_FontManager fm);

extern eC_bool (* DisplaySystem_lock)(eC_DisplaySystem __this);

extern eC_bool (* DisplaySystem_removeMaterial)(eC_DisplaySystem __this, eC_Material * material);

extern eC_bool (* DisplaySystem_removeMesh)(eC_DisplaySystem __this, eC_Mesh * mesh);

extern eC_bool (* DisplaySystem_removeTexture)(eC_DisplaySystem __this, const char * name);

extern void (* DisplaySystem_unloadFont)(eC_DisplaySystem __this, eC_Font * font);

extern void (* DisplaySystem_unloadResource)(eC_DisplaySystem __this, eC_Resource resource, eC_DisplaySystemResPtr * res);

extern void (* DisplaySystem_unlock)(eC_DisplaySystem __this);

extern void * (* DisplaySystem__LoadResource)(eC_DisplaySystem __this, eC_Resource resource, void * fm);

struct eC_DisplaySystemResPtr
{
   byte __ecere_padding[24];
};
extern void (* DrawList_addObject)(eC_DrawList __this, eC_Object * object);

extern void (* DrawList_init)(eC_DrawList __this, eC_Matrix * sm, eC_Matrix * vm, eC_Vector3D * cp, eC_Plane * vp, eC_Plane * wp, int guessCount);

extern void (* DrawList_prepare)(eC_DrawList __this);

extern void (* DrawList_render)(eC_DrawList __this, eC_Display display);

extern void (* DrawManager_clear)(eC_DrawManager __this);

extern void (* DrawManager_drawBarrier)(eC_DrawManager __this);

extern void (* DrawManager_drawImage)(eC_DrawManager __this, int index, float offsetx, float offsety, float angsin, float angcos, eC_ColorAlpha color);

extern void (* DrawManager_end)(eC_DrawManager __this);

extern void (* DrawManager_finish)(eC_DrawManager __this);

extern int DrawManager_flush_vTblID;
void DrawManager_flush(eC_DrawManager __i);
extern eC_Method * method_DrawManager_flush;

extern eC_bool (* DrawManager_init)(eC_DrawManager __this);

extern void (* DrawManager_ready)(eC_DrawManager __this, int viewportWidth, int viewportHeight);

extern eC_Property * property_DrawManager_renderingFlipped;
extern void (* DrawManager_set_renderingFlipped)(const eC_DrawManager d, eC_bool value);

struct eC_DrawSlot
{
   eC_Object * object;
   eC_Bitmap baseMap;
};
extern void (* FMFont_setOutline)(eC_FMFont * __this, float size, float fade);

struct eC_FMPathDraw
{
   int prevGlyphIndex;
   float middleAlign;
};
#define FMTEXTALIGNMENT_horzAlignment_SHIFT              0
#define FMTEXTALIGNMENT_horzAlignment_MASK               0x3
#define FMTEXTALIGNMENT_vertAlignment_SHIFT              2
#define FMTEXTALIGNMENT_vertAlignment_MASK               0xC


struct eC_FaceInfo
{
   eC_String fileName;
   eC_bool fakeItalic;
   int fontID;
};
extern eC_Property * property_Font_ascent;
extern int (* Font_get_ascent)(const eC_Font * f);

extern eC_Property * property_Font_descent;
extern int (* Font_get_descent)(const eC_Font * f);

#define FONTFLAGS_bold_SHIFT                             0
#define FONTFLAGS_bold_MASK                              0x1
#define FONTFLAGS_italic_SHIFT                           1
#define FONTFLAGS_italic_MASK                            0x2
#define FONTFLAGS_underline_SHIFT                        2
#define FONTFLAGS_underline_MASK                         0x4


struct eC_FontInfo
{
   eC_bool fixedPitch;
   eC_bool defaultOrAnsiCharSet;
};
extern eC_FMFont * (* FontManager_addFont)(eC_FontManager __this, constString path, int glyphPaddingWidth);

extern eC_FMFont * (* FontManager_addFontData)(eC_FontManager __this, byte * data, int dataSize, int glyphPaddingWidth);

extern void (* FontManager_clearState)(eC_FontManager __this);

extern eC_bool (* FontManager_create)(eC_FontManager __this, int width, int height, int channelCount, int channelIndex, eC_FontManagerRenderer renderer);

extern int (* FontManager_drawText)(eC_FontManager __this, int x, int y, const char * string, int stringlength);

extern int (* FontManager_drawTextTruncate)(eC_FontManager __this, int x, int y, int truncatewidth, const char * string, int stringlength, char * extstring, int extwidth);

extern int (* FontManager_drawTextWithCursor)(eC_FontManager __this, int x, int y, const char * string, int stringlength, int cursoroffset);

extern eC_bool (* FontManager_expandAtlas)(eC_FontManager __this, int width, int height);

extern void (* FontManager_flush)(eC_FontManager __this, eC_bool rendererFlush);

extern void (* FontManager_flushUpdate)(eC_FontManager __this);

extern void (* FontManager_freeFont)(eC_FontManager __this, eC_FMFont * font);

extern void (* FontManager_getAtlasSize)(eC_FontManager __this, int * retwidth, int * retheight);

extern eC_FMFont * (* FontManager_getFont)(eC_FontManager __this, eC_FontResource fontResource);

extern void (* FontManager_getFontExtent)(eC_FontManager __this, int * retascent, int * retdescent);

extern void (* FontManager_getFontLimits)(eC_FontManager __this, int * retlimitminy, int * retlimitmaxy);

extern int (* FontManager_getFontLineHeight)(eC_FontManager __this);

extern int (* FontManager_getTextBounds)(eC_FontManager __this, int x, int y, const char * string, int stringlength, int * bounds);

extern int (* FontManager_getTextNearestOffset)(eC_FontManager __this, int targetwidth, const char * string, int stringlength);

extern int (* FontManager_getTextTruncateOffset)(eC_FontManager __this, int truncatewidth, const char * string, int stringlength, int extwidth, int * retextflag, int * retfullwidth);

extern int (* FontManager_getTextWidth)(eC_FontManager __this, const char * string, int stringlength);

extern int (* FontManager_getTextWidthTruncate)(eC_FontManager __this, const char * string, int stringlength, int truncatewidth);

extern const byte * (* FontManager_getTextureData)(eC_FontManager __this, int * width, int * height);

extern eC_bool (* FontManager_initPathDraw)(eC_FontManager __this, eC_FMPathDraw * pathdraw);

extern int FontManager_onAtlasFull_vTblID;
void FontManager_onAtlasFull(eC_FontManager __i);
extern eC_Method * method_FontManager_onAtlasFull;

extern float (* FontManager_pathDrawCharacter)(eC_FontManager __this, eC_FMPathDraw * pathdraw, float x, float y, float vectorx, float vectory, int unicode);

extern float (* FontManager_pathDrawPredictAdvance)(eC_FontManager __this, eC_FMPathDraw * pathdraw, unichar unicode);

extern void (* FontManager_popState)(eC_FontManager __this);

extern void (* FontManager_pushState)(eC_FontManager __this);

extern void (* FontManager_removeFont)(eC_FontManager __this, eC_FMFont * font);

extern eC_bool (* FontManager_resetAtlas)(eC_FontManager __this, int width, int height);

extern void (* FontManager_setAlign)(eC_FontManager __this, int align);

extern void (* FontManager_setFont)(eC_FontManager __this, eC_FMFont * font);

extern void (* FontManager_setFontImageProcessing)(eC_FontManager __this, eC_FMFont * font, void (* processImage)(byte * image, int width, int height, int bytesperpixel, int bytesperline, int paddingwidth, void * opaquecontext), void * opaquecontext);

extern void (* FontManager_setSize)(eC_FontManager __this, int size);

extern void (* FontManager_setState)(eC_FontManager __this, eC_FMFont * font, int size, int align);

extern eC_bool (* FontManager_validateTexture)(eC_FontManager __this, int * retdirtyrect);

extern eC_Property * property_FontManager_renderer;
extern void (* FontManager_set_renderer)(const eC_FontManager f, eC_FontManagerRenderer value);
extern eC_FontManagerRenderer (* FontManager_get_renderer)(const eC_FontManager f);

extern int FontManagerRenderer_createTexture_vTblID;
int FontManagerRenderer_createTexture(eC_FontManagerRenderer __i, int width, int height);
extern eC_Method * method_FontManagerRenderer_createTexture;

extern int FontManagerRenderer_drawImage_vTblID;
void FontManagerRenderer_drawImage(eC_FontManagerRenderer __i, int targetx, int targety, int imageIndex, eC_bool useExtColor);
extern eC_Method * method_FontManagerRenderer_drawImage;

extern int FontManagerRenderer_drawImageAlt_vTblID;
void FontManagerRenderer_drawImageAlt(eC_FontManagerRenderer __i, byte * texdata, int targetx, int targety, int offsetx, int offsety, int width, int height);
extern eC_Method * method_FontManagerRenderer_drawImageAlt;

extern int FontManagerRenderer_drawImageCursor_vTblID;
void FontManagerRenderer_drawImageCursor(eC_FontManagerRenderer __i, int targetx, int targety, int imageIndex);
extern eC_Method * method_FontManagerRenderer_drawImageCursor;

extern int FontManagerRenderer_drawImageFloat_vTblID;
void FontManagerRenderer_drawImageFloat(eC_FontManagerRenderer __i, float targetx, float targety, float angsin, float angcos, int imageIndex, eC_bool useExtColor);
extern eC_Method * method_FontManagerRenderer_drawImageFloat;

extern int FontManagerRenderer_flush_vTblID;
void FontManagerRenderer_flush(eC_FontManagerRenderer __i);
extern eC_Method * method_FontManagerRenderer_flush;

extern int FontManagerRenderer_init_vTblID;
eC_bool FontManagerRenderer_init(eC_FontManagerRenderer __i, int channelCount);
extern eC_Method * method_FontManagerRenderer_init;

extern int FontManagerRenderer_registerImage_vTblID;
int FontManagerRenderer_registerImage(eC_FontManagerRenderer __i, int offsetx, int offsety, int width, int height);
extern eC_Method * method_FontManagerRenderer_registerImage;

extern int FontManagerRenderer_resetImages_vTblID;
void FontManagerRenderer_resetImages(eC_FontManagerRenderer __i);
extern eC_Method * method_FontManagerRenderer_resetImages;

extern int FontManagerRenderer_resizeTexture_vTblID;
int FontManagerRenderer_resizeTexture(eC_FontManagerRenderer __i, int width, int height);
extern eC_Method * method_FontManagerRenderer_resizeTexture;

extern int FontManagerRenderer_setLayer_vTblID;
void FontManagerRenderer_setLayer(eC_FontManagerRenderer __i, uint layerIndex);
extern eC_Method * method_FontManagerRenderer_setLayer;

extern int FontManagerRenderer_updateTexture_vTblID;
void FontManagerRenderer_updateTexture(eC_FontManagerRenderer __i, int * rect, const byte * data);
extern eC_Method * method_FontManagerRenderer_updateTexture;

extern void (* FontRenderer_setColor)(eC_FontRenderer __this, eC_ColorAlpha color);

extern void (* FontRenderer_setCursorColor)(eC_FontRenderer __this, eC_ColorAlpha color);

extern void (* FontRenderer_setExtColor)(eC_FontRenderer __this, eC_ColorAlpha color);

extern eC_Property * property_FontRenderer_drawManager;
extern void (* FontRenderer_set_drawManager)(const eC_FontRenderer f, eC_DrawManager value);

extern eC_Property * property_FontResource_faceName;
extern void (* FontResource_set_faceName)(const eC_FontResource f, const char * value);
extern const char * (* FontResource_get_faceName)(const eC_FontResource f);

extern eC_Property * property_FontResource_size;
extern void (* FontResource_set_size)(const eC_FontResource f, float value);
extern float (* FontResource_get_size)(const eC_FontResource f);

extern eC_Property * property_FontResource_bold;
extern void (* FontResource_set_bold)(const eC_FontResource f, eC_bool value);
extern eC_bool (* FontResource_get_bold)(const eC_FontResource f);

extern eC_Property * property_FontResource_italic;
extern void (* FontResource_set_italic)(const eC_FontResource f, eC_bool value);
extern eC_bool (* FontResource_get_italic)(const eC_FontResource f);

extern eC_Property * property_FontResource_underline;
extern void (* FontResource_set_underline)(const eC_FontResource f, eC_bool value);
extern eC_bool (* FontResource_get_underline)(const eC_FontResource f);

extern eC_Property * property_FontResource_font;
extern eC_Font * (* FontResource_get_font)(const eC_FontResource f);

extern eC_Property * property_FontResource_window;
extern void (* FontResource_set_window)(const eC_FontResource f, eC_Window value);

extern eC_Property * property_FontResource_outlineSize;
extern void (* FontResource_set_outlineSize)(const eC_FontResource f, float value);
extern float (* FontResource_get_outlineSize)(const eC_FontResource f);

extern eC_Property * property_FontResource_outlineFade;
extern void (* FontResource_set_outlineFade)(const eC_FontResource f, float value);
extern float (* FontResource_get_outlineFade)(const eC_FontResource f);

extern eC_Property * property_FontResource_fmFont;
extern eC_FMFont * (* FontResource_get_fmFont)(const eC_FontResource f);

#define GLCAPABILITIES_compatible_SHIFT                  0
#define GLCAPABILITIES_compatible_MASK                   0x1
#define GLCAPABILITIES_vertexBuffer_SHIFT                1
#define GLCAPABILITIES_vertexBuffer_MASK                 0x2
#define GLCAPABILITIES_quads_SHIFT                       2
#define GLCAPABILITIES_quads_MASK                        0x4
#define GLCAPABILITIES_intAndDouble_SHIFT                3
#define GLCAPABILITIES_intAndDouble_MASK                 0x8
#define GLCAPABILITIES_legacyFormats_SHIFT               4
#define GLCAPABILITIES_legacyFormats_MASK                0x10
#define GLCAPABILITIES_nonPow2Textures_SHIFT             5
#define GLCAPABILITIES_nonPow2Textures_MASK              0x20
#define GLCAPABILITIES_vertexPointer_SHIFT               6
#define GLCAPABILITIES_vertexPointer_MASK                0x40
#define GLCAPABILITIES_legacy_SHIFT                      7
#define GLCAPABILITIES_legacy_MASK                       0x80
#define GLCAPABILITIES_shaders_SHIFT                     8
#define GLCAPABILITIES_shaders_MASK                      0x100
#define GLCAPABILITIES_fixedFunction_SHIFT               9
#define GLCAPABILITIES_fixedFunction_MASK                0x200
#define GLCAPABILITIES_immediate_SHIFT                   10
#define GLCAPABILITIES_immediate_MASK                    0x400
#define GLCAPABILITIES_frameBuffer_SHIFT                 11
#define GLCAPABILITIES_frameBuffer_MASK                  0x800
#define GLCAPABILITIES_pointSize_SHIFT                   12
#define GLCAPABILITIES_pointSize_MASK                    0x1000
#define GLCAPABILITIES_vao_SHIFT                         13
#define GLCAPABILITIES_vao_MASK                          0x2000
#define GLCAPABILITIES_select_SHIFT                      14
#define GLCAPABILITIES_select_MASK                       0x4000
#define GLCAPABILITIES_debug_SHIFT                       15
#define GLCAPABILITIES_debug_MASK                        0x8000
#define GLCAPABILITIES_gpuCommands_SHIFT                 16
#define GLCAPABILITIES_gpuCommands_MASK                  0x10000
#define GLCAPABILITIES_mdei_SHIFT                        17
#define GLCAPABILITIES_mdei_MASK                         0x20000
#define GLCAPABILITIES_samples_SHIFT                     18
#define GLCAPABILITIES_samples_MASK                      0x1C0000


extern int (* HitRecord_compare)(eC_HitRecord * __this, eC_HitRecord * recordB, void * unused);

#define LIGHTFLAGS_off_SHIFT                             0
#define LIGHTFLAGS_off_MASK                              0x1
#define LIGHTFLAGS_spot_SHIFT                            1
#define LIGHTFLAGS_spot_MASK                             0x2
#define LIGHTFLAGS_omni_SHIFT                            2
#define LIGHTFLAGS_omni_MASK                             0x4
#define LIGHTFLAGS_attenuation_SHIFT                     3
#define LIGHTFLAGS_attenuation_MASK                      0x8


struct eC_RenderStateFloat
{
   union
   {
      float f;
      uint ui;
   };
};
extern void (* Surface_area)(eC_Surface __this, int x1, int y1, int x2, int y2);

extern void (* Surface_bevel)(eC_Surface __this, eC_bool inner, int x, int y, int w, int h);

extern void (* Surface_blit)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int sx, int sy, int w, int h);

extern void (* Surface_centerTextf)(eC_Surface __this, int x, int y, const char * format, ...);

extern void (* Surface_clear)(eC_Surface __this, eC_ClearType type);

extern void (* Surface_clip)(eC_Surface __this, eC_Box * box);

extern void (* Surface_drawLine)(eC_Surface __this, int x1, int y1, int x2, int y2);

extern void (* Surface_drawingChar)(eC_Surface __this, byte value);

extern void (* Surface_filter)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);

extern void (* Surface_filterHTile)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int w, int h);

extern void (* Surface_filterVTile)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int w, int h);

extern eC_Color (* Surface_getBackground)(eC_Surface __this);

extern void (* Surface_getBox)(eC_Surface __this, eC_Box * value);

extern eC_Display (* Surface_getDisplay)(eC_Surface __this);

extern eC_Font * (* Surface_getFont)(eC_Surface __this);

extern eC_Color (* Surface_getForeground)(eC_Surface __this);

extern eC_ColorAlpha (* Surface_getPixel)(eC_Surface __this, int x, int y);

extern void (* Surface_getSize)(eC_Surface __this, int * w, int * h);

extern eC_bool (* Surface_getTextOpacity)(eC_Surface __this);

extern void (* Surface_gradient)(eC_Surface __this, eC_ColorKey * keys, int numKeys, float smoothness, eC_GradientDirection direction, int x1, int y1, int x2, int y2);

extern void (* Surface_hLine)(eC_Surface __this, int x1, int x2, int y);

extern void (* Surface_hTile)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int w, int h);

extern void (* Surface_lineStipple)(eC_Surface __this, uint value);

extern void (* Surface_putPixel)(eC_Surface __this, int x, int y);

extern void (* Surface_rectangle)(eC_Surface __this, int x1, int y1, int x2, int y2);

extern void (* Surface_setBackground)(eC_Surface __this, eC_ColorAlpha value);

extern void (* Surface_setForeground)(eC_Surface __this, eC_ColorAlpha value);

extern void (* Surface_stretch)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int sx, int sy, int w, int h, int sw, int sh);

extern void (* Surface_stretchf)(eC_Surface __this, eC_Bitmap src, float dx, float dy, float sx, float sy, float w, float h, float sw, float sh);

extern void (* Surface_textExtent)(eC_Surface __this, const char * text, int len, int * width, int * height);

extern void (* Surface_textExtent2)(eC_Surface __this, const char * text, int len, int * width, int * height, int prevGlyph, int * rPrevGlyph, int * overHang);

extern void (* Surface_textFont)(eC_Surface __this, eC_Font * value);

extern void (* Surface_textOpacity)(eC_Surface __this, eC_bool value);

extern void (* Surface_thinBevel)(eC_Surface __this, eC_bool inner, int x, int y, int w, int h);

extern void (* Surface_tile)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int w, int h);

extern void (* Surface_vLine)(eC_Surface __this, int y1, int y2, int x);

extern void (* Surface_vTile)(eC_Surface __this, eC_Bitmap src, int dx, int dy, int w, int h);

extern void (* Surface_writeText)(eC_Surface __this, int x, int y, const char * text, int len);

extern void (* Surface_writeText2)(eC_Surface __this, int x, int y, const char * text, int len, int prevGlyph, int * rPrevGlyph);

extern void (* Surface_writeTextDots)(eC_Surface __this, eC_Alignment alignment, int x, int y, int width, const char * text, int len);

extern void (* Surface_writeTextDotsf)(eC_Surface __this, eC_Alignment alignment, int x, int y, int width, const char * format, ...);

extern void (* Surface_writeTextf)(eC_Surface __this, int x, int y, const char * format, ...);

extern eC_Property * property_Surface_alphaWrite;
extern void (* Surface_set_alphaWrite)(const eC_Surface s, eC_AlphaWriteMode value);
extern eC_AlphaWriteMode (* Surface_get_alphaWrite)(const eC_Surface s);

extern eC_Property * property_Surface_blend;
extern void (* Surface_set_blend)(const eC_Surface s, eC_bool value);
extern eC_bool (* Surface_get_blend)(const eC_Surface s);

extern eC_Property * property_Surface_bitmap;
extern eC_Bitmap (* Surface_get_bitmap)(const eC_Surface s);

extern eC_Property * property_Surface_outlineColor;
extern void (* Surface_set_outlineColor)(const eC_Surface s, eC_ColorAlpha value);
extern eC_ColorAlpha (* Surface_get_outlineColor)(const eC_Surface s);

extern eC_Property * property_Surface_foreground;
extern void (* Surface_set_foreground)(const eC_Surface s, eC_ColorAlpha value);
extern eC_ColorAlpha (* Surface_get_foreground)(const eC_Surface s);

extern eC_Property * property_Surface_background;
extern void (* Surface_set_background)(const eC_Surface s, eC_ColorAlpha value);
extern eC_ColorAlpha (* Surface_get_background)(const eC_Surface s);

extern eC_Property * property_Surface_blitTint;
extern void (* Surface_set_blitTint)(const eC_Surface s, eC_ColorAlpha value);
extern eC_ColorAlpha (* Surface_get_blitTint)(const eC_Surface s);

extern eC_Property * property_Surface_blackTint;
extern void (* Surface_set_blackTint)(const eC_Surface s, eC_Color value);
extern eC_Color (* Surface_get_blackTint)(const eC_Surface s);

extern eC_Property * property_Surface_lineStipple;
extern void (* Surface_set_lineStipple)(const eC_Surface s, uint value);

extern eC_Property * property_Surface_size;
extern void (* Surface_get_size)(const eC_Surface s, eC_Size * value);

extern eC_Property * property_Surface_display;
extern eC_Display (* Surface_get_display)(const eC_Surface s);

extern eC_Property * property_Surface_font;
extern void (* Surface_set_font)(const eC_Surface s, eC_Font * value);
extern eC_Font * (* Surface_get_font)(const eC_Surface s);

extern eC_Property * property_Surface_textOpacity;
extern void (* Surface_set_textOpacity)(const eC_Surface s, eC_bool value);
extern eC_bool (* Surface_get_textOpacity)(const eC_Surface s);

extern eC_Property * property_Surface_drawingChar;
extern void (* Surface_set_drawingChar)(const eC_Surface s, byte value);

extern eC_Property * property_Surface_clipping;
extern void (* Surface_set_clipping)(const eC_Surface s, const eC_Box * value);

extern int (* eC_bestColorMatch)(eC_ColorAlpha * palette, int start, int end, eC_Color rgb);
extern byte (* eC_getColorDepthShifts)(eC_PixelFormat format);
extern eC_Material * (* eC_getDefaultMaterial)(void);
extern eC_ColorAlpha * (* eC_getDefaultPalette)(void);
extern int (* eC_getDepthBits)(eC_PixelFormat colorDepth);
extern int (* eC_getResolutionHeight)(eC_Resolution resolution);
extern int (* eC_getResolutionWidth)(eC_Resolution resolution);
extern eC_Map (* eC_listAvailableFonts)(void);
extern eC_ColorAlpha * (* eC_loadPalette)(const char * fileName, const char * type);
extern void (* eC_paletteGradient)(eC_ColorAlpha * palette, int numColors, eC_ColorKey * keys, int numKeys, float smoothness);
extern eC_FaceInfo * (* eC_resolveCharFont)(constString faceName, float size, eC_FontFlags flags, constString lang, unichar testChar);
extern eC_Array (* eC_resolveFont)(constString faceName, float size, eC_FontFlags flags);
extern void (* eC_setPrintingDocumentName)(constString name);
struct eC_FreeSpots
{
   uint size;
   int * spots;
   int nextSpot;
   int used;
};
typedef struct eC_FreeSpots eC_FreeSpots;
typedef struct eC_GLDrawCommand eC_GLDrawCommand;
typedef struct eC_GLMultiDraw eC_GLMultiDraw;
typedef int eC_GLTextureFilter;
enum
{
   GLTextureFilter_nearest = 0x0,
   GLTextureFilter_linear = 0x1
};

#define drawIDAttribute 7

#define posOffsetAttribute 8

#define transform0Attribute 9

#define transform1Attribute 10

#define transform2Attribute 11

#define transform3Attribute 12

extern void (* FreeSpots_init)(eC_FreeSpots * __this, uint count);

extern void (* FreeSpots_markFree)(eC_FreeSpots * __this, int spot);

extern int (* FreeSpots_next)(eC_FreeSpots * __this);

extern void (* FreeSpots_resize)(eC_FreeSpots * __this, uint count);

struct eC_GLArrayTexture
{
   uint texture;
   uint width;
   uint height;
   uint numLayers;
   uint numLevels;
   eC_bool maxLevel;
   int format;
   eC_FreeSpots spots;
};
extern void (* GLArrayTexture__init)(eC_GLArrayTexture * __this, int levels, int w, int h, int count, int format, eC_bool setMaxLevel);

extern int (* GLArrayTexture_allocateLayer)(eC_GLArrayTexture * __this, uint targetFBO);

extern void (* GLArrayTexture_bind)(eC_GLArrayTexture * __this);

extern void (* GLArrayTexture_copy)(eC_GLArrayTexture * __this, eC_GLArrayTexture * src, uint targetFBO);

extern void (* GLArrayTexture_free)(eC_GLArrayTexture * __this);

extern void (* GLArrayTexture_freeLayer)(eC_GLArrayTexture * __this, int layer);

extern void (* GLArrayTexture_init)(eC_GLArrayTexture * __this, int levels, int w, int h, int count);

extern void (* GLArrayTexture_initMaxLevel)(eC_GLArrayTexture * __this, int levels, int w, int h, int count);

extern void (* GLArrayTexture_initRGBAUShort)(eC_GLArrayTexture * __this, int levels, int w, int h, int count);

extern void (* GLArrayTexture_initRGBUShort)(eC_GLArrayTexture * __this, int levels, int w, int h, int count);

extern void (* GLArrayTexture_initUShort)(eC_GLArrayTexture * __this, int levels, int w, int h, int count);

extern void (* GLArrayTexture_resize)(eC_GLArrayTexture * __this, uint numLayers, uint targetFBO);

extern void (* GLArrayTexture_set1x1Layer)(eC_GLArrayTexture * __this, int layer, eC_ColorAlpha color, uint targetFBO);

extern void (* GLArrayTexture_setFilter)(eC_GLArrayTexture * __this, eC_GLTextureFilter minFilter, eC_GLTextureFilter magFilter);

extern void (* GLArrayTexture_setLayer)(eC_GLArrayTexture * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

extern void (* GLArrayTexture_setLayerCompressed)(eC_GLArrayTexture * __this, int level, int x, int y, int layer, byte * c, uintsize sizeBytes, uint targetFBO);

extern void (* GLArrayTexture_setLayerFormat)(eC_GLArrayTexture * __this, int level, int x, int y, int layer, byte * c, uint targetFBO, int format, int type);

extern void (* GLArrayTexture_setLayerRGBAUShort)(eC_GLArrayTexture * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

extern void (* GLArrayTexture_setLayerRGBUShort)(eC_GLArrayTexture * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

extern void (* GLArrayTexture_setLayerUShort)(eC_GLArrayTexture * __this, int level, int x, int y, int layer, byte * c, uint targetFBO);

struct eC_GLDrawCommand
{
   uint count;
   uint instanceCount;
   uint firstIndex;
   uint baseVertex;
   uint baseInstance;
};
struct eC_GLMultiDraw
{
   eC_GLMB indexGLMB;
   eC_GLMB vertexGLMB;
   eC_GLAB idsAB;
   eC_GLCAB commandsB;
   uint vao;
   uint commandsCount;
   eC_GLIMTKMode drawMode;
   uint commandsAlloced;
   uint * drawIDs;
   eC_GLDrawCommand * commands;
   uint type;
   uint idsAlloced;
   uint totalInstances;
   uint vertexStride;
   eC_GLAB transformsAB;
   int transformSize;
   float * transforms;
   uint lastTransformAB;
   uint lastIDAB;
   uint lastVBO;
   uint lastIBO;
};
extern void (* GLMultiDraw_addDrawCommand)(eC_GLMultiDraw * __this, uint indexCount, uint instanceCount, uint firstIndex, uint baseVertex, uint baseInstance);

extern void (* GLMultiDraw_addDrawCommandCustomID)(eC_GLMultiDraw * __this, uint indexCount, uint instanceCount, uint firstIndex, uint baseVertex, uint baseInstance, uint layer);

extern int (* GLMultiDraw_allocateIx)(eC_GLMultiDraw * __this, uint nIndices, uint indexSize, const void * data);

extern int (* GLMultiDraw_allocateVbo)(eC_GLMultiDraw * __this, uint nVertices, uint vertexSize, const void * data);

extern void (* GLMultiDraw_draw)(eC_GLMultiDraw * __this);

extern void (* GLMultiDraw_free)(eC_GLMultiDraw * __this);

extern void (* GLMultiDraw_freeIx)(eC_GLMultiDraw * __this, int baseIndex, uint indexSize, uint count);

extern void (* GLMultiDraw_freeVbo)(eC_GLMultiDraw * __this, int baseVertex, uint vertexSize, uint count);

extern void (* GLMultiDraw_init)(eC_GLMultiDraw * __this, eC_GLIMTKMode mode, uint minAlloc);

extern void (* GLMultiDraw_prepare)(eC_GLMultiDraw * __this, int vertNCoords, int verticesStride);

extern void (* GLMultiDraw_printStats)(eC_GLMultiDraw * __this);

extern void (* GLMultiDraw_resize)(eC_GLMultiDraw * __this, uint size);

extern void (* GLMultiDraw_resizeCommands)(eC_GLMultiDraw * __this, uint size);

extern void (* GLMultiDraw_resizeIDs)(eC_GLMultiDraw * __this, uint size);

extern eC_Property * property_GLMultiDraw_ix32;
extern void (* GLMultiDraw_set_ix32)(const eC_GLMultiDraw * g, eC_bool value);

extern void (* eC_gLMultisampling)(eC_bool value);
typedef struct eC_PNGOptions eC_PNGOptions;
struct eC_PNGOptions
{
   int zlibCompressionLevel;
};
typedef struct eC_Cube eC_Cube;
typedef struct eC_SkyBox eC_SkyBox;
typedef struct eC_Sphere eC_Sphere;
struct eC_Cube
{
   byte __ecerePrivateData0[128];
   eC_Transform transform;
   byte __ecere_padding[696];
};
extern eC_bool (* Cube_create)(eC_Cube * __this, const eC_DisplaySystem displaySystem);

extern eC_Property * property_Cube_size;
extern void (* Cube_set_size)(const eC_Cube * c, const eC_Vector3Df * value);

struct eC_SkyBox
{
   byte __ecerePrivateData0[128];
   eC_Transform transform;
   byte __ecere_padding[728];
};
extern eC_bool (* SkyBox_create)(eC_SkyBox * __this, eC_DisplaySystem displaySystem);

extern void (* SkyBox_render)(eC_SkyBox * __this, eC_Camera camera, eC_Display display);

extern eC_Property * property_SkyBox_size;
extern void (* SkyBox_set_size)(const eC_SkyBox * s, const eC_Vector3Df * value);

extern eC_Property * property_SkyBox_folder;
extern void (* SkyBox_set_folder)(const eC_SkyBox * s, const char * value);

extern eC_Property * property_SkyBox_extension;
extern void (* SkyBox_set_extension)(const eC_SkyBox * s, const char * value);

extern eC_Property * property_SkyBox_newStyle;
extern void (* SkyBox_set_newStyle)(const eC_SkyBox * s, eC_bool value);

extern eC_Property * property_SkyBox_cubeMap;
extern void (* SkyBox_set_cubeMap)(const eC_SkyBox * s, eC_CubeMap value);

struct eC_Sphere
{
   byte __ecerePrivateData0[128];
   eC_Transform transform;
   byte __ecere_padding[696];
};
extern eC_bool (* Sphere_create)(eC_Sphere * __this, eC_DisplaySystem displaySystem);

extern eC_Property * property_Sphere_numLat;
extern void (* Sphere_set_numLat)(const eC_Sphere * s, int value);

extern eC_Property * property_Sphere_numLon;
extern void (* Sphere_set_numLon)(const eC_Sphere * s, int value);

extern eC_Property * property_Sphere_flattenedBody;
extern void (* Sphere_set_flattenedBody)(const eC_Sphere * s, float value);

typedef eC_Window eC_TVisionSkin_Window;
typedef eC_Button eC_WindowsSkin_Button;
typedef eC_Window eC_WindowsSkin_Window;
struct eC_EditLine
{
   byte __ecere_padding[48];
};
struct class_members_ListBox
{
   byte __ecerePrivateData0[128];
   double typingTimeOut;
   byte __ecere_padding[176];
};
struct class_members_SelectorButton
{
   eC_Window focusHolder;
};
typedef int eC_BoxAlignment;
enum
{
   BoxAlignment_center = 0x0,
   BoxAlignment_left = 0x1,
   BoxAlignment_right = 0x2,
   BoxAlignment_top = 0x3,
   BoxAlignment_bottom = 0x4
};

typedef struct eC_BufferLocation eC_BufferLocation;
typedef int eC_ButtonState;
enum
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

typedef eC_CommonControl eC_CalendarControl;
typedef eC_Instance eC_DataField;
typedef eC_Instance eC_DataRow;
typedef eC_CommonControl eC_DirectoriesBox;
typedef eC_CommonControl eC_DropBox;
typedef int eC_EditBoxFindResult;
enum
{
   EditBoxFindResult_notFound = 0x0,
   EditBoxFindResult_found = 0x1,
   EditBoxFindResult_wrapped = 0x2
};

typedef eC_File eC_EditBoxStream;
typedef struct eC_EditLine eC_EditLine;
typedef eC_Instance eC_EditSyntaxHL;
typedef eC_Button eC_SelectorButton;
typedef eC_SelectorButton eC_EditableSelectorButton;
typedef eC_Window eC_FileDialog;
typedef uint32 eC_Key;
typedef eC_CommonControl eC_ListBox;
typedef eC_Instance eC_Menu;
typedef eC_Instance eC_MenuItem;
typedef uint32 eC_Modifiers;
typedef eC_Window eC_PaneSplitter;
typedef eC_CommonControl eC_PathBox;
typedef int eC_PathTypeExpected;
enum
{
   PathTypeExpected_none = 0x0,
   PathTypeExpected_any = 0x1,
   PathTypeExpected_directory = 0x2,
   PathTypeExpected_file = 0x3
};

typedef float eC_Percentage;
typedef eC_CommonControl eC_ScrollBar;
typedef int eC_ScrollBarAction;
enum
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

typedef int eC_ScrollDirection;
enum
{
   ScrollDirection_horizontal = 0x0,
   ScrollDirection_vertical = 0x1
};

typedef eC_Window eC_Stacker;
typedef eC_Stacker eC_SelectorBar;
typedef eC_Window eC_StatusBar;
typedef eC_Instance eC_StatusField;
typedef eC_Window eC_Tab;
typedef eC_Window eC_TabControl;
typedef int eC_TabsPlacement;
enum
{
   TabsPlacement_top = 0x0,
   TabsPlacement_bottom = 0x1,
   TabsPlacement_left = 0x2,
   TabsPlacement_right = 0x3
};

typedef struct eC_UndoAction eC_UndoAction;
typedef eC_Instance eC_UndoBuffer;
typedef uint32 eC_DataDisplayFlags;
typedef struct eC_DataFieldSort eC_DataFieldSort;
typedef char * eC_DirPath;
typedef char * eC_FilePath;
typedef eC_CommonControl eC_Label;
typedef eC_MenuItem eC_MenuDivider;
typedef eC_MenuItem eC_MenuPlacement;
typedef eC_Instance eC_OldArray;
typedef eC_CommonControl eC_Picture;
typedef eC_Window eC_PopupMenu;
typedef eC_CommonControl eC_ProgressBar;
typedef eC_DataBox eC_SavingDataBox;
typedef eC_Stacker eC_ToolBar;
typedef eC_Button eC_ToolButton;
typedef eC_Window eC_ToolSeparator;
typedef eC_Window eC_ToolTip;
struct eC_BufferLocation
{
   eC_EditLine * line;
   int y;
   int x;
};
extern void (* BufferLocation_adjustAdd)(eC_BufferLocation * __this, eC_BufferLocation * start, eC_BufferLocation * end);

extern void (* BufferLocation_adjustDelete)(eC_BufferLocation * __this, eC_BufferLocation * start, eC_BufferLocation * end);

extern int Button_notifyClicked_vTblID;
eC_bool Button_notifyClicked(eC_Button __i, eC_Window __t, eC_Button button, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Button_notifyClicked;

extern int Button_notifyDoubleClick_vTblID;
eC_bool Button_notifyDoubleClick(eC_Button __i, eC_Window __t, eC_Button button, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Button_notifyDoubleClick;

extern int Button_notifyMouseLeave_vTblID;
eC_bool Button_notifyMouseLeave(eC_Button __i, eC_Window __t, eC_Button button, eC_Modifiers mods);
extern eC_Method * method_Button_notifyMouseLeave;

extern int Button_notifyMouseMove_vTblID;
eC_bool Button_notifyMouseMove(eC_Button __i, eC_Window __t, eC_Button button, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Button_notifyMouseMove;

extern int Button_notifyMouseOver_vTblID;
eC_bool Button_notifyMouseOver(eC_Button __i, eC_Window __t, eC_Button button, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Button_notifyMouseOver;

extern int Button_notifyPushed_vTblID;
eC_bool Button_notifyPushed(eC_Button __i, eC_Window __t, eC_Button button, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Button_notifyPushed;

extern int Button_notifyReleased_vTblID;
eC_bool Button_notifyReleased(eC_Button __i, eC_Window __t, eC_Button button, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Button_notifyReleased;

extern void (* Button_removeRadio)(eC_Button __this);

extern void (* Button_setColor)(eC_Button __this, eC_ButtonState state, eC_Color value);

extern void (* Button_setTextColor)(eC_Button __this, eC_ButtonState state, eC_Color value);

extern eC_Property * property_Button_opacity;
extern void (* Button_set_opacity)(const eC_Button b, eC_Percentage value);
extern eC_Percentage (* Button_get_opacity)(const eC_Button b);
extern eC_bool (* Button_isSet_opacity)(const eC_Button b);

extern eC_Property * property_Button_drawBehind;
extern void (* Button_set_drawBehind)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_drawBehind)(const eC_Button b);
extern eC_bool (* Button_isSet_drawBehind)(const eC_Button b);

extern eC_Property * property_Button_isRadio;
extern void (* Button_set_isRadio)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_isRadio)(const eC_Button b);

extern eC_Property * property_Button_isCheckbox;
extern void (* Button_set_isCheckbox)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_isCheckbox)(const eC_Button b);

extern eC_Property * property_Button_bevel;
extern void (* Button_set_bevel)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_bevel)(const eC_Button b);

extern eC_Property * property_Button_bevelOver;
extern void (* Button_set_bevelOver)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_bevelOver)(const eC_Button b);

extern eC_Property * property_Button_toggle;
extern void (* Button_set_toggle)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_toggle)(const eC_Button b);

extern eC_Property * property_Button_checked;
extern void (* Button_set_checked)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_checked)(const eC_Button b);

extern eC_Property * property_Button_alignment;
extern void (* Button_set_alignment)(const eC_Button b, eC_Alignment value);
extern eC_Alignment (* Button_get_alignment)(const eC_Button b);

extern eC_Property * property_Button_bitmap;
extern void (* Button_set_bitmap)(const eC_Button b, eC_BitmapResource value);
extern eC_BitmapResource (* Button_get_bitmap)(const eC_Button b);

extern eC_Property * property_Button_stayUp;
extern void (* Button_set_stayUp)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_stayUp)(const eC_Button b);

extern eC_Property * property_Button_scaleBitmap;
extern void (* Button_set_scaleBitmap)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_scaleBitmap)(const eC_Button b);

extern eC_Property * property_Button_keyRepeat;
extern void (* Button_set_keyRepeat)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_keyRepeat)(const eC_Button b);

extern eC_Property * property_Button_symbol;
extern void (* Button_set_symbol)(const eC_Button b, unichar value);
extern unichar (* Button_get_symbol)(const eC_Button b);

extern eC_Property * property_Button_ellipsis;
extern void (* Button_set_ellipsis)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_ellipsis)(const eC_Button b);

extern eC_Property * property_Button_stayDown;
extern void (* Button_set_stayDown)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_stayDown)(const eC_Button b);

extern eC_Property * property_Button_offset;
extern void (* Button_set_offset)(const eC_Button b, eC_bool value);
extern eC_bool (* Button_get_offset)(const eC_Button b);

extern eC_Property * property_Button_buttonState;
extern void (* Button_set_buttonState)(const eC_Button b, eC_ButtonState value);
extern eC_ButtonState (* Button_get_buttonState)(const eC_Button b);

extern eC_Property * property_Button_bitmapAlignment;
extern void (* Button_set_bitmapAlignment)(const eC_Button b, eC_BoxAlignment value);
extern eC_BoxAlignment (* Button_get_bitmapAlignment)(const eC_Button b);

struct class_members_CalendarControl
{
   eC_Date dateValue;
   eC_Month shownMonth;
   int shownYear;
   byte __ecere_padding[44];
};
extern int CalendarControl_notifyChanged_vTblID;
void CalendarControl_notifyChanged(eC_CalendarControl __i, eC_Window __t, eC_CalendarControl calendarControl, eC_bool close);
extern eC_Method * method_CalendarControl_notifyChanged;

struct class_members_DataBox
{
   eC_Class * type;
   void * data;
   void * fieldData;
   eC_Window editor;
   eC_bool readOnly;
   eC_bool keepEditor;
   eC_bool autoSize;
   eC_bool needUpdate;
   eC_String stringValue;
   byte __ecere_padding[8];
};
extern void (* DataBox_modified)(eC_DataBox __this);

extern int DataBox_notifyChanged_vTblID;
eC_bool DataBox_notifyChanged(eC_DataBox __i, eC_Window __t, eC_DataBox dataBox, eC_bool closingDropDown);
extern eC_Method * method_DataBox_notifyChanged;

extern int DataBox_notifyModified_vTblID;
eC_bool DataBox_notifyModified(eC_DataBox __i, eC_Window __t);
extern eC_Method * method_DataBox_notifyModified;

extern int DataBox_onConfigure_vTblID;
void DataBox_onConfigure(eC_DataBox __i, eC_Window editor);
extern eC_Method * method_DataBox_onConfigure;

extern void (* DataBox_refresh)(eC_DataBox __this);

extern eC_bool (* DataBox_saveData)(eC_DataBox __this);

extern int DataBox_setData_vTblID;
void DataBox_setData(eC_DataBox __i, any_object newData, eC_bool closingDropDown);
extern eC_Method * method_DataBox_setData;

#define DATADISPLAYFLAGS_selected_SHIFT                  0
#define DATADISPLAYFLAGS_selected_MASK                   0x1
#define DATADISPLAYFLAGS_fullRow_SHIFT                   1
#define DATADISPLAYFLAGS_fullRow_MASK                    0x2
#define DATADISPLAYFLAGS_current_SHIFT                   2
#define DATADISPLAYFLAGS_current_MASK                    0x4
#define DATADISPLAYFLAGS_active_SHIFT                    3
#define DATADISPLAYFLAGS_active_MASK                     0x8
#define DATADISPLAYFLAGS_dropBox_SHIFT                   4
#define DATADISPLAYFLAGS_dropBox_MASK                    0x10
#define DATADISPLAYFLAGS_header_SHIFT                    5
#define DATADISPLAYFLAGS_header_MASK                     0x20
#define DATADISPLAYFLAGS_firstField_SHIFT                6
#define DATADISPLAYFLAGS_firstField_MASK                 0x40


extern void (* DataField_autoSize)(eC_DataField __this);

extern void (* DataField_move)(eC_DataField __this, eC_DataField after);

extern eC_Property * property_DataField_dataType;
extern void (* DataField_set_dataType)(const eC_DataField d, eC_Class * value);
extern eC_Class * (* DataField_get_dataType)(const eC_DataField d);

extern eC_Property * property_DataField_editable;
extern void (* DataField_set_editable)(const eC_DataField d, eC_bool value);

extern eC_Property * property_DataField_fixed;
extern void (* DataField_set_fixed)(const eC_DataField d, eC_bool value);
extern eC_bool (* DataField_get_fixed)(const eC_DataField d);

extern eC_Property * property_DataField_alignment;
extern void (* DataField_set_alignment)(const eC_DataField d, eC_Alignment value);
extern eC_Alignment (* DataField_get_alignment)(const eC_DataField d);

extern eC_Property * property_DataField_width;
extern void (* DataField_set_width)(const eC_DataField d, int value);
extern int (* DataField_get_width)(const eC_DataField d);

extern eC_Property * property_DataField_index;
extern int (* DataField_get_index)(const eC_DataField d);

extern eC_Property * property_DataField_position;
extern void (* DataField_set_position)(const eC_DataField d, int value);
extern int (* DataField_get_position)(const eC_DataField d);

extern eC_Property * property_DataField_sortOrder;
extern int (* DataField_get_sortOrder)(const eC_DataField d);

extern eC_Property * property_DataField_header;
extern void (* DataField_set_header)(const eC_DataField d, const char * value);

extern eC_Property * property_DataField_userData;
extern void (* DataField_set_userData)(const eC_DataField d, void * value);
extern void * (* DataField_get_userData)(const eC_DataField d);

extern eC_Property * property_DataField_freeData;
extern void (* DataField_set_freeData)(const eC_DataField d, eC_bool value);
extern eC_bool (* DataField_get_freeData)(const eC_DataField d);

extern eC_Property * property_DataField_prev;
extern eC_DataField (* DataField_get_prev)(const eC_DataField d);

extern eC_Property * property_DataField_next;
extern eC_DataField (* DataField_get_next)(const eC_DataField d);

struct eC_DataFieldSort
{
   eC_DataField field;
   int order;
};
extern eC_DataRow (* DataRow_addRow)(eC_DataRow __this);

extern eC_DataRow (* DataRow_addRowAfter)(eC_DataRow __this, eC_DataRow after);

extern eC_DataRow (* DataRow_addString)(eC_DataRow __this, const char * string);

extern eC_DataRow (* DataRow_addStringf)(eC_DataRow __this, const char * format, ...);

extern void (* DataRow_edit)(eC_DataRow __this, eC_DataField field);

extern eC_DataRow (* DataRow_findRow)(eC_DataRow __this, int64 tag);

extern eC_DataRow (* DataRow_findSubRow)(eC_DataRow __this, int64 tag);

extern any_object (* DataRow_getData)(eC_DataRow __this, eC_DataField field);

extern eC_DataRow (* DataRow_getNextRow)(eC_DataRow __this);

extern eC_DataRow (* DataRow_getPrevRow)(eC_DataRow __this);

extern void (* DataRow_move)(eC_DataRow __this, eC_DataRow after);

extern void * (* DataRow_setData)(eC_DataRow __this, eC_DataField field, any_object newData);

extern void (* DataRow_sortSubRows)(eC_DataRow __this, eC_bool scrollToCurrent);

extern void (* DataRow_unsetData)(eC_DataRow __this, eC_DataField field);

extern eC_Property * property_DataRow_tag;
extern void (* DataRow_set_tag)(const eC_DataRow d, int64 value);
extern int64 (* DataRow_get_tag)(const eC_DataRow d);

extern eC_Property * property_DataRow_previous;
extern eC_DataRow (* DataRow_get_previous)(const eC_DataRow d);

extern eC_Property * property_DataRow_next;
extern eC_DataRow (* DataRow_get_next)(const eC_DataRow d);

extern eC_Property * property_DataRow_index;
extern int (* DataRow_get_index)(const eC_DataRow d);

extern eC_Property * property_DataRow_string;
extern void (* DataRow_set_string)(const eC_DataRow d, const char * value);
extern const char * (* DataRow_get_string)(const eC_DataRow d);

extern eC_Property * property_DataRow_isHeader;
extern void (* DataRow_set_isHeader)(const eC_DataRow d, eC_bool value);
extern eC_bool (* DataRow_get_isHeader)(const eC_DataRow d);

extern eC_Property * property_DataRow_icon;
extern void (* DataRow_set_icon)(const eC_DataRow d, eC_BitmapResource value);
extern eC_BitmapResource (* DataRow_get_icon)(const eC_DataRow d);

extern eC_Property * property_DataRow_collapsed;
extern void (* DataRow_set_collapsed)(const eC_DataRow d, eC_bool value);
extern eC_bool (* DataRow_get_collapsed)(const eC_DataRow d);

extern eC_Property * property_DataRow_selected;
extern void (* DataRow_set_selected)(const eC_DataRow d, eC_bool value);
extern eC_bool (* DataRow_get_selected)(const eC_DataRow d);

extern eC_Property * property_DataRow_parent;
extern void (* DataRow_set_parent)(const eC_DataRow d, eC_DataRow value);
extern eC_DataRow (* DataRow_get_parent)(const eC_DataRow d);

extern eC_Property * property_DataRow_lastRow;
extern eC_DataRow (* DataRow_get_lastRow)(const eC_DataRow d);

extern eC_Property * property_DataRow_firstRow;
extern eC_DataRow (* DataRow_get_firstRow)(const eC_DataRow d);

struct class_members_DirectoriesBox
{
   byte __ecerePrivateData0[16];
   eC_bool browsing;
   eC_Button add;
   eC_Button remove;
   eC_RepButton up;
   eC_RepButton down;
   eC_ListBox list;
   eC_DataField dirField;
};
extern int DirectoriesBox_notifyModified_vTblID;
eC_bool DirectoriesBox_notifyModified(eC_DirectoriesBox __i, eC_Window __t, eC_DirectoriesBox dirsBox);
extern eC_Method * method_DirectoriesBox_notifyModified;

extern int DirectoriesBox_notifyPathBoxModified_vTblID;
eC_bool DirectoriesBox_notifyPathBoxModified(eC_DirectoriesBox __i, eC_Window __t, eC_DirectoriesBox dirsBox, eC_PathBox pathBox);
extern eC_Method * method_DirectoriesBox_notifyPathBoxModified;

extern int DirectoriesBox_onBrowsedDir_vTblID;
eC_bool DirectoriesBox_onBrowsedDir(eC_DirectoriesBox __i, char ** directory);
extern eC_Method * method_DirectoriesBox_onBrowsedDir;

extern int DirectoriesBox_onChangedDir_vTblID;
eC_bool DirectoriesBox_onChangedDir(eC_DirectoriesBox __i, char ** directory);
extern eC_Method * method_DirectoriesBox_onChangedDir;

extern int DirectoriesBox_onPrepareBrowseDir_vTblID;
eC_bool DirectoriesBox_onPrepareBrowseDir(eC_DirectoriesBox __i, char ** directory);
extern eC_Method * method_DirectoriesBox_onPrepareBrowseDir;

extern eC_Property * property_DirectoriesBox_strings;
extern void (* DirectoriesBox_set_strings)(const eC_DirectoriesBox d, eC_Array value);
extern eC_Array (* DirectoriesBox_get_strings)(const eC_DirectoriesBox d);

extern eC_Property * property_DirectoriesBox_browseDialog;
extern void (* DirectoriesBox_set_browseDialog)(const eC_DirectoriesBox d, eC_FileDialog value);
extern eC_FileDialog (* DirectoriesBox_get_browseDialog)(const eC_DirectoriesBox d);

extern eC_Property * property_DirectoriesBox_baseBrowsePath;
extern void (* DirectoriesBox_set_baseBrowsePath)(const eC_DirectoriesBox d, eC_String value);
extern eC_String (* DirectoriesBox_get_baseBrowsePath)(const eC_DirectoriesBox d);

struct class_members_DropBox
{
   eC_Button button;
   byte __ecere_padding[88];
};
extern void (* DropBox_addField)(eC_DropBox __this, eC_DataField field);

extern eC_DataRow (* DropBox_addRow)(eC_DropBox __this);

extern eC_DataRow (* DropBox_addRowAfter)(eC_DropBox __this, eC_DataRow after);

extern eC_DataRow (* DropBox_addString)(eC_DropBox __this, const char * string);

extern eC_DataRow (* DropBox_addStringf)(eC_DropBox __this, const char * format, ...);

extern void (* DropBox_clear)(eC_DropBox __this);

extern void (* DropBox_deleteRow)(eC_DropBox __this, eC_DataRow row);

extern eC_DataRow (* DropBox_findRow)(eC_DropBox __this, int64 tag);

extern eC_DataRow (* DropBox_findSubRow)(eC_DropBox __this, int64 tag);

extern any_object (* DropBox_getData)(eC_DropBox __this, eC_DataField field);

extern int (* DropBox_getRowCount)(eC_DropBox __this);

extern int64 (* DropBox_getTag)(eC_DropBox __this);

extern int DropBox_notifyClose_vTblID;
eC_bool DropBox_notifyClose(eC_DropBox __i, eC_Window __t, eC_DropBox dropBox);
extern eC_Method * method_DropBox_notifyClose;

extern int DropBox_notifyHighlight_vTblID;
eC_bool DropBox_notifyHighlight(eC_DropBox __i, eC_Window __t, eC_DropBox dropBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_DropBox_notifyHighlight;

extern int DropBox_notifySelect_vTblID;
eC_bool DropBox_notifySelect(eC_DropBox __i, eC_Window __t, eC_DropBox dropBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_DropBox_notifySelect;

extern int DropBox_notifyTextEntry_vTblID;
eC_bool DropBox_notifyTextEntry(eC_DropBox __i, eC_Window __t, eC_DropBox dropBox, const char * string, eC_bool confirmed);
extern eC_Method * method_DropBox_notifyTextEntry;

extern int DropBox_onCloseDropDown_vTblID;
void DropBox_onCloseDropDown(eC_DropBox __i, eC_Window pullDown);
extern eC_Method * method_DropBox_onCloseDropDown;

extern int DropBox_onDropDown_vTblID;
eC_Window DropBox_onDropDown(eC_DropBox __i);
extern eC_Method * method_DropBox_onDropDown;

extern eC_bool (* DropBox_save)(eC_DropBox __this);

extern void (* DropBox_selectRow)(eC_DropBox __this, eC_DataRow row);

extern void * (* DropBox_setData)(eC_DropBox __this, eC_DataField field, any_object data);

extern void (* DropBox_sort)(eC_DropBox __this, eC_DataField field, int order);

extern eC_Property * property_DropBox_activeStipple;
extern void (* DropBox_set_activeStipple)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_activeStipple)(const eC_DropBox d);

extern eC_Property * property_DropBox_showButton;
extern void (* DropBox_set_showButton)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_showButton)(const eC_DropBox d);

extern eC_Property * property_DropBox_alignment;
extern void (* DropBox_set_alignment)(const eC_DropBox d, eC_Alignment value);
extern eC_Alignment (* DropBox_get_alignment)(const eC_DropBox d);

extern eC_Property * property_DropBox_noHighlight;
extern void (* DropBox_set_noHighlight)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_noHighlight)(const eC_DropBox d);

extern eC_Property * property_DropBox_activeColor;
extern void (* DropBox_set_activeColor)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_activeColor)(const eC_DropBox d);

extern eC_Property * property_DropBox_currentRow;
extern void (* DropBox_set_currentRow)(const eC_DropBox d, eC_DataRow value);
extern eC_DataRow (* DropBox_get_currentRow)(const eC_DropBox d);

extern eC_Property * property_DropBox_firstRow;
extern eC_DataRow (* DropBox_get_firstRow)(const eC_DropBox d);

extern eC_Property * property_DropBox_lastRow;
extern eC_DataRow (* DropBox_get_lastRow)(const eC_DropBox d);

extern eC_Property * property_DropBox_contents;
extern void (* DropBox_set_contents)(const eC_DropBox d, const char * value);
extern const char * (* DropBox_get_contents)(const eC_DropBox d);

extern eC_Property * property_DropBox_editText;
extern void (* DropBox_set_editText)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_editText)(const eC_DropBox d);

extern eC_Property * property_DropBox_editBox;
extern eC_EditBox (* DropBox_get_editBox)(const eC_DropBox d);

extern eC_Property * property_DropBox_typingTimeout;
extern void (* DropBox_set_typingTimeout)(const eC_DropBox d, eC_Time value);
extern eC_Time (* DropBox_get_typingTimeout)(const eC_DropBox d);

extern eC_Property * property_DropBox_rowHeight;
extern void (* DropBox_set_rowHeight)(const eC_DropBox d, int value);
extern int (* DropBox_get_rowHeight)(const eC_DropBox d);

extern eC_Property * property_DropBox_maxShown;
extern void (* DropBox_set_maxShown)(const eC_DropBox d, int value);
extern int (* DropBox_get_maxShown)(const eC_DropBox d);

extern eC_Property * property_DropBox_pullDown;
extern eC_Window (* DropBox_get_pullDown)(const eC_DropBox d);

extern eC_Property * property_DropBox_showNone;
extern void (* DropBox_set_showNone)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_showNone)(const eC_DropBox d);

extern eC_Property * property_DropBox_selectionColor;
extern void (* DropBox_set_selectionColor)(const eC_DropBox d, eC_Color value);
extern eC_Color (* DropBox_get_selectionColor)(const eC_DropBox d);
extern eC_bool (* DropBox_isSet_selectionColor)(const eC_DropBox d);

extern eC_Property * property_DropBox_selectionText;
extern void (* DropBox_set_selectionText)(const eC_DropBox d, eC_Color value);
extern eC_Color (* DropBox_get_selectionText)(const eC_DropBox d);
extern eC_bool (* DropBox_isSet_selectionText)(const eC_DropBox d);

extern eC_Property * property_DropBox_changeContents;
extern void (* DropBox_set_changeContents)(const eC_DropBox d, eC_bool value);
extern eC_bool (* DropBox_get_changeContents)(const eC_DropBox d);

extern eC_Property * property_DropBox_listBox;
extern eC_ListBox (* DropBox_get_listBox)(const eC_DropBox d);

extern eC_Property * property_DropBox_rowCount;
extern int (* DropBox_get_rowCount)(const eC_DropBox d);

extern eC_bool (* EditBox_addCh)(eC_EditBox __this, unichar ch);

extern eC_bool (* EditBox_addS)(eC_EditBox __this, const char * string);

extern void (* EditBox_backSpace)(eC_EditBox __this);

extern void (* EditBox_centerOnCursor)(eC_EditBox __this);

extern void (* EditBox_clear)(eC_EditBox __this);

extern void (* EditBox_clearLine)(eC_EditBox __this);

extern void (* EditBox_copy)(eC_EditBox __this);

extern void (* EditBox_cut)(eC_EditBox __this);

extern void (* EditBox_delete)(eC_EditBox __this, eC_EditLine * line1, int y1, int x1, eC_EditLine * line2, int y2, int x2);

extern void (* EditBox_deleteSelection)(eC_EditBox __this);

extern void (* EditBox_deselect)(eC_EditBox __this);

extern void (* EditBox_end)(eC_EditBox __this);

extern eC_EditBoxFindResult (* EditBox_find)(eC_EditBox __this, const char * text, eC_bool matchWord, eC_bool matchCase, eC_bool isSearchDown);

extern eC_EditBoxFindResult (* EditBox_findInSelection)(eC_EditBox __this, const char * text, eC_bool matchWord, eC_bool matchCase, eC_EditLine * l2, int y2, int x2);

extern void (* EditBox_getSel)(eC_EditBox __this, char * text, eC_bool addCr);

extern void (* EditBox_getSelPos)(eC_EditBox __this, eC_EditLine * l1, int * y1, int * x1, eC_EditLine * l2, int * y2, int * x2, eC_bool reorder);

extern int (* EditBox_getText)(eC_EditBox __this, char * text, eC_EditLine * _l1, int _y1, int _x1, eC_EditLine * _l2, int _y2, int _x2, eC_bool addCr, eC_bool addSpaces);

extern eC_bool (* EditBox_goToLineNum)(eC_EditBox __this, int lineNum);

extern eC_bool (* EditBox_goToPosition)(eC_EditBox __this, eC_EditLine * line, int y, int x);

extern void (* EditBox_home)(eC_EditBox __this);

extern void (* EditBox_lineDown)(eC_EditBox __this);

extern void (* EditBox_lineUp)(eC_EditBox __this);

extern void (* EditBox_load)(eC_EditBox __this, eC_File f);

extern void (* EditBox_modified)(eC_EditBox __this);

extern int EditBox_notifyCaretMove_vTblID;
void EditBox_notifyCaretMove(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, int line, int charPos);
extern eC_Method * method_EditBox_notifyCaretMove;

extern int EditBox_notifyCharsAdded_vTblID;
eC_bool EditBox_notifyCharsAdded(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, eC_BufferLocation * before, eC_BufferLocation * after, eC_bool pasteOperation);
extern eC_Method * method_EditBox_notifyCharsAdded;

extern int EditBox_notifyCharsDeleted_vTblID;
eC_bool EditBox_notifyCharsDeleted(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, eC_BufferLocation * beforeLoc, eC_BufferLocation * after, eC_bool pasteOperation);
extern eC_Method * method_EditBox_notifyCharsDeleted;

extern int EditBox_notifyDoubleClick_vTblID;
eC_bool EditBox_notifyDoubleClick(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, eC_EditLine * line, eC_Modifiers mods);
extern eC_Method * method_EditBox_notifyDoubleClick;

extern int EditBox_notifyDropped_vTblID;
eC_bool EditBox_notifyDropped(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, int x, int y);
extern eC_Method * method_EditBox_notifyDropped;

extern int EditBox_notifyKeyDown_vTblID;
eC_bool EditBox_notifyKeyDown(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, eC_Key key, unichar ch);
extern eC_Method * method_EditBox_notifyKeyDown;

extern int EditBox_notifyModified_vTblID;
eC_bool EditBox_notifyModified(eC_EditBox __i, eC_Window __t, eC_EditBox editBox);
extern eC_Method * method_EditBox_notifyModified;

extern int EditBox_notifyOvrToggle_vTblID;
void EditBox_notifyOvrToggle(eC_EditBox __i, eC_Window __t, eC_EditBox editBox, eC_bool overwrite);
extern eC_Method * method_EditBox_notifyOvrToggle;

extern int EditBox_notifyUnsetModified_vTblID;
eC_bool EditBox_notifyUnsetModified(eC_EditBox __i, eC_Window __t, eC_EditBox editBox);
extern eC_Method * method_EditBox_notifyUnsetModified;

extern int EditBox_notifyUpdate_vTblID;
void EditBox_notifyUpdate(eC_EditBox __i, eC_Window __t, eC_EditBox editBox);
extern eC_Method * method_EditBox_notifyUpdate;

extern void (* EditBox_pageDown)(eC_EditBox __this);

extern void (* EditBox_pageUp)(eC_EditBox __this);

extern void (* EditBox_paste)(eC_EditBox __this);

extern void (* EditBox_printf)(eC_EditBox __this, const char * format, ...);

extern void (* EditBox_putCh)(eC_EditBox __this, unichar ch);

extern void (* EditBox_putS)(eC_EditBox __this, const char * string);

extern void (* EditBox_record)(eC_EditBox __this, eC_UndoAction * action);

extern void (* EditBox_redo)(eC_EditBox __this);

extern void (* EditBox_save)(eC_EditBox __this, eC_File f, eC_bool cr);

extern uint (* EditBox_selSize)(eC_EditBox __this);

extern void (* EditBox_select)(eC_EditBox __this, eC_EditLine * line1, int y1, int x1, eC_EditLine * line2, int y2, int x2);

extern void (* EditBox_selectAll)(eC_EditBox __this);

extern void (* EditBox_setContents)(eC_EditBox __this, const char * format, ...);

extern void (* EditBox_setCursorToView)(eC_EditBox __this);

extern void (* EditBox_setModified)(eC_EditBox __this, eC_bool flag);

extern void (* EditBox_setSelPos)(eC_EditBox __this, eC_EditLine * l1, int y1, int x1, eC_EditLine * l2, int y2, int x2);

extern void (* EditBox_setViewToCursor)(eC_EditBox __this, eC_bool setCaret);

extern void (* EditBox_undo)(eC_EditBox __this);

extern eC_Property * property_EditBox_textHorzScroll;
extern void (* EditBox_set_textHorzScroll)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_textHorzScroll)(const eC_EditBox e);

extern eC_Property * property_EditBox_textVertScroll;
extern void (* EditBox_set_textVertScroll)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_textVertScroll)(const eC_EditBox e);

extern eC_Property * property_EditBox_readOnly;
extern void (* EditBox_set_readOnly)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_readOnly)(const eC_EditBox e);

extern eC_Property * property_EditBox_multiLine;
extern void (* EditBox_set_multiLine)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_multiLine)(const eC_EditBox e);

extern eC_Property * property_EditBox_freeCaret;
extern void (* EditBox_set_freeCaret)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_freeCaret)(const eC_EditBox e);

extern eC_Property * property_EditBox_tabKey;
extern void (* EditBox_set_tabKey)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_tabKey)(const eC_EditBox e);

extern eC_Property * property_EditBox_tabSize;
extern void (* EditBox_set_tabSize)(const eC_EditBox e, int value);
extern int (* EditBox_get_tabSize)(const eC_EditBox e);

extern eC_Property * property_EditBox_tabSelection;
extern void (* EditBox_set_tabSelection)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_tabSelection)(const eC_EditBox e);

extern eC_Property * property_EditBox_smartHome;
extern void (* EditBox_set_smartHome)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_smartHome)(const eC_EditBox e);

extern eC_Property * property_EditBox_autoEmpty;
extern void (* EditBox_set_autoEmpty)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_autoEmpty)(const eC_EditBox e);

extern eC_Property * property_EditBox_noCaret;
extern void (* EditBox_set_noCaret)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_noCaret)(const eC_EditBox e);

extern eC_Property * property_EditBox_maxLineSize;
extern void (* EditBox_set_maxLineSize)(const eC_EditBox e, int value);
extern int (* EditBox_get_maxLineSize)(const eC_EditBox e);

extern eC_Property * property_EditBox_maxNumLines;
extern void (* EditBox_set_maxNumLines)(const eC_EditBox e, int value);
extern int (* EditBox_get_maxNumLines)(const eC_EditBox e);

extern eC_Property * property_EditBox_useTab;
extern void (* EditBox_set_useTab)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_useTab)(const eC_EditBox e);

extern eC_Property * property_EditBox_syntaxHighlighting;
extern void (* EditBox_set_syntaxHighlighting)(const eC_EditBox e, eC_EditSyntaxHL value);
extern eC_EditSyntaxHL (* EditBox_get_syntaxHighlighting)(const eC_EditBox e);

extern eC_Property * property_EditBox_noSelect;
extern void (* EditBox_set_noSelect)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_noSelect)(const eC_EditBox e);

extern eC_Property * property_EditBox_allCaps;
extern void (* EditBox_set_allCaps)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_allCaps)(const eC_EditBox e);

extern eC_Property * property_EditBox_autoSize;
extern void (* EditBox_set_autoSize)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_autoSize)(const eC_EditBox e);

extern eC_Property * property_EditBox_wrap;
extern void (* EditBox_set_wrap)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_wrap)(const eC_EditBox e);

extern eC_Property * property_EditBox_numLines;
extern int (* EditBox_get_numLines)(const eC_EditBox e);

extern eC_Property * property_EditBox_lineNumber;
extern int (* EditBox_get_lineNumber)(const eC_EditBox e);

extern eC_Property * property_EditBox_column;
extern int (* EditBox_get_column)(const eC_EditBox e);

extern eC_Property * property_EditBox_charPos;
extern int (* EditBox_get_charPos)(const eC_EditBox e);

extern eC_Property * property_EditBox_firstLine;
extern eC_EditLine * (* EditBox_get_firstLine)(const eC_EditBox e);

extern eC_Property * property_EditBox_lastLine;
extern eC_EditLine * (* EditBox_get_lastLine)(const eC_EditBox e);

extern eC_Property * property_EditBox_line;
extern eC_EditLine * (* EditBox_get_line)(const eC_EditBox e);

extern eC_Property * property_EditBox_contents;
extern void (* EditBox_set_contents)(const eC_EditBox e, const char * value);
extern const char * (* EditBox_get_contents)(const eC_EditBox e);

extern eC_Property * property_EditBox_overwrite;
extern eC_bool (* EditBox_get_overwrite)(const eC_EditBox e);

extern eC_Property * property_EditBox_caretFollowsScrolling;
extern void (* EditBox_set_caretFollowsScrolling)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_caretFollowsScrolling)(const eC_EditBox e);

extern eC_Property * property_EditBox_multiLineContents;
extern char * (* EditBox_get_multiLineContents)(const eC_EditBox e);

extern eC_Property * property_EditBox_selectionColor;
extern void (* EditBox_set_selectionColor)(const eC_EditBox e, eC_Color value);
extern eC_Color (* EditBox_get_selectionColor)(const eC_EditBox e);
extern eC_bool (* EditBox_isSet_selectionColor)(const eC_EditBox e);

extern eC_Property * property_EditBox_selectionText;
extern void (* EditBox_set_selectionText)(const eC_EditBox e, eC_Color value);
extern eC_Color (* EditBox_get_selectionText)(const eC_EditBox e);
extern eC_bool (* EditBox_isSet_selectionText)(const eC_EditBox e);

extern eC_Property * property_EditBox_recordUndoEvent;
extern void (* EditBox_set_recordUndoEvent)(const eC_EditBox e, eC_bool value);
extern eC_bool (* EditBox_get_recordUndoEvent)(const eC_EditBox e);

extern void (* EditBoxStream_deleteBytes)(eC_EditBoxStream __this, uint count);

extern eC_Property * property_EditBoxStream_editBox;
extern void (* EditBoxStream_set_editBox)(const eC_EditBoxStream e, eC_EditBox value);
extern eC_EditBox (* EditBoxStream_get_editBox)(const eC_EditBoxStream e);

extern eC_Property * property_EditLine_text;
extern void (* EditLine_set_text)(const eC_EditLine * e, const char * value);
extern const char * (* EditLine_get_text)(const eC_EditLine * e);

extern eC_Property * property_EditLine_prev;
extern eC_EditLine * (* EditLine_get_prev)(const eC_EditLine * e);

extern eC_Property * property_EditLine_next;
extern eC_EditLine * (* EditLine_get_next)(const eC_EditLine * e);

extern eC_Property * property_EditLine_count;
extern int (* EditLine_get_count)(const eC_EditLine * e);

extern int EditSyntaxHL_canImpactOtherLines_vTblID;
eC_bool EditSyntaxHL_canImpactOtherLines(eC_EditSyntaxHL __i, eC_EditLine * line);
extern eC_Method * method_EditSyntaxHL_canImpactOtherLines;

extern int EditSyntaxHL_figureStartSyntaxStates_vTblID;
void EditSyntaxHL_figureStartSyntaxStates(eC_EditSyntaxHL __i, eC_EditLine * firstLine, eC_bool reset, eC_EditLine * viewLine);
extern eC_Method * method_EditSyntaxHL_figureStartSyntaxStates;

extern int EditSyntaxHL_gotSpace_vTblID;
void EditSyntaxHL_gotSpace(eC_EditSyntaxHL __i, eC_bool beforeEnd);
extern eC_Method * method_EditSyntaxHL_gotSpace;

extern int EditSyntaxHL_initDraw_vTblID;
void EditSyntaxHL_initDraw(eC_EditSyntaxHL __i);
extern eC_Method * method_EditSyntaxHL_initDraw;

extern int EditSyntaxHL_nextLine_vTblID;
void EditSyntaxHL_nextLine(eC_EditSyntaxHL __i, char * buffer, int count);
extern eC_Method * method_EditSyntaxHL_nextLine;

extern int EditSyntaxHL_parseWord_vTblID;
int EditSyntaxHL_parseWord(eC_EditSyntaxHL __i, char * buffer, int count, int wordLen);
extern eC_Method * method_EditSyntaxHL_parseWord;

extern int EditSyntaxHL_process_vTblID;
eC_Color EditSyntaxHL_process(eC_EditSyntaxHL __i, char * word, int * wordLen, eC_bool beforeEndOfLine, eC_Color defaultTextColor, const char * buffer, int * c);
extern eC_Method * method_EditSyntaxHL_process;

extern int EditSyntaxHL_resetState_vTblID;
void EditSyntaxHL_resetState(eC_EditSyntaxHL __i);
extern eC_Method * method_EditSyntaxHL_resetState;

extern int EditSyntaxHL_startLine_vTblID;
void EditSyntaxHL_startLine(eC_EditSyntaxHL __i);
extern eC_Method * method_EditSyntaxHL_startLine;

extern int EditableSelectorButton_onRename_vTblID;
eC_bool EditableSelectorButton_onRename(eC_EditableSelectorButton __i, eC_Window __t, eC_EditableSelectorButton button, char ** oldName, char ** newName);
extern eC_Method * method_EditableSelectorButton_onRename;

extern eC_Property * property_EditableSelectorButton_renameable;
extern void (* EditableSelectorButton_set_renameable)(const eC_EditableSelectorButton e, eC_bool value);
extern eC_bool (* EditableSelectorButton_get_renameable)(const eC_EditableSelectorButton e);

extern eC_Property * property_EditableSelectorButton_editBox;
extern eC_EditBox (* EditableSelectorButton_get_editBox)(const eC_EditableSelectorButton e);

extern eC_Property * property_Label_labeledWindow;
extern void (* Label_set_labeledWindow)(const eC_Label l, eC_Window value);
extern eC_Window (* Label_get_labeledWindow)(const eC_Label l);

extern eC_Property * property_Label_isGroupBox;
extern void (* Label_set_isGroupBox)(const eC_Label l, eC_bool value);
extern eC_bool (* Label_get_isGroupBox)(const eC_Label l);

extern void (* ListBox_addField)(eC_ListBox __this, eC_DataField addedField);

extern eC_DataRow (* ListBox_addRow)(eC_ListBox __this);

extern eC_DataRow (* ListBox_addRowAfter)(eC_ListBox __this, eC_DataRow after);

extern eC_DataRow (* ListBox_addRowNone)(eC_ListBox __this);

extern eC_DataRow (* ListBox_addString)(eC_ListBox __this, const char * string);

extern eC_DataRow (* ListBox_addStringf)(eC_ListBox __this, const char * format, ...);

extern void (* ListBox_clear)(eC_ListBox __this);

extern void (* ListBox_clearFields)(eC_ListBox __this);

extern void (* ListBox_deleteRow)(eC_ListBox __this, eC_DataRow row);

extern eC_DataRow (* ListBox_findRow)(eC_ListBox __this, int64 tag);

extern eC_DataRow (* ListBox_findString)(eC_ListBox __this, const char * searchedString);

extern eC_DataRow (* ListBox_findSubRow)(eC_ListBox __this, int64 tag);

extern eC_DataRow (* ListBox_findSubString)(eC_ListBox __this, const char * subString);

extern eC_DataRow (* ListBox_findSubStringAfter)(eC_ListBox __this, eC_DataRow after, const char * subString);

extern eC_DataRow (* ListBox_findSubStringi)(eC_ListBox __this, const char * subString);

extern any_object (* ListBox_getData)(eC_ListBox __this, eC_DataField field);

extern void (* ListBox_getMultiSelection)(eC_ListBox __this, eC_OldList * list);

extern int64 (* ListBox_getTag)(eC_ListBox __this);

extern void (* ListBox_multiSort)(eC_ListBox __this, eC_Array fields);

extern int ListBox_notifyChanged_vTblID;
eC_bool ListBox_notifyChanged(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row);
extern eC_Method * method_ListBox_notifyChanged;

extern int ListBox_notifyCollapse_vTblID;
eC_bool ListBox_notifyCollapse(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_bool collapsed);
extern eC_Method * method_ListBox_notifyCollapse;

extern int ListBox_notifyDoubleClick_vTblID;
eC_bool ListBox_notifyDoubleClick(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, int x, int y, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyDoubleClick;

extern int ListBox_notifyEditDone_vTblID;
eC_bool ListBox_notifyEditDone(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row);
extern eC_Method * method_ListBox_notifyEditDone;

extern int ListBox_notifyEdited_vTblID;
eC_bool ListBox_notifyEdited(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row);
extern eC_Method * method_ListBox_notifyEdited;

extern int ListBox_notifyEditing_vTblID;
eC_bool ListBox_notifyEditing(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row);
extern eC_Method * method_ListBox_notifyEditing;

extern int ListBox_notifyHighlight_vTblID;
eC_bool ListBox_notifyHighlight(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyHighlight;

extern int ListBox_notifyKeyDown_vTblID;
eC_bool ListBox_notifyKeyDown(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Key key, unichar ch);
extern eC_Method * method_ListBox_notifyKeyDown;

extern int ListBox_notifyKeyHit_vTblID;
eC_bool ListBox_notifyKeyHit(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Key key, unichar ch);
extern eC_Method * method_ListBox_notifyKeyHit;

extern int ListBox_notifyModified_vTblID;
eC_bool ListBox_notifyModified(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row);
extern eC_Method * method_ListBox_notifyModified;

extern int ListBox_notifyMove_vTblID;
eC_bool ListBox_notifyMove(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyMove;

extern int ListBox_notifyMoved_vTblID;
void ListBox_notifyMoved(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyMoved;

extern int ListBox_notifyMovedField_vTblID;
eC_bool ListBox_notifyMovedField(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataField field, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyMovedField;

extern int ListBox_notifyReclick_vTblID;
eC_bool ListBox_notifyReclick(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyReclick;

extern int ListBox_notifyResized_vTblID;
eC_bool ListBox_notifyResized(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataField field, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyResized;

extern int ListBox_notifyRightClick_vTblID;
eC_bool ListBox_notifyRightClick(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, int x, int y, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifyRightClick;

extern int ListBox_notifySelect_vTblID;
eC_bool ListBox_notifySelect(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataRow row, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifySelect;

extern int ListBox_notifySort_vTblID;
eC_bool ListBox_notifySort(eC_ListBox __i, eC_Window __t, eC_ListBox listBox, eC_DataField field, eC_Modifiers mods);
extern eC_Method * method_ListBox_notifySort;

extern void (* ListBox_removeField)(eC_ListBox __this, eC_DataField field);

extern void (* ListBox_selectRow)(eC_ListBox __this, eC_DataRow row);

extern void * (* ListBox_setData)(eC_ListBox __this, eC_DataField field, any_object data);

extern void (* ListBox_sort)(eC_ListBox __this, eC_DataField field, int order);

extern void (* ListBox_sortAlsoBy)(eC_ListBox __this, eC_DataField field, int order);

extern void (* ListBox_stopEditing)(eC_ListBox __this, eC_bool save);

extern eC_Property * property_ListBox_freeSelect;
extern void (* ListBox_set_freeSelect)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_freeSelect)(const eC_ListBox l);

extern eC_Property * property_ListBox_currentRow;
extern void (* ListBox_set_currentRow)(const eC_ListBox l, eC_DataRow value);
extern eC_DataRow (* ListBox_get_currentRow)(const eC_ListBox l);

extern eC_Property * property_ListBox_currentField;
extern void (* ListBox_set_currentField)(const eC_ListBox l, eC_DataField value);
extern eC_DataField (* ListBox_get_currentField)(const eC_ListBox l);

extern eC_Property * property_ListBox_rowHeight;
extern void (* ListBox_set_rowHeight)(const eC_ListBox l, int value);
extern int (* ListBox_get_rowHeight)(const eC_ListBox l);
extern eC_bool (* ListBox_isSet_rowHeight)(const eC_ListBox l);

extern eC_Property * property_ListBox_typingTimeout;
extern void (* ListBox_set_typingTimeout)(const eC_ListBox l, eC_Time value);
extern eC_Time (* ListBox_get_typingTimeout)(const eC_ListBox l);

extern eC_Property * property_ListBox_moveRows;
extern void (* ListBox_set_moveRows)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_moveRows)(const eC_ListBox l);

extern eC_Property * property_ListBox_moveFields;
extern void (* ListBox_set_moveFields)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_moveFields)(const eC_ListBox l);

extern eC_Property * property_ListBox_resizable;
extern void (* ListBox_set_resizable)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_resizable)(const eC_ListBox l);

extern eC_Property * property_ListBox_autoScroll;
extern void (* ListBox_set_autoScroll)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_autoScroll)(const eC_ListBox l);

extern eC_Property * property_ListBox_alwaysHighLight;
extern void (* ListBox_set_alwaysHighLight)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_alwaysHighLight)(const eC_ListBox l);

extern eC_Property * property_ListBox_hasClearHeader;
extern void (* ListBox_set_hasClearHeader)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_hasClearHeader)(const eC_ListBox l);

extern eC_Property * property_ListBox_hasHeader;
extern void (* ListBox_set_hasHeader)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_hasHeader)(const eC_ListBox l);

extern eC_Property * property_ListBox_multiSelect;
extern void (* ListBox_set_multiSelect)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_multiSelect)(const eC_ListBox l);

extern eC_Property * property_ListBox_alwaysEdit;
extern void (* ListBox_set_alwaysEdit)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_alwaysEdit)(const eC_ListBox l);

extern eC_Property * property_ListBox_fullRowSelect;
extern void (* ListBox_set_fullRowSelect)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_fullRowSelect)(const eC_ListBox l);

extern eC_Property * property_ListBox_collapseControl;
extern void (* ListBox_set_collapseControl)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_collapseControl)(const eC_ListBox l);

extern eC_Property * property_ListBox_treeBranches;
extern void (* ListBox_set_treeBranches)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_treeBranches)(const eC_ListBox l);

extern eC_Property * property_ListBox_rootCollapseButton;
extern void (* ListBox_set_rootCollapseButton)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_rootCollapseButton)(const eC_ListBox l);

extern eC_Property * property_ListBox_sortable;
extern void (* ListBox_set_sortable)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_sortable)(const eC_ListBox l);

extern eC_Property * property_ListBox_noDragging;
extern void (* ListBox_set_noDragging)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_noDragging)(const eC_ListBox l);

extern eC_Property * property_ListBox_fillLastField;
extern void (* ListBox_set_fillLastField)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_fillLastField)(const eC_ListBox l);

extern eC_Property * property_ListBox_numSelections;
extern int (* ListBox_get_numSelections)(const eC_ListBox l);

extern eC_Property * property_ListBox_currentIndex;
extern int (* ListBox_get_currentIndex)(const eC_ListBox l);

extern eC_Property * property_ListBox_lastRow;
extern eC_DataRow (* ListBox_get_lastRow)(const eC_ListBox l);

extern eC_Property * property_ListBox_firstRow;
extern eC_DataRow (* ListBox_get_firstRow)(const eC_ListBox l);

extern eC_Property * property_ListBox_rowCount;
extern int (* ListBox_get_rowCount)(const eC_ListBox l);

extern eC_Property * property_ListBox_firstField;
extern eC_DataField (* ListBox_get_firstField)(const eC_ListBox l);

extern eC_Property * property_ListBox_selectionColor;
extern void (* ListBox_set_selectionColor)(const eC_ListBox l, eC_Color value);
extern eC_Color (* ListBox_get_selectionColor)(const eC_ListBox l);
extern eC_bool (* ListBox_isSet_selectionColor)(const eC_ListBox l);

extern eC_Property * property_ListBox_selectionText;
extern void (* ListBox_set_selectionText)(const eC_ListBox l, eC_Color value);
extern eC_Color (* ListBox_get_selectionText)(const eC_ListBox l);
extern eC_bool (* ListBox_isSet_selectionText)(const eC_ListBox l);

extern eC_Property * property_ListBox_stippleColor;
extern void (* ListBox_set_stippleColor)(const eC_ListBox l, eC_Color value);
extern eC_Color (* ListBox_get_stippleColor)(const eC_ListBox l);

extern eC_Property * property_ListBox_expandOnAdd;
extern void (* ListBox_set_expandOnAdd)(const eC_ListBox l, eC_bool value);
extern eC_bool (* ListBox_get_expandOnAdd)(const eC_ListBox l);

extern void (* Menu_addDynamic)(eC_Menu __this, eC_MenuItem addedItem, eC_Window master, eC_bool persistent);

extern void (* Menu_addItem)(eC_Menu __this, eC_MenuItem item);

extern void (* Menu_addSubMenu)(eC_Menu __this, eC_Menu subMenu);

extern void (* Menu_clean)(eC_Menu __this, eC_Window window);

extern void (* Menu_clear)(eC_Menu __this);

extern eC_MenuItem (* Menu_findItem)(eC_Menu __this, eC_bool (* notifySelect)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods), uint64 id);

extern eC_Menu (* Menu_findMenu)(eC_Menu __this, const char * name);

extern void (* Menu_merge)(eC_Menu __this, eC_Menu menuBeingMerged, eC_bool menuBar, eC_Window window);

extern void (* Menu_removeItem)(eC_Menu __this, eC_MenuItem item);

extern eC_Property * property_Menu_parent;
extern void (* Menu_set_parent)(const eC_Menu m, eC_Menu value);

extern eC_Property * property_Menu_text;
extern void (* Menu_set_text)(const eC_Menu m, const char * value);

extern eC_Property * property_Menu_hotKey;
extern void (* Menu_set_hotKey)(const eC_Menu m, eC_Key value);

extern eC_Property * property_Menu_hasMargin;
extern void (* Menu_set_hasMargin)(const eC_Menu m, eC_bool value);

extern eC_Property * property_Menu_copyText;
extern void (* Menu_set_copyText)(const eC_Menu m, eC_bool value);

extern int MenuItem_notifySelect_vTblID;
eC_bool MenuItem_notifySelect(eC_MenuItem __i, eC_Window __t, eC_MenuItem selection, eC_Modifiers mods);
extern eC_Method * method_MenuItem_notifySelect;

extern eC_Property * property_MenuItem_parent;
extern void (* MenuItem_set_parent)(const eC_MenuItem m, eC_Menu value);

extern eC_Property * property_MenuItem_text;
extern void (* MenuItem_set_text)(const eC_MenuItem m, const char * value);

extern eC_Property * property_MenuItem_hotKey;
extern void (* MenuItem_set_hotKey)(const eC_MenuItem m, eC_Key value);

extern eC_Property * property_MenuItem_accelerator;
extern void (* MenuItem_set_accelerator)(const eC_MenuItem m, eC_Key value);

extern eC_Property * property_MenuItem_checked;
extern void (* MenuItem_set_checked)(const eC_MenuItem m, eC_bool value);
extern eC_bool (* MenuItem_get_checked)(const eC_MenuItem m);

extern eC_Property * property_MenuItem_disabled;
extern void (* MenuItem_set_disabled)(const eC_MenuItem m, eC_bool value);

extern eC_Property * property_MenuItem_checkable;
extern void (* MenuItem_set_checkable)(const eC_MenuItem m, eC_bool value);

extern eC_Property * property_MenuItem_isRadio;
extern void (* MenuItem_set_isRadio)(const eC_MenuItem m, eC_bool value);

extern eC_Property * property_MenuItem_id;
extern void (* MenuItem_set_id)(const eC_MenuItem m, uint64 value);
extern uint64 (* MenuItem_get_id)(const eC_MenuItem m);

extern eC_Property * property_MenuItem_bitmap;
extern void (* MenuItem_set_bitmap)(const eC_MenuItem m, eC_BitmapResource value);
extern eC_BitmapResource (* MenuItem_get_bitmap)(const eC_MenuItem m);

extern eC_Property * property_MenuItem_copyText;
extern void (* MenuItem_set_copyText)(const eC_MenuItem m, eC_bool value);

extern eC_Property * property_MenuItem_bold;
extern void (* MenuItem_set_bold)(const eC_MenuItem m, eC_bool value);
extern eC_bool (* MenuItem_get_bold)(const eC_MenuItem m);

struct class_members_OldArray
{
   eC_Class * type;
   byte __ecere_padding[8];
};
extern eC_Property * property_OldArray_size;
extern void (* OldArray_set_size)(const eC_OldArray o, uint value);
extern uint (* OldArray_get_size)(const eC_OldArray o);

extern eC_Property * property_OldArray_data;
extern void (* OldArray_set_data)(const eC_OldArray o, void * value);

extern int PaneSplitter_notifyResized_vTblID;
eC_bool PaneSplitter_notifyResized(eC_PaneSplitter __i, eC_Window __t, eC_PaneSplitter splitter);
extern eC_Method * method_PaneSplitter_notifyResized;

extern eC_Property * property_PaneSplitter_toolSize;
extern void (* PaneSplitter_set_toolSize)(const eC_PaneSplitter p, int value);
extern int (* PaneSplitter_get_toolSize)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_toolGap;
extern void (* PaneSplitter_set_toolGap)(const eC_PaneSplitter p, int value);
extern int (* PaneSplitter_get_toolGap)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_leftPane;
extern void (* PaneSplitter_set_leftPane)(const eC_PaneSplitter p, eC_Window value);
extern eC_Window (* PaneSplitter_get_leftPane)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_rightPane;
extern void (* PaneSplitter_set_rightPane)(const eC_PaneSplitter p, eC_Window value);
extern eC_Window (* PaneSplitter_get_rightPane)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_topPane;
extern void (* PaneSplitter_set_topPane)(const eC_PaneSplitter p, eC_Window value);
extern eC_Window (* PaneSplitter_get_topPane)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_bottomPane;
extern void (* PaneSplitter_set_bottomPane)(const eC_PaneSplitter p, eC_Window value);
extern eC_Window (* PaneSplitter_get_bottomPane)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_scaleSplit;
extern void (* PaneSplitter_set_scaleSplit)(const eC_PaneSplitter p, double value);
extern double (* PaneSplitter_get_scaleSplit)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_orientation;
extern void (* PaneSplitter_set_orientation)(const eC_PaneSplitter p, eC_ScrollDirection value);
extern eC_ScrollDirection (* PaneSplitter_get_orientation)(const eC_PaneSplitter p);

extern eC_Property * property_PaneSplitter_split;
extern void (* PaneSplitter_set_split)(const eC_PaneSplitter p, int value);
extern int (* PaneSplitter_get_split)(const eC_PaneSplitter p);

extern void (* PathBox_deselect)(eC_PathBox __this);

extern void (* PathBox_end)(eC_PathBox __this);

extern void (* PathBox_home)(eC_PathBox __this);

extern int PathBox_notifyModified_vTblID;
eC_bool PathBox_notifyModified(eC_PathBox __i, eC_Window __t, eC_PathBox pathBox);
extern eC_Method * method_PathBox_notifyModified;

extern void (* PathBox_selectAll)(eC_PathBox __this);

extern eC_Property * property_PathBox_editBox;
extern eC_EditBox (* PathBox_get_editBox)(const eC_PathBox p);

extern eC_Property * property_PathBox_typeExpected;
extern void (* PathBox_set_typeExpected)(const eC_PathBox p, eC_PathTypeExpected value);

extern eC_Property * property_PathBox_browseDialog;
extern void (* PathBox_set_browseDialog)(const eC_PathBox p, eC_FileDialog value);
extern eC_FileDialog (* PathBox_get_browseDialog)(const eC_PathBox p);

extern eC_Property * property_PathBox_path;
extern void (* PathBox_set_path)(const eC_PathBox p, constString value);
extern constString (* PathBox_get_path)(const eC_PathBox p);

extern eC_Property * property_PathBox_slashPath;
extern eC_String (* PathBox_get_slashPath)(const eC_PathBox p);

extern eC_Property * property_PathBox_systemPath;
extern eC_String (* PathBox_get_systemPath)(const eC_PathBox p);

extern eC_Property * property_PathBox_selectionColor;
extern void (* PathBox_set_selectionColor)(const eC_PathBox p, eC_Color value);
extern eC_Color (* PathBox_get_selectionColor)(const eC_PathBox p);

extern eC_Property * property_PathBox_selectionText;
extern void (* PathBox_set_selectionText)(const eC_PathBox p, eC_Color value);
extern eC_Color (* PathBox_get_selectionText)(const eC_PathBox p);

extern eC_Property * property_Picture_tint;
extern void (* Picture_set_tint)(const eC_Picture p, eC_Color value);

extern eC_Property * property_Picture_image;
extern void (* Picture_set_image)(const eC_Picture p, eC_BitmapResource value);
extern eC_BitmapResource (* Picture_get_image)(const eC_Picture p);

extern eC_Property * property_Picture_filter;
extern void (* Picture_set_filter)(const eC_Picture p, eC_bool value);
extern eC_bool (* Picture_get_filter)(const eC_Picture p);

extern eC_Property * property_Picture_bitmapImage;
extern void (* Picture_set_bitmapImage)(const eC_Picture p, eC_Bitmap value);

extern eC_Property * property_PopupMenu_menu;
extern void (* PopupMenu_set_menu)(const eC_PopupMenu p, eC_Menu value);
extern eC_Menu (* PopupMenu_get_menu)(const eC_PopupMenu p);

extern eC_Property * property_PopupMenu_isMenuBar;
extern void (* PopupMenu_set_isMenuBar)(const eC_PopupMenu p, eC_bool value);

extern eC_Property * property_PopupMenu_focus;
extern eC_bool (* PopupMenu_get_focus)(const eC_PopupMenu p);

extern eC_Property * property_ProgressBar_progress;
extern void (* ProgressBar_set_progress)(const eC_ProgressBar p, uint value);
extern uint (* ProgressBar_get_progress)(const eC_ProgressBar p);

extern eC_Property * property_ProgressBar_range;
extern void (* ProgressBar_set_range)(const eC_ProgressBar p, uint value);
extern uint (* ProgressBar_get_range)(const eC_ProgressBar p);

struct class_members_ScrollBar
{
   byte __ecerePrivateData0[24];
   eC_Button downBtn;
   eC_Button upBtn;
   eC_Button thumb;
   byte __ecerePrivateData1[12];
   int thumbSize;
   byte __ecere_padding[56];
};
extern eC_bool (* ScrollBar_action)(eC_ScrollBar __this, eC_ScrollBarAction action, int newPosition, eC_Key key);

extern int ScrollBar_notifyScrolling_vTblID;
void ScrollBar_notifyScrolling(eC_ScrollBar __i, eC_Window __t, eC_ScrollBar scrollBar, eC_ScrollBarAction action, int position, eC_Key key);
extern eC_Method * method_ScrollBar_notifyScrolling;

extern eC_Property * property_ScrollBar_direction;
extern void (* ScrollBar_set_direction)(const eC_ScrollBar s, eC_ScrollDirection value);
extern eC_ScrollDirection (* ScrollBar_get_direction)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_windowOwned;
extern void (* ScrollBar_set_windowOwned)(const eC_ScrollBar s, eC_bool value);

extern eC_Property * property_ScrollBar_snap;
extern void (* ScrollBar_set_snap)(const eC_ScrollBar s, eC_bool value);
extern eC_bool (* ScrollBar_get_snap)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_range;
extern void (* ScrollBar_set_range)(const eC_ScrollBar s, int value);
extern int (* ScrollBar_get_range)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_seen;
extern void (* ScrollBar_set_seen)(const eC_ScrollBar s, int value);
extern int (* ScrollBar_get_seen)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_total;
extern void (* ScrollBar_set_total)(const eC_ScrollBar s, int value);
extern int (* ScrollBar_get_total)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_lineStep;
extern void (* ScrollBar_set_lineStep)(const eC_ScrollBar s, int value);
extern int (* ScrollBar_get_lineStep)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_pageStep;
extern void (* ScrollBar_set_pageStep)(const eC_ScrollBar s, int value);
extern int (* ScrollBar_get_pageStep)(const eC_ScrollBar s);

extern eC_Property * property_ScrollBar_thumbPosition;
extern void (* ScrollBar_set_thumbPosition)(const eC_ScrollBar s, int value);
extern int (* ScrollBar_get_thumbPosition)(const eC_ScrollBar s);

extern void (* SelectorBar_addButton)(eC_SelectorBar __this, eC_SelectorButton button);

extern void (* SelectorBar_clear)(eC_SelectorBar __this);

extern eC_SelectorButton (* SelectorBar_findButtonByID)(eC_SelectorBar __this, int64 id);

extern void (* SelectorBar_removeButton)(eC_SelectorBar __this, eC_SelectorButton button);

extern void (* SelectorBar_select)(eC_SelectorBar __this, eC_SelectorButton button);

extern eC_Property * property_SelectorBar_selectedButton;
extern eC_SelectorButton (* SelectorBar_get_selectedButton)(const eC_SelectorBar s);

extern void (* Stacker_destroyChildren)(eC_Stacker __this);

extern eC_Window (* Stacker_getNextStackedItem)(eC_Stacker __this, eC_Window current, eC_bool previous, eC_Class * filter);

extern void (* Stacker_makeControlVisible)(eC_Stacker __this, eC_Window control);

extern void (* Stacker_moveControl)(eC_Stacker __this, eC_IteratorPointer * ctrl, eC_IteratorPointer * after, eC_bool fixCycle);

extern eC_Property * property_Stacker_direction;
extern void (* Stacker_set_direction)(const eC_Stacker s, eC_ScrollDirection value);
extern eC_ScrollDirection (* Stacker_get_direction)(const eC_Stacker s);

extern eC_Property * property_Stacker_gap;
extern void (* Stacker_set_gap)(const eC_Stacker s, int value);
extern int (* Stacker_get_gap)(const eC_Stacker s);

extern eC_Property * property_Stacker_reverse;
extern void (* Stacker_set_reverse)(const eC_Stacker s, eC_bool value);
extern eC_bool (* Stacker_get_reverse)(const eC_Stacker s);

extern eC_Property * property_Stacker_scrollable;
extern void (* Stacker_set_scrollable)(const eC_Stacker s, eC_bool value);
extern eC_bool (* Stacker_get_scrollable)(const eC_Stacker s);

extern eC_Property * property_Stacker_controls;
extern eC_Array (* Stacker_get_controls)(const eC_Stacker s);

extern eC_Property * property_Stacker_flipper;
extern void (* Stacker_set_flipper)(const eC_Stacker s, eC_Window value);
extern eC_Window (* Stacker_get_flipper)(const eC_Stacker s);

extern eC_Property * property_Stacker_flipSpring;
extern void (* Stacker_set_flipSpring)(const eC_Stacker s, eC_bool value);
extern eC_bool (* Stacker_get_flipSpring)(const eC_Stacker s);

extern eC_Property * property_Stacker_autoSize;
extern void (* Stacker_set_autoSize)(const eC_Stacker s, eC_bool value);
extern eC_bool (* Stacker_get_autoSize)(const eC_Stacker s);

extern eC_Property * property_Stacker_margin;
extern void (* Stacker_set_margin)(const eC_Stacker s, int value);
extern int (* Stacker_get_margin)(const eC_Stacker s);

extern eC_Property * property_Stacker_endButtons;
extern void (* Stacker_set_endButtons)(const eC_Stacker s, eC_bool value);
extern eC_bool (* Stacker_get_endButtons)(const eC_Stacker s);

extern eC_Property * property_Stacker_hoverScroll;
extern void (* Stacker_set_hoverScroll)(const eC_Stacker s, eC_bool value);
extern eC_bool (* Stacker_get_hoverScroll)(const eC_Stacker s);

extern void (* StatusBar_addField)(eC_StatusBar __this, eC_StatusField field);

extern void (* StatusBar_clear)(eC_StatusBar __this);

extern void (* StatusBar_removeField)(eC_StatusBar __this, eC_StatusField field);

extern eC_Property * property_StatusBar_minInfoWidth;
extern void (* StatusBar_set_minInfoWidth)(const eC_StatusBar s, int value);
extern int (* StatusBar_get_minInfoWidth)(const eC_StatusBar s);

extern void (* StatusField_setTextf)(eC_StatusField __this, const char * format, ...);

extern eC_Property * property_StatusField_statusBar;
extern void (* StatusField_set_statusBar)(const eC_StatusField s, eC_StatusBar value);

extern eC_Property * property_StatusField_color;
extern void (* StatusField_set_color)(const eC_StatusField s, eC_Color value);

extern eC_Property * property_StatusField_backColor;
extern void (* StatusField_set_backColor)(const eC_StatusField s, eC_ColorAlpha value);

extern eC_Property * property_StatusField_bold;
extern void (* StatusField_set_bold)(const eC_StatusField s, eC_bool value);

extern eC_Property * property_StatusField_text;
extern void (* StatusField_set_text)(const eC_StatusField s, const char * value);

extern eC_Property * property_StatusField_width;
extern void (* StatusField_set_width)(const eC_StatusField s, int value);

extern void (* Tab_selectTab)(eC_Tab __this);

extern eC_Property * property_Tab_tabControl;
extern void (* Tab_set_tabControl)(const eC_Tab t, eC_TabControl value);
extern eC_TabControl (* Tab_get_tabControl)(const eC_Tab t);

extern eC_Property * property_Tab_isAdded;
extern eC_bool (* Tab_get_isAdded)(const eC_Tab t);

extern void (* TabControl_addTab)(eC_TabControl __this, eC_Tab tab);

extern void (* TabControl_removeTab)(eC_TabControl __this, eC_Tab tab);

extern eC_Property * property_TabControl_placement;
extern void (* TabControl_set_placement)(const eC_TabControl t, eC_TabsPlacement value);
extern eC_TabsPlacement (* TabControl_get_placement)(const eC_TabControl t);

extern eC_Property * property_TabControl_buttonsOffset;
extern void (* TabControl_set_buttonsOffset)(const eC_TabControl t, int value);
extern int (* TabControl_get_buttonsOffset)(const eC_TabControl t);

extern eC_Property * property_TabControl_curTab;
extern void (* TabControl_set_curTab)(const eC_TabControl t, eC_Tab value);
extern eC_Tab (* TabControl_get_curTab)(const eC_TabControl t);

extern eC_Property * property_ToolButton_menuItemPtr;
extern void (* ToolButton_set_menuItemPtr)(const eC_ToolButton t, eC_MenuItem * value);

extern eC_Property * property_ToolButton_menuItem;
extern eC_MenuItem (* ToolButton_get_menuItem)(const eC_ToolButton t);

extern eC_Property * property_ToolTip_tip;
extern void (* ToolTip_set_tip)(const eC_ToolTip t, constString value);
extern constString (* ToolTip_get_tip)(const eC_ToolTip t);

struct eC_UndoAction
{
   eC_Class * type;
   eC_bool continued;
};
extern int UndoAction_redo_vTblID;
void UndoAction_redo(eC_UndoAction * __i, void * data);
extern eC_Method * method_UndoAction_redo;

extern int UndoAction_undo_vTblID;
void UndoAction_undo(eC_UndoAction * __i, void * data);
extern eC_Method * method_UndoAction_undo;

struct class_members_UndoBuffer
{
   byte __ecerePrivateData0[8];
   int count;
   int curAction;
   void * data;
   int dontRecord;
   eC_bool insideRedo;
   eC_bool recordAsOne;
   eC_bool firstEvent;
};
extern void (* UndoBuffer_clear)(eC_UndoBuffer __this);

extern void (* UndoBuffer_record)(eC_UndoBuffer __this, eC_UndoAction * action);

extern void (* UndoBuffer_redo)(eC_UndoBuffer __this);

extern void (* UndoBuffer_undo)(eC_UndoBuffer __this);

typedef int eC_AnchorValueType;
enum
{
   AnchorValueType_none = 0x0,
   AnchorValueType_offset = 0x1,
   AnchorValueType_relative = 0x2,
   AnchorValueType_middleRelative = 0x3,
   AnchorValueType_cascade = 0x4,
   AnchorValueType_vTiled = 0x5,
   AnchorValueType_hTiled = 0x6
};

struct eC_AnchorValue
{
   eC_AnchorValueType type;
   union
   {
      int distance;
      float percent;
   };
};
struct eC_MiddleAnchorValue
{
   eC_AnchorValueType type;
   union
   {
      int distance;
      float percent;
   };
};
typedef struct eC_AnchorValue eC_AnchorValue;
typedef struct eC_MiddleAnchorValue eC_MiddleAnchorValue;
struct eC_Anchor
{
   union
   {
      eC_AnchorValue left;
      eC_MiddleAnchorValue horz;
   };
   union
   {
      eC_AnchorValue top;
      eC_MiddleAnchorValue vert;
   };
   eC_AnchorValue right;
   eC_AnchorValue bottom;
};
struct eC_SizeAnchor
{
   eC_Size size;
   eC_bool isClientW;
   eC_bool isClientH;
};
struct class_members_WindowController
{
   int (** windowVTbl)(void);
   byte __ecere_padding[16];
};
typedef struct eC_Anchor eC_Anchor;
typedef uint32 eC_BorderBits;
typedef eC_BorderBits eC_BorderStyle;
enum
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

typedef struct eC_ClipBoard eC_ClipBoard;
typedef int eC_CreationActivationOption;
enum
{
   CreationActivationOption_activate = 0x0,
   CreationActivationOption_flash = 0x1,
   CreationActivationOption_doNothing = 0x2
};

typedef eC_Instance eC_Cursor;
typedef int64 eC_DialogResult;
enum
{
   DialogResult_cancel = 0x0,
   DialogResult_yes = 0x1,
   DialogResult_no = 0x2,
   DialogResult_ok = 0x3
};

typedef eC_Application eC_GuiApplication;
typedef eC_Instance eC_Interface;
typedef struct eC_Joystick eC_Joystick;
typedef uint32 eC_MouseButtons;
typedef struct eC_SizeAnchor eC_SizeAnchor;
typedef eC_Instance eC_Skin;
typedef int eC_SkinBitmap;
enum
{
   SkinBitmap_minimize = 0x0,
   SkinBitmap_maximize = 0x1,
   SkinBitmap_restore = 0x2,
   SkinBitmap_close = 0x3
};

typedef int eC_SystemCursor;
enum
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

typedef int eC_TouchPointerEvent;
enum
{
   TouchPointerEvent_move = 0x0,
   TouchPointerEvent_up = 0x1,
   TouchPointerEvent_down = 0x2,
   TouchPointerEvent_pointerUp = 0x3,
   TouchPointerEvent_pointerDown = 0x4
};

typedef eC_Instance eC_WindowController;
typedef int eC_WindowState;
enum
{
   WindowState_normal = 0x0,
   WindowState_minimized = 0x1,
   WindowState_maximized = 0x2
};

typedef eC_Window eC_ControllableWindow;
typedef eC_Key eC_KeyCode;
enum
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

typedef char * eC_MultiLineString;
typedef eC_Key eC_PredefinedKey;
enum
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

typedef uint32 eC_SmartKey;
typedef struct eC_TouchPointerInfo eC_TouchPointerInfo;
typedef uint64_t tparam_WindowController_V;
extern eC_Property * property_AnchorValue_MinMaxValue;
extern void (* AnchorValue_from_MinMaxValue)(const eC_AnchorValue * a, eC_MinMaxValue value);
extern eC_MinMaxValue (* AnchorValue_to_MinMaxValue)(const eC_AnchorValue * a);

extern eC_Property * property_AnchorValue_int;
extern void (* AnchorValue_from_int)(const eC_AnchorValue * a, int value);
extern int (* AnchorValue_to_int)(const eC_AnchorValue * a);

extern eC_Property * property_AnchorValue_double;
extern void (* AnchorValue_from_double)(const eC_AnchorValue * a, double value);
extern double (* AnchorValue_to_double)(const eC_AnchorValue * a);

#define BORDERBITS_contour_SHIFT                         0
#define BORDERBITS_contour_MASK                          0x1
#define BORDERBITS_fixed_SHIFT                           1
#define BORDERBITS_fixed_MASK                            0x2
#define BORDERBITS_sizable_SHIFT                         2
#define BORDERBITS_sizable_MASK                          0x4
#define BORDERBITS_deep_SHIFT                            3
#define BORDERBITS_deep_MASK                             0x8
#define BORDERBITS_bevel_SHIFT                           4
#define BORDERBITS_bevel_MASK                            0x10
#define BORDERBITS_thin_SHIFT                            5
#define BORDERBITS_thin_MASK                             0x20


struct eC_ClipBoard
{
   char * text;
   void * handle;
};
extern eC_bool (* ClipBoard_allocate)(eC_ClipBoard * __this, uint size);

extern void (* ClipBoard_clear)(eC_ClipBoard * __this);

extern eC_bool (* ClipBoard_load)(eC_ClipBoard * __this);

extern eC_bool (* ClipBoard_save)(eC_ClipBoard * __this);

extern void (* ClipBoard_unload)(eC_ClipBoard * __this);

extern eC_Property * property_ClipBoard_memory;
extern char * (* ClipBoard_get_memory)(const eC_ClipBoard * c);

extern eC_Property * property_CommonControl_toolTip;
extern void (* CommonControl_set_toolTip)(const eC_CommonControl c, constString value);
extern constString (* CommonControl_get_toolTip)(const eC_CommonControl c);

extern void (* Cursor_free)(eC_Cursor __this);

extern eC_bool (* Cursor_load)(eC_Cursor __this, const char * name, int hotSpotX, int hotSpotY, byte * paletteShades, eC_DisplaySystem ds);

extern eC_Property * property_Cursor_systemCursor;
extern void (* Cursor_set_systemCursor)(const eC_Cursor c, eC_SystemCursor value);

struct eC_Extent
{
   void * first;
   void * last;
   int count;
   uint offset;
   eC_bool circ;
   byte __ecere_padding[28];
};
extern void (* Extent_addBox)(eC_Extent * __this, eC_Box * box);

extern void (* Extent_copy)(eC_Extent * __this, eC_Extent * source);

extern void (* Extent_empty)(eC_Extent * __this);

extern void (* Extent_excludeBox)(eC_Extent * __this, eC_Box * box, eC_Extent * temp);

extern void (* Extent_exclusion)(eC_Extent * __this, eC_Extent * b, eC_Extent * temp);

extern void (* Extent_intersectBox)(eC_Extent * __this, eC_Box * box);

extern void (* Extent_intersection)(eC_Extent * __this, eC_Extent * b, eC_Extent * temp, eC_Extent * temp2, eC_Extent * temp3);

extern void (* Extent_offset)(eC_Extent * __this, int x, int y);

extern void (* Extent_union)(eC_Extent * __this, eC_Extent * b, eC_Extent * temp);

extern void (* Extent_unionBox)(eC_Extent * __this, eC_Box * box, eC_Extent * temp);

extern int GuiApplication_cycle_vTblID;
eC_bool GuiApplication_cycle(eC_GuiApplication __i, eC_bool idle);
extern eC_Method * method_GuiApplication_cycle;

extern eC_Cursor (* GuiApplication_getCursor)(eC_GuiApplication __this, eC_SystemCursor cursor);

extern eC_bool (* GuiApplication_getKeyState)(eC_GuiApplication __this, eC_Key key);

extern eC_bool (* GuiApplication_getMouseState)(eC_GuiApplication __this, eC_MouseButtons * buttons, int * x, int * y);

extern int GuiApplication_init_vTblID;
eC_bool GuiApplication_init(eC_GuiApplication __i);
extern eC_Method * method_GuiApplication_init;

extern void (* GuiApplication_lock)(eC_GuiApplication __this);

extern void (* GuiApplication_lockEx)(eC_GuiApplication __this, int count);

extern void (* GuiApplication_pauseNetworkEvents)(eC_GuiApplication __this);

extern eC_bool (* GuiApplication_processFileNotifications)(eC_GuiApplication __this);

extern eC_bool (* GuiApplication_processInput)(eC_GuiApplication __this, eC_bool useProcessAll);

extern eC_bool (* GuiApplication_processNetworkEvents)(eC_GuiApplication __this);

extern void (* GuiApplication_resumeNetworkEvents)(eC_GuiApplication __this);

extern eC_bool (* GuiApplication_setDesktopPosition)(eC_GuiApplication __this, int x, int y, int w, int h, eC_bool moveChildren);

extern void (* GuiApplication_signalEvent)(eC_GuiApplication __this);

extern eC_bool (* GuiApplication_switchMode)(eC_GuiApplication __this, eC_bool fullScreen, const char * driverName, eC_Resolution resolution, eC_PixelFormat colorDepth, int refreshRate, const char * skinName, eC_bool fallBack);

extern int GuiApplication_terminate_vTblID;
void GuiApplication_terminate(eC_GuiApplication __i);
extern eC_Method * method_GuiApplication_terminate;

extern void (* GuiApplication_unlock)(eC_GuiApplication __this);

extern int (* GuiApplication_unlockEx)(eC_GuiApplication __this);

extern void (* GuiApplication_updateDisplay)(eC_GuiApplication __this);

extern void (* GuiApplication_wait)(eC_GuiApplication __this);

extern void (* GuiApplication_waitEvent)(eC_GuiApplication __this);

extern void (* GuiApplication_waitNetworkEvent)(eC_GuiApplication __this);

extern eC_Property * property_GuiApplication_appName;
extern void (* GuiApplication_set_appName)(const eC_GuiApplication g, const char * value);
extern const char * (* GuiApplication_get_appName)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_semaphore;
extern eC_Semaphore * (* GuiApplication_get_semaphore)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_alwaysEmptyInput;
extern void (* GuiApplication_set_alwaysEmptyInput)(const eC_GuiApplication g, eC_bool value);
extern eC_bool (* GuiApplication_get_alwaysEmptyInput)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_fullScreen;
extern void (* GuiApplication_set_fullScreen)(const eC_GuiApplication g, eC_bool value);
extern eC_bool (* GuiApplication_get_fullScreen)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_driver;
extern void (* GuiApplication_set_driver)(const eC_GuiApplication g, const char * value);
extern const char * (* GuiApplication_get_driver)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_resolution;
extern void (* GuiApplication_set_resolution)(const eC_GuiApplication g, eC_Resolution value);
extern eC_Resolution (* GuiApplication_get_resolution)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_pixelFormat;
extern void (* GuiApplication_set_pixelFormat)(const eC_GuiApplication g, eC_PixelFormat value);
extern eC_PixelFormat (* GuiApplication_get_pixelFormat)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_refreshRate;
extern void (* GuiApplication_set_refreshRate)(const eC_GuiApplication g, int value);
extern int (* GuiApplication_get_refreshRate)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_skin;
extern void (* GuiApplication_set_skin)(const eC_GuiApplication g, const char * value);
extern const char * (* GuiApplication_get_skin)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_textMode;
extern void (* GuiApplication_set_textMode)(const eC_GuiApplication g, eC_bool value);
extern eC_bool (* GuiApplication_get_textMode)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_desktop;
extern eC_Window (* GuiApplication_get_desktop)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_drivers;
extern const char ** (* GuiApplication_get_drivers)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_skins;
extern const char ** (* GuiApplication_get_skins)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_currentSkin;
extern eC_Class * (* GuiApplication_get_currentSkin)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_numDrivers;
extern int (* GuiApplication_get_numDrivers)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_numSkins;
extern int (* GuiApplication_get_numSkins)(const eC_GuiApplication g);

extern eC_Property * property_GuiApplication_timerResolution;
extern void (* GuiApplication_set_timerResolution)(const eC_GuiApplication g, uint value);

extern eC_Property * property_GuiApplication_acquiredWindow;
extern eC_Window (* GuiApplication_get_acquiredWindow)(const eC_GuiApplication g);

extern int Interface_acquireInput_vTblID;
eC_bool Interface_acquireInput(eC_Interface __i, eC_Window window, eC_bool state);
extern eC_Method * method_Interface_acquireInput;

extern int Interface_activateRootWindow_vTblID;
void Interface_activateRootWindow(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_activateRootWindow;

extern int Interface_allocateClipboard_vTblID;
eC_bool Interface_allocateClipboard(eC_Interface __i, eC_ClipBoard * clipBoard, uint size);
extern eC_Method * method_Interface_allocateClipboard;

extern int Interface_clearClipboard_vTblID;
void Interface_clearClipboard(eC_Interface __i);
extern eC_Method * method_Interface_clearClipboard;

extern int Interface_createRootWindow_vTblID;
void * Interface_createRootWindow(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_createRootWindow;

extern int Interface_destroyRootWindow_vTblID;
void Interface_destroyRootWindow(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_destroyRootWindow;

extern int Interface_ensureFullScreen_vTblID;
void Interface_ensureFullScreen(eC_Interface __i, eC_bool * fullScreen);
extern eC_Method * method_Interface_ensureFullScreen;

extern int Interface_flashRootWindow_vTblID;
void Interface_flashRootWindow(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_flashRootWindow;

extern int Interface_getCurrentMode_vTblID;
void Interface_getCurrentMode(eC_Interface __i, eC_bool * fullScreen, eC_Resolution * resolution, eC_PixelFormat * colorDepth, int * refreshRate);
extern eC_Method * method_Interface_getCurrentMode;

extern eC_Key (* Interface_getExtendedKey)(eC_Key key);

extern int Interface_getJoystickState_vTblID;
eC_bool Interface_getJoystickState(eC_Interface __i, int device, eC_Joystick * joystick);
extern eC_Method * method_Interface_getJoystickState;

extern int Interface_getKeyState_vTblID;
eC_bool Interface_getKeyState(eC_Interface __i, eC_Key key);
extern eC_Method * method_Interface_getKeyState;

extern int Interface_getMousePosition_vTblID;
void Interface_getMousePosition(eC_Interface __i, int * x, int * y);
extern eC_Method * method_Interface_getMousePosition;

extern int Interface_getMouseState_vTblID;
eC_bool Interface_getMouseState(eC_Interface __i, eC_MouseButtons * buttons, int * x, int * y);
extern eC_Method * method_Interface_getMouseState;

extern int Interface_getScreenArea_vTblID;
void Interface_getScreenArea(eC_Interface __i, eC_Window window, eC_Box * box);
extern eC_Method * method_Interface_getScreenArea;

extern int Interface_graphicsDrivers_vTblID;
const char ** Interface_graphicsDrivers(eC_Interface __i, int * numDrivers);
extern eC_Method * method_Interface_graphicsDrivers;

extern int Interface_initialize_vTblID;
eC_bool Interface_initialize(eC_Interface __i);
extern eC_Method * method_Interface_initialize;

extern int Interface_loadClipboard_vTblID;
eC_bool Interface_loadClipboard(eC_Interface __i, eC_ClipBoard * clipBoard);
extern eC_Method * method_Interface_loadClipboard;

extern int Interface_lock_vTblID;
void Interface_lock(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_lock;

extern int Interface_offsetWindow_vTblID;
void Interface_offsetWindow(eC_Interface __i, eC_Window window, int * x, int * y);
extern eC_Method * method_Interface_offsetWindow;

extern int Interface_orderRootWindow_vTblID;
void Interface_orderRootWindow(eC_Interface __i, eC_Window window, eC_bool topMost);
extern eC_Method * method_Interface_orderRootWindow;

extern int Interface_positionRootWindow_vTblID;
void Interface_positionRootWindow(eC_Interface __i, eC_Window window, int x, int y, int w, int h, eC_bool move, eC_bool resize);
extern eC_Method * method_Interface_positionRootWindow;

extern int Interface_processInput_vTblID;
eC_bool Interface_processInput(eC_Interface __i, eC_bool processAll);
extern eC_Method * method_Interface_processInput;

extern int Interface_saveClipboard_vTblID;
eC_bool Interface_saveClipboard(eC_Interface __i, eC_ClipBoard * clipBoard);
extern eC_Method * method_Interface_saveClipboard;

extern int Interface_screenMode_vTblID;
eC_bool Interface_screenMode(eC_Interface __i, eC_bool fullScreen, eC_Resolution resolution, eC_PixelFormat colorDepth, int refreshRate, eC_bool * textMode);
extern eC_Method * method_Interface_screenMode;

extern int Interface_setCaret_vTblID;
void Interface_setCaret(eC_Interface __i, int caretX, int caretY, int size);
extern eC_Method * method_Interface_setCaret;

extern int Interface_setIcon_vTblID;
eC_bool Interface_setIcon(eC_Interface __i, eC_Window window, eC_BitmapResource icon);
extern eC_Method * method_Interface_setIcon;

extern int Interface_setMouseCapture_vTblID;
void Interface_setMouseCapture(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_setMouseCapture;

extern int Interface_setMouseCursor_vTblID;
void Interface_setMouseCursor(eC_Interface __i, eC_Window window, eC_SystemCursor cursor);
extern eC_Method * method_Interface_setMouseCursor;

extern int Interface_setMousePosition_vTblID;
void Interface_setMousePosition(eC_Interface __i, int x, int y);
extern eC_Method * method_Interface_setMousePosition;

extern int Interface_setMouseRange_vTblID;
void Interface_setMouseRange(eC_Interface __i, eC_Window window, eC_Box * box);
extern eC_Method * method_Interface_setMouseRange;

extern int Interface_setRootWindowCaption_vTblID;
void Interface_setRootWindowCaption(eC_Interface __i, eC_Window window, const char * name);
extern eC_Method * method_Interface_setRootWindowCaption;

extern int Interface_setRootWindowColor_vTblID;
void Interface_setRootWindowColor(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_setRootWindowColor;

extern int Interface_setRootWindowState_vTblID;
void Interface_setRootWindowState(eC_Interface __i, eC_Window window, eC_WindowState state, eC_bool visible);
extern eC_Method * method_Interface_setRootWindowState;

extern int Interface_setTimerResolution_vTblID;
void Interface_setTimerResolution(eC_Interface __i, uint hertz);
extern eC_Method * method_Interface_setTimerResolution;

extern int Interface_startMoving_vTblID;
void Interface_startMoving(eC_Interface __i, eC_Window window, int x, int y, eC_bool fromKeyBoard);
extern eC_Method * method_Interface_startMoving;

extern int Interface_stopMoving_vTblID;
void Interface_stopMoving(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_stopMoving;

extern int Interface_terminate_vTblID;
void Interface_terminate(eC_Interface __i);
extern eC_Method * method_Interface_terminate;

extern char (* Interface_translateKey)(eC_Key key, eC_bool shift);

extern int Interface_unloadClipboard_vTblID;
void Interface_unloadClipboard(eC_Interface __i, eC_ClipBoard * clipBoard);
extern eC_Method * method_Interface_unloadClipboard;

extern int Interface_unlock_vTblID;
void Interface_unlock(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_unlock;

extern int Interface_updateRootWindow_vTblID;
void Interface_updateRootWindow(eC_Interface __i, eC_Window window);
extern eC_Method * method_Interface_updateRootWindow;

extern int Interface_wait_vTblID;
void Interface_wait(eC_Interface __i);
extern eC_Method * method_Interface_wait;

extern void (* Interface_writeKeyedText)(eC_Surface surface, int x, int y, const char * text, eC_Key hotKey);

extern void (* Interface_writeKeyedTextDisabled)(eC_Surface surface, int x, int y, const char * text, eC_Key hotKey, eC_bool disabled);

struct eC_Joystick
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
#define KEY_shift_SHIFT                                  16
#define KEY_shift_MASK                                   0x10000
#define KEY_ctrl_SHIFT                                   17
#define KEY_ctrl_MASK                                    0x20000
#define KEY_alt_SHIFT                                    18
#define KEY_alt_MASK                                     0x40000
#define KEY_cmd_SHIFT                                    19
#define KEY_cmd_MASK                                     0x80000
#define KEY_modifiers_SHIFT                              16
#define KEY_modifiers_MASK                               0xFFFF0000


extern eC_Property * property_Key_SmartKey;
extern eC_SmartKey (* Key_to_SmartKey)(const eC_Key key);

extern eC_Property * property_MiddleAnchorValue_MinMaxValue;
extern void (* MiddleAnchorValue_from_MinMaxValue)(const eC_MiddleAnchorValue * m, eC_MinMaxValue value);
extern eC_MinMaxValue (* MiddleAnchorValue_to_MinMaxValue)(const eC_MiddleAnchorValue * m);

extern eC_Property * property_MiddleAnchorValue_int;
extern void (* MiddleAnchorValue_from_int)(const eC_MiddleAnchorValue * m, int value);
extern int (* MiddleAnchorValue_to_int)(const eC_MiddleAnchorValue * m);

extern eC_Property * property_MiddleAnchorValue_double;
extern void (* MiddleAnchorValue_from_double)(const eC_MiddleAnchorValue * m, double value);
extern double (* MiddleAnchorValue_to_double)(const eC_MiddleAnchorValue * m);

#define MODIFIERS_shift_SHIFT                            0
#define MODIFIERS_shift_MASK                             0x1
#define MODIFIERS_ctrl_SHIFT                             1
#define MODIFIERS_ctrl_MASK                              0x2
#define MODIFIERS_alt_SHIFT                              2
#define MODIFIERS_alt_MASK                               0x4
#define MODIFIERS_cmd_SHIFT                              3
#define MODIFIERS_cmd_MASK                               0x8
#define MODIFIERS_left_SHIFT                             4
#define MODIFIERS_left_MASK                              0x10
#define MODIFIERS_middle_SHIFT                           5
#define MODIFIERS_middle_MASK                            0x20
#define MODIFIERS_right_SHIFT                            6
#define MODIFIERS_right_MASK                             0x40
#define MODIFIERS_isActivate_SHIFT                       7
#define MODIFIERS_isActivate_MASK                        0x80
#define MODIFIERS_isSideEffect_SHIFT                     8
#define MODIFIERS_isSideEffect_MASK                      0x100
#define MODIFIERS_closingDropDown_SHIFT                  9
#define MODIFIERS_closingDropDown_MASK                   0x200


#define MOUSEBUTTONS_left_SHIFT                          0
#define MOUSEBUTTONS_left_MASK                           0x1
#define MOUSEBUTTONS_right_SHIFT                         1
#define MOUSEBUTTONS_right_MASK                          0x2
#define MOUSEBUTTONS_middle_SHIFT                        2
#define MOUSEBUTTONS_middle_MASK                         0x4


extern int Skin_captionFont_vTblID;
eC_FontResource Skin_captionFont(eC_Skin __i);
extern eC_Method * method_Skin_captionFont;

extern int Skin_cursorsBitmaps_vTblID;
const char * Skin_cursorsBitmaps(eC_Skin __i, uint id, int * hotSpotX, int * hotSpotY, byte ** paletteShades);
extern eC_Method * method_Skin_cursorsBitmaps;

extern int Skin_getBitmap_vTblID;
eC_BitmapResource Skin_getBitmap(eC_Skin __i, eC_SkinBitmap ap1);
extern eC_Method * method_Skin_getBitmap;

extern int Skin_getDecorationsSize_vTblID;
void Skin_getDecorationsSize(eC_Skin __i, eC_Window ap1, eC_MinMaxValue * ap2, eC_MinMaxValue * ap3);
extern eC_Method * method_Skin_getDecorationsSize;

extern int Skin_horizontalSBH_vTblID;
int Skin_horizontalSBH(eC_Skin __i);
extern eC_Method * method_Skin_horizontalSBH;

extern int Skin_isMouseMoving_vTblID;
eC_bool Skin_isMouseMoving(eC_Skin __i, eC_Window ap1, int ap2, int ap3, int ap4, int ap5);
extern eC_Method * method_Skin_isMouseMoving;

extern int Skin_isMouseResizing_vTblID;
eC_bool Skin_isMouseResizing(eC_Skin __i, eC_Window ap1, int ap2, int ap3, int ap4, int ap5, eC_bool * ap6, eC_bool * ap7, eC_bool * ap8, eC_bool * ap9);
extern eC_Method * method_Skin_isMouseResizing;

extern int Skin_setWindowArea_vTblID;
void Skin_setWindowArea(eC_Skin __i, eC_Window ap1, int * ap2, int * ap3, eC_MinMaxValue * ap4, eC_MinMaxValue * ap5, eC_MinMaxValue * ap6, eC_MinMaxValue * ap7);
extern eC_Method * method_Skin_setWindowArea;

extern int Skin_setWindowMinimum_vTblID;
void Skin_setWindowMinimum(eC_Skin __i, eC_Window ap1, eC_MinMaxValue * ap2, eC_MinMaxValue * ap3);
extern eC_Method * method_Skin_setWindowMinimum;

extern int Skin_showDecorations_vTblID;
void Skin_showDecorations(eC_Skin __i, void * ap1, eC_Surface ap2, eC_Window ap3, const char * ap4, eC_bool ap5, eC_bool ap6);
extern eC_Method * method_Skin_showDecorations;

extern int Skin_systemFont_vTblID;
eC_FontResource Skin_systemFont(eC_Skin __i);
extern eC_Method * method_Skin_systemFont;

extern int Skin_updateNonClient_vTblID;
void Skin_updateNonClient(eC_Skin __i, void * ap1);
extern eC_Method * method_Skin_updateNonClient;

extern int Skin_verticalSBW_vTblID;
int Skin_verticalSBW(eC_Skin __i);
extern eC_Method * method_Skin_verticalSBW;

#define SMARTKEY_code_SHIFT                              0
#define SMARTKEY_code_MASK                               0xFFFF
#define SMARTKEY_shift_SHIFT                             16
#define SMARTKEY_shift_MASK                              0x10000
#define SMARTKEY_ctrl_SHIFT                              17
#define SMARTKEY_ctrl_MASK                               0x20000
#define SMARTKEY_alt_SHIFT                               18
#define SMARTKEY_alt_MASK                                0x40000
#define SMARTKEY_modifiers_SHIFT                         16
#define SMARTKEY_modifiers_MASK                          0xFFFF0000


struct class_members_Timer
{
   byte __ecerePrivateData0[16];
   eC_Time _delay;
   byte __ecere_padding[24];
};
extern int Timer_delayExpired_vTblID;
eC_bool Timer_delayExpired(eC_Timer __i, any_object __t);
extern eC_Method * method_Timer_delayExpired;

extern void (* Timer_start)(eC_Timer __this);

extern void (* Timer_stop)(eC_Timer __this);

extern eC_Property * property_Timer_userData;
extern void (* Timer_set_userData)(const eC_Timer t, void * value);
extern void * (* Timer_get_userData)(const eC_Timer t);

extern eC_Property * property_Timer_delay;
extern void (* Timer_set_delay)(const eC_Timer t, eC_Time value);
extern eC_Time (* Timer_get_delay)(const eC_Timer t);

extern eC_Property * property_Timer_started;
extern void (* Timer_set_started)(const eC_Timer t, eC_bool value);
extern eC_bool (* Timer_get_started)(const eC_Timer t);

struct eC_TouchPointerInfo
{
   int id;
   eC_Point point;
   float size;
   float pressure;
};
extern eC_bool (* Window_acquireInput)(eC_Window __this, eC_bool acquired);

extern void (* Window_activate)(eC_Window __this);

extern void (* Window_addResource)(eC_Window __this, eC_Resource resource);

extern eC_bool (* Window_buttonCloseDialog)(eC_Window __this, eC_Button button, int x, int y, eC_Modifiers mods);

extern eC_bool (* Window_capture)(eC_Window __this);

extern eC_bool (* Window_closeConfirmation)(eC_Window __this, eC_bool parentClosing);

extern eC_bool (* Window_create)(eC_Window __this);

extern eC_bool (* Window_cycleChildren)(eC_Window __this, eC_bool backward, eC_bool clientOnly, eC_bool tabCycleOnly, eC_bool cycleParents);

extern void (* Window_deactivate)(eC_Window __this);

extern eC_bool (* Window_destroy)(eC_Window __this, int64 code);

extern eC_DialogResult (* Window_doModal)(eC_Window __this);

extern eC_DialogResult (* Window_doModalEnd)(eC_Window __this);

extern eC_bool (* Window_doModalLoop)(eC_Window __this);

extern void (* Window_doModalStart)(eC_Window __this);

extern void (* Window_externalPosition)(eC_Window __this, int x, int y, int w, int h);

extern void (* Window_flash)(eC_Window __this);

extern void (* Window_freeMouseRange)(void);

extern void (* Window_getCaretPosition)(eC_Window __this, eC_Point * caretPos);

extern int (* Window_getCaretSize)(eC_Window __this);

extern int Window_getDecorationsSize_vTblID;
void Window_getDecorationsSize(eC_Window __i, eC_MinMaxValue * w, eC_MinMaxValue * h);
extern eC_Method * method_Window_getDecorationsSize;

extern eC_BitmapResource (* Window_getIcon)(eC_Window __this, eC_SkinBitmap iconID);

extern void (* Window_getMousePosition)(eC_Window __this, int * x, int * y);

extern void (* Window_getNCMousePosition)(eC_Window __this, int * x, int * y);

extern eC_bool (* Window_grab)(eC_Window __this, eC_Bitmap bitmap, eC_Box * box, eC_bool decorations);

extern int Window_isInside_vTblID;
eC_bool Window_isInside(eC_Window __i, int x, int y);
extern eC_Method * method_Window_isInside;

extern int Window_isMouseMoving_vTblID;
eC_bool Window_isMouseMoving(eC_Window __i, int x, int y, int w, int h);
extern eC_Method * method_Window_isMouseMoving;

extern int Window_isMouseResizing_vTblID;
eC_bool Window_isMouseResizing(eC_Window __i, int x, int y, int w, int h, eC_bool * resizeX, eC_bool * resizeY, eC_bool * resizeEndX, eC_bool * resizeEndY);
extern eC_Method * method_Window_isMouseResizing;

extern int Window_isOpaque_vTblID;
eC_bool Window_isOpaque(eC_Window __i);
extern eC_Method * method_Window_isOpaque;

extern void (* Window_makeActive)(eC_Window __this);

extern eC_bool (* Window_menuFileClose)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuFileExit)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuFileSave)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuFileSaveAll)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuFileSaveAs)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowArrangeIcons)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowCascade)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowClose)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowCloseAll)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowMaximize)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowMinimize)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowMove)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowNext)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowPrevious)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowRestore)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowSelectWindow)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowSize)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowStayOnTop)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowTileHorz)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowTileVert)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_bool (* Window_menuWindowWindows)(eC_Window __this, eC_MenuItem selection, eC_Modifiers mods);

extern eC_DialogResult (* Window_modal)(eC_Window __this);

extern eC_bool (* Window_mouseMessage)(eC_Window __this, uint method, int x, int y, eC_Modifiers * mods, eC_bool consequential, eC_bool activate);

extern void (* Window_move)(eC_Window __this, int x, int y, int w, int h);

extern eC_bool (* Window_multiTouchMessage)(eC_Window __this, eC_TouchPointerEvent event, eC_Array infos, eC_Modifiers * mods, eC_bool consequential, eC_bool activate);

extern int Window_notifyActivate_vTblID;
eC_bool Window_notifyActivate(eC_Window __i, eC_Window __t, eC_Window window, eC_bool active, eC_Window previous);
extern eC_Method * method_Window_notifyActivate;

extern int Window_notifyDestroyed_vTblID;
void Window_notifyDestroyed(eC_Window __i, eC_Window __t, eC_Window window, eC_DialogResult result);
extern eC_Method * method_Window_notifyDestroyed;

extern int Window_notifySaved_vTblID;
void Window_notifySaved(eC_Window __i, eC_Window __t, eC_Window window, const char * filePath);
extern eC_Method * method_Window_notifySaved;

extern int Window_onActivate_vTblID;
eC_bool Window_onActivate(eC_Window __i, eC_bool active, eC_Window previous, eC_bool * goOnWithActivation, eC_bool direct);
extern eC_Method * method_Window_onActivate;

extern int Window_onActivateClient_vTblID;
void Window_onActivateClient(eC_Window __i, eC_Window client, eC_Window previous);
extern eC_Method * method_Window_onActivateClient;

extern int Window_onApplyGraphics_vTblID;
void Window_onApplyGraphics(eC_Window __i);
extern eC_Method * method_Window_onApplyGraphics;

extern int Window_onChildAddedOrRemoved_vTblID;
void Window_onChildAddedOrRemoved(eC_Window __i, eC_Window child, eC_bool removed);
extern eC_Method * method_Window_onChildAddedOrRemoved;

extern int Window_onChildResized_vTblID;
void Window_onChildResized(eC_Window __i, eC_Window child, int x, int y, int w, int h);
extern eC_Method * method_Window_onChildResized;

extern int Window_onChildVisibilityToggled_vTblID;
void Window_onChildVisibilityToggled(eC_Window __i, eC_Window child, eC_bool visible);
extern eC_Method * method_Window_onChildVisibilityToggled;

extern int Window_onClose_vTblID;
eC_bool Window_onClose(eC_Window __i, eC_bool parentClosing);
extern eC_Method * method_Window_onClose;

extern int Window_onCreate_vTblID;
eC_bool Window_onCreate(eC_Window __i);
extern eC_Method * method_Window_onCreate;

extern int Window_onDestroy_vTblID;
void Window_onDestroy(eC_Window __i);
extern eC_Method * method_Window_onDestroy;

extern int Window_onDestroyed_vTblID;
void Window_onDestroyed(eC_Window __i);
extern eC_Method * method_Window_onDestroyed;

extern int Window_onDrawOverChildren_vTblID;
void Window_onDrawOverChildren(eC_Window __i, eC_Surface surface);
extern eC_Method * method_Window_onDrawOverChildren;

extern int Window_onFileModified_vTblID;
eC_bool Window_onFileModified(eC_Window __i, eC_FileChange fileChange, const char * param);
extern eC_Method * method_Window_onFileModified;

extern int Window_onHScroll_vTblID;
void Window_onHScroll(eC_Window __i, eC_ScrollBarAction action, int position, eC_Key key);
extern eC_Method * method_Window_onHScroll;

extern int Window_onKeyDown_vTblID;
eC_bool Window_onKeyDown(eC_Window __i, eC_Key key, unichar ch);
extern eC_Method * method_Window_onKeyDown;

extern int Window_onKeyHit_vTblID;
eC_bool Window_onKeyHit(eC_Window __i, eC_Key key, unichar ch);
extern eC_Method * method_Window_onKeyHit;

extern int Window_onKeyUp_vTblID;
eC_bool Window_onKeyUp(eC_Window __i, eC_Key key, unichar ch);
extern eC_Method * method_Window_onKeyUp;

extern int Window_onLeftButtonDown_vTblID;
eC_bool Window_onLeftButtonDown(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onLeftButtonDown;

extern int Window_onLeftButtonUp_vTblID;
eC_bool Window_onLeftButtonUp(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onLeftButtonUp;

extern int Window_onLeftDoubleClick_vTblID;
eC_bool Window_onLeftDoubleClick(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onLeftDoubleClick;

extern int Window_onLoadGraphics_vTblID;
eC_bool Window_onLoadGraphics(eC_Window __i);
extern eC_Method * method_Window_onLoadGraphics;

extern int Window_onMiddleButtonDown_vTblID;
eC_bool Window_onMiddleButtonDown(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onMiddleButtonDown;

extern int Window_onMiddleButtonUp_vTblID;
eC_bool Window_onMiddleButtonUp(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onMiddleButtonUp;

extern int Window_onMiddleDoubleClick_vTblID;
eC_bool Window_onMiddleDoubleClick(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onMiddleDoubleClick;

extern int Window_onMouseCaptureLost_vTblID;
void Window_onMouseCaptureLost(eC_Window __i);
extern eC_Method * method_Window_onMouseCaptureLost;

extern int Window_onMouseLeave_vTblID;
eC_bool Window_onMouseLeave(eC_Window __i, eC_Modifiers mods);
extern eC_Method * method_Window_onMouseLeave;

extern int Window_onMouseMove_vTblID;
eC_bool Window_onMouseMove(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onMouseMove;

extern int Window_onMouseOver_vTblID;
eC_bool Window_onMouseOver(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onMouseOver;

extern int Window_onMoving_vTblID;
eC_bool Window_onMoving(eC_Window __i, int * x, int * y, int w, int h);
extern eC_Method * method_Window_onMoving;

extern int Window_onMultiTouch_vTblID;
eC_bool Window_onMultiTouch(eC_Window __i, eC_TouchPointerEvent event, eC_Array infos, eC_Modifiers mods);
extern eC_Method * method_Window_onMultiTouch;

extern int Window_onPosition_vTblID;
void Window_onPosition(eC_Window __i, int x, int y, int width, int height);
extern eC_Method * method_Window_onPosition;

extern int Window_onPostCreate_vTblID;
eC_bool Window_onPostCreate(eC_Window __i);
extern eC_Method * method_Window_onPostCreate;

extern int Window_onRedraw_vTblID;
void Window_onRedraw(eC_Window __i, eC_Surface surface);
extern eC_Method * method_Window_onRedraw;

extern int Window_onResize_vTblID;
void Window_onResize(eC_Window __i, int width, int height);
extern eC_Method * method_Window_onResize;

extern int Window_onResizing_vTblID;
eC_bool Window_onResizing(eC_Window __i, int * width, int * height);
extern eC_Method * method_Window_onResizing;

extern int Window_onRightButtonDown_vTblID;
eC_bool Window_onRightButtonDown(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onRightButtonDown;

extern int Window_onRightButtonUp_vTblID;
eC_bool Window_onRightButtonUp(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onRightButtonUp;

extern int Window_onRightDoubleClick_vTblID;
eC_bool Window_onRightDoubleClick(eC_Window __i, int x, int y, eC_Modifiers mods);
extern eC_Method * method_Window_onRightDoubleClick;

extern int Window_onSaveFile_vTblID;
eC_bool Window_onSaveFile(eC_Window __i, const char * fileName);
extern eC_Method * method_Window_onSaveFile;

extern int Window_onStateChange_vTblID;
eC_bool Window_onStateChange(eC_Window __i, eC_WindowState state, eC_Modifiers mods);
extern eC_Method * method_Window_onStateChange;

extern int Window_onSysKeyDown_vTblID;
eC_bool Window_onSysKeyDown(eC_Window __i, eC_Key key, unichar ch);
extern eC_Method * method_Window_onSysKeyDown;

extern int Window_onSysKeyHit_vTblID;
eC_bool Window_onSysKeyHit(eC_Window __i, eC_Key key, unichar ch);
extern eC_Method * method_Window_onSysKeyHit;

extern int Window_onSysKeyUp_vTblID;
eC_bool Window_onSysKeyUp(eC_Window __i, eC_Key key, unichar ch);
extern eC_Method * method_Window_onSysKeyUp;

extern int Window_onUnloadGraphics_vTblID;
void Window_onUnloadGraphics(eC_Window __i);
extern eC_Method * method_Window_onUnloadGraphics;

extern int Window_onVScroll_vTblID;
void Window_onVScroll(eC_Window __i, eC_ScrollBarAction action, int position, eC_Key key);
extern eC_Method * method_Window_onVScroll;

extern int Window_preShowDecorations_vTblID;
void Window_preShowDecorations(eC_Window __i, eC_Font * captionFont, eC_Surface surface, const char * name, eC_bool active, eC_bool moving);
extern eC_Method * method_Window_preShowDecorations;

extern void (* Window_releaseCapture)(eC_Window __this);

extern void (* Window_removeResource)(eC_Window __this, eC_Resource resource);

extern void (* Window_restoreCaret)(void);

extern void (* Window_scroll)(eC_Window __this, int x, int y);

extern int Window_setBox_vTblID;
void Window_setBox(eC_Window __i, eC_Box * box);
extern eC_Method * method_Window_setBox;

extern void (* Window_setCaption)(eC_Window __this, const char * format, ...);

extern void (* Window_setCaret)(eC_Window __this, int x, int y, int size);

extern void (* Window_setMousePosition)(eC_Window __this, int x, int y);

extern void (* Window_setMouseRange)(eC_Window __this, eC_Box * range);

extern void (* Window_setMouseRangeToClient)(eC_Window __this);

extern void (* Window_setMouseRangeToWindow)(eC_Window __this);

extern void (* Window_setScrollArea)(eC_Window __this, int width, int height, eC_bool snapToStep);

extern void (* Window_setScrollLineStep)(eC_Window __this, int stepX, int stepY);

extern void (* Window_setScrollPosition)(eC_Window __this, int x, int y);

extern void (* Window_setState)(eC_Window __this, eC_WindowState newState, eC_bool activate, eC_Modifiers mods);

extern void (* Window_setText)(eC_Window __this, const char * format, ...);

extern int Window_setWindowArea_vTblID;
void Window_setWindowArea(eC_Window __i, int * x, int * y, eC_MinMaxValue * w, eC_MinMaxValue * h, eC_MinMaxValue * cw, eC_MinMaxValue * ch);
extern eC_Method * method_Window_setWindowArea;

extern int Window_setWindowMinimum_vTblID;
void Window_setWindowMinimum(eC_Window __i, eC_MinMaxValue * mw, eC_MinMaxValue * mh);
extern eC_Method * method_Window_setWindowMinimum;

extern int Window_showDecorations_vTblID;
void Window_showDecorations(eC_Window __i, eC_Font * captionFont, eC_Surface surface, const char * name, eC_bool active, eC_bool moving);
extern eC_Method * method_Window_showDecorations;

extern void (* Window_showSysMenu)(eC_Window __this, int x, int y);

extern void (* Window_softActivate)(eC_Window __this);

extern void (* Window_update)(eC_Window __this, const eC_Box * region);

extern void (* Window_updateDisplay)(eC_Window __this);

extern int Window_updateNonClient_vTblID;
void Window_updateNonClient(eC_Window __i);
extern eC_Method * method_Window_updateNonClient;

extern void (* Window_writeCaption)(eC_Window __this, eC_Surface surface, int x, int y);

extern eC_Property * property_Window_parent;
extern void (* Window_set_parent)(const eC_Window w, eC_Window value);
extern eC_Window (* Window_get_parent)(const eC_Window w);

extern eC_Property * property_Window_master;
extern void (* Window_set_master)(const eC_Window w, eC_Window value);
extern eC_Window (* Window_get_master)(const eC_Window w);

extern eC_Property * property_Window_caption;
extern void (* Window_set_caption)(const eC_Window w, const char * value);
extern const char * (* Window_get_caption)(const eC_Window w);

extern eC_Property * property_Window_hotKey;
extern void (* Window_set_hotKey)(const eC_Window w, eC_Key value);
extern eC_Key (* Window_get_hotKey)(const eC_Window w);

extern eC_Property * property_Window_background;
extern void (* Window_set_background)(const eC_Window w, eC_Color value);
extern eC_Color (* Window_get_background)(const eC_Window w);

extern eC_Property * property_Window_opacity;
extern void (* Window_set_opacity)(const eC_Window w, eC_Percentage value);
extern eC_Percentage (* Window_get_opacity)(const eC_Window w);

extern eC_Property * property_Window_foreground;
extern void (* Window_set_foreground)(const eC_Window w, eC_Color value);
extern eC_Color (* Window_get_foreground)(const eC_Window w);

extern eC_Property * property_Window_borderStyle;
extern void (* Window_set_borderStyle)(const eC_Window w, eC_BorderStyle value);
extern eC_BorderStyle (* Window_get_borderStyle)(const eC_Window w);

extern eC_Property * property_Window_minClientSize;
extern void (* Window_set_minClientSize)(const eC_Window w, const eC_Size * value);
extern void (* Window_get_minClientSize)(const eC_Window w, eC_Size * value);

extern eC_Property * property_Window_maxClientSize;
extern void (* Window_set_maxClientSize)(const eC_Window w, const eC_Size * value);
extern void (* Window_get_maxClientSize)(const eC_Window w, eC_Size * value);

extern eC_Property * property_Window_hasMaximize;
extern void (* Window_set_hasMaximize)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasMaximize)(const eC_Window w);

extern eC_Property * property_Window_hasMinimize;
extern void (* Window_set_hasMinimize)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasMinimize)(const eC_Window w);

extern eC_Property * property_Window_hasClose;
extern void (* Window_set_hasClose)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasClose)(const eC_Window w);

extern eC_Property * property_Window_nonClient;
extern void (* Window_set_nonClient)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_nonClient)(const eC_Window w);

extern eC_Property * property_Window_inactive;
extern void (* Window_set_inactive)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_inactive)(const eC_Window w);

extern eC_Property * property_Window_clickThrough;
extern void (* Window_set_clickThrough)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_clickThrough)(const eC_Window w);

extern eC_Property * property_Window_isRemote;
extern void (* Window_set_isRemote)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_isRemote)(const eC_Window w);

extern eC_Property * property_Window_noCycle;
extern void (* Window_set_noCycle)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_noCycle)(const eC_Window w);

extern eC_Property * property_Window_isModal;
extern void (* Window_set_isModal)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_isModal)(const eC_Window w);

extern eC_Property * property_Window_interim;
extern void (* Window_set_interim)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_interim)(const eC_Window w);

extern eC_Property * property_Window_tabCycle;
extern void (* Window_set_tabCycle)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_tabCycle)(const eC_Window w);

extern eC_Property * property_Window_isDefault;
extern void (* Window_set_isDefault)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_isDefault)(const eC_Window w);

extern eC_Property * property_Window_drawBehind;
extern void (* Window_set_drawBehind)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_drawBehind)(const eC_Window w);

extern eC_Property * property_Window_hasMenuBar;
extern void (* Window_set_hasMenuBar)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasMenuBar)(const eC_Window w);

extern eC_Property * property_Window_hasStatusBar;
extern void (* Window_set_hasStatusBar)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasStatusBar)(const eC_Window w);

extern eC_Property * property_Window_stayOnTop;
extern void (* Window_set_stayOnTop)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_stayOnTop)(const eC_Window w);

extern eC_Property * property_Window_menu;
extern void (* Window_set_menu)(const eC_Window w, eC_Menu value);
extern eC_Menu (* Window_get_menu)(const eC_Window w);

extern eC_Property * property_Window_font;
extern void (* Window_set_font)(const eC_Window w, eC_FontResource value);
extern eC_FontResource (* Window_get_font)(const eC_Window w);
extern eC_bool (* Window_isSet_font)(const eC_Window w);

extern eC_Property * property_Window_sizeAnchor;
extern void (* Window_set_sizeAnchor)(const eC_Window w, const eC_SizeAnchor * value);
extern void (* Window_get_sizeAnchor)(const eC_Window w, eC_SizeAnchor * value);
extern eC_bool (* Window_isSet_sizeAnchor)(const eC_Window w);

extern eC_Property * property_Window_size;
extern void (* Window_set_size)(const eC_Window w, const eC_Size * value);
extern void (* Window_get_size)(const eC_Window w, eC_Size * value);
extern eC_bool (* Window_isSet_size)(const eC_Window w);

extern eC_Property * property_Window_clientSize;
extern void (* Window_set_clientSize)(const eC_Window w, const eC_Size * value);
extern void (* Window_get_clientSize)(const eC_Window w, eC_Size * value);
extern eC_bool (* Window_isSet_clientSize)(const eC_Window w);

extern eC_Property * property_Window_initSize;
extern void (* Window_get_initSize)(const eC_Window w, eC_Size * value);

extern eC_Property * property_Window_anchor;
extern void (* Window_set_anchor)(const eC_Window w, const eC_Anchor * value);
extern void (* Window_get_anchor)(const eC_Window w, eC_Anchor * value);
extern eC_bool (* Window_isSet_anchor)(const eC_Window w);

extern eC_Property * property_Window_position;
extern void (* Window_set_position)(const eC_Window w, const eC_Point * value);
extern void (* Window_get_position)(const eC_Window w, eC_Point * value);

extern eC_Property * property_Window_disabled;
extern void (* Window_set_disabled)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_disabled)(const eC_Window w);

extern eC_Property * property_Window_isEnabled;
extern eC_bool (* Window_get_isEnabled)(const eC_Window w);

extern eC_Property * property_Window_state;
extern void (* Window_set_state)(const eC_Window w, eC_WindowState value);
extern eC_WindowState (* Window_get_state)(const eC_Window w);

extern eC_Property * property_Window_visible;
extern void (* Window_set_visible)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_visible)(const eC_Window w);

extern eC_Property * property_Window_isDocument;
extern void (* Window_set_isDocument)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_isDocument)(const eC_Window w);

extern eC_Property * property_Window_mergeMenus;
extern void (* Window_set_mergeMenus)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_mergeMenus)(const eC_Window w);

extern eC_Property * property_Window_hasHorzScroll;
extern void (* Window_set_hasHorzScroll)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasHorzScroll)(const eC_Window w);

extern eC_Property * property_Window_hasVertScroll;
extern void (* Window_set_hasVertScroll)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_hasVertScroll)(const eC_Window w);

extern eC_Property * property_Window_dontHideScroll;
extern void (* Window_set_dontHideScroll)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_dontHideScroll)(const eC_Window w);

extern eC_Property * property_Window_dontScrollVert;
extern void (* Window_set_dontScrollVert)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_dontScrollVert)(const eC_Window w);

extern eC_Property * property_Window_dontScrollHorz;
extern void (* Window_set_dontScrollHorz)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_dontScrollHorz)(const eC_Window w);

extern eC_Property * property_Window_snapVertScroll;
extern void (* Window_set_snapVertScroll)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_snapVertScroll)(const eC_Window w);

extern eC_Property * property_Window_snapHorzScroll;
extern void (* Window_set_snapHorzScroll)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_snapHorzScroll)(const eC_Window w);

extern eC_Property * property_Window_scroll;
extern void (* Window_set_scroll)(const eC_Window w, const eC_Point * value);
extern void (* Window_get_scroll)(const eC_Window w, eC_Point * value);

extern eC_Property * property_Window_modifyVirtualArea;
extern void (* Window_set_modifyVirtualArea)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_modifyVirtualArea)(const eC_Window w);

extern eC_Property * property_Window_dontAutoScrollArea;
extern void (* Window_set_dontAutoScrollArea)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_dontAutoScrollArea)(const eC_Window w);

extern eC_Property * property_Window_fileName;
extern void (* Window_set_fileName)(const eC_Window w, const char * value);
extern const char * (* Window_get_fileName)(const eC_Window w);

extern eC_Property * property_Window_id;
extern void (* Window_set_id)(const eC_Window w, int64 value);
extern int64 (* Window_get_id)(const eC_Window w);

extern eC_Property * property_Window_modifiedDocument;
extern void (* Window_set_modifiedDocument)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_modifiedDocument)(const eC_Window w);

extern eC_Property * property_Window_showInTaskBar;
extern void (* Window_set_showInTaskBar)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_showInTaskBar)(const eC_Window w);

extern eC_Property * property_Window_saveDialog;
extern void (* Window_set_saveDialog)(const eC_Window w, eC_FileDialog value);

extern eC_Property * property_Window_isActiveClient;
extern void (* Window_set_isActiveClient)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_isActiveClient)(const eC_Window w);

extern eC_Property * property_Window_cursor;
extern void (* Window_set_cursor)(const eC_Window w, eC_Cursor value);
extern eC_Cursor (* Window_get_cursor)(const eC_Window w);

extern eC_Property * property_Window_name;
extern void (* Window_set_name)(const eC_Window w, const char * value);
extern const char * (* Window_get_name)(const eC_Window w);

extern eC_Property * property_Window_displayDriver;
extern void (* Window_set_displayDriver)(const eC_Window w, const char * value);
extern const char * (* Window_get_displayDriver)(const eC_Window w);

extern eC_Property * property_Window_autoCreate;
extern void (* Window_set_autoCreate)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_autoCreate)(const eC_Window w);

extern eC_Property * property_Window_scrollArea;
extern void (* Window_set_scrollArea)(const eC_Window w, const eC_Size * value);
extern void (* Window_get_scrollArea)(const eC_Window w, eC_Size * value);
extern eC_bool (* Window_isSet_scrollArea)(const eC_Window w);

extern eC_Property * property_Window_is3D;
extern void (* Window_set_is3D)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_is3D)(const eC_Window w);

extern eC_Property * property_Window_fontObject;
extern eC_Font * (* Window_get_fontObject)(const eC_Window w);

extern eC_Property * property_Window_clientStart;
extern void (* Window_get_clientStart)(const eC_Window w, eC_Point * value);

extern eC_Property * property_Window_absPosition;
extern void (* Window_get_absPosition)(const eC_Window w, eC_Point * value);

extern eC_Property * property_Window_normalAnchor;
extern void (* Window_get_normalAnchor)(const eC_Window w, eC_Anchor * value);

extern eC_Property * property_Window_normalSizeAnchor;
extern void (* Window_get_normalSizeAnchor)(const eC_Window w, eC_SizeAnchor * value);

extern eC_Property * property_Window_active;
extern eC_bool (* Window_get_active)(const eC_Window w);

extern eC_Property * property_Window_created;
extern eC_bool (* Window_get_created)(const eC_Window w);

extern eC_Property * property_Window_destroyed;
extern eC_bool (* Window_get_destroyed)(const eC_Window w);

extern eC_Property * property_Window_firstSlave;
extern eC_Window (* Window_get_firstSlave)(const eC_Window w);

extern eC_Property * property_Window_firstChild;
extern eC_Window (* Window_get_firstChild)(const eC_Window w);

extern eC_Property * property_Window_lastChild;
extern eC_Window (* Window_get_lastChild)(const eC_Window w);

extern eC_Property * property_Window_activeClient;
extern eC_Window (* Window_get_activeClient)(const eC_Window w);

extern eC_Property * property_Window_activeChild;
extern eC_Window (* Window_get_activeChild)(const eC_Window w);

extern eC_Property * property_Window_display;
extern eC_Display (* Window_get_display)(const eC_Window w);

extern eC_Property * property_Window_displaySystem;
extern eC_DisplaySystem (* Window_get_displaySystem)(const eC_Window w);

extern eC_Property * property_Window_horzScroll;
extern eC_ScrollBar (* Window_get_horzScroll)(const eC_Window w);

extern eC_Property * property_Window_vertScroll;
extern eC_ScrollBar (* Window_get_vertScroll)(const eC_Window w);

extern eC_Property * property_Window_statusBar;
extern eC_StatusBar (* Window_get_statusBar)(const eC_Window w);

extern eC_Property * property_Window_rootWindow;
extern eC_Window (* Window_get_rootWindow)(const eC_Window w);

extern eC_Property * property_Window_closing;
extern void (* Window_set_closing)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_closing)(const eC_Window w);

extern eC_Property * property_Window_documentID;
extern int (* Window_get_documentID)(const eC_Window w);

extern eC_Property * property_Window_previous;
extern eC_Window (* Window_get_previous)(const eC_Window w);

extern eC_Property * property_Window_next;
extern eC_Window (* Window_get_next)(const eC_Window w);

extern eC_Property * property_Window_nextSlave;
extern eC_Window (* Window_get_nextSlave)(const eC_Window w);

extern eC_Property * property_Window_menuBar;
extern eC_PopupMenu (* Window_get_menuBar)(const eC_Window w);

extern eC_Property * property_Window_sbv;
extern eC_ScrollBar (* Window_get_sbv)(const eC_Window w);

extern eC_Property * property_Window_sbh;
extern eC_ScrollBar (* Window_get_sbh)(const eC_Window w);

extern eC_Property * property_Window_fullRender;
extern void (* Window_set_fullRender)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_fullRender)(const eC_Window w);

extern eC_Property * property_Window_systemHandle;
extern void * (* Window_get_systemHandle)(const eC_Window w);

extern eC_Property * property_Window_minimizeButton;
extern eC_Button (* Window_get_minimizeButton)(const eC_Window w);

extern eC_Property * property_Window_maximizeButton;
extern eC_Button (* Window_get_maximizeButton)(const eC_Window w);

extern eC_Property * property_Window_closeButton;
extern eC_Button (* Window_get_closeButton)(const eC_Window w);

extern eC_Property * property_Window_icon;
extern void (* Window_set_icon)(const eC_Window w, eC_BitmapResource value);
extern eC_BitmapResource (* Window_get_icon)(const eC_Window w);

extern eC_Property * property_Window_moveable;
extern void (* Window_set_moveable)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_moveable)(const eC_Window w);

extern eC_Property * property_Window_alphaBlend;
extern void (* Window_set_alphaBlend)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_alphaBlend)(const eC_Window w);

extern eC_Property * property_Window_useSharedMemory;
extern void (* Window_set_useSharedMemory)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_useSharedMemory)(const eC_Window w);

extern eC_Property * property_Window_glCapabilities;
extern void (* Window_set_glCapabilities)(const eC_Window w, eC_GLCapabilities value);
extern eC_GLCapabilities (* Window_get_glCapabilities)(const eC_Window w);

extern eC_Property * property_Window_creationActivation;
extern void (* Window_set_creationActivation)(const eC_Window w, eC_CreationActivationOption value);
extern eC_CreationActivationOption (* Window_get_creationActivation)(const eC_Window w);

extern eC_Property * property_Window_nativeDecorations;
extern void (* Window_set_nativeDecorations)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_nativeDecorations)(const eC_Window w);
extern eC_bool (* Window_isSet_nativeDecorations)(const eC_Window w);

extern eC_Property * property_Window_manageDisplay;
extern void (* Window_set_manageDisplay)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_manageDisplay)(const eC_Window w);

extern eC_Property * property_Window_text;
extern void (* Window_set_text)(const eC_Window w, const char * value);
extern const char * (* Window_get_text)(const eC_Window w);

extern eC_Property * property_Window_controller;
extern void (* Window_set_controller)(const eC_Window w, eC_WindowController value);
extern eC_WindowController (* Window_get_controller)(const eC_Window w);

extern eC_Property * property_Window_noConsequential;
extern void (* Window_set_noConsequential)(const eC_Window w, eC_bool value);
extern eC_bool (* Window_get_noConsequential)(const eC_Window w);

extern int WindowController_onCreate_vTblID;
eC_bool WindowController_onCreate(eC_WindowController __i, eC_WindowController controller);
extern eC_Method * method_WindowController_onCreate;

extern int WindowController_onKeyDown_vTblID;
eC_bool WindowController_onKeyDown(eC_WindowController __i, eC_WindowController controller, eC_Key key, unichar ch);
extern eC_Method * method_WindowController_onKeyDown;

extern int WindowController_onKeyHit_vTblID;
eC_bool WindowController_onKeyHit(eC_WindowController __i, eC_WindowController controller, eC_Key key, unichar ch);
extern eC_Method * method_WindowController_onKeyHit;

extern int WindowController_onKeyUp_vTblID;
eC_bool WindowController_onKeyUp(eC_WindowController __i, eC_WindowController controller, eC_Key key, unichar ch);
extern eC_Method * method_WindowController_onKeyUp;

extern int WindowController_onLeftButtonDown_vTblID;
eC_bool WindowController_onLeftButtonDown(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onLeftButtonDown;

extern int WindowController_onLeftButtonUp_vTblID;
eC_bool WindowController_onLeftButtonUp(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onLeftButtonUp;

extern int WindowController_onLeftDoubleClick_vTblID;
eC_bool WindowController_onLeftDoubleClick(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onLeftDoubleClick;

extern int WindowController_onLoadGraphics_vTblID;
eC_bool WindowController_onLoadGraphics(eC_WindowController __i, eC_WindowController controller);
extern eC_Method * method_WindowController_onLoadGraphics;

extern int WindowController_onMiddleButtonDown_vTblID;
eC_bool WindowController_onMiddleButtonDown(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onMiddleButtonDown;

extern int WindowController_onMiddleButtonUp_vTblID;
eC_bool WindowController_onMiddleButtonUp(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onMiddleButtonUp;

extern int WindowController_onMiddleDoubleClick_vTblID;
eC_bool WindowController_onMiddleDoubleClick(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onMiddleDoubleClick;

extern int WindowController_onMouseMove_vTblID;
eC_bool WindowController_onMouseMove(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onMouseMove;

extern int WindowController_onMultiTouch_vTblID;
eC_bool WindowController_onMultiTouch(eC_WindowController __i, eC_WindowController controller, eC_TouchPointerEvent event, eC_Array infos, eC_Modifiers mods);
extern eC_Method * method_WindowController_onMultiTouch;

extern int WindowController_onRedraw_vTblID;
void WindowController_onRedraw(eC_WindowController __i, eC_WindowController controller, eC_Surface surface);
extern eC_Method * method_WindowController_onRedraw;

extern int WindowController_onResize_vTblID;
void WindowController_onResize(eC_WindowController __i, eC_WindowController controller, int width, int height);
extern eC_Method * method_WindowController_onResize;

extern int WindowController_onRightButtonDown_vTblID;
eC_bool WindowController_onRightButtonDown(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onRightButtonDown;

extern int WindowController_onRightButtonUp_vTblID;
eC_bool WindowController_onRightButtonUp(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onRightButtonUp;

extern int WindowController_onRightDoubleClick_vTblID;
eC_bool WindowController_onRightDoubleClick(eC_WindowController __i, eC_WindowController controller, int x, int y, eC_Modifiers mods);
extern eC_Method * method_WindowController_onRightDoubleClick;

extern int WindowController_onUnloadGraphics_vTblID;
void WindowController_onUnloadGraphics(eC_WindowController __i, eC_WindowController controller);
extern eC_Method * method_WindowController_onUnloadGraphics;

extern eC_Property * property_WindowController_window;
extern eC_Window (* WindowController_get_window)(const eC_WindowController w);

extern eC_Property * property_WindowController_controlled;
extern void (* WindowController_set_controlled)(const eC_WindowController w, tparam_WindowController_V value);
extern tparam_WindowController_V (* WindowController_get_controlled)(const eC_WindowController w);

extern void (* eC_applySkin)(eC_Class * c, const char * name, void ** vTbl);
extern eC_bool (* eC_desktop3DFullScreen)(eC_Window window);
extern void (* eC_desktop3DGetClipBox)(eC_Box * box);
extern eC_Window (* eC_desktop3DGetClippedWindow)(void);
extern void * (* eC_desktop3DGetWindowHandle)(eC_Window window);
extern void (* eC_desktop3DInitialize)(eC_Window window, void (* setup)(eC_Window window, int w, int h), void (* update)(eC_Window window, eC_Box * box));
extern eC_bool (* eC_desktop3DMouseMessage)(eC_Window window, uint method, int x, int y, eC_Modifiers * mods, eC_bool consequential, eC_bool activate);
extern void (* eC_desktop3DSetDesktopDirty)(void);
extern eC_bool (* eC_desktop3DTitleBarClicked)(eC_Window clickedWindow, int x, int y);
extern eC_bool (* eC_desktop3DUpdateDisplay)(void);
extern void (* eC_queryCompass)(eC_Euler * value);
extern void (* eC_unapplySkin)(eC_Class * c);
typedef int eC_FileDialogType;
enum
{
   FileDialogType_open = 0x0,
   FileDialogType_save = 0x1,
   FileDialogType_selectDir = 0x2,
   FileDialogType_multiOpen = 0x3
};

typedef struct eC_FileFilter eC_FileFilter;
typedef int eC_FileForceExtension;
enum
{
   FileForceExtension_never = 0x0,
   FileForceExtension_always = 0x1,
   FileForceExtension_whenNoneGiven = 0x2
};

typedef int eC_FileNameType;
enum
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

typedef struct eC_FileType eC_FileType;
typedef int eC_MessageBoxType;
enum
{
   MessageBoxType_ok = 0x0,
   MessageBoxType_yesNo = 0x1,
   MessageBoxType_okCancel = 0x2,
   MessageBoxType_yesNoCancel = 0x3
};

typedef eC_Window eC_ColorPicker;
typedef eC_Window eC_CreateDirectoryDialog;
typedef struct eC_FileName eC_FileName;
typedef eC_Window eC_FindDialog;
typedef eC_Window eC_GoToDialog;
typedef eC_Window eC_MessageBox;
typedef eC_Window eC_ReplaceDialog;
typedef eC_Window eC_WindowList;
extern eC_Property * property_ColorPicker_color;
extern void (* ColorPicker_set_color)(const eC_ColorPicker c, eC_Color value);
extern eC_Color (* ColorPicker_get_color)(const eC_ColorPicker c);

extern eC_Property * property_ColorPicker_hasAlpha;
extern void (* ColorPicker_set_hasAlpha)(const eC_ColorPicker c, eC_bool value);
extern eC_bool (* ColorPicker_get_hasAlpha)(const eC_ColorPicker c);

extern eC_Property * property_CreateDirectoryDialog_currentDirectory;
extern void (* CreateDirectoryDialog_set_currentDirectory)(const eC_CreateDirectoryDialog c, const char * value);
extern const char * (* CreateDirectoryDialog_get_currentDirectory)(const eC_CreateDirectoryDialog c);

extern eC_Property * property_FileDialog_type;
extern void (* FileDialog_set_type)(const eC_FileDialog f, eC_FileDialogType value);
extern eC_FileDialogType (* FileDialog_get_type)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_filePath;
extern void (* FileDialog_set_filePath)(const eC_FileDialog f, const char * value);
extern const char * (* FileDialog_get_filePath)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_currentDirectory;
extern void (* FileDialog_set_currentDirectory)(const eC_FileDialog f, const char * value);
extern const char * (* FileDialog_get_currentDirectory)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_filters;
extern void (* FileDialog_set_filters)(const eC_FileDialog f, eC_FileFilter * value);
extern eC_FileFilter * (* FileDialog_get_filters)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_types;
extern void (* FileDialog_set_types)(const eC_FileDialog f, eC_FileType * value);
extern eC_FileType * (* FileDialog_get_types)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_sizeFilters;
extern void (* FileDialog_set_sizeFilters)(const eC_FileDialog f, int value);
extern int (* FileDialog_get_sizeFilters)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_sizeTypes;
extern void (* FileDialog_set_sizeTypes)(const eC_FileDialog f, int value);
extern int (* FileDialog_get_sizeTypes)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_filter;
extern void (* FileDialog_set_filter)(const eC_FileDialog f, int value);
extern int (* FileDialog_get_filter)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_fileType;
extern void (* FileDialog_set_fileType)(const eC_FileDialog f, int value);
extern int (* FileDialog_get_fileType)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_mayNotExist;
extern void (* FileDialog_set_mayNotExist)(const eC_FileDialog f, eC_bool value);
extern eC_bool (* FileDialog_get_mayNotExist)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_numSelections;
extern int (* FileDialog_get_numSelections)(const eC_FileDialog f);

extern eC_Property * property_FileDialog_multiFilePaths;
extern const char ** (* FileDialog_get_multiFilePaths)(const eC_FileDialog f);

struct eC_FileFilter
{
   const char * name;
   const char * extensions;
};
extern eC_bool (* FileFilter_validateFileName)(eC_FileFilter * __this, const char * name);

struct eC_FileName
{
   const char * name;
   eC_FileNameType type;
   int indent;
};
extern eC_FileNameType (* FileNameType_selectByExtension)(const char * extension);

extern eC_Property * property_FileNameType_isFolderType;
extern eC_bool (* FileNameType_get_isFolderType)(const eC_FileNameType f);

extern eC_Property * property_FileNameType_isFileType;
extern eC_bool (* FileNameType_get_isFileType)(const eC_FileNameType f);

struct eC_FileType
{
   const char * name;
   const char * typeExtension;
   eC_FileForceExtension forceExtension;
};
extern eC_Property * property_FindDialog_editBox;
extern void (* FindDialog_set_editBox)(const eC_FindDialog f, eC_EditBox value);

extern eC_Property * property_FindDialog_searchString;
extern void (* FindDialog_set_searchString)(const eC_FindDialog f, const char * value);
extern const char * (* FindDialog_get_searchString)(const eC_FindDialog f);

extern eC_Property * property_FindDialog_wholeWord;
extern void (* FindDialog_set_wholeWord)(const eC_FindDialog f, eC_bool value);
extern eC_bool (* FindDialog_get_wholeWord)(const eC_FindDialog f);

extern eC_Property * property_FindDialog_matchCase;
extern void (* FindDialog_set_matchCase)(const eC_FindDialog f, eC_bool value);
extern eC_bool (* FindDialog_get_matchCase)(const eC_FindDialog f);

extern eC_Property * property_FindDialog_searchUp;
extern void (* FindDialog_set_searchUp)(const eC_FindDialog f, eC_bool value);
extern eC_bool (* FindDialog_get_searchUp)(const eC_FindDialog f);

extern eC_Property * property_GoToDialog_line;
extern void (* GoToDialog_set_line)(const eC_GoToDialog g, int value);
extern int (* GoToDialog_get_line)(const eC_GoToDialog g);

extern eC_Property * property_GoToDialog_editBox;
extern void (* GoToDialog_set_editBox)(const eC_GoToDialog g, eC_EditBox value);
extern eC_EditBox (* GoToDialog_get_editBox)(const eC_GoToDialog g);

extern eC_Property * property_MessageBox_type;
extern void (* MessageBox_set_type)(const eC_MessageBox m, eC_MessageBoxType value);

extern eC_Property * property_MessageBox_contents;
extern void (* MessageBox_set_contents)(const eC_MessageBox m, const char * value);

extern eC_Property * property_ReplaceDialog_editBox;
extern void (* ReplaceDialog_set_editBox)(const eC_ReplaceDialog r, eC_EditBox value);

extern eC_Property * property_ReplaceDialog_searchString;
extern void (* ReplaceDialog_set_searchString)(const eC_ReplaceDialog r, const char * value);
extern const char * (* ReplaceDialog_get_searchString)(const eC_ReplaceDialog r);

extern eC_Property * property_ReplaceDialog_replaceString;
extern void (* ReplaceDialog_set_replaceString)(const eC_ReplaceDialog r, const char * value);
extern const char * (* ReplaceDialog_get_replaceString)(const eC_ReplaceDialog r);

extern eC_Property * property_ReplaceDialog_wholeWord;
extern void (* ReplaceDialog_set_wholeWord)(const eC_ReplaceDialog r, eC_bool value);
extern eC_bool (* ReplaceDialog_get_wholeWord)(const eC_ReplaceDialog r);

extern eC_Property * property_ReplaceDialog_matchCase;
extern void (* ReplaceDialog_set_matchCase)(const eC_ReplaceDialog r, eC_bool value);
extern eC_bool (* ReplaceDialog_get_matchCase)(const eC_ReplaceDialog r);

typedef eC_Instance eC_Socket;
typedef eC_Socket eC_DCOMClientObject;
typedef eC_Instance eC_DCOMSendControl;
typedef eC_Instance eC_DCOMServerObject;
typedef eC_Socket eC_DCOMServerSocket;
typedef eC_Instance eC_Service;
typedef eC_Service eC_DCOMService;
typedef int eC_DisconnectCode;
enum
{
   DisconnectCode_remoteLost = 0x1,
   DisconnectCode_remoteClosed = 0x2,
   DisconnectCode_resolveFailed = 0x3,
   DisconnectCode_connectFailed = 0x4
};

typedef eC_Socket eC_FileServerConnection;
typedef eC_File eC_HTTPFile;
typedef eC_File eC_NetworkClientFile;
typedef struct eC_Packet eC_Packet;
typedef eC_Socket eC_SSLSocket;
typedef int eC_SocketType;
enum
{
   SocketType_tcp = 0x0,
   SocketType_udp = 0x1
};

struct class_members_DCOMClientObject
{
   uint objectID;
   eC_bool answered;
   eC_SerialBuffer __ecereBuffer;
   byte __ecerePrivateData0[8];
   int nextCallID;
   byte __ecere_padding[12];
};
extern eC_bool (* DCOMClientObject_callMethod)(eC_DCOMClientObject __this, uint methodID, eC_bool hasReturnValue);

extern int DCOMClientObject_callVirtualMethod_vTblID;
void DCOMClientObject_callVirtualMethod(eC_DCOMClientObject __i, uint __ecereMethodID, eC_SerialBuffer __ecereBuffer);
extern eC_Method * method_DCOMClientObject_callVirtualMethod;

extern eC_bool (* DCOMClientObject_connect)(eC_DCOMClientObject __this, const char * server, int port);

extern void (* DCOMSendControl_resume)(eC_DCOMSendControl __this);

extern void (* DCOMSendControl_stop)(eC_DCOMSendControl __this);

struct class_members_DCOMServerObject
{
   eC_Instance instance;
   eC_DCOMServerSocket serverSocket;
   uint id;
   eC_SerialBuffer argsBuffer;
   eC_SerialBuffer returnBuffer;
   byte __ecerePrivateData0[8];
   eC_Mutex * mutex;
   int nextCallID;
};
extern int DCOMServerObject_callMethod_vTblID;
void DCOMServerObject_callMethod(eC_DCOMServerObject __i, uint __ecereMethodID, eC_SerialBuffer __ecereBuffer);
extern eC_Method * method_DCOMServerObject_callMethod;

extern eC_bool (* DCOMServerObject_callVirtualMethod)(eC_DCOMServerObject __this, uint methodID, eC_bool hasReturnValue);

extern eC_bool (* DCOMService_start)(eC_DCOMService __this);

extern eC_bool (* DCOMService_stop)(eC_DCOMService __this);

extern eC_NetworkClientFile (* FileServerConnection_open)(eC_FileServerConnection __this, const char * fileName, eC_FileOpenMode mode);

extern eC_bool (* HTTPFile_openURL)(eC_HTTPFile __this, const char * name, const char * referer, char * relocation);

extern eC_bool (* HTTPFile_openURLEx)(eC_HTTPFile __this, const char * name, const char * referer, char * relocation, const char * acceptHeader);

extern eC_Property * property_HTTPFile_reuseConnection;
extern void (* HTTPFile_set_reuseConnection)(const eC_HTTPFile h, eC_bool value);
extern eC_bool (* HTTPFile_get_reuseConnection)(const eC_HTTPFile h);

extern eC_Property * property_HTTPFile_contentType;
extern eC_String (* HTTPFile_get_contentType)(const eC_HTTPFile h);

extern eC_Property * property_HTTPFile_contentDisposition;
extern eC_String (* HTTPFile_get_contentDisposition)(const eC_HTTPFile h);

extern eC_Property * property_HTTPFile_httpCode;
extern int (* HTTPFile_get_httpCode)(const eC_HTTPFile h);

struct eC_Packet
{
   uint size;
};
extern eC_bool (* SSLSocket_establishConnection)(eC_SSLSocket __this);

extern eC_Property * property_SSLSocket_autoEstablish;
extern void (* SSLSocket_set_autoEstablish)(const eC_SSLSocket s, eC_bool value);
extern eC_bool (* SSLSocket_get_autoEstablish)(const eC_SSLSocket s);

extern int Service_onAccept_vTblID;
void Service_onAccept(eC_Service __i);
extern eC_Method * method_Service_onAccept;

extern eC_bool (* Service_process)(eC_Service __this);

extern eC_bool (* Service_processTimeOut)(eC_Service __this, eC_Time timeOut);

extern eC_bool (* Service_start)(eC_Service __this);

extern eC_bool (* Service_stop)(eC_Service __this);

extern eC_Property * property_Service_port;
extern void (* Service_set_port)(const eC_Service s, int value);
extern int (* Service_get_port)(const eC_Service s);

extern eC_Property * property_Service_firstClient;
extern eC_Socket (* Service_get_firstClient)(const eC_Service s);

extern eC_Property * property_Service_processAlone;
extern void (* Service_set_processAlone)(const eC_Service s, eC_bool value);
extern eC_bool (* Service_get_processAlone)(const eC_Service s);

extern eC_Property * property_Service_started;
extern eC_bool (* Service_get_started)(const eC_Service s);

extern eC_bool (* Socket_connect)(eC_Socket __this, const char * address, int port);

extern eC_bool (* Socket_datagramConnect)(eC_Socket __this, const char * sendAddress, int port);

extern eC_bool (* Socket_datagramHost)(eC_Socket __this, int port);

extern void (* Socket_disconnect)(eC_Socket __this, eC_DisconnectCode code);

extern int Socket_onConnect_vTblID;
void Socket_onConnect(eC_Socket __i);
extern eC_Method * method_Socket_onConnect;

extern int Socket_onDisconnect_vTblID;
void Socket_onDisconnect(eC_Socket __i, int code);
extern eC_Method * method_Socket_onDisconnect;

extern int Socket_onEstablishConnection_vTblID;
eC_bool Socket_onEstablishConnection(eC_Socket __i, int s);
extern eC_Method * method_Socket_onEstablishConnection;

extern int Socket_onReceive_vTblID;
uint Socket_onReceive(eC_Socket __i, const byte * buffer, uint count);
extern eC_Method * method_Socket_onReceive;

extern int Socket_onReceivePacket_vTblID;
void Socket_onReceivePacket(eC_Socket __i, eC_Packet * packet);
extern eC_Method * method_Socket_onReceivePacket;

extern eC_bool (* Socket_process)(eC_Socket __this);

extern eC_bool (* Socket_processTimeOut)(eC_Socket __this, eC_Time timeOut);

extern int Socket_receiveData_vTblID;
int Socket_receiveData(eC_Socket __i, byte * buffer, int count, uint flags);
extern eC_Method * method_Socket_receiveData;

extern eC_bool (* Socket_send)(eC_Socket __this, const void * buffer, int size);

extern int Socket_sendData_vTblID;
int Socket_sendData(eC_Socket __i, const byte * buffer, int count, uint flags);
extern eC_Method * method_Socket_sendData;

extern eC_bool (* Socket_sendPacket)(eC_Socket __this, eC_Packet * packet);

extern eC_bool (* Socket_sendString)(eC_Socket __this, const char * string);

extern eC_bool (* Socket_sendf)(eC_Socket __this, const char * format, ...);

extern void (* Socket_safeDecRef)(eC_Socket __this);

extern void (* Socket_safeIncRef)(eC_Socket __this);

extern eC_Property * property_Socket_service;
extern void (* Socket_set_service)(const eC_Socket s, eC_Service value);
extern eC_Service (* Socket_get_service)(const eC_Socket s);

extern eC_Property * property_Socket_inetAddress;
extern const char * (* Socket_get_inetAddress)(const eC_Socket s);

extern eC_Property * property_Socket_inetPort;
extern int (* Socket_get_inetPort)(const eC_Socket s);

extern eC_Property * property_Socket_next;
extern eC_Socket (* Socket_get_next)(const eC_Socket s);

extern eC_Property * property_Socket_connected;
extern eC_bool (* Socket_get_connected)(const eC_Socket s);

extern eC_Property * property_Socket_processAlone;
extern void (* Socket_set_processAlone)(const eC_Socket s, eC_bool value);
extern eC_bool (* Socket_get_processAlone)(const eC_Socket s);

extern eC_FileServerConnection (* eC_connectToFileServer)(const char * hostName, int port);
extern eC_HTTPFile (* eC_fileOpenURL)(const char * name);
extern eC_bool (* eC_getAddressFromName)(const char * hostName, char * inetAddress);
extern eC_bool (* eC_getHostName)(char * hostName, int size);
extern eC_bool (* eC_getNameFromAddress)(const char * inetAddress, char * hostName);
extern eC_bool (* eC_setCurlEmbeddedCA)(void * curlHandle);
extern eC_Class * class_BlockEntry;
extern eC_Class * class_CompiledDefaultShader;
extern eC_Class * class_CompiledShader;
extern eC_Class * class_DefaultShader;
extern eC_Class * class_DefaultShaderBits;
extern eC_Class * class_FreeBlockMap;
extern eC_Class * class_GLAB;
extern eC_Class * class_GLAttribMode;
extern eC_Class * class_GLB;
extern eC_Class * class_GLBType;
extern eC_Class * class_GLBufferContents;
extern eC_Class * class_GLBufferUsage;
extern eC_Class * class_GLCAB;
extern eC_Class * class_GLEAB;
extern eC_Class * class_GLFB;
extern eC_Class * class_GLIMTKMode;
extern eC_Class * class_GLMB;
extern eC_Class * class_GLMSWhatToGet;
extern eC_Class * class_GLStats;
extern eC_Class * class_LFBDisplay;
extern eC_Class * class_LFBDisplayDriver;
extern eC_Class * class_LFBSurface;
extern eC_Class * class_LFBSystem;
extern eC_Class * class_LightMode;
extern eC_Class * class_MatrixMode;
extern eC_Class * class_Shader;
extern eC_Class * class_ShaderModifiedUniforms;
extern eC_Class * class_SwizzleMode;
extern eC_Class * class_Archive;
extern eC_Class * class_ArchiveAddMode;
extern eC_Class * class_ArchiveDir;
extern eC_Class * class_ArchiveOpenFlags;
extern eC_Class * class_Box;
extern eC_Class * class_BufferedFile;
extern eC_Class * class_Centimeters;
extern eC_Class * class_CharCategories;
extern eC_Class * class_CharCategory;
extern eC_Class * class_Condition;
extern eC_Class * class_ConsoleFile;
extern eC_Class * class_Date;
extern eC_Class * class_DateTime;
extern eC_Class * class_DayOfTheWeek;
extern eC_Class * class_Degrees;
extern eC_Class * class_Distance;
extern eC_Class * class_DualPipe;
extern eC_Class * class_ECONGlobalSettings;
extern eC_Class * class_ECONParser;
extern eC_Class * class_ErrorCode;
extern eC_Class * class_ErrorLevel;
extern eC_Class * class_Feet;
extern eC_Class * class_File;
extern eC_Class * class_FileAttribs;
extern eC_Class * class_FileChange;
extern eC_Class * class_FileListing;
extern eC_Class * class_FileLock;
extern eC_Class * class_FileMonitor;
extern eC_Class * class_FileOpenMode;
extern eC_Class * class_FileSeekMode;
extern eC_Class * class_FileSize;
extern eC_Class * class_FileSize64;
extern eC_Class * class_FileStats;
extern eC_Class * class_GlobalAppSettings;
extern eC_Class * class_GlobalSettingType;
extern eC_Class * class_GlobalSettings;
extern eC_Class * class_GlobalSettingsData;
extern eC_Class * class_GlobalSettingsDriver;
extern eC_Class * class_GuiErrorCode;
extern eC_Class * class_JSONFirstLetterCapitalization;
extern eC_Class * class_JSONGlobalSettings;
extern eC_Class * class_JSONParser;
extern eC_Class * class_JSONResult;
extern eC_Class * class_JSONTypeOptions;
extern eC_Class * class_LoggingMode;
extern eC_Class * class_Meters;
extern eC_Class * class_MinMaxValue;
extern eC_Class * class_Month;
extern eC_Class * class_MoveFileOptions;
extern eC_Class * class_OptionsMap;
extern eC_Class * class_PipeOpenMode;
extern eC_Class * class_Point;
extern eC_Class * class_Pointd;
extern eC_Class * class_Pointf;
extern eC_Class * class_PredefinedCharCategories;
extern eC_Class * class_Radians;
extern eC_Class * class_RepButton;
extern eC_Class * class_SecSince1970;
extern eC_Class * class_Seconds;
extern eC_Class * class_Semaphore;
extern eC_Class * class_SetBool;
extern eC_Class * class_SettingsIOResult;
extern eC_Class * class_Size;
extern eC_Class * class_SysErrorCode;
extern eC_Class * class_TempFile;
extern eC_Class * class_Thread;
extern eC_Class * class_ThreadPriority;
extern eC_Class * class_Time;
extern eC_Class * class_TimeStamp;
extern eC_Class * class_TimeStamp32;
extern eC_Class * class_UnicodeDecomposition;
extern eC_Class * class_Camera;
extern eC_Class * class_CameraType;
extern eC_Class * class_ClippingPlane;
extern eC_Class * class_Euler;
extern eC_Class * class_EulerRotationOrder;
extern eC_Class * class_FovDirection;
extern eC_Class * class_FrameKey;
extern eC_Class * class_FrameTrack;
extern eC_Class * class_FrameTrackBits;
extern eC_Class * class_FrameTrackType;
extern eC_Class * class_FrustumPlacement;
extern eC_Class * class_Line;
extern eC_Class * class_Material;
extern eC_Class * class_MaterialFlags;
extern eC_Class * class_Matrix;
extern eC_Class * class_Matrixf;
extern eC_Class * class_Mesh;
extern eC_Class * class_MeshFeatures;
extern eC_Class * class_MeshMorph;
extern eC_Class * class_MeshPart;
extern eC_Class * class_MeshSkin;
extern eC_Class * class_Object;
extern eC_Class * class_ObjectFlags;
extern eC_Class * class_ObjectFormat;
extern eC_Class * class_Plane;
extern eC_Class * class_PrimitiveGroup;
extern eC_Class * class_PrimitiveGroupType;
extern eC_Class * class_PrimitiveSingle;
extern eC_Class * class_Quaternion;
extern eC_Class * class_RenderPrimitiveType;
extern eC_Class * class_SkinBone;
extern eC_Class * class_SkinVert;
extern eC_Class * class_Transform;
extern eC_Class * class_Vector3D;
extern eC_Class * class_Vector3Df;
extern eC_Class * class_Alignment;
extern eC_Class * class_AlphaWriteMode;
extern eC_Class * class_Bitmap;
extern eC_Class * class_BitmapFormat;
extern eC_Class * class_BitmapResource;
extern eC_Class * class_ClearType;
extern eC_Class * class_Color;
extern eC_Class * class_Color444;
extern eC_Class * class_Color555;
extern eC_Class * class_Color565;
extern eC_Class * class_ColorAlpha;
extern eC_Class * class_ColorCMYK;
extern eC_Class * class_ColorHSV;
extern eC_Class * class_ColorKey;
extern eC_Class * class_ColorLab;
extern eC_Class * class_ColorRGB;
extern eC_Class * class_ColorRGBA;
extern eC_Class * class_ColorRGBAf;
extern eC_Class * class_CubeMap;
extern eC_Class * class_DefinedColor;
extern eC_Class * class_Display;
extern eC_Class * class_DisplayDriver;
extern eC_Class * class_DisplayFlags;
extern eC_Class * class_DisplaySystem;
extern eC_Class * class_DisplaySystemResPtr;
extern eC_Class * class_DrawList;
extern eC_Class * class_DrawManager;
extern eC_Class * class_DrawSlot;
extern eC_Class * class_FMFont;
extern eC_Class * class_FMPathDraw;
extern eC_Class * class_FMTextAlignment;
extern eC_Class * class_FMVerticalAlignment;
extern eC_Class * class_FaceInfo;
extern eC_Class * class_FillModeValue;
extern eC_Class * class_Font;
extern eC_Class * class_FontFlags;
extern eC_Class * class_FontInfo;
extern eC_Class * class_FontManager;
extern eC_Class * class_FontManagerRenderer;
extern eC_Class * class_FontRenderer;
extern eC_Class * class_FontResource;
extern eC_Class * class_GLCapabilities;
extern eC_Class * class_GLSamplesCount;
extern eC_Class * class_GradientDirection;
extern eC_Class * class_HitRecord;
extern eC_Class * class_Light;
extern eC_Class * class_LightFlags;
extern eC_Class * class_PixelFormat;
extern eC_Class * class_RenderState;
extern eC_Class * class_RenderStateFloat;
extern eC_Class * class_Resolution;
extern eC_Class * class_Resource;
extern eC_Class * class_Surface;
extern eC_Class * class_SystemColor;
extern eC_Class * class_FreeSpots;
extern eC_Class * class_GLArrayTexture;
extern eC_Class * class_GLDrawCommand;
extern eC_Class * class_GLMultiDraw;
extern eC_Class * class_GLTextureFilter;
extern eC_Class * class_PNGOptions;
extern eC_Class * class_Cube;
extern eC_Class * class_SkyBox;
extern eC_Class * class_Sphere;
extern eC_Class * class_TVisionSkin_Window;
extern eC_Class * class_WindowsSkin_Button;
extern eC_Class * class_WindowsSkin_Window;
extern eC_Class * class_BoxAlignment;
extern eC_Class * class_BufferLocation;
extern eC_Class * class_Button;
extern eC_Class * class_ButtonState;
extern eC_Class * class_CalendarControl;
extern eC_Class * class_DataBox;
extern eC_Class * class_DataDisplayFlags;
extern eC_Class * class_DataField;
extern eC_Class * class_DataFieldSort;
extern eC_Class * class_DataRow;
extern eC_Class * class_DirPath;
extern eC_Class * class_DirectoriesBox;
extern eC_Class * class_DropBox;
extern eC_Class * class_EditBox;
extern eC_Class * class_EditBoxFindResult;
extern eC_Class * class_EditBoxStream;
extern eC_Class * class_EditLine;
extern eC_Class * class_EditSyntaxHL;
extern eC_Class * class_EditableSelectorButton;
extern eC_Class * class_FilePath;
extern eC_Class * class_Label;
extern eC_Class * class_ListBox;
extern eC_Class * class_Menu;
extern eC_Class * class_MenuDivider;
extern eC_Class * class_MenuItem;
extern eC_Class * class_MenuPlacement;
extern eC_Class * class_OldArray;
extern eC_Class * class_PaneSplitter;
extern eC_Class * class_PathBox;
extern eC_Class * class_PathTypeExpected;
extern eC_Class * class_Picture;
extern eC_Class * class_PopupMenu;
extern eC_Class * class_ProgressBar;
extern eC_Class * class_SavingDataBox;
extern eC_Class * class_ScrollBar;
extern eC_Class * class_ScrollBarAction;
extern eC_Class * class_ScrollDirection;
extern eC_Class * class_SelectorBar;
extern eC_Class * class_SelectorButton;
extern eC_Class * class_Stacker;
extern eC_Class * class_StatusBar;
extern eC_Class * class_StatusField;
extern eC_Class * class_Tab;
extern eC_Class * class_TabControl;
extern eC_Class * class_TabsPlacement;
extern eC_Class * class_ToolBar;
extern eC_Class * class_ToolButton;
extern eC_Class * class_ToolSeparator;
extern eC_Class * class_ToolTip;
extern eC_Class * class_UndoAction;
extern eC_Class * class_UndoBuffer;
extern eC_Class * class_Anchor;
extern eC_Class * class_AnchorValue;
extern eC_Class * class_AnchorValueType;
extern eC_Class * class_BorderBits;
extern eC_Class * class_BorderStyle;
extern eC_Class * class_ClipBoard;
extern eC_Class * class_CommonControl;
extern eC_Class * class_ControllableWindow;
extern eC_Class * class_CreationActivationOption;
extern eC_Class * class_Cursor;
extern eC_Class * class_DialogResult;
extern eC_Class * class_Extent;
extern eC_Class * class_GuiApplication;
extern eC_Class * class_Interface;
extern eC_Class * class_Joystick;
extern eC_Class * class_Key;
extern eC_Class * class_KeyCode;
extern eC_Class * class_MiddleAnchorValue;
extern eC_Class * class_Modifiers;
extern eC_Class * class_MouseButtons;
extern eC_Class * class_MultiLineString;
extern eC_Class * class_Percentage;
extern eC_Class * class_PredefinedKey;
extern eC_Class * class_SizeAnchor;
extern eC_Class * class_Skin;
extern eC_Class * class_SkinBitmap;
extern eC_Class * class_SmartKey;
extern eC_Class * class_SystemCursor;
extern eC_Class * class_Timer;
extern eC_Class * class_TouchPointerEvent;
extern eC_Class * class_TouchPointerInfo;
// extern eC_Class * class_Window;
extern eC_Class * class_WindowController;
extern eC_Class * class_WindowState;
extern eC_Class * class_ColorPicker;
extern eC_Class * class_CreateDirectoryDialog;
extern eC_Class * class_FileDialog;
extern eC_Class * class_FileDialogType;
extern eC_Class * class_FileFilter;
extern eC_Class * class_FileForceExtension;
extern eC_Class * class_FileName;
extern eC_Class * class_FileNameType;
extern eC_Class * class_FileType;
extern eC_Class * class_FindDialog;
extern eC_Class * class_GoToDialog;
extern eC_Class * class_MessageBox;
extern eC_Class * class_MessageBoxType;
extern eC_Class * class_ReplaceDialog;
extern eC_Class * class_WindowList;
extern eC_Class * class_DCOMClientObject;
extern eC_Class * class_DCOMSendControl;
extern eC_Class * class_DCOMServerObject;
extern eC_Class * class_DCOMServerSocket;
extern eC_Class * class_DCOMService;
extern eC_Class * class_DisconnectCode;
extern eC_Class * class_FileServerConnection;
extern eC_Class * class_HTTPFile;
extern eC_Class * class_NetworkClientFile;
extern eC_Class * class_Packet;
extern eC_Class * class_SSLSocket;
extern eC_Class * class_Service;
extern eC_Class * class_Socket;
extern eC_Class * class_SocketType;

extern eC_Module ecere_init(eC_Module fromModule);

