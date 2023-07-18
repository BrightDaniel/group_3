#Using only command line, write a string that prints out numbers in reverse


#!/bin/bash

number=$1
temp=$number
reverse=""

while [ $temp -ne 0 ]
do
	    reverse=$reverse$((temp%10))
	        temp=$((temp/10))
	done

	echo "Reverse of $number is $reverse"

