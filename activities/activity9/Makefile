# makefile for activity 9

OBJS = atest.o top.o middle.o bottom.o
LIBS =

CC = gcc
CFLAGS = -Wall -pedantic -std=c11 -ggdb
CFLAGS_RELEASE = -Wall -pedantic -std=c11

MAKE = make

.PHONY:	all make clean release

all: atest act9.a

atest: atest.o top.o middle.o bottom.o
	$(CC) $(CFLAGS) atest.o top.o middle.o bottom.o -o atest

# build library containing all files here
act9.a: $(OBJS)
	ar rcs act9.a $(OBJS)

atest.o: atest.c
top.o: top.c
middle.o: middle.c
bottom.o: bottom.c

release: clean
	$(CC) $(CFLAGS_RELEASE) -c atest.c -o atest.o
	$(CC) $(CFLAGS_RELEASE) -c top.c -o top.o
	$(CC) $(CFLAGS_RELEASE) -c middle.c -o middle.o
	$(CC) $(CFLAGS_RELEASE) -c bottom.c -o bottom.o
	ar rcs act9n.a atest.o top.o middle.o bottom.o

clean:
	rm -rf *.dSYM  # MacOS debugger info
	rm -f *~ *.o
	rm -f core