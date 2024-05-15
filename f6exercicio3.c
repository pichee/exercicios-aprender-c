//Construa uma estrutura aluno com nome, numero de matrıcula e curso. Leia do usuario
//a informacao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na
//tela.

//make a strunct read a name the student the number and what he study(Read five students )
//and after show the result;
#include <stdio.h>
    struct students
    {
        char name[5][31];
        int number[5];
        char curso[5][50];
    };
    int main(){
        struct students students;
        int a=0;
        for (a = 0; a < 5; a++)
        {
            printf("What is your name:");
            scanf("%30[^\n]",students.name[a]);
            getchar();
            printf("What is your course:");
            scanf("%49[^\n]",students.curso[a]);
            getchar();
            printf("How old are you:");
            scanf("%i",&students.number[a]);
            getchar();
        }
        a=0;
        for (a = 0; a < 5; a++)
        {
            printf("%s is course %s and have %i old\n",students.name[a],students.curso[a],students.number[a]);
        
    }}
