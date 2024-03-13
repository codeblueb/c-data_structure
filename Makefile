# Makefile for compiling a single C file

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Source file
SOURCES = $(wildcard *.c) 

# Executable
EXECUTABLES = $(patsubst %.c, Out/%, $(SOURCES)) 

all: $(EXECUTABLES)

# Rule to compile the source file
# $(EXECUTABLE): $(SOURCE)
Out/%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f Out/*
	# rm -f $(EXECUTABLE)

