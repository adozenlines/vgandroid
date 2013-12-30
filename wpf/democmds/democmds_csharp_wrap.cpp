/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#define SWIGCSHARP


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/* Support for throwing C# exceptions from C/C++. There are two types: 
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum {
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum {
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);

typedef struct {
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct {
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

static SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  { SWIG_CSharpApplicationException, NULL },
  { SWIG_CSharpArithmeticException, NULL },
  { SWIG_CSharpDivideByZeroException, NULL },
  { SWIG_CSharpIndexOutOfRangeException, NULL },
  { SWIG_CSharpInvalidCastException, NULL },
  { SWIG_CSharpInvalidOperationException, NULL },
  { SWIG_CSharpIOException, NULL },
  { SWIG_CSharpNullReferenceException, NULL },
  { SWIG_CSharpOutOfMemoryException, NULL },
  { SWIG_CSharpOverflowException, NULL },
  { SWIG_CSharpSystemException, NULL }
};

static SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  { SWIG_CSharpArgumentException, NULL },
  { SWIG_CSharpArgumentNullException, NULL },
  { SWIG_CSharpArgumentOutOfRangeException, NULL }
};

static void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg) {
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions)/sizeof(SWIG_CSharpException_t)) {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

static void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name) {
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument)/sizeof(SWIG_CSharpExceptionArgument_t)) {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionCallbacks_democmds(
                                                SWIG_CSharpExceptionCallback_t applicationCallback,
                                                SWIG_CSharpExceptionCallback_t arithmeticCallback,
                                                SWIG_CSharpExceptionCallback_t divideByZeroCallback, 
                                                SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback, 
                                                SWIG_CSharpExceptionCallback_t invalidCastCallback,
                                                SWIG_CSharpExceptionCallback_t invalidOperationCallback,
                                                SWIG_CSharpExceptionCallback_t ioCallback,
                                                SWIG_CSharpExceptionCallback_t nullReferenceCallback,
                                                SWIG_CSharpExceptionCallback_t outOfMemoryCallback, 
                                                SWIG_CSharpExceptionCallback_t overflowCallback, 
                                                SWIG_CSharpExceptionCallback_t systemCallback) {
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterExceptionArgumentCallbacks_democmds(
                                                SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
                                                SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback) {
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}


/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
static SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = NULL;


#ifdef __cplusplus
extern "C" 
#endif
SWIGEXPORT void SWIGSTDCALL SWIGRegisterStringCallback_democmds(SWIG_CSharpStringHelperCallback callback) {
  SWIG_csharp_string_callback = callback;
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, msg, ""); return nullreturn; } else


#include <DemoCmds.h>
#include <mgcoreview.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_delete_Floats(void * jarg1) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  
  arg1 = (mgvector< float > *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_Floats__SWIG_0(int jarg1) {
  void * jresult ;
  int arg1 ;
  mgvector< float > *result = 0 ;
  
  arg1 = (int)jarg1; 
  result = (mgvector< float > *)new mgvector< float >(arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_Floats__SWIG_1() {
  void * jresult ;
  mgvector< float > *result = 0 ;
  
  result = (mgvector< float > *)new mgvector< float >();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Floats_setSize(void * jarg1, int jarg2) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  
  arg1 = (mgvector< float > *)jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setSize(arg2);
}


SWIGEXPORT int SWIGSTDCALL CSharp_Floats_count(void * jarg1) {
  int jresult ;
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int result;
  
  arg1 = (mgvector< float > *)jarg1; 
  result = (int)((mgvector< float > const *)arg1)->count();
  jresult = result; 
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Floats_get(void * jarg1, int jarg2) {
  float jresult ;
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  float result;
  
  arg1 = (mgvector< float > *)jarg1; 
  arg2 = (int)jarg2; 
  result = (float)((mgvector< float > const *)arg1)->get(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Floats_set__SWIG_0(void * jarg1, int jarg2, float jarg3) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  float arg3 ;
  
  arg1 = (mgvector< float > *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  (arg1)->set(arg2,arg3);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Floats_set__SWIG_1(void * jarg1, int jarg2, float jarg3, float jarg4) {
  mgvector< float > *arg1 = (mgvector< float > *) 0 ;
  int arg2 ;
  float arg3 ;
  float arg4 ;
  
  arg1 = (mgvector< float > *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  (arg1)->set(arg2,arg3,arg4);
}


SWIGEXPORT void SWIGSTDCALL CSharp_delete_Chars(void * jarg1) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  
  arg1 = (mgvector< char > *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_Chars__SWIG_0(int jarg1) {
  void * jresult ;
  int arg1 ;
  mgvector< char > *result = 0 ;
  
  arg1 = (int)jarg1; 
  result = (mgvector< char > *)new mgvector< char >(arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_Chars__SWIG_1() {
  void * jresult ;
  mgvector< char > *result = 0 ;
  
  result = (mgvector< char > *)new mgvector< char >();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Chars_setSize(void * jarg1, int jarg2) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  
  arg1 = (mgvector< char > *)jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setSize(arg2);
}


SWIGEXPORT int SWIGSTDCALL CSharp_Chars_count(void * jarg1) {
  int jresult ;
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int result;
  
  arg1 = (mgvector< char > *)jarg1; 
  result = (int)((mgvector< char > const *)arg1)->count();
  jresult = result; 
  return jresult;
}


SWIGEXPORT char SWIGSTDCALL CSharp_Chars_get(void * jarg1, int jarg2) {
  char jresult ;
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  char result;
  
  arg1 = (mgvector< char > *)jarg1; 
  arg2 = (int)jarg2; 
  result = (char)((mgvector< char > const *)arg1)->get(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Chars_set__SWIG_0(void * jarg1, int jarg2, char jarg3) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  char arg3 ;
  
  arg1 = (mgvector< char > *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (char)jarg3; 
  (arg1)->set(arg2,arg3);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Chars_set__SWIG_1(void * jarg1, int jarg2, char jarg3, char jarg4) {
  mgvector< char > *arg1 = (mgvector< char > *) 0 ;
  int arg2 ;
  char arg3 ;
  char arg4 ;
  
  arg1 = (mgvector< char > *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (char)jarg3; 
  arg4 = (char)jarg4; 
  (arg1)->set(arg2,arg3,arg4);
}


SWIGEXPORT int SWIGSTDCALL CSharp_DemoCmdsGate_registerCmds(long jarg1) {
  int jresult ;
  long arg1 ;
  int result;
  
  arg1 = (long)jarg1; 
  result = (int)DemoCmdsGate::registerCmds(arg1);
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_DemoCmdsGate_getDimensions(long jarg1, void * jarg2, void * jarg3) {
  int jresult ;
  long arg1 ;
  mgvector< float > *arg2 = 0 ;
  mgvector< char > *arg3 = 0 ;
  int result;
  
  arg1 = (long)jarg1; 
  arg2 = (mgvector< float > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "mgvector< float > & type is null", 0);
    return 0;
  } 
  arg3 = (mgvector< char > *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "mgvector< char > & type is null", 0);
    return 0;
  } 
  result = (int)DemoCmdsGate::getDimensions(arg1,*arg2,*arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_new_DemoCmdsGate() {
  void * jresult ;
  DemoCmdsGate *result = 0 ;
  
  result = (DemoCmdsGate *)new DemoCmdsGate();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_delete_DemoCmdsGate(void * jarg1) {
  DemoCmdsGate *arg1 = (DemoCmdsGate *) 0 ;
  
  arg1 = (DemoCmdsGate *)jarg1; 
  delete arg1;
}


SWIGEXPORT void SWIGSTDCALL CSharp_delete_MgCoreView(void * jarg1) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  delete arg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_MgCoreView_fromHandle(long jarg1) {
  void * jresult ;
  long arg1 ;
  MgCoreView *result = 0 ;
  
  arg1 = (long)jarg1; 
  result = (MgCoreView *)MgCoreView::fromHandle(arg1);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_toHandle(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->toHandle();
  jresult = result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_MgCoreView_viewAdapter(void * jarg1) {
  void * jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  MgView *result = 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (MgView *)(arg1)->viewAdapter();
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_viewAdapterHandle(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->viewAdapterHandle();
  jresult = result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_backDoc(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->backDoc();
  jresult = result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_backShapes(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->backShapes();
  jresult = result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_acquireFrontDoc(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->acquireFrontDoc();
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_releaseDoc(void * jarg1, long jarg2) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long arg2 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (long)jarg2; 
  (arg1)->releaseDoc(arg2);
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_acquireDynamicShapes(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->acquireDynamicShapes();
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_releaseShapes(void * jarg1, long jarg2) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long arg2 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (long)jarg2; 
  (arg1)->releaseShapes(arg2);
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_loadDynamicShapes(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  MgStorage *arg2 = (MgStorage *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (MgStorage *)jarg2; 
  result = (bool)(arg1)->loadDynamicShapes(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_applyDynamicShapes(void * jarg1) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  (arg1)->applyDynamicShapes();
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_isPressDragging(void * jarg1) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (bool)(arg1)->isPressDragging();
  jresult = result; 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_MgCoreView_getCommand(void * jarg1) {
  char * jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *result = 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (char *)((MgCoreView const *)arg1)->getCommand();
  jresult = SWIG_csharp_string_callback((const char *)result); 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_setCommand__SWIG_0(void * jarg1, char * jarg2, char * jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  char *arg3 = (char *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (char *)jarg3; 
  result = (bool)(arg1)->setCommand((char const *)arg2,(char const *)arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_setCommand__SWIG_1(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  result = (bool)(arg1)->setCommand((char const *)arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_doContextAction(void * jarg1, int jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int arg2 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (int)jarg2; 
  result = (bool)(arg1)->doContextAction(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_clearCachedData(void * jarg1) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  (arg1)->clearCachedData();
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_addShapesForTest(void * jarg1) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (int)(arg1)->addShapesForTest();
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_getShapeCount(void * jarg1) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (int)(arg1)->getShapeCount();
  jresult = result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_getChangeCount(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)(arg1)->getChangeCount();
  jresult = result; 
  return jresult;
}


SWIGEXPORT long SWIGSTDCALL CSharp_MgCoreView_getDrawCount(void * jarg1) {
  long jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (long)((MgCoreView const *)arg1)->getDrawCount();
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_getSelectedShapeCount(void * jarg1) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (int)(arg1)->getSelectedShapeCount();
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_getSelectedShapeType(void * jarg1) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (int)(arg1)->getSelectedShapeType();
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_getSelectedShapeID(void * jarg1) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (int)(arg1)->getSelectedShapeID();
  jresult = result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_clear(void * jarg1) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  (arg1)->clear();
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_loadFromFile__SWIG_0(void * jarg1, char * jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = jarg3 ? true : false; 
  result = (bool)(arg1)->loadFromFile((char const *)arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_loadFromFile__SWIG_1(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  result = (bool)(arg1)->loadFromFile((char const *)arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_saveToFile__SWIG_0(void * jarg1, long jarg2, char * jarg3, unsigned int jarg4) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long arg2 ;
  char *arg3 = (char *) 0 ;
  bool arg4 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (char *)jarg3; 
  arg4 = jarg4 ? true : false; 
  result = (bool)(arg1)->saveToFile(arg2,(char const *)arg3,arg4);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_saveToFile__SWIG_1(void * jarg1, long jarg2, char * jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long arg2 ;
  char *arg3 = (char *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (char *)jarg3; 
  result = (bool)(arg1)->saveToFile(arg2,(char const *)arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_saveToFile__SWIG_2(void * jarg1, char * jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool arg3 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = jarg3 ? true : false; 
  result = (bool)(arg1)->saveToFile((char const *)arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_saveToFile__SWIG_3(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  result = (bool)(arg1)->saveToFile((char const *)arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_loadShapes__SWIG_0(void * jarg1, void * jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  MgStorage *arg2 = (MgStorage *) 0 ;
  bool arg3 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (MgStorage *)jarg2; 
  arg3 = jarg3 ? true : false; 
  result = (bool)(arg1)->loadShapes(arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_loadShapes__SWIG_1(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  MgStorage *arg2 = (MgStorage *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (MgStorage *)jarg2; 
  result = (bool)(arg1)->loadShapes(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_saveShapes__SWIG_0(void * jarg1, long jarg2, void * jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long arg2 ;
  MgStorage *arg3 = (MgStorage *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (long)jarg2; 
  arg3 = (MgStorage *)jarg3; 
  result = (bool)(arg1)->saveShapes(arg2,arg3);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_saveShapes__SWIG_1(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  MgStorage *arg2 = (MgStorage *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (MgStorage *)jarg2; 
  result = (bool)(arg1)->saveShapes(arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_MgCoreView_getContent__SWIG_0(void * jarg1, long jarg2) {
  char * jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  long arg2 ;
  char *result = 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (long)jarg2; 
  result = (char *)(arg1)->getContent(arg2);
  jresult = SWIG_csharp_string_callback((const char *)result); 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_freeContent(void * jarg1) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  (arg1)->freeContent();
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_setContent(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  result = (bool)(arg1)->setContent((char const *)arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_MgCoreView_getContent__SWIG_1(void * jarg1) {
  char * jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *result = 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (char *)(arg1)->getContent();
  jresult = SWIG_csharp_string_callback((const char *)result); 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_zoomToExtent(void * jarg1) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  result = (bool)(arg1)->zoomToExtent();
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_zoomToModel(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (float)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  result = (bool)(arg1)->zoomToModel(arg2,arg3,arg4,arg5);
  jresult = result; 
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_MgCoreView_getContext(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool arg2 ;
  GiContext *result = 0 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = jarg2 ? true : false; 
  result = (GiContext *) &(arg1)->getContext(arg2);
  jresult = (void *)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_setContext__SWIG_0(void * jarg1, int jarg2) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  int arg2 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setContext(arg2);
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_setContext__SWIG_1(void * jarg1, void * jarg2, int jarg3, int jarg4) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  GiContext *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (GiContext *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "GiContext const & type is null", 0);
    return ;
  } 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  (arg1)->setContext((GiContext const &)*arg2,arg3,arg4);
}


SWIGEXPORT void SWIGSTDCALL CSharp_MgCoreView_setContextEditing(void * jarg1, unsigned int jarg2) {
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  bool arg2 ;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = jarg2 ? true : false; 
  (arg1)->setContextEditing(arg2);
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_addImageShape__SWIG_0(void * jarg1, char * jarg2, float jarg3, float jarg4) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  float arg3 ;
  float arg4 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  result = (int)(arg1)->addImageShape((char const *)arg2,arg3,arg4);
  jresult = result; 
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_MgCoreView_addImageShape__SWIG_1(void * jarg1, char * jarg2, float jarg3, float jarg4, float jarg5, float jarg6) {
  int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  char *arg2 = (char *) 0 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float arg6 ;
  int result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (char *)jarg2; 
  arg3 = (float)jarg3; 
  arg4 = (float)jarg4; 
  arg5 = (float)jarg5; 
  arg6 = (float)jarg6; 
  result = (int)(arg1)->addImageShape((char const *)arg2,arg3,arg4,arg5,arg6);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_getBoundingBox__SWIG_0(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  mgvector< float > *arg2 = 0 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (mgvector< float > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "mgvector< float > & type is null", 0);
    return 0;
  } 
  result = (bool)(arg1)->getBoundingBox(*arg2);
  jresult = result; 
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_MgCoreView_getBoundingBox__SWIG_1(void * jarg1, void * jarg2, int jarg3) {
  unsigned int jresult ;
  MgCoreView *arg1 = (MgCoreView *) 0 ;
  mgvector< float > *arg2 = 0 ;
  int arg3 ;
  bool result;
  
  arg1 = (MgCoreView *)jarg1; 
  arg2 = (mgvector< float > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "mgvector< float > & type is null", 0);
    return 0;
  } 
  arg3 = (int)jarg3; 
  result = (bool)(arg1)->getBoundingBox(*arg2,arg3);
  jresult = result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

