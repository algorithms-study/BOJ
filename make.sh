#!/bin/bash

if [ "$#" -lt 1 ]; then
  echo "parameters is required"
  exit 1
fi

files=("cpp")

if [ "$#" = 1 ]; then
  mkdir $1
  cd $1
  for file in ${files[*]}
  do
    touch $1.$file
  done
  cd ..
else
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
fi
