#Write a script that prints out either an integer or a string in reverse

#!/bin/bash

echo -n "Enter a number or string: "
read input

if [[ $input =~ ^[0-9]+$ ]]; then
	  # Input is an integer
	    reversed=""
	      while [ $input -gt 0 ]
		        do
				    digit=$((input % 10))
				        reversed="${reversed}${digit}"
					    input=$((input / 10))
					      done
					        echo "Reverse of the integer: $reversed"
					else
						  # Input is a string
						    reversed=$(echo $input | rev)
						      echo "Reverse of the string: $reversed"
fi

