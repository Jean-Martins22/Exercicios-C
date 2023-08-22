#include <stdio.h>
#include <stdlib.h>

//Escreva um programa em C que recebe um inteiro e diga se é par ou ímpar

int main()
{
    int valor;

    printf("Digite um numero: \n\n");
    scanf("%d",&valor);

    if (valor % 2 == 0) {
        printf("\nO valor %d, e Par\n",valor);
    }
    else {
        printf("\nO valor %d, e Impar\n",valor);
    }


    return 0;
}
