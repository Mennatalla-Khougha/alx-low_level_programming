#!/bin/bash
wget -P /tmp/ https://raw.github.com/Mennatalla-Khougha/alx-low_level_programming/master/0x18-dynamic_libraries/libfunc.so
export LD_PRELOAD=/tmp/libfunc.os
