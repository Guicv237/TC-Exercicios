#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    if (isdigit(ch)) {
        printf("%c é um dígito.\n", ch);
    } else {
        printf("%c não é um dígito.\n", ch);
    }

    return 0;
}
