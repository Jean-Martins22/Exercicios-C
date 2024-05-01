#include <stdio.h>
#include <stdlib.h>

typedef struct celula celula;
struct celula {
    char conteudo;
    celula *prox;
};

void push(char x, celula *pilha){
    celula *nova;
    nova = (celula*) malloc(sizeof(celula));
    nova->conteudo = x;
    nova->prox = pilha->prox;
    pilha->prox = nova;
}

char pop(celula *pilha) {
    if(pilha->prox == NULL) {
        return '\0'; 
    }
    celula *topo = pilha->prox; 
    char topoConteudo = topo->conteudo;
    pilha->prox = topo->prox;
    free(topo);
    return topoConteudo;
}

int isEmpty(celula *pilha) {
    return (pilha->prox == NULL);
}

int isMatchingPair(char character1, char character2) {
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}

int isBalanced(char *sequencia) {
    celula *pilha = NULL;
    pilha = (celula*) malloc(sizeof(celula)); // Cabeça da pilha
    pilha->prox = NULL;
    
    for (int i = 0; sequencia[i] != '\0'; i++) {
        if (sequencia[i] == '(' || sequencia[i] == '[') {
            push(sequencia[i], pilha);
        } else if (sequencia[i] == ')' || sequencia[i] == ']') {
            if (isEmpty(pilha) || !isMatchingPair(pop(pilha), sequencia[i])) {
                return 0; // Não está balanceado
            }
        }
    }
    
    // Verifica se a pilha está vazia no final
    if (isEmpty(pilha)) {
        return 1; // Está balanceado
    } else {
        return 0; // Não está balanceado
    }
}

int main(void) {
    char sequencia[] = "(( ) [ ( )  )"; // Sequência de parênteses e colchetes

    if (isBalanced(sequencia)) {
        printf("A sequencia esta bem-formada (balanceada).\n");
    } else {
        printf("A sequencia nao esta bem-formada (nao balanceada).\n");
    }

    return EXIT_SUCCESS;
}