#/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
CYAN='\033[0;36m'
PRINTFA='../'
NC='\033[0m' # No Color
MAIN=newmain.c
CFLAGS='-Wall -Wextra'
if [ -z $1 ]; then
	true
elif [ $1 == "help" ]; then
		echo "usage: ./test.sh [bonus|debug]"
		exit 0
elif [ $1 = "bonus" ]; then
	MAIN=main.c
	if [ -z $2 ]; then
		true
	elif [ $2 == "debug" ]; then
			CFLAGS='-Wall -Wextra -fsanitize=address -g3'
	fi
elif [ $1 = "debug" ]; then
	CFLAGS='-Wall -Wextra -fsanitize=address -g3'
	if [ -z $2 ]; then
		true
	elif [ $2 == "bonus" ]; then
		MAIN=main.c
	fi
fi
echo 'Please enter a path for libftprintf.a'
rm -f test.c
cp ${MAIN} ft.c
echo 'int ft_printf(char *format, ...);' > ft_printf.c
sed 's/printf/ft_printf/g' ft.c >> ft_printf.c
rm ft.c
printf "${CYAN}Compiling printf main...${NC}\n"
clang newmain.c
./a.out > printf.txt
echo "${CYAN}Compiling ft_printf main...${NC}\n"
clang ${CFLAGS} ${PRINTFA}/libftprintf.a ft_printf.c 
if [ $? != "0" ]; then
	echo "${CYAN}\nIf your library is compiled with fsanitize, please run test.sh with 'debug' parameter.${NC}\n"
	exit 1
fi
./a.out > ft_printf.txt
rm -f a.out ft_printf.c
rm -Rf a.out.dSYM
diff printf.txt ft_printf.txt > printf.diff
VALUE=`cat -e printf.diff | grep "<" | wc -l | tr -d " " | tr -d "\n"`
if [ $VALUE == "0" ]; then
	printf "${GREEN}You have ${VALUE}"
else
	printf "${RED}You have ${VALUE}"
fi
echo " errors !${NC}"
printf "${CYAN}See print.diff for more details...${NC}\n"
exit 0
