#include <stdio.h>
#include <stdlib.h>

struct node{
    int conteudo;
    struct node *prox;
};

typedef struct node celula;

int main(void)
{
    celula cel;
    printf("sizeof(cel) = %d\n", sizeof(cel));
    return 0;
}
