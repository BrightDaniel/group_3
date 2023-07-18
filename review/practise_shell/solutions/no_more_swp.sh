# Write a script to delete all the .swp files found in your system or directory

#!/bin/bash

# Find all .swp files and delete them
find / -name "*.swp" -type f -delete

echo "All .swp files have been deleted."

