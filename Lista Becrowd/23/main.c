#include <stdio.h>
#include <stdlib.h>

int main() {
    int M, N;

    while (1) {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0) {
            break;  // Encerra o loop se algum dos valores for menor ou igual a zero
        }

        int menor = (M < N) ? M : N;
        int maior = (M > N) ? M : N;
        int soma = 0;

        for (int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("Sum=%d\n", soma);
    }

    return 0;
}
