CC=g++
CFLAGS=-I.

all:
	@mkdir -p build
	@$(CC) -o build/app main.cpp

run: all
	@build/./app

clean:
	@rm -rf build
