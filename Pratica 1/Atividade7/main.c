#include <stdio.h>
#include <stdlib.h>

//Para doar sangue é necessário ter entre 18 e 67 anos. Faça um aplicativo na
//linguagem C que pergunte a idade de uma pessoa e diga se ela pode doar sangue
//ou não.


int main()
{
    int idade;

    printf("Digite sua idade: \n\n");
    scanf("%d",&idade);

    if (idade >= 18 && idade <= 67) {
        printf("\nVoce tem %d anos e pode doar sangue\n",idade);
    }
    else {
        printf("\nVoce tem %d anos e nao pode doar sangue\n",idade);
    }


    return 0;
}
