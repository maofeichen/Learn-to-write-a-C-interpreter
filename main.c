// Learn to write a C interpreter.
// Inspired by: lotabout/write-a-C-interpreter

#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);
    int i;
    for(i = 0; i < argc; i++){
        printf("argv[%d]: %s\n", i, argv[i] );
    }

    return 0;
}
