#include <stdio.h>
#include <stdlib.h>

//Leia v�rios n�meros inteiros seguidos, multiplique todos os valores lidos. No momento
//que o usu�rio digitar 0 (zero) pare de ler n�meros e mostre o resultado da multiplica��o
//na tela. O valor zero n�o deve ser usado na multiplica��o. Caso o primeiro valor digitado
//pelo usu�rio for zero, alerte o usu�rio que ele finalizou o programa sem digitar nenhum
//n�mero

int main()
{
    int numero, resultado = 1;

    printf("Digite os numeros a serem multiplicados: ");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        resultado *= numero;
    }

    if (resultado == 1) {
        printf("Voce finalizou o programa sem digitar nenhum numero.\n");
    } else {
        printf("O resultado da multiplicacao eh: %d\n", resultado);
    }


    return 0;
}
