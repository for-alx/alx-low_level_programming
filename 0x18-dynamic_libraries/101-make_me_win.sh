#!/bin/bash
wget -P /tmp/ https://github.com/for-alx/alx-low_level_programming/blob/main/0x18-dynamic_libraries/putshack.so
export LD_PRELOAD=/tmp/putshack.so
