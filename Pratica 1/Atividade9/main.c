#include <stdio.h>
#include <stdlib.h>

//Fa�a uma calculadora via console que possui apenas as seguintes opera��es:
//somar, subtrair, dividir e multiplicar. Neste sistema o programador ir� criar um
//uma mensagem conforme mostrado abaixo (em negrito). O usu�rio deve digitar
//a letra da op��o desejada. Logo ap�s o usu�rio deve digitar dois n�meros. E
//assim o sistema retorna o resultado da conta para o usu�rio. (Obs.: fa�a o
//tratamento da divis�o por zero)
//Escolhe a op��o desejada:
//a) Somar
//b) Subtrair
//c) Dividir
//d) Multiplica

int main()
{
    int n1, n2, escolha, resultado;

    printf("Escolha uma opcao: (1)Somar, (2)Subtrair, (3)Dividir, (4)Multiplicar\n\n");
    scanf("%d",&escolha);

    if (escolha == 1){
        printf("\nVoce escolheu (1)Somar, Digite 2 numeros para serem somados:\n\n");
        scanf("%d%d",&n1,&n2);
        resultado = (n1 + n2);
        printf("\n A soma de %d com %d retorna: %d\n",n1,n2,resultado);
    }
    else if (escolha == 2){
        printf("\nVoce escolheu (2)Subtrair, Digite 2 numeros para serem subtraidos:\n\n");
        scanf("%d%d",&n1,&n2);
        resultado = (n1 - n2);
        printf("\n A subtracao de %d com %d retorna: %d\n",n1,n2,resultado);
    }
    else if (escolha == 3){
        printf("\nVoce escolheu (3)Dividir, Digite 2 numeros para serem divididos:\n\n");
        scanf("%d%d",&n1,&n2);
        if (n2 > 0) {
            resultado = (n1 / n2);
            printf("\n A divisao de %d com %d retorna: %d\n",n1,n2,resultado);
        } else {
            printf("\n%d nao pode ser dividido por %d\n",n1,n2);
        }
    }
    else if (escolha == 4){
        printf("\nVoce escolheu (4)Multiplicar, Digite 2 numeros para serem multiplicados:\n\n");
        scanf("%d%d",&n1,&n2);
        resultado = (n1 * n2);
        printf("\n A multiplicacao de %d com %d retorna: %d\n",n1,n2,resultado);
    }

    return 0;
}
