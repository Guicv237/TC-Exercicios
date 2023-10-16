#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    if (isupper(ch)) {
        printf("%c é uma letra maiúscula.\n", ch);
    } else {
        printf("%c não é uma letra maiúscula.\n", ch);
    }

    return 0;
}
