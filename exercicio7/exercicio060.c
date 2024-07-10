//Escreva uma funcao que retorne a primeira posicao de uma sub-string dentro de uma 
//string. Caso a sub-string nao seja encontrada, a funcao deve retornar -1. 

//Make a function and return a substring betwen a string.If a sub-string don't be found return -1:
#include <stdio.h>
#include <string.h>

int textos(char textou[100]) {
    char find[100];
    int textou_len, find_len;
    int a, b;

    printf("Digite a substring que você deseja encontrar: ");
    getchar();  
    scanf("%99[^\n]", find);

    textou_len = strlen(textou);
    find_len = strlen(find);

    for (a = 0; a <= textou_len - find_len; a++) {
        // Verifica se a substring está presente em textou
        for (b = 0; b < find_len; b++) {
            if (textou[a + b] != find[b]) {
                break;  
            }
        }
        if (b == find_len) {
            printf("'%s' é uma substring de '%s' a partir do índice %d\n", find, textou, a);
            return 1; // Retorna 1 para indicar que a substring foi encontrada
        }
    }
    // Se o loop terminar sem retornar, a substring não foi encontrada
    printf("'%s' não é uma substring de '%s'\n", find, textou);
    return 0;
}

int main() {
    char b[100];
    printf("Digite um texto: ");
    scanf("%99[^\n]", b);
    textos(b);

    return 0;
}
//Precisei do chat nao estou muito bem em string
