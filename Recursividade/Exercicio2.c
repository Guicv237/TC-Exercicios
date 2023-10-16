#include <stdio.h>

// Função recursiva para calcular a soma dos primeiros n números naturais
int somaNaturais(int n) {
    if (n <= 0) {
        return 0; // Caso base: a soma de 0 números naturais é 0
    } else {
        return n + somaNaturais(n - 1); // Chamada recursiva
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Por favor, insira um valor positivo para n.\n");
    } else {
        int resultado = somaNaturais(n);
        printf("A soma dos primeiros %d números naturais é: %d\n", n, resultado);
    }

    return 0;
}
