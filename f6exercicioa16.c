//Faca um programa que seja uma agenda de compromissos e:
//• Crie e leia um vetor de 5 estruturas de dados com: compromisso (maximo 60 letras)
//e data. A data deve ser outra estrutura de dados contendo dia, mes e ano. 
//• Leia dois inteiros M e A e mostre todos os compromissos do mes M do ano A.
//Repita o procedimento ate ler  M = 0.

//Make a schedule
#include <stdio.h>
struct agenda
{
    char compromisso[5][31];
    int d[5],m[5],y[5];
};
    int main(){ 
        struct agenda agenda;
        int a=0;
        for ( a = 0; a < 5; a++)
        {
            printf("What is your apoitment:");
            scanf("%30[^\n]",agenda.compromisso[a]);
            printf("What is the day:");
            scanf("%i",&agenda.d[a]);
            printf("What is the month:");
            scanf("%i",&agenda.m[a]);
            printf("What is the year:");
            scanf("%i",&agenda.y[a]);
        }
        a=0;
        for ( a = 0; a < 5; a++){
            printf("You have %s in %i/%i/%i",agenda.compromisso[a],agenda.d[a],agenda.m[a],agenda.y[a]);
        }
        return 0;
        

        
    }
