#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 10

int grafo[MAX_VERTICES][MAX_VERTICES];
int grau_entrada[MAX_VERTICES];
int grau_saida[MAX_VERTICES];
int num_vertices;

void inicializarGrafo() {
    for (int i = 0; i < MAX_VERTICES; i++) {
        for (int j = 0; j < MAX_VERTICES; j++) {
            grafo[i][j] = 0;
        }
        grau_entrada[i] = 0;
        grau_saida[i] = 0;
    }
}

void adicionarAresta(int origem, int destino, int peso) {
    if (origem < 0 || origem >= num_vertices || destino < 0 || destino >= num_vertices) {
        printf("Vértices inválidos!\n");
        return;
    }
    grafo[origem][destino] = peso;
    grau_saida[origem]++;
    grau_entrada[destino]++;
}

int caminhoEntreCidades(int origem, int destino) {
    if (origem == destino) {
        return 0;
    }
    int menor_caminho = -1;

    for (int i = 0; i < num_vertices; i++) {
        if (grafo[origem][i] > 0) {
            int comprimento = caminhoEntreCidades(i, destino);
            if (comprimento >= 0) {
                int comprimento_atual = grafo[origem][i] + comprimento;
                if (menor_caminho == -1 || comprimento_atual < menor_caminho) {
                    menor_caminho = comprimento_atual;
                }
            }
        }
    }
    return menor_caminho;
}

int temCiclo(int vertice, int visitados[]) {
    if (visitados[vertice] == 1) {
        return 1; // Encontrou um ciclo
    }
    if (visitados[vertice] == 2) {
        return 0; // Já visitou, mas não há ciclo a partir deste vértice
    }

    visitados[vertice] = 1;

    for (int i = 0; i < num_vertices; i++) {
        if (grafo[vertice][i] > 0 && temCiclo(i, visitados)) {
            return 1;
        }
    }

    visitados[vertice] = 2;

    return 0;
}

void verificarCiclos() {
    int visitados[MAX_VERTICES];
    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            visitados[j] = 0;
        }
        if (temCiclo(i, visitados)) {
            printf("Há ciclos no grafo.\n");
            return;
        }
    }
    printf("Não há ciclos no grafo.\n");
}

void informarGraus() {
    for (int i = 0; i < num_vertices; i++) {
        printf("Grau de entrada do nó %d: %d\n", i, grau_entrada[i]);
        printf("Grau de saída do nó %d: %d\n", i, grau_saida[i]);
    }
}

int main() {
    printf("Informe o número de cidades (vértices): ");
    scanf("%d", &num_vertices);

    inicializarGrafo();

    for (int i = 0; i < num_vertices; i++) {
        for (int j = 0; j < num_vertices; j++) {
            int peso;
            printf("Informe o peso entre a cidade %d e a cidade %d (ou 0 se não houver ligação): ", i, j);
            scanf("%d", &peso);
            adicionarAresta(i, j, peso);
        }
    }

    int origem, destino;
    printf("Informe a cidade de origem (0 a %d): ", num_vertices - 1);
    scanf("%d", &origem);
    printf("Informe a cidade de destino (0 a %d): ", num_vertices - 1);
    scanf("%d", &destino);

    int comprimento = caminhoEntreCidades(origem, destino);

    if (comprimento < 0) {
        printf("Não há caminho entre as cidades.\n");
    } else {
        printf("O comprimento do caminho entre as cidades é %d.\n", comprimento);
    }

    verificarCiclos();
    informarGraus();

    return 0;
}
