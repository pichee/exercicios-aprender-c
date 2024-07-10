//Faca um programa que leia duas matrizes 2 x 2 com valores reais. Ofereca ao usuario
//um menu de opcoes:
//(a) somar as duas matrizes
//(b) subtrair a primeira matriz da segunda
//(c) adicionar uma constante as duas matrizes
//(d) imprimir as matrizes

//Create a program that reads two 2 x 2 matrices with real values. Offer the user a menu of options:
//(a) add the two matrices together
//(b) subtract the first matrix from the second
//(c) add a constant to both matrices
//(d) print the matrices

#include <stdio.h>

int main() {
    int v1[2][2];
    int v[2][2];
    int vr[2][2];
    int i, j, c = 0, choose = 0, a = 0, tem = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Choose a number for the %i th position in the first matrix: ", c + 1);
            scanf("%i", &v[i][j]);
            printf("Choose a number for the %i th position in the second matrix: ", c + 1);
            scanf("%i", &v1[i][j]);
            c++;
        }
    }

    while (a == 0) {
        printf("What do you want?\n[1] Sum two matrices\n[2] Subtract the first matrix from the second\n[3] Add a constant to both matrices\n[4] Show the matrices\n");
        scanf("%i", &choose);

        if (choose < 1 || choose > 4) {
            printf("INVALID NUMBER\n");
        } else if (choose == 1) {
            printf("Result of the sum:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    vr[i][j] = v[i][j] + v1[i][j];
                    printf("%d ", vr[i][j]);
                }
                printf("\n");
            }
        } else if (choose == 2) {
            printf("Result of the subtraction:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    vr[i][j] = v[i][j] - v1[i][j];
                    printf("%d ", vr[i][j]);
                }
                printf("\n");
            }
        } else if (choose == 3) {
            while (tem == 0) {
                printf("Please choose the line you want to add a constant to: ");
                scanf("%i", &i);
                if (i > 2 || i < 0) {
                    printf("Invalid line\n");
                } else {
                    tem = 1;
                }
            }
            tem = 0;
            while (tem == 0) {
                printf("Please choose the column you want to add a constant to: ");
                scanf("%i", &j);
                if (j > 2 || j < 0) {
                    printf("Invalid column\n");
                } else {
                    tem = 1;
                }
            }
            printf("How much do you want to add? ");
            int add;
            scanf("%i", &add);
            v[i][j] += add;
            v1[i][j] += add;
        } else if (choose == 4) {
            printf("Matrix 1:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d ", v[i][j]);
                }
                printf("\n");
            }
            printf("Matrix 2:\n");
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d ", v1[i][j]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
