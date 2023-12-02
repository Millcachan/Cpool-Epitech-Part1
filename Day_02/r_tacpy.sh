#!/bin/bash
cut -d ":" -f1 | sed -n "n;p" | rev | sort -r | sed "$MY_LINE1 , $MY_LINE2!d" | sed -e 's/$/,/' -e '$s/,$/./' | sed 'a:N;$!ba;s/\n//g'
