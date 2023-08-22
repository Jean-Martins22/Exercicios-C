#include <stdio.h>
#include <stdlib.h>


int main() {
    int idade, soma = 0, quantidade = 0;

    while (1) {
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        soma += idade;
        quantidade++;
    }

    if (quantidade > 0) {
        float media = (float) soma / quantidade;
        printf("%.2f\n", media);
    }

    return 0;
}
