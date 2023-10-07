#!/bin/sh
nasm -f elf64 mem.asm -o mem.asm.o
gcc -c main.c -o main.c.o
gcc mem.asm.o main.c.o -o mem_opttest
./mem_opttest