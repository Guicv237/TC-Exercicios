#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Veiculo
struct Veiculo {
    char chassi[20];
    char marca[50];
    char modelo[50];
    float preco;
};

// Função para alocar memória para um vetor de Veiculo
struct Veiculo *alocarMemoria(int n) {
    struct Veiculo *veiculos = (struct Veiculo *)malloc(n * sizeof(struct Veiculo));
    if (veiculos == NULL) {
        printf("Falha na alocação de memória.\n");
        exit(1);
    }
    return veiculos;
}

// Função para preencher o vetor de Veiculo
void preencherVeiculo(struct Veiculo *veiculo, int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite o número do chassi do veículo %d: ", i + 1);
        scanf("%s", veiculo[i].chassi);
        printf("Digite a marca do veículo %d: ", i + 1);
        scanf("%s", veiculo[i].marca);
        printf("Digite o modelo do veículo %d: ", i + 1);
        scanf("%s", veiculo[i].modelo);
        printf("Digite o preço do veículo %d: ", i + 1);
        scanf("%f", &veiculo[i].preco);
    }
}

// Função para imprimir o vetor de Veiculo
void imprimirVeiculo(struct Veiculo *veiculo, int n) {
    printf("Vetor de Veículos:\n");
    for (int i = 0; i < n; i++) {
        printf("Chassi: %s, Marca: %s, Modelo: %s, Preço: %.2f\n",
               veiculo[i].chassi, veiculo[i].marca, veiculo[i].modelo, veiculo[i].preco);
    }
}

// Função para redimensionar o vetor de Veiculo usando realloc
struct Veiculo *realocarMemoria(struct Veiculo *veiculo, int n, int novo_tamanho) {
    veiculo = (struct Veiculo *)realloc(veiculo, novo_tamanho * sizeof(struct Veiculo));
    if (veiculo == NULL) {
        printf("Falha na realocação de memória.\n");
        exit(1);
    }
    return veiculo;
}

int main() {
    int n;
    printf("Digite o tamanho inicial do vetor de veículos: ");
    scanf("%d", &n);

    struct Veiculo *veiculo = alocarMemoria(n);
    preencherVeiculo(veiculo, n);
    imprimirVeiculo(veiculo, n);

    // Realocar o vetor para um tamanho maior
    int novo_tamanho = n + 5;
    veiculo = realocarMemoria(veiculo, n, novo_tamanho);

    // Preencher os elementos adicionais
    preencherVeiculo(veiculo + n, 5);

    // Imprimir o vetor após a realocação
    imprimirVeiculo(veiculo, novo_tamanho);

    // Liberar a memória alocada
    free(veiculo);

    return 0;
}


