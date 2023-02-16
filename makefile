CC = g++
CFLAGS = -I E:\Coding\SDL2-2.26.3\x86_64-w64-mingw32\include -I ./include -L E:\Coding\SDL2-2.26.3\x86_64-w64-mingw32\lib 
CLIBS = -lmingw32 -lSDL2main -lSDL2 
GUI = src/GUI
MAIN = src/main.cpp

SOURCES = ${GUI}/*.cpp ${MAIN}

all:
	${CC} ${CFLAGS} -o main ${SOURCES} ${CLIBS}