#include <stdio.h>
#include <stdlib.h>
//Faca um programa que leia quatro numeros a, b, c e d, que serao as dimensoes de duas
//matrizes,
//• Crie e leia uma matriz, dadas as dimensoes dela;
//• Crie e construa uma matriz que seja o produto de duas matrizes. Na sua funcao
//main(), imprima as duas matrizes e o produto entre elas, se existir.

int** allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

void freeMatrix(int **matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void readMatrix(int **matrix, int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int** multiplyMatrices(int **matrix1, int **matrix2, int a, int b, int c, int d) {
    int **result = allocateMatrix(a, d);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++) {
            result[i][j] = 0;
            for (int k = 0; k < b; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    return result;
}

int main() {
    int a, b, c, d;

    printf("Enter the dimensions of the first matrix (a b): ");
    scanf("%d %d", &a, &b);
    printf("Enter the dimensions of the second matrix (c d): ");
    scanf("%d %d", &c, &d);

    if (b != c) {
        printf("Matrix multiplication not possible: number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }
    int **matrix1 = allocateMatrix(a, b);
    readMatrix(matrix1, a, b);


    int **matrix2 = allocateMatrix(c, d);
    readMatrix(matrix2, c, d);


    printf("\nFirst Matrix:\n");
    printMatrix(matrix1, a, b);


    printf("\nSecond Matrix:\n");
    printMatrix(matrix2, c, d);


    int **productMatrix = multiplyMatrices(matrix1, matrix2, a, b, c, d);

    printf("\nProduct Matrix:\n");
    printMatrix(productMatrix, a, d);

    freeMatrix(matrix1, a);
    freeMatrix(matrix2, c);
    freeMatrix(productMatrix, a);

    return 0;
}
