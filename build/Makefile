CC=gcc
AR=ar
RM=rm
PWD=`pwd`

SRC = ../src

CFLAGS=-g -c -Wall

all: studentdb 

studentdb: ui.o db.o 
	$(CC)  ui.o -o studentdb

ui.o: $(SRC)/ui.c
	$(CC) $(CFLAGS) $(SRC)/ui.c

db.o: $(SRC)/db.c
	$(CC) $(CFLAGS) $(SRC)/db.c

clean:
	rm -rf *o studentdb

