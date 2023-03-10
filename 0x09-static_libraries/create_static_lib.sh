#!/bin/bash

c_file=(*.c)

for file in "${c_file}";do
	gcc -c "$file"
done

ar rcs liball.a *.o

rm *.o
