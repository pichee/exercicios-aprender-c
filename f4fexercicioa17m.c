//Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
//o numero de alunos cuja pior nota foi na prova 1, o numero de alunos cuja pior nota foi
//na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate
//das piores notas de um aluno, o criterio de desempate e arbitrario, mas o aluno deve ser
//contabilizado apenas uma vez.

//Reas a lot notes of the students and show how is the worts note and how much students got it
#include <stdio.h>

int main() {
    int alunosprova[10][3];
    int i, j, mn1 = 10, mn2 = 10, mn3 = 10, c1 = 0, c2 = 0, c3 = 0,j1=0,j2=0,j3=0;

    for (i = 0; i < 10; i++) {
        j = 0;
        while (j < 3) {
            printf("\nHow much is the note of the %i student in %i exam:", i + 1, j + 1);
            scanf("%i", &alunosprova[i][j]);
            if (alunosprova[i][j] < 0 || alunosprova[i][j] > 10) {
                printf("\nInvalid note trying a number from 0 to 10\n");
            } else {
                j++;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 3; j++) {
            if (alunosprova[i][j] < mn1 && j==0) {
                c1 = 1;
                mn1 = alunosprova[i][j];
            } else if (alunosprova[i][j] == mn1 && i!=j1) {
                c1++;
                j1=i;
            }
            if (alunosprova[i][j] < mn2 && j==1) {
                c2 = 1;
                mn2 = alunosprova[i][j];
            } else if (alunosprova[i][j] == mn2) {
                c2++;
                j2=i;
            }
            if (alunosprova[i][j] < mn3 && j==2) {
                c3 = 1;
                mn3 = alunosprova[i][j];
            } else if (alunosprova[i][j] == mn3) {
                c3++;
                j3=i;
            }
        }
    }
    printf("The worst note in exam 1 is %i and %i students got it\n", mn1, c1);
    printf("The worst note in exam 2 is %i and %i students got it\n", mn2, c2);
    printf("The worst note in exam 3 is %i and %i students got it\n", mn3, c3);
}
