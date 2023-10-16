#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    if (islower(ch)) {
        printf("%c é uma letra minúscula.\n", ch);
    } else {
        printf("%c não é uma letra minúscula.\n", ch);
    }

    return 0;
}
