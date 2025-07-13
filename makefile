ABC.exe main.o big3.o big2.o fact.o fib.o pal.o reve.o sort.o sum.o
         gcc -o ABC.exe main.o big3.o big2.o fact.o fib.o pal.o reve.o sort.o sum.o 
main.o: main.c
        gcc -c main.c
big3.o: big3.c
        gcc -c big3.c
big2.o: big2.c
        gcc -c big2.c
fact.o: fact.c
         gcc -c fact.c
fib.o: fib.c
        gcc -c fib.c
pal.o: pal.c
       gcc -c pal.c
reve.o: reve.c
        gcc -c reve.c
sort.o: sort.c
         gcc -c sort.c
sum.o: sum.c
       gcc -c sum.c
