CC := gcc
#CFLAGS := 
DEST := ./build/

all: data_structure.c
	mkdir -p build
	$(CC) data_structure.c -lcs50 -o $(DEST)/data_structure 