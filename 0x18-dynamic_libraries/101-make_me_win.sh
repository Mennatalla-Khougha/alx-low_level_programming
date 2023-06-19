#!/bin/bash
wget -P .. https://github.com/Mennatalla-Khougha/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libfunc.os
export LD_PRELOAD="$PWD/../libfunc.os"
