#include <stdio.h>

int f(int n) {
    if (n % 2 == 1) {
        return n / 2 + 1;
    } else {
        return -n / 2;
    }
}

int main() {
    int limite, n;

    printf("Informe o limite: ");
    scanf("%d", &limite);

    for (n = 0; n <= limite; n++) {
        printf("[%d, %d], ", n, f(n));
    }

    printf("\n");

    return 0;
}
