//Faca um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
//informacoes sobre alunos de uma disciplina, sendo todas as informacoes do tipo inteiro:
//Primeira coluna: numero de matrıcula (use um inteiro)
// Segunda coluna: media das provas
// Terceira coluna: media dos trabalhos
//Quarta coluna: nota final
//Elabore um programa que:
//(a) Leia as tres primeiras informacoes de cada aluno
//(b) Calcule a nota final como sendo a soma da media das provas e da media dos
//trabalhos
//(c) Imprima a matrıcula do aluno que obteve a maior nota final (assuma que so existe
//uma maior nota
//(d) Imprima a media aritmetica das notas finais 

//Make a program read a lot test and show how much each student average show the bigger note too.
#include <stdio.h>

int main() {
    int m[4][3]; 
    float media[4],somadasoma=0;
    int i, j,maior=-1;

    for (i = 0; i < 4; i++) {
        int s = 0; 
        j = 1; 

        while (j == 1) {
            printf("What is the registration student: ");
            scanf("%i", &m[i][0]);
            j++;
        }

        while (j == 2) {
            printf("What is the note of exam: ");
            scanf("%i", &m[i][1]); 
            if (m[i][1] > 10 || m[i][1] < 1) {
                printf("Put a note from 1 to 10: ");
            } else {
                s = m[i][1];
                j++;
            }
        }

        while (j == 3) {
            printf("What is the note of the job: ");
            scanf("%i", &m[i][2]); 
            if (m[i][2] > 10 || m[i][2] < 1) {
                printf("Put a note from 1 to 10: ");
            } else {
                s += m[i][2];
                j++;
            }
        }

        media[i] = s / 2.0;
        somadasoma+=media[i];
        if (media[i]>maior)
        {
            maior=media[i];
        }
        
        }
        somadasoma=somadasoma/4;
        printf("The bigger note is %i\n",maior); 
    for (i = 0; i < 4; i++) {
        printf("Student registration: %i, Average: %.2f\n", m[i][0], media[i]);
    }
    printf("The media of the students is %.2f",somadasoma);

    return 0;
}
