from distutils.core import setup, Extension
setup(name="add", version='1.0', ext_modules=[Extension('add', ['addmodule.c'])])