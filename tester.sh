#!/bin/bash
LOG_NAME="log.txt"
NUM=$(shuf -i 1-$1 | sed -e :a  -e 'N;s/\n/ /;ta')
RESULT=(./push_swap "$NUM")
echo $RESULT | ./checker_linux "$NUM";
echo "$NUM" > $LOG_NAME