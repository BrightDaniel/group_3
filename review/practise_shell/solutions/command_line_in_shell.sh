#Modify the previous script to that it accepts the file or directory name as an argument instead of prompting the user to enter it.

#!/bin/bash
FILE=$1
if [ -f “$FILE” ]
	  then
		      echo “$FILE is a reguler file”
	      elif [ -d “$FILE” ]
		        then
				    echo “$FILE is a directory”
			    else
				       echo “$FILE is another type of file”
fi
ls -l $FILE
