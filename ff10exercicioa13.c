//Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensoes
//definidas pelo usuario e a leia. Em seguida, implemente uma funcao que receba um
//valor, retorne 1 caso o valor esteja na matriz ou retorne 0 caso nao esteja na matriz.

//Read a Matrix the user the Tell and make a function that the number the user wats be in the Matrix
#include <stdio.h>
#include <stdlib.h>
int numero(int **matriz, int ele, int num);

int main() {
    int ele = 0;
    printf("Digite a quantidade de elementos que você quer: ");
    scanf("%d", &ele);

    int **matriz = (int **)malloc(ele * sizeof(int *));
    for (int i = 0; i < ele; i++) {
        matriz[i] = (int *)malloc(ele * sizeof(int));
    }

    for (int i = 0; i < ele; i++) {
        for (int j = 0; j < ele; j++) {
            printf("Digite o número [%d][%d] da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int num;
    printf("Digite um número que você quer encontrar na matriz: ");
    scanf("%d", &num);

    if (numero(matriz, ele, num)) {
        printf("O número %d está na matriz.\n", num);
    } else {
        printf("O número %d não está na matriz.\n", num);
    }


    for (int i = 0; i < ele; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


int numero(int **matriz, int ele, int num) {
    for (int i = 0; i < ele; i++) {
        for (int j = 0; j < ele; j++) {
            if (matriz[i][j] == num) {
                return 1;
            }
        }
    }
    return 0;
}
