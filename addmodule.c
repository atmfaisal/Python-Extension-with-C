#include <Python.h>

static PyObject *add(PyObject *self, PyObject *args)
{
    int a;
    int b;

    if(!PyArg_ParseTuple(args, "ii", &a, &b))
    {
        return NULL;
    }

    return Py_BuildValue("i", a + b);
}

static char add_docs[] = "Docstring text!";

static PyMethodDef add_Methods[] = {
    {"add", (PyCFunction)add, METH_VARARGS, add_docs},
    {NULL}
};

void initadd(void)
{
    Py_InitModule3("add", add_Methods, "Docstring!");
}