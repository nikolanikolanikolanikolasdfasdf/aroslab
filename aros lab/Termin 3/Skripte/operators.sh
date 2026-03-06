#!/bin/bash

for i in {1..20}
do
	if [ $i -lt $1 ] || [ $i -gt $2 ]; then
		echo "$i"
	fi
done
