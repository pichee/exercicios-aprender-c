//Leia uma matriz 5 x 10 que se refere respostas de 10 questoes de multipla escolha
//referentes a 5 alunos. Leia tambem um vetor de 10 posicoes contendo o gabarito de
//respostas que podem ser a, b, c ou d. Seu programa devera comparar as respostas
//de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a
//pontuacao correspondente a cada aluno.

//show the notes of a students
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char vg[5][10];
    int vr[10];
    int vp[5] = {0};
    int vtn[5][10];

    srand(time(NULL));


    for (int i = 0; i < 10; i++) {
        vr[i] = rand() % 5 + 1; 
    }


    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d:\n", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("Resposta %d do aluno %d: ", j + 1, i + 1);
            scanf(" %c", &vg[i][j]);

       
            vtn[i][j] = vg[i][j] - 'a' + 1;

            if (vtn[i][j] == vr[j]) {
                vp[i]++;
            }
        }
    }


    printf("\nPontuações dos Alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d: %d acertos\n", i + 1, vp[i]);
    }

    return 0;
}
