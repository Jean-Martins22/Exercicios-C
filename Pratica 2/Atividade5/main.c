#include <stdio.h>
#include <stdlib.h>

// Ler 10 números e imprimir quantos são pares e quantos são ímpares.

int main()
{
    int numero, par = 0, impar = 0;

    for(int i=10; i!=0; i = i - 1){
        printf("\nDigite um numero: (faltam %d)\n\n",i);
        scanf("%d",&numero);
        if(numero % 2 == 0){
            par = (par + 1);
        }
        else{
            impar = (impar + 1);
        }
    }

    printf("\nDos numeros digitados %d sao Pares e %d sao impares",par,impar);

    return 0;
}
