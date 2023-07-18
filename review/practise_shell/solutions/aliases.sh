#Create a shell script that allows me to add commit and push without using any of  the following:
#`git add .
# git commit -m "message"
# git push
#`


#!/bin/bash
[alias]
            bwave = "!f() { git add -A && git commit -m \"$@\" && git push; }; f"


	
	    

