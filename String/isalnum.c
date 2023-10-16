#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    if (isalnum(ch)) {
        printf("%c é uma letra ou um dígito.\n", ch);
    } else {
        printf("%c não é uma letra ou um dígito.\n", ch);
    }

    return 0;
}
