#!/bin/bash
if [ $# -ne 1 ];then
   wc -l
   else
       grep -i ";$1" | wc -l
fi
