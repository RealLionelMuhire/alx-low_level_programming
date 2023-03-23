#!/bin/bash

# Loop over all .c files in the current directory
for file in *.c; do
    # Check if the file exists and is not empty
    if [ -s "$file" ]; then
        # Check if the file contains any betty-style function descriptions
        if grep -q "/\*\*\s*$" "$file"; then
            # Get the file name without the extension
            filename=$(basename "$file" .c)

            # Add the file name to the README.md file
            echo "- $filename" >> README.md

            # Get all betty-style function descriptions and append them to the README.md file
            grep -A1 "/\*\*\s*$" "$file" | sed 's/^ \*//g' | grep -v "/\*\*" | sed 's/^/- /g' >> README.md

            # Add a blank line to separate the entries in the README.md file
            echo "" >> README.md
        fi
    fi
done

