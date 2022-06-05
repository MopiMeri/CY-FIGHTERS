all : exec

main.o : main.c header.h
	gcc -c main.c -o main.o

combat.o : combat.c header.h
	gcc -c combat.c -o combat.o

perso.o : perso.c header.h
	gcc -c perso.c -o perso.o
	
exec: main.o perso.o combat.o
	gcc main.o perso.o combat.o -o exec
