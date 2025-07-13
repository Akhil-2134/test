ABC.exe: main.o big3.o fact.o reve.o big2.o pal.o fib.o sum.o sort.o
	gcc -o ABC.exe main.o big3.o fact.o reve.o big2.o pal.o fib.o sum.o sort.o

main.o: main.c
	gcc -c main.c

big3.o: big3.c
	gcc -c big3.c

fact.o: fact.c
	gcc -c fact.c

reve.o: reve.c
	gcc -c reve.c

big2.o: big2.c
	gcc -c big2.c

pal.o: pal.c
	gcc -c pal.c

fib.o: fib.c
	gcc -c fib.c

sum.o: sum.c
	gcc -c sum.c

sort.o: sort.c
	gcc -c s


