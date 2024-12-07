#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sjr275/HLS-Final-Project/Optimized/ecelinux/mlp.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
