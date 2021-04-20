#!/bin/bash
echo "Enter keyword:"
read key
grep -w -o -i $key ./midterm/myexamfile.txt|wc -l
