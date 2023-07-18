#Using a for loop, write display the outputs the user entered back on the screen, each output should be followed by a newline.

#!/bin/bash

read -p "Enter things you want to be printed back: " inputs


for input in $inputs
do
	echo $input
done
