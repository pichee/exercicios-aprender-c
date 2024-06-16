//Faca um programa que leia dois numeros N e M:
//• Crie e leia uma matriz N x M de inteiros;
//• Crie e construa uma matriz transposta M x N de inteiros.
//• Mostre as duas matrizes.

//Make a progra that read two numbers N and M:
//Make a matrix transposta and show the two matrizes

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Enter a number N: ");
    scanf("%d", &n);
    printf("Enter a number M: ");
    scanf("%d", &m);


    int **vector = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        vector[i] = (int *)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter the number [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &vector[i][j]);
        }
    }


    printf("This is the transposition matrix:\n");
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", vector[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(vector[i]);
    }
    free(vector);

    return 0;
}
