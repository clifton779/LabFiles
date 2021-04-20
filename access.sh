#!/bin/bash
echo "enter number of days"
read n
find ~ -iname "*" -atime +$n -type f -exec  tar -rvf access.tar "{}" \;
