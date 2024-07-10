//Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
//conter a matrıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
//da terceira prova.
//(a) Permita ao usuario entrar com os dados de 5 alunos.X
//(b) Encontre o aluno com maior nota da primeira prova.X
//(c) Encontre o aluno com maior media geral. X 
//(d) Encontre o aluno com menor media geral 
//(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
//aprovacao.

// Create a structure representing the students of a specific course. The structure must
// contain the student's registration number, name, grade of the first test, grade of the second test, and grade
// of the third test.
// (a) Allow the user to enter the data of 5 students. X
// (b) Find the student with the highest grade in the first test. X
// (c) Find the student with the highest overall average. X
// (d) Find the student with the lowest overall average.
// (e) For each student, indicate if they passed or failed, considering a grade of 6 for
// passing.

#include <stdio.h>

struct dados {
    int mad, p1, p2, p3, m1, mg, mm, c, cm, c1;
    char name[5][31];
    int media[5];
};

int main() {
    struct dados dados;
    int i = 0, a = 0;

    dados.mg = 0;
    dados.mm = 10;
    dados.m1 = 0;

    for (i = 0; i < 5; i++) {
        printf("What is your name: ");
        scanf(" %30[^\n]", dados.name[i]);
        getchar(); 

        printf("What is your registration: ");
        scanf("%i", &dados.mad);


        a = 0;
        while (a == 0) {
            printf("How much did you get on the first test: ");
            scanf("%i", &dados.p1);
            if (dados.p1 < 0 || dados.p1 > 10) {
                printf("Enter a valid note:\n");
            } else {
                a = 1;
            }
        }

        if (dados.m1 < dados.p1) {
            dados.m1 = dados.p1;
            dados.c1 = i;
        }

        a = 0;
        while (a == 0) {
            printf("How much did you get on the second test: ");
            scanf("%i", &dados.p2);
            if (dados.p2 < 0 || dados.p2 > 10) {
                printf("Enter a valid note:\n");
            } else {
                a = 1;
            }
        }


        a = 0;
        while (a == 0) {
            printf("How much did you get on the third test: ");
            scanf("%i", &dados.p3);
            if (dados.p3 < 0 || dados.p3 > 10) {
                printf("Enter a valid note:\n");
            } else {
                a = 1;
            }
        }

        dados.media[i] = (dados.p1 + dados.p2 + dados.p3) / 3;

        if (dados.media[i] > dados.mg) {
            dados.mg = dados.media[i];
            dados.c = i;
        }
        if (dados.media[i] < dados.mm) {
            dados.mm = dados.media[i];
            dados.cm = i;
        }
    }

    printf("The user with the highest grade in the first test is %s\n", dados.name[dados.c1]);
    printf("The user with the highest average is %s\n", dados.name[dados.c]);
    printf("The user with the lowest average is %s\n", dados.name[dados.cm]);

    for (i = 0; i < 5; i++) {
        if (dados.media[i] >= 6) {
            printf("%s is approved\n", dados.name[i]);
        } else {
            printf("%s isn't approved\n", dados.name[i]);
        }
    }

    return 0;
}

