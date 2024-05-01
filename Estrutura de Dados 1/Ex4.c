#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    int codigo;
    char nome[50];
    char telefone[15];
};

int main() {
    struct Pessoa pessoas[100];
    int numPessoas = 0;
    int escolha;

    while (1) {
        printf("Menu:\n");
        printf("1) Listar todas as pessoas;\n");
        printf("2) Inserir uma pessoa;\n");
        printf("3) Sair do sistema.\n");
        printf("Entre a operacao: ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            // Listar todas as pessoas
            printf("Listagem de pessoas:\n");
            for (int i = 0; i < numPessoas; i++) {
                printf("%d %s %s\n", pessoas[i].codigo, pessoas[i].nome, pessoas[i].telefone);
            }
        } else if (escolha == 2) {
            // Inserir uma pessoa
            if (numPessoas < 100) { // Verifica se há espaço para mais pessoas
                printf("Entre o codigo da pessoa (inteiro): ");
                scanf("%d", &pessoas[numPessoas].codigo);

                printf("Entre o nome da pessoa (texto): ");
                scanf(" %[^\n]s", pessoas[numPessoas].nome); // Permite nomes com espaços

                printf("Entre o telefone da pessoa (texto): ");
                scanf(" %[^\n]s", pessoas[numPessoas].telefone);

                numPessoas++;
                printf("Pessoa inserida!\n");
            } else {
                printf("A lista de pessoas está cheia. Não é possível adicionar mais pessoas.\n");
            }
        } else if (escolha == 3) {
            // Sair do sistema
            printf("Sistema finalizado!\n");
            break;
        } else {
            printf("Escolha inválida. Tente novamente.\n");
        }
    }

    return 0;
}