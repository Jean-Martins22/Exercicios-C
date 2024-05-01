#include <stdio.h>
#include <stdlib.h>

typedef struct Celula {
    int valor;
    struct Celula* proxima;
} Celula;

int numeroCelulas(Celula* le) {
    int contador = 0;

    while (le != NULL) {
        contador++;
        le = le->proxima;
    }

    return contador;
}

int main() {
    Celula* lista = NULL;

    
    for (int i = 0; i < 5; i++) {
        Celula* novaCelula = (Celula*)malloc(sizeof(Celula));
        novaCelula->valor = i;
        novaCelula->proxima = lista;
        lista = novaCelula;
    }

 
    int numCelas = numeroCelulas(lista);
    printf("O numero de celulas na lista e: %d\n", numCelas);

    while (lista != NULL) {
        Celula* temp = lista;
        lista = lista->proxima;
        free(temp);
    }

    return 0;
}
