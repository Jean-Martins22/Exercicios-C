#include <stdio.h>
#include <stdlib.h>

// Crie um programa em C que pe�a um n�mero ao usu�rio e armazene ele na
//vari�vel x. Depois pe�a outro n�mero e armazene na vari�vel y. Mostre esses
//n�meros. Em seguida, fa�a com que x passe a ter o valor de y, e que y passe a ter
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
