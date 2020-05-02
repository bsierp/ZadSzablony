OBJ=./obj
FLAGS= -Wall -pedantic -std=c++17 -iquote inc   
TRGDIR=./

${TRGDIR}/szablony: ${OBJ}	${OBJ}/main.o ${OBJ}/UklC.o ${OBJ}/MacC.o ${OBJ}/WekC.o\
					 ${OBJ}/LZespolona.o
		g++ -o ${TRGDIR}/szablony ${OBJ}/main.o ${OBJ}/UklC.o ${OBJ}/MacC.o ${OBJ}/WekC.o ${OBJ}/LZespolona.o

${OBJ}:                                                                         
		mkdir ${OBJ}

${OBJ}/main.o: src/main.cpp inc/LZespolona.hh inc/Wek.hh inc/Mac.hh\
				inc/Ukl.hh
		g++ -c ${FLAGS} -o ${OBJ}/main.o src/main.cpp

${OBJ}/UklC.o: inc/Ukl.hh src/Ukl.cpp src/UklC.cpp\
				inc/Mac.hh inc/Wek.hh inc/LZespolona.hh
		g++ -c ${FLAGS} -o ${OBJ}/UklC.o src/UklC.cpp

${OBJ}/MacC.o: inc/Mac.hh src/Mac.cpp src/MacC.cpp\
				inc/Wek.hh inc/LZespolona.hh
		g++ -c ${FLAGS} -o ${OBJ}/MacC.o src/MacC.cpp
                                                                                
${OBJ}/WekC.o: inc/Wek.hh src/Wek.cpp src/WekC.cpp\
				inc/LZespolona.hh
		g++ -c ${FLAGS} -o ${OBJ}/WekC.o src/WekC.cpp

${OBJ}/LZespolona.o: src/LZespolona.cpp inc/LZespolona.hh
		g++ -c ${FLAGS} -o ${OBJ}/LZespolona.o src/LZespolona.cpp

clear:
		rm -f ${TRGDIR}/szablony ${OBJ}/*
