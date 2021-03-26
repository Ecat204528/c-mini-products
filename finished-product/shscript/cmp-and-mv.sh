#!/usr/bin/bash

# Remove extension
# example : foo.c -> foo
filename=$1
filename=${filename%.c}

gcc $filename.c -o $filename.o
mv $filename.o ~/workspace/work-c/finished-product/obj/
