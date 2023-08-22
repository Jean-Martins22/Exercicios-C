#include <stdio.h>
#include <stdlib.h>

//Leia vários números inteiros seguidos, multiplique todos os valores lidos. No momento
//que o usuário digitar 0 (zero) pare de ler números e mostre o resultado da multiplicação
//na tela. O valor zero não deve ser usado na multiplicação. Caso o primeiro valor digitado
//pelo usuário for zero, alerte o usuário que ele finalizou o programa sem digitar nenhum
//número

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
