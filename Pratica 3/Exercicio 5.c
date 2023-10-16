#include <stdio.h>
#include <stdbool.h>

#define NUM_CIDADES 4

int matrizDistancias[NUM_CIDADES][NUM_CIDADES];

// Inicializa a matriz de distâncias com zeros
void inicializarGrafo() {
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            matrizDistancias[i][j] = 0;
        }
    }
}

// Insere a distância entre duas cidades na matriz de distâncias
void inserirDistancia(int cidade1, int cidade2, int distancia) {
    if (cidade1 >= 0 && cidade1 < NUM_CIDADES && cidade2 >= 0 && cidade2 < NUM_CIDADES) {
        matrizDistancias[cidade1][cidade2] = distancia;
        matrizDistancias[cidade2][cidade1] = distancia; // Assume que a distância é bidirecional
    }
}

// Conta quantas estradas ligam as cidades
int contarEstradas() {
    int estradas = 0;
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = i + 1; j < NUM_CIDADES; j++) {
            if (matrizDistancias[i][j] > 0) {
                estradas++;
            }
        }
    }
    return estradas;
}

// Imprime a matriz de distâncias
void imprimirMatriz() {
    printf("Matriz de distâncias:\n");
    for (int i = 0; i < NUM_CIDADES; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            printf("%d\t", matrizDistancias[i][j]);
        }
        printf("\n");
    }
}

// Função recursiva para encontrar a distância entre duas cidades
int encontrarDistanciaEntreCidades(int cidade1, int cidade2) {
    if (cidade1 >= 0 && cidade1 < NUM_CIDADES && cidade2 >= 0 && cidade2 < NUM_CIDADES) {
        int distancia = matrizDistancias[cidade1][cidade2];
        if (distancia > 0) {
            return distancia;
        }
    }
    return 0;
}

int main() {
    inicializarGrafo();

    inserirDistancia(0, 1, 10);
    inserirDistancia(0, 2, 15);
    inserirDistancia(1, 2, 5);
    inserirDistancia(1, 3, 20);

    imprimirMatriz();
    printf("Número de estradas: %d\n", contarEstradas());

    int cidade1 = 0;
    int cidade2 = 3;
    int distancia = encontrarDistanciaEntreCidades(cidade1, cidade2);

    if (distancia > 0) {
        printf("Distância entre cidade %d e cidade %d: %d\n", cidade1, cidade2, distancia);
    } else {
        printf("Não há estrada entre cidade %d e cidade %d.\n", cidade1, cidade2);
    }

    return 0;
}



