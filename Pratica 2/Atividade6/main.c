#include <stdio.h>
#include <stdlib.h>

//Utilizando a estrutura de repeti��o for, fa�a um programa em C que receba 10 n�meros
//e conte quantos deles est�o no intervalo [10,20] e quantos deles est�o fora do intervalo,
//escrevendo estas informa��es

int main()
{
    int numero, sim = 0, nao = 0, i = 10;


    while(i != 0){
        printf("\nDigite um numero: (Faltam %d)\n\n",i);
        scanf("%d",&numero);
        if(numero >= 10 && numero <= 20){
            sim = (sim + 1);
        }
        else{
            nao = (nao + 1);
        }
        i = (i - 1);
    }

    printf("\nDos numeros digitados %d estao entre 10 e 20, e %d nao estao\n",sim,nao);


    return 0;
}
