#!/bin/bash
wget -P .. https://raw.github.com/Mennatalla-Khougha/alx-low_level_programming/master/0x18-dynamic_libraries/libfunc.so
export LD_PRELOAD=/$PWD/libfunc.os
