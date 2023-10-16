#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Função para verificar se uma string é composta apenas por dígitos
int isNumerico(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit((unsigned char)str[i])) {
            return 0; // Não é um dígito numérico
        }
    }
    return 1; // É composta apenas por dígitos numéricos
}

// Definição da estrutura Pessoa
struct Pessoa {
    char cpf[12];
    char nome[50];
    float salario;
};

// Função para alocar memória para um vetor de Pessoa
struct Pessoa *alocarMemoria(int n) {
    struct Pessoa *pessoas = (struct Pessoa *)malloc(n * sizeof(struct Pessoa));
    if (pessoas == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return pessoas;
}

// Função para preencher o vetor de Pessoa
void preencherVetor(struct Pessoa *pessoas, int n) {
    for (int i = 0; i < n; i++) {
        do {
            printf("Digite o CPF da pessoa %d (apenas números): ", i + 1);
            scanf("%s", pessoas[i].cpf);
        } while (!isNumerico(pessoas[i].cpf));

        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", pessoas[i].nome);
        printf("Digite o salário da pessoa %d: R$ ", i + 1);
        scanf("%f", &pessoas[i].salario);
    }
}

// Função para imprimir o vetor de Pessoa
void imprimirVetor(struct Pessoa *pessoas, int n) {
    printf("Vetor de Pessoas:\n");
    for (int i = 0; i < n; i++) {
        printf("CPF: %s, Nome: %s, Salário: R$ %.2f\n", pessoas[i].cpf, pessoas[i].nome, pessoas[i].salario);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor de pessoas: ");
    scanf("%d", &n);

    struct Pessoa *pessoas = alocarMemoria(n);
    preencherVetor(pessoas, n);
    imprimirVetor(pessoas, n);

    free(pessoas);

    return 0;
}
