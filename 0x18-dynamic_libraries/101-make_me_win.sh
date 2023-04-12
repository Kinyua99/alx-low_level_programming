#!/bin/bash
wget -P /tmp/ https://raw.github.com/Kinyua99/alx-low_level_programming/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so
