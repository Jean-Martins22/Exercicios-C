#include <stdio.h>
#include <stdlib.h>

//O seu programa deve ler as informações de um polígono regular e
//calcular/imprimir a sua área.
// O usuário deve entrar com a quantidade de lados que o polígono possui.
// O máximo de lados que o sistema suporta é 6, acima de 6 deve retornar um
//aviso ao usuário.
// A quantidade mínima de lados é 3, menos que isso o sistema deve retornar
//uma mensagem ao usuário.

int main()
{

    int n;
    double lado, apotema, area;

    printf("Digite a quantidade de lados do poligono (minimo 3, maximo 6): ");
    scanf("%d", &n);

    if (n < 3) {
        printf("Erro: a quantidade de lados deve ser no minimo 3.\n");
        return 1;
    }

    if (n > 6) {
        printf("Erro: a quantidade de lados deve ser no maximo 6.\n");
        return 1;
    }

    printf("Digite o comprimento do lado do poligono: ");
    scanf("%lf", &lado);

    printf("Digite a medida do apotema do poligono: ");
    scanf("%lf", &apotema);

    area = (n * lado * apotema) / 2;

    printf("A area do poligono e: %.2lf\n", area);

    return 0;
}
