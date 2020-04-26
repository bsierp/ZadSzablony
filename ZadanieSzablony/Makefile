OBJ=./obj
FLAGS= -Wall -pedantic -std=c++14 -iquote inc   
TRGDIR=./

${TRGDIR}/szablony: ${OBJ}	${OBJ}/main.o ${OBJ}/WekC.o ${OBJ}/LZespolona.o
		g++ -o ${TRGDIR}/szablony ${OBJ}/main.o ${OBJ}/WekC.o ${OBJ}/LZespolona.o

${OBJ}:                                                                         
		mkdir ${OBJ}

${OBJ}/main.o: src/main.cpp inc/LZespolona.hh inc/Wek.hh
		g++ -c ${FLAGS} -o ${OBJ}/main.o src/main.cpp
                                                                                
${OBJ}/WekC.o: inc/Wek.hh src/Wek.cpp src/WekC.cpp\
				inc/LZespolona.hh
		g++ -c ${FLAGS} -o ${OBJ}/WekC.o src/WekC.cpp

${OBJ}/LZespolona.o: src/LZespolona.cpp inc/LZespolona.hh
		g++ -c ${FLAGS} -o ${OBJ}/LZespolona.o src/LZespolona.cpp

clear:
		rm -f ${TRGDIR}/szablony ${OBJ}/*
