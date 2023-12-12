#!/bin/bash
wget -p /tmp/ https://github.com/itsferro/alx-low_level_programming/blob/master/0x18-dynamic_libraries/injection.so
export LD_PRELOAD=/tmp/injection.so
