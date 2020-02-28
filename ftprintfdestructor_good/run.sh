#!/bin/zsh
rm -r result
python3 run.py $1 2>/dev/null
diff -a ftprintf_output printf_output > diff_printf
cat diff_printf | egrep '^[0-9]*c' | cut -f 1 -d c > file.tmp 
MAX=`wc -l file.tmp | rev | cut -d ' ' -f 2 | rev`
MAX=$(($MAX + 1))
i=1
while [[ $i < $MAX ]]
do
	ARG=`sed -n "$i"p file.tmp`
	ARG1=$ARG
	ARG=$(($ARG+1))
	grep printf main_printf.c  >> tmp.lol
	sed -n "$ARG"p tmp.lol | tr -d '\t' >> file_error
	echo >> file_error
	rm tmp.lol
	i=$(($i+1))
done

cat file_error >> result
cat diff_printf >> result
rm -f file_error
rm -f diff_printf
echo 
cat result
