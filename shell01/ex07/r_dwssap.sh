#!/bin/sh
cat -e /etc/passwd | grep -v '^#' | awk 'NR%2==0' | cut -d: -f1 | rev | sort -r | sed -n -e "${FT_LINE1}"','"${FT_LINE2}"'p' |paste -sd, | sed 's/,/, /g' |sed -e 's/$/./' 