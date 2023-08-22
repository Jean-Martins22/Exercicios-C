#include <stdio.h>
#include <stdlib.h>

//Crie um programa que imprima 11 vezes a frase " Hello World!" utilizando uma estrutura
//sequencial e uma estrutura de repetição while.

int main()
{

    int i = 0;

    printf("Imprimindo 11 vezes de forma sequencial:\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");


    printf("\nImprimindo 11 vezes com while:\n");
    while(i < 11) {
        printf("Hello World!\n");
        i++;
    }

    return 0;
}
