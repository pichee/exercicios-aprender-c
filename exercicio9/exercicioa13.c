//Elabore uma funcao que receba duas strings como parametros e verifique se a segunda
//string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres
//das strings.

//Make a string that receb two strings and verify if the second string is behind the first

#include <stdio.h>
#include <string.h>

int funcao(char *ponteiro, char *ponteiro1, int tamanho) {
    int c = 0;
    char *ponteirorenicio = ponteiro1;

    while (*ponteiro != '\0') {
        ponteiro1 = ponteirorenicio;
        c = 0; 

        while (*ponteiro1 != '\0' && *ponteiro != '\0') {
            if (*ponteiro != *ponteiro1) {
                break;
            }
            c++;
            ponteiro++;
            ponteiro1++;

            if (c == tamanho) {
                printf("The string 2 is in string 1\n");
                return 1;
            }
        }

        ponteiro -= c - 1;
        ponteiro++;
    }

    printf("The string 2 is not in string 1\n");
    return 0;
}

int main() {
    char palavra[100], palavra1[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", palavra);
    getchar(); // Limpa o buffer do teclado
    printf("Enter another string: ");
    scanf("%99[^\n]", palavra1);

    int tamanho = strlen(palavra1);
    funcao(palavra, palavra1, tamanho);

    return 0;
}
