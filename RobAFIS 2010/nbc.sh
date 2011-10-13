#!/bin/bash
# Teste la présence du NXT et rend silencieux le compilateur.

if [ "$#" -eq 0 ]; then
	echo "Pas assez d'arguments !"
	exit 1
else if [ "$#" -eq 1 ]; then
	ARGS="-sm- -d "
	FILE="$1"
else
	ARGS="-sm- $1 "
	FILE="$2"
fi fi;

lsusb | grep Mindstorms > /dev/null
if [ "$?" -eq 0 ]; then
	echo "Compiling..."
	/usr/bin/nbc $ARGS $FILE
	if [ "$?" -eq 1 -a "$#" -eq 3 ]; then read; fi;
else
	echo "NXT Débranché !" $'\a'
	if [ $# -eq 3 ]; then read; fi;
	exit 1
fi;
