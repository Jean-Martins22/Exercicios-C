#include <stdio.h>
#include <stdlib.h>

// Crie um programa em C que peça um número ao usuário e armazene ele na
//variável x. Depois peça outro número e armazene na variável y. Mostre esses
//números. Em seguida, faça com que x passe a ter o valor de y, e que y passe a ter
//o valor de x.

int main()
{
    int x, y, troca;

    printf("Digite X e Y:\n\n");
    scanf("%d%d",&x,&y);

    printf("\nVoce escolheu %d para X e %d para Y\n",x,y);

    troca = y;
    y = x;
    x = troca;

    printf("\nAgora X tem o valor de %d e Y tem o valor de %d\n",x,y);

    return 0;
}
