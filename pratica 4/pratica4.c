#include <stdio.h>
#include <string.h>

// Função para calcular o tamanho da string recursivamente
int tamanhoStringRecursiva(const char *str) {
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + tamanhoStringRecursiva(str + 1);
    }
}

// Função para inverter a string recursivamente
void inverterStringRecursiva(const char *str, FILE *arquivo) {
    if (*str != '\0') {
        inverterStringRecursiva(str + 1, arquivo);
        fputc(*str, arquivo);
    }
}

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nomeArquivo[100];
    char linha[1000];

    printf("Informe o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivo);

    arquivoEntrada = fopen(nomeArquivo, "r");

    if (arquivoEntrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    // Lê a linha do arquivo
    fgets(linha, sizeof(linha), arquivoEntrada);
    fclose(arquivoEntrada);

    // Calcula o tamanho da string
    int tamanho = tamanhoStringRecursiva(linha + 1);

    // Abre o arquivo de saída para escrever tamanho
    arquivoSaida = fopen(nomeArquivo, "a");
    fprintf(arquivoSaida, "\nTamanho da string: %d", tamanho);

    // Fecha o arquivo de saída e reabre para escrever o reverso
    fclose(arquivoSaida);
    arquivoSaida = fopen(nomeArquivo, "a");

    // Inverte a string e escreve no arquivo
    inverterStringRecursiva(linha + 1, arquivoSaida);

    fclose(arquivoSaida);
    printf("Tamanho e reverso da string foram escritos no arquivo.\n");

    return 0;
}


