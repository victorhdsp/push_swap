#!/bin/bash
NUM=$(shuf -i 1-$1 | sed -e :a  -e 'N;s/\n/ /;ta')
TEST=$(./push_swap "$NUM" | ./checker_linux "$NUM");
MOV=$(./push_swap "$NUM" | wc -l);

echo "Number: $NUM";
echo "Result: $TEST";
echo "Commands: $MOV";