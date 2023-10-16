#include <stdio.h>

// Função para verificar se [n, m] pertence a MQ
int pertenceMQ(int n, int m) {
    return n <= m;
}

int main() {
    int i;

    printf("Digite o valor de 'i': ");
    scanf("%d", &i);

    if (i < 0) {
        printf("O valor de 'i' deve ser não negativo.\n");
        return 1;
    }

    // Elemento base
    printf("[%d, %d] pertence a MQ\n", 0, 1);

    // Gere elementos adicionais de acordo com a descrição de união infinita
    for (int k = 1; k <= i; k++) {
        for (int j = 0; j <= k; j++) {
            if (pertenceMQ(j, k + 1)) {
                printf("[%d, %d] pertence a MQ\n", j, k + 1);
            }
        }
    }

    return 0;
}



