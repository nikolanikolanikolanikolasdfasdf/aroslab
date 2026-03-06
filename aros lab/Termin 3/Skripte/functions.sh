#!/bin/bash

respond(){
	case $1 in
		hi)
			echo 'Hello!'
		;;
		bye)
                        echo 'Good bye!'
                ;;
		howRU)
                        echo 'Fine, how are you?'
                ;;
		whoRU)
                        whoami
                ;;
		*)
                        echo "I don't know what to say"
                ;;
	esac
}

respond $1;
respond $2;
