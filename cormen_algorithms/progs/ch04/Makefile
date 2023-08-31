CC := gcc
CFLAGS := -g -I ../lib -L ../lib -lalgo

OBJS := main.o matrix.o

a.out: ${OBJS}
	gcc -o $@ $^ ${CFLAGS} 

clear:
	rm ${OBJS}
