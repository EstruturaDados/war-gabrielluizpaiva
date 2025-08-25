#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
// Esta estrutura agrupa as informações relacionadas a um território
typedef struct {
    char nome[30];     // Nome do território
    char cor[10];      // Cor do exército
    int tropas;        // Quantidade de tropas
} Territorio;

int main() {
    // Declaração do vetor de structs com capacidade para 5 territórios
    Territorio territorios[5];

    // Interface de entrada dos dados
    printf("===== Cadastro de Territórios =====\n");

    for (int i = 0; i < 5; i++) {
        printf("\n--- Território %d ---\n", i + 1);

        // Entrada do nome do território
        printf("Digite o nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); // Lê até a quebra de linha

        // Entrada da cor do exército
        printf("Digite a cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);  // Lê até a quebra de linha

        // Entrada da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados após o cadastro
    printf("\n===== Informações dos Territórios Cadastrados =====\n");

    for (int i = 0; i < 5; i++) {
        printf("\n--- Território %d ---\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
    }

    return 0;
}
