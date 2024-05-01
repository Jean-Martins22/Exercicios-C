#include <stdio.h>
#include <stdlib.h>

struct veg{
    int conteudo;
    struct veg *prox;
};

typedef struct veg celula;

/*void imprime(celula *le){
    if(le != NULL){
        printf("%d\n",le->conteudo);
        imprime(le->prox);
    }
}*/

void imprime(celula *le){
    celula *p;
    for(p = le; p != NULL; p = p->prox){
        printf("%d\n",p->conteudo);
    }
    
}