#include <stdio.h>

int f(int n) {
    if (n % 2 == 1) {
        return n / 2 + 1;
    } else {
        return -n / 2;
    }
}

void calcularRelacaoRecursiva(int limite, int n) {
    if (n <= limite) {
        printf("[%d, %d], ", n, f(n));
        calcularRelacaoRecursiva(limite, n + 1);
    }
}

int main() {
    int limite, n;

    printf("Informe o limite: ");
    scanf("%d", &limite);

    calcularRelacaoRecursiva(limite, 0);
    
    printf("\n");

    return 0;
}
