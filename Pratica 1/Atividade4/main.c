#include <stdio.h>
#include <stdlib.h>

//Escreva um programa para ler 3 valores inteiros (considere que não serão lidos
//valores iguais) e escrevê-los em ordem crescente.

int main()
{

    int n1, n2, n3, n4, n5, n6;

    printf("Digite 3 valores inteiros:\n\n");
    scanf("%d%d%d",&n1, &n2, &n3);


    if (n1 > n2 && n1 > n3){
        n6 = n1;
    }
    else if (n2 > n1 && n2 > n3){
        n6 = n2;
    }
    else if (n3 > n2 && n3 > n1){
        n6 = n3;
    }


    if (n1 < n2 && n1 < n3){
        n4 = n1;
    }
    else if (n2 < n1 && n2 < n3){
        n4 = n2;
    }
    else if (n3 < n2 && n3 < n1){
        n4 = n3;
    }


    if (n1 > n4 && n1 < n6){
        n5 = n1;
    }
    else if (n2 > n4 && n2 < n6){
        n5 = n2;
    }
    else if (n3 > n4 && n3 < n6){
        n5 = n3;
    }

    printf("\nA ordem crescente dos valores digitados fica assim: %d, %d, %d\n", n4, n5, n6);

    return 0;
}
