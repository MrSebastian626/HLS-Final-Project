#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jtg239/ece6775/fin_prj/HLS-Final-Project/ecelinux/mlp.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
