#include "lzs.h"
#include "Python.h"

static PyObject * clzs_encode_file(PyObject *self, PyObject *args)
{
    char *arg1 = (char *) 0 ;
    char *arg2 = (char *) 0 ;

    if (!PyArg_ParseTuple(args, (char *)"ss", &arg1, &arg2))
        return NULL;
    return (PyObject*)Py_BuildValue("i", encode_file(arg1, arg2));
}

static PyObject * clzs_decode_file(PyObject *self, PyObject *args)
{
    char *arg1 = (char *) 0 ;
    char *arg2 = (char *) 0 ;

    if (!PyArg_ParseTuple(args, (char *)"ss", &arg1, &arg2))
        return NULL;
    return (PyObject*)Py_BuildValue("i", decode_file(arg1, arg2));
}

static PyMethodDef clzsMethods[] =
{
    { "encode_file", clzs_encode_file, METH_VARARGS },
    { "decode_file", clzs_decode_file, METH_VARARGS },
    { NULL, NULL },
};

void initclzs()
{
    Py_InitModule("clzs", clzsMethods);
}
