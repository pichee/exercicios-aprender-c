//Construa um programa que leia duas strings fornecidas pelo usuario e verifique se a se
//gunda string lida esta contida no final da primeira, retornando o resultado da verificacao.

//Make a program read two strings and verify if the second is contained in the first;

#include <stdio.h>

int main() {
    char v[100], v1[100];
    int c = 0, aux = 0, verify = 0;

    printf("Enter a string:");
    scanf("%99[^\n]", v);
    getchar();

    printf("Enter other string:");
    scanf("%99[^\n]", v1);
    getchar();

    // Calculando o comprimento de v1
    while (v1[c] != '\0') {
        c++;
    }

    // Comparando as strings
    while (v[aux] != '\0' && v1[verify] != '\0') {
        if (v[aux] == v1[verify]) {
            aux++;
            verify++;
        } else {
            verify = 0;
            aux++;
        }
    }

    if (verify == c) {
        printf("The second phase is in the final the first phase\n");
    } else {
        printf("The first phase isn't the final the first phase\n");
    }

    return 0;
}
