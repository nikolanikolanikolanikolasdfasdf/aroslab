#!/bin/bash

#Ovo je komentar.

if [ "$1" = "-a" ];
then
       echo "$2 $3" >> ./notes.txt;
fi

if [ "$1" = '--help' ];
then
       echo "Pomoc";
fi

now=$(date);
echo "Dobro dosli! Datum i vreme: $now";
echo "Zadaci:";
grep $(date +"%d.%m.%Y.") ./notes.txt;
