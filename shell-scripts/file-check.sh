#!/bin/bash
FILE=$1

if [ -e $FILE ]; then
	echo "$FILE exists. Here are its contents:"
	cat $FILE
else
	echo "$FILE does not exist"
fi

