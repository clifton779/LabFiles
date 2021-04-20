#!/bin/bash
while true;
do
	echo "Please choose one of Add, Delete, List, or Quit" 
	read input
	case $input in
		[Aa]dd)
			echo -n "Enter Name: "
			read name
			echo -n "Enter Number: "
			read number
			echo -n "Enter Address: "
			read address
			echo "$name;$number;$address" >> phonebook.txt
			;;
		[Dd]elete)
			echo "Which name? "
			read name
			sed -i "/$name/ d"  phonebook.txt
			;;
		[Ll]ist)
			sort -t';' +0 -1 -f phonebook.txt
			;;
		[Qq]uit)
			break
			;;
		*)
			echo "Sorry, I don't understand"
			;;
		esac
done
echo "Exiting"
