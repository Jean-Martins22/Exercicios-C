#include <stdio.h>
#include <stdlib.h>

//Crie um programa para ler 3 notas e mostrar a m�dia delas. Voc� s� pode usar duas
//vari�veis, uma como contador e outra para calcular a m�dia.

int main()
{
    float nota, soma = 0;
    int contador = 0;

    while (contador < 3) {
        printf("Digite a nota %d: ", contador + 1);
        scanf("%f", &nota);

        soma += nota;
        contador++;
    }

    float media = soma / 3;
    printf("A media das notas eh: %.2f\n", media);

    return 0;
}
