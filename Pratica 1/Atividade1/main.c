#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, ano2, conta;

    printf("Informe seu ano de nascimento");
    scanf("%d", &ano);

    printf("Informe o ano atual");
    scanf("%d", &ano2);

    conta = ano2 - ano;

    if (conta >= 16){
        printf("Você tem %d anos, então você pode votar",conta);
    }
    else{
        printf("Você tem %d anos, então você não pode votar",conta);
    }

    return 0;
}
