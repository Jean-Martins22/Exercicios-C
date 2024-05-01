#include <stdio.h>
#include <stdlib.h>

struct veg{
    int conteudo;
    struct veg *prox;
};

typedef struct veg celula;

void imprime(celula *le){
    celula *p;
    for(p = le; p != NULL; p = p->prox){
        printf("%d\n", p->conteudo);
    }
}

celula* busca(int x, celula *le){
    celula *p;
    p = le;
    while(p != NULL && p->conteudo != x){
        p = p->prox;
    }
    return p;
}

int main(){
    celula c1,c2,c3;
    celula *le;

    c1.conteudo = 10;
    c1.prox = &c2;
    
    c2.conteudo = 20;
    c2.prox = &c3;

    c3.conteudo = 30;
    c3.prox = NULL;

    le = &c1;
    imprime(le);

    celula *x = busca(20, le);

    if(x != NULL){
        printf("Achou a celula no endereco %p\n", x);
    } else {
        printf("Nao achou!");
    }

    return 1;
}

