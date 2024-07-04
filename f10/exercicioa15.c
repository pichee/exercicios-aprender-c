//Faca um programa que leia dois numeros N e M e:
//• Crie e leia uma matriz de inteiros N x M;
//• Localize os tres maiores numeros de uma matriz e mostre a linha e a coluna onde
//estao.

//Show the tree bigger numbers in a matrix
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    printf("Enter a number for N: ");
    scanf("%d", &n);
    printf("Enter a number for M: ");
    scanf("%d", &m);

    int **matriz = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter a number for [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }


    int maior[3] = {0, 0, 0};
    int pos[3][2] = {{-1, -1}, {-1, -1}, {-1, -1}};


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            for (int c = 0; c < 3; c++) {
                if (matriz[i][j] > maior[c]) {
    
                    for (int k = 2; k > c; k--) {
                        maior[k] = maior[k - 1];
                        pos[k][0] = pos[k - 1][0];
                        pos[k][1] = pos[k - 1][1];
                    }
                    maior[c] = matriz[i][j];
                    pos[c][0] = i;
                    pos[c][1] = j;
                    break;
                }
            }
        }
    }

    printf("The three biggest numbers are:\n");
    for (int c = 0; c < 3; c++) {
        printf("%d at position [%d][%d]\n", maior[c], pos[c][0] + 1, pos[c][1] + 1);
    }

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
