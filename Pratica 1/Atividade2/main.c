#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que verifique a validade de uma senha fornecida pelo
// usuário. A senha válida é o número 1234. Devem ser impressas as seguintes
// mensagens:
// ACESSO PERMITIDO caso a senha seja válida.
// ACESSO NEGADO caso a senha seja inválida.

int main()
{
    int senha, tentativa;

    printf("Digite a senha:");
    scanf("%d",&tentativa);

    if (tentativa == 1234){
        printf("Acesso Permitido");
    }
    else{
        printf("Acesso Negado");
    }
    return 0;
}
