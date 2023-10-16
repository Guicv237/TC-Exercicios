#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Digite um caractere: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        printf("%c é uma letra.\n", ch);
    } else {
        printf("%c não é uma letra.\n", ch);
    }

    return 0;
}
