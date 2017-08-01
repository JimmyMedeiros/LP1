PROG = 02
CC = gcc
CFLAGS = -Wall -ansi -pedantic -std=c11
OBJS = main.o primalidade.o fatorial.o

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS) -lm
	rm -f $(OBJS)
main.o: primalidade.o fatorial.o
	$(CC) $(CFLAGS) -c main.c
primalidade.o:
	$(CC) $(CFLAGS) -c primalidade.c
fatorial.o:
	$(CC) $(CFLAGS) -c fatorial.c
clean:
	rm -f $(OBJS)