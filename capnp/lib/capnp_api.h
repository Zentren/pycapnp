/* Generated by Cython 0.29.35 */

#ifndef __PYX_HAVE_API__capnp__lib__capnp
#define __PYX_HAVE_API__capnp__lib__capnp
#ifdef __MINGW64__
#define MS_WIN64
#endif
#include "Python.h"

static PyObject *(*__pyx_api_f_5capnp_3lib_5capnp_wrap_dynamic_struct_reader)( ::capnp::Response< ::capnp::DynamicStruct> &) = 0;
#define wrap_dynamic_struct_reader __pyx_api_f_5capnp_3lib_5capnp_wrap_dynamic_struct_reader
static PyObject *(*__pyx_api_f_5capnp_3lib_5capnp_wrap_remote_call)(PyObject *,  ::capnp::Response< ::capnp::DynamicStruct> &) = 0;
#define wrap_remote_call __pyx_api_f_5capnp_3lib_5capnp_wrap_remote_call
static  ::kj::Promise<void>  *(*__pyx_api_f_5capnp_3lib_5capnp_call_server_method)(PyObject *, char *,  ::capnp::CallContext< ::capnp::DynamicStruct, ::capnp::DynamicStruct> &) = 0;
#define call_server_method __pyx_api_f_5capnp_3lib_5capnp_call_server_method
static PyObject *(*__pyx_api_f_5capnp_3lib_5capnp_convert_array_pyobject)( ::kj::Array<PyObject *> &) = 0;
#define convert_array_pyobject __pyx_api_f_5capnp_3lib_5capnp_convert_array_pyobject
static  ::kj::Promise<PyObject *>  *(*__pyx_api_f_5capnp_3lib_5capnp_extract_promise)(PyObject *) = 0;
#define extract_promise __pyx_api_f_5capnp_3lib_5capnp_extract_promise
static  ::capnp::RemotePromise< ::capnp::DynamicStruct> *(*__pyx_api_f_5capnp_3lib_5capnp_extract_remote_promise)(PyObject *) = 0;
#define extract_remote_promise __pyx_api_f_5capnp_3lib_5capnp_extract_remote_promise
static PyObject *(*__pyx_api_f_5capnp_3lib_5capnp_wrap_kj_exception)( ::kj::Exception &) = 0;
#define wrap_kj_exception __pyx_api_f_5capnp_3lib_5capnp_wrap_kj_exception
static PyObject *(*__pyx_api_f_5capnp_3lib_5capnp_wrap_kj_exception_for_reraise)( ::kj::Exception &) = 0;
#define wrap_kj_exception_for_reraise __pyx_api_f_5capnp_3lib_5capnp_wrap_kj_exception_for_reraise
static PyObject *(*__pyx_api_f_5capnp_3lib_5capnp_get_exception_info)(PyObject *, PyObject *, PyObject *) = 0;
#define get_exception_info __pyx_api_f_5capnp_3lib_5capnp_get_exception_info
#if !defined(__Pyx_PyIdentifier_FromString)
#if PY_MAJOR_VERSION < 3
  #define __Pyx_PyIdentifier_FromString(s) PyString_FromString(s)
#else
  #define __Pyx_PyIdentifier_FromString(s) PyUnicode_FromString(s)
#endif
#endif

#ifndef __PYX_HAVE_RT_ImportFunction_0_29_35
#define __PYX_HAVE_RT_ImportFunction_0_29_35
static int __Pyx_ImportFunction_0_29_35(PyObject *module, const char *funcname, void (**f)(void), const char *sig) {
    PyObject *d = 0;
    PyObject *cobj = 0;
    union {
        void (*fp)(void);
        void *p;
    } tmp;
    d = PyObject_GetAttrString(module, (char *)"__pyx_capi__");
    if (!d)
        goto bad;
    cobj = PyDict_GetItemString(d, funcname);
    if (!cobj) {
        PyErr_Format(PyExc_ImportError,
            "%.200s does not export expected C function %.200s",
                PyModule_GetName(module), funcname);
        goto bad;
    }
#if PY_VERSION_HEX >= 0x02070000
    if (!PyCapsule_IsValid(cobj, sig)) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, PyCapsule_GetName(cobj));
        goto bad;
    }
    tmp.p = PyCapsule_GetPointer(cobj, sig);
#else
    {const char *desc, *s1, *s2;
    desc = (const char *)PyCObject_GetDesc(cobj);
    if (!desc)
        goto bad;
    s1 = desc; s2 = sig;
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    if (*s1 != *s2) {
        PyErr_Format(PyExc_TypeError,
            "C function %.200s.%.200s has wrong signature (expected %.500s, got %.500s)",
             PyModule_GetName(module), funcname, sig, desc);
        goto bad;
    }
    tmp.p = PyCObject_AsVoidPtr(cobj);}
#endif
    *f = tmp.fp;
    if (!(*f))
        goto bad;
    Py_DECREF(d);
    return 0;
bad:
    Py_XDECREF(d);
    return -1;
}
#endif


static int import_capnp__lib__capnp(void) {
  PyObject *module = 0;
  module = PyImport_ImportModule("capnp.lib.capnp");
  if (!module) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "wrap_dynamic_struct_reader", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_wrap_dynamic_struct_reader, "PyObject *( ::capnp::Response< ::capnp::DynamicStruct> &)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "wrap_remote_call", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_wrap_remote_call, "PyObject *(PyObject *,  ::capnp::Response< ::capnp::DynamicStruct> &)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "call_server_method", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_call_server_method, " ::kj::Promise<void>  *(PyObject *, char *,  ::capnp::CallContext< ::capnp::DynamicStruct, ::capnp::DynamicStruct> &)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "convert_array_pyobject", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_convert_array_pyobject, "PyObject *( ::kj::Array<PyObject *> &)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "extract_promise", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_extract_promise, " ::kj::Promise<PyObject *>  *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "extract_remote_promise", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_extract_remote_promise, " ::capnp::RemotePromise< ::capnp::DynamicStruct> *(PyObject *)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "wrap_kj_exception", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_wrap_kj_exception, "PyObject *( ::kj::Exception &)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "wrap_kj_exception_for_reraise", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_wrap_kj_exception_for_reraise, "PyObject *( ::kj::Exception &)") < 0) goto bad;
  if (__Pyx_ImportFunction_0_29_35(module, "get_exception_info", (void (**)(void))&__pyx_api_f_5capnp_3lib_5capnp_get_exception_info, "PyObject *(PyObject *, PyObject *, PyObject *)") < 0) goto bad;
  Py_DECREF(module); module = 0;
  return 0;
  bad:
  Py_XDECREF(module);
  return -1;
}

#endif /* !__PYX_HAVE_API__capnp__lib__capnp */
