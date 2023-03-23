#!/bin/bash

# Loop over all directories and subdirectories in the current directory
find . -type d -print0 | while read -d '' -r dir; do
    # Check if README.md file exists in the current directory
    if [ -f "$dir/README.md" ]; then
        # Get the first line of the README.md file
        first_line=$(head -n 1 "$dir/README.md")

        # Add the directory name to the parent README.md file
        parent_dir=$(dirname "$dir")
        echo "- **$(basename "$dir")**" >> "$parent_dir/README.md"
        echo "*$first_line*" >> "$parent_dir/README.md"
        echo "" >> "$parent_dir/README.md"
    fi
done

# Loop over all .c files in the current directory
for file in *.c; do
    # Check if the file exists and is not empty
    if [ -s "$file" ]; then
        # Check if the file contains any betty-style function descriptions
        if grep -q "/\*\*\s*$" "$file"; then
            # Get the file name without the extension
            filename=$(basename "$file" .c)

            # Add the file name to the README.md file
            echo "- **$filename**" >> README.md

            # Get all betty-style function descriptions and append them to the README.md file
            grep -A1 "/\*\*\s*$" "$file" | sed 's/^ \*//g' | grep -v "/\*\*" | sed 's/^/* /g' >> README.md

            # Add a blank line to separate the entries in the README.md file
            echo "" >> README.md
        fi
    fi
done

