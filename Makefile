CC = gcc
CFLAG = -m32 -g

All : main

main : main.c
	$(CC) -o main main.c $(CFALG)