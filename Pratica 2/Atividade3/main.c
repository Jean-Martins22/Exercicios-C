#include <stdio.h>
#include <stdlib.h>

//Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever o resultado da
//multiplicação do número lido com os valores de 11 a 20

int main()
{
    int valor, escolha, resultado;

    valor = 0;

    while(valor == 0){
        printf("Digite um valor de 1 a 10:\n");
        scanf("%d",&escolha);
        if(escolha >=1 && escolha <=10){
            valor = 1;
        }
        else{
            printf("\nO valor digitado nao esta entre 1 e 10\n");
        }
    }

    for(int i=11; i<=20; i = i + 1){
        resultado = (escolha * i);
        printf("\n%d multiplicado por %d resulta em %d\n\n",escolha,i,resultado);
    }

    return 0;
}
