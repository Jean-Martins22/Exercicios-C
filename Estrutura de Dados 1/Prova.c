#include <stdio.h>
#include <stdlib.h>

typedef struct celula celula;

struct celula
{
    int conteudo;
    celula *prox;
};

//a)
void imprimePares(celula *le){
    celula *p;
    for(p = le; p != NULL; p = p->prox){
        if(p->conteudo % 2 == 0){
            printf("%d e par!\n", p->conteudo);
        }
        
    }
}

//b)
int numeroCelulas(celula* le) {
    int contador = 0;

    while (le != NULL) {
        contador++;
        le = le->prox;
    }

    return contador;
}


int main(){
    celula c1,c2,c3,c4,c5;
    celula *le;

    c1.conteudo = 10;
    c1.prox = &c2;

    c2.conteudo = 20;
    c2.prox = &c3;

    c3.conteudo = 15;
    c3.prox = &c4;

    c4.conteudo = 13;
    c4.prox = &c5;

    c5.conteudo = 16;
    c5.prox = NULL;

    le = &c1;
    imprimePares(le);

    int numCelas = numeroCelulas(le);
    printf("O numero de celulas na lista e: %d\n", numCelas);

    return 1;
}
