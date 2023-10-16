#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário que insira o número para o qual deseja a tabuada
    printf("Informe um número: ");
    scanf("%d", &numero);

    // Calcula e exibe a tabuada de multiplicação
    for (int i = 0; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}
