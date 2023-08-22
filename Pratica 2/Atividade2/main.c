#include <stdio.h>
#include <stdlib.h>

//Fazer um programa para imprimir todos os números pares entre 567 e 7932

int main()
{
    for(int i=567; i<=7932; i = i + 1) {
        if(i % 2 == 0) {
            printf("%d",i);
            printf(" ");
        }
    }


    return 0;
}
