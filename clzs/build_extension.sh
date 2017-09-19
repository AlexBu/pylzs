#!/bin/sh

# generate wrapper
/usr/local/bin/swig -python clzs.i
/usr/bin/gcc -shared lzs.c clzs_wrap.c -I/usr/include/python2.7 -lpython2.7 -o clzs.so