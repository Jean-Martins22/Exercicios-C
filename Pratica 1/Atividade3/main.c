#include <stdio.h>
#include <stdlib.h>

//As ma��s custam R$ 0,30 cada se forem compradas menos do que uma d�zia, e
//R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que leia o
//n�mero de ma��s compradas, calcule e escreva o valor total da compra.

int main()
{
    int quantidade;
    float total;

    printf("Quantas macas deseja comprar ?:\n\n");
    scanf("%d",&quantidade);

    if (quantidade >= 12){
        total = (quantidade * 0.25);
    }
    else if (quantidade < 12) {
          total = (quantidade * 0.30);
    }

    printf("\nO valor total %d a pagar: R$%.2f\n",quantidade,total);

    return 0;
}
