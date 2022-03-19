#!/bin/bash

# Q1
wc -l data.dat

# Q2
grep 'd[oa]lor' data.dat | wc -l

# Q3
wc -w data.dat

# Q4
grep -wo 'mol[[:alnum:]_]*' data.dat | wc -l
