#!/bin/bash
gcc -fPIc -c *.c
gcc -shared *.o -o liball.so
