#include <stdio.h>
#include <stdlib.h>

//Leia v�rias idades e calcule a m�dia entre as idades (usar uma vari�vel para idade). Lei
//no m�nimo 10 idades.

int main()
{
    int quantidade = 0,idade,soma = 0;
    float media;

    while(quantidade < 10){
        printf("\nQuantas idades deseja digitar ?: (No minimo 10 idades)\n\n");
        scanf("%d",&quantidade);
    }

    for(int i=quantidade; i!=0; i = i - 1){
        printf("\nDigite uma idade para no fim calcular a media: (Faltam %d)\n\n",i);
        scanf("%d",&idade);
        soma = (soma + idade);
    }

    media = (soma/quantidade);
    printf("\nA media das idades e: %.2f\n", media);

    return 0;
}
