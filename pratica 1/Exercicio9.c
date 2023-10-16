#include <stdio.h>
#include <math.h>

int main() {
    double catetoA, catetoB, hipotenusa;

    // Solicita ao usuário que insira o valor do primeiro cateto
    printf("Digite o valor do primeiro cateto: ");
    scanf("%lf", &catetoA);

    // Solicita ao usuário que insira o valor do segundo cateto
    printf("Digite o valor do segundo cateto: ");
    scanf("%lf", &catetoB);

    // Calcula o valor da hipotenusa usando o Teorema de Pitágoras
    hipotenusa = sqrt(catetoA * catetoA + catetoB * catetoB);

    // Apresenta o valor da hipotenusa ao usuário
    printf("O valor da hipotenusa é: %.2lf\n", hipotenusa);

    return 0;
}
