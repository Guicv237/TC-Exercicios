#include <stdio.h>

// Função para verificar se [n, m] pertence a MQ
int pertenceMQ(int n, int m) {
    if (n <= m) {
        return 1; // Pertence a MQ
    }
    return 0; // Não pertence a MQ
}

// Função recursiva para gerar o conjunto MQ de acordo com a descrição de união infinita
void gerarMQ(int i) {
    if (i == 0) {
        printf("[%d, %d] pertence a MQ\n", 0, 1); // Elemento base
        return;
    }

    gerarMQ(i - 1); // Chamada recursiva para o valor anterior de i

    // Gere elementos adicionais de acordo com a descrição
    for (int j = 0; j <= i; j++) {
        if (pertenceMQ(j, i + 1)) {
            printf("[%d, %d] pertence a MQ\n", j, i + 1);
        }
    }
}

int main() {
    int i;

    printf("Digite o valor de 'i': ");
    scanf("%d", &i);

    if (i < 0) {
        printf("O valor de 'i' deve ser não negativo.\n");
        return 1;
    }

    // Chama a função gerarMQ para construir o conjunto MQ
    gerarMQ(i);

    return 0;
}


