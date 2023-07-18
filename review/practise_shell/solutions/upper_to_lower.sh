# Shell script to convert string lower to upper and upper to lower


#!/bin/bash

echo "Enter a string: "
read str

# Convert lowercase letters to uppercase letters and vice versa
echo $str | tr '[:lower:][:upper:]' '[:upper:][:lower:]'

