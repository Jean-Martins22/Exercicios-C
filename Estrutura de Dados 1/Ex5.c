#include <stdio.h>
#include <stdlib.h>

typedef struct celula celula;
struct celula {
 int conteudo;
 celula *prox;
};

void imprime(celula *le) {
 celula *p;
 for (p = le->prox; p != NULL; p = p->prox)
 printf ("%d\n", p->conteudo);
}

celula* busca(int x, celula *le) {
 celula* p;
 p = le->prox;

 while(p != NULL && p->conteudo != x) {
 p = p->prox;
 }
 return p;
}

void insere(int x, celula *p){
 celula *nova;
 nova = (celula*) malloc (sizeof (celula));
 nova->conteudo = x;
 celula *current = p;

 while(current->prox != NULL) {
 current = current->prox;
 }
 current->prox = nova; 
}

void remove(int x, celula *p) {
 if(p->prox == NULL) { return; }
 struct celula* current = p->prox;
 struct celula* prev = p;

 while (current != NULL && current->conteudo != x) {
 prev = current;
 current = current->prox;
 }
 if (current == NULL) {
 return;
 }
 prev->prox = current->prox;
 free(current);
}

int main(void) {
 celula *lista = NULL;
 lista = (celula*) malloc(sizeof(celula));
 lista->conteudo = -999999; lista->prox = NULL;
 insere(10, lista);
 insere(20, lista);
 insere(30, lista);
 insere(40, lista);
 insere(50, lista);
 remove(30, lista);
 insere(70, lista);
 imprime(lista);
 celula* achada = busca(40, lista);
 if(achada != NULL) {
 printf("Encontrou: %d\n\n", achada->conteudo);
 } else {
 printf("Não encontrou.");
 }
 return EXIT_SUCCESS;
}
