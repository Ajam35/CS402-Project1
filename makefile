.SUFFIXES:	.c .o
CC = gcc
CFLAGS = -g

.c.o:
	$(CC) $(CFLAGS) -c $<

p1:	main.o treestats.o makeOutput.c
	gcc main.o treestats.o makeOutput.c -o p1

main.o: main.c intree.h makeOutput.c
treestats.o: treestats.c intree.h
makeOutput.o: makeOutput.c intree.h

clean:
	rm -f p1 *.o
