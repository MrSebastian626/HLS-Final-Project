#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/sjr275/HLS-Final-Project/ecelinux/mlp.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
