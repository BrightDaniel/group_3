#Write a script that prints out numbers the user inputed in reverse

#!/bin/bash

# METHOD 1

read -p "Enter a number: " number
temp=$number
while [ $temp -ne 0 ]
do
		reverse=$reverse$((temp%10))
			temp=$((temp/10))
		done
		echo "Reverse of $number is $reverse"



# METHOD 2

#!/bin/bash

echo "Enter a list of numbers separated by spaces: "

read -a numbers

echo "Numbers in reverse order:"

for (( i=${#numbers[@]}-1; i>=0; i-- )); do
	  echo "${numbers[i]}"
  done

