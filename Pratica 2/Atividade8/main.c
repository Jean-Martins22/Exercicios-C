#include <stdio.h>
#include <stdlib.h>

//Lei um valor inteiro do usu�rio. Enquanto o valor for par imprime o valor, quando o valor
//for impar pare de pedir n�meros para o usu�rio

int main()
{
    int i = 2;

    while(i % 2 == 0) {
        printf("\nDigite um numero\n\n");
        scanf("%d",&i);
        if(i % 2 == 0){
            printf("\nO numero %d e par\n",i);
        }
        else{
            printf("\nO numero %d e impar\n",i);
        }
    }

    return 0;
}
