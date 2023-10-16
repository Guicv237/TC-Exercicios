#include <stdio.h>

// Função sucessor
int sucessor(int n) {
    return n + 1;
}

// Função soma
int soma(int m, int n) {
    // Base da recursão: se n for 0, retorna m
    if (n == 0) {
        return m;
    }
    // Passo recursivo: soma m e s(n-1)
    return soma(sucessor(m), n - 1);
}

int main() {
    int m, n;

    printf("Digite o primeiro número: ");
    scanf("%d", &m);

    printf("Digite o segundo número: ");
    scanf("%d", &n);

    int resultado = soma(m, n);

    printf("A soma de %d e %d é: %d\n", m, n, resultado);

    return 0;
}
