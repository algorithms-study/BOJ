#!/bin/bash

if [ "$#" -lt 2 ]; then
  echo "parameters is required"
  exit 1
fi

files=("js" "py" "cpp")

for ((i = $1; i <= $2; i++))
do
  mkdir $i
  cd $i
  for file in ${files[*]}
  do
    touch $i.$file
  done
  cd ..
done
