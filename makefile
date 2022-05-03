# makefile
.PHONY : clean

main.out : main.c
	gcc -o main.out main.c

do : 
	./main.out
clean : 
	rm main.out