CC=g++
CFLAGS= -Wall -Werror -pedantic -std=c++1y 

all: 
	$(CC) -o ./dist/main ./src/main.cpp

79wordsearch:
	$(CC) $(CFLAGS) -o ./dist/79wordsearch ./src/79wordsearch.cpp