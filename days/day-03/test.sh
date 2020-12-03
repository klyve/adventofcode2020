#!/usr/bin/env bash
set -e

D=$(dirname $(realpath $0))

echo ""
echo "--- Day 3: Toboggan Trajectory ---"
$D/../../languages/c.sh $D/input.txt $D/output.txt $D/solutions/day03.c
echo ""
