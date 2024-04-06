CC=g++
CFLAGS= -Wall -Werror -pedantic -std=c++1y 

all: 
	$(CC) -o ./dist/main ./src/main.cpp

79wordsearch:
	$(CC) $(CFLAGS) -o ./dist/79wordsearch ./src/79wordsearch.cpp
1249minimum-remove-to-make-valid-parentheses:
	$(CC) $(CFLAGS) -o ./dist/1249minimum-remove-to-make-valid-parentheses ./src/1249minimum-remove-to-make-valid-parentheses.cpp
1614maximum-nesting-depth-of-the-parentheses:
	$(CC) $(CFLAGS) -o ./dist/1614maximum-nesting-depth-of-the-parentheses ./src/1614maximum-nesting-depth-of-the-parentheses.cpp
1544make-the-string-great:
	$(CC) $(CFLAGS) -o ./dist/1544make-the-string-great ./src/1544make-the-string-great.cpp