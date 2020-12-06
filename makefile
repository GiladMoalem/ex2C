W = -Wall -g

output:main.o myBank.o
	gcc $(W) main.o myBank.o -o output

main.o:main.c 
	gcc $(W) -c main.c

myBank.o:myBank.c 
	gcc $(W) -c myBank.c

clean:
	rm *.o output
