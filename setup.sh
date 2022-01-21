#! /usr/bin/bash

cd ~/Projects/competitive_programming
mkdir $1
cp Makefile $1/Makefile
cd $1
nvim main.cpp
