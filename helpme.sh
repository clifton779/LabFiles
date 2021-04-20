#!/bin/bash
echo "Type a command"
read cmd_in
case $cmd_in in
	[Aa]wk)
		sed -n '1, 1340 p' mandatabase.txt
		;;
	[Ss]ed)
		sed -n '1341, 1582 p' mandatabase.txt
		;;
	[Cc]at)
		sed -n '1583, 1656 p' mandatabase.txt
		;;
	[Gg]rep|[Ff]grep|[Gg]rep)
		sed -n '1657, 2096 p' mandatabase.txt
		;;
	[Vv]i)
		sed -n '2097, 2413 p' mandatabase.txt
		;;
	[Mm]kdir)
		sed -n '2414, 2469 p' mandatabase.txt
		;;
	[Rr]m)
		sed -n '2470, 2559 p' mandatabase.txt
		;;
	[Cc]hmod)
		sed -n '2560, 2669 p' mandatabase.txt
		;;
	[Rr]mdir)
		sed -n '2670, 2721 p' mandatabase.txt
		;;
	*)
		echo "sorry, I cannot help you"
		;;
	esac
