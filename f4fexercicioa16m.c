//Faca um programa para corrigir uma prova com 10 questoes de multipla escolha (a, b,
//c, d ou e), em uma turma com 3 alunos. Cada questao vale 1 ponto. Leia o gabarito, e
//para cada aluno leia sua matricula (numero inteiro) e suas respostas. Calcule e escreva:
//Para cada aluno, escreva sua matrıcula, suas respostas, e sua nota. O percentual de
//aprovacao, assumindo media 7.0.

//make a program read a exam with ten question the a until e and read the registration the student
//after show how much the student acert
#include <stdio.h>
int main(){
    int alunos[3]={-1,-2,-3},s1=0,s2=0,s3=0;
    char resposta[3][10],gabarito[10];
    int i=0,j=0;
   while (i<3)
    {
       printf("Enter the registration the student:\n");
        scanf("%i",&alunos[i]);
        if(alunos[i]<0){
           printf("The registration can't be a negative number");
        }
        else if(alunos[1]==alunos[0]|| alunos[2]==alunos[0] ||alunos[2]==alunos[1]){
            printf("The registration can't be iguais\n");
        }
        else{
            i++;
        }
    }
    
    i=0;
    printf("Gabarit\n");
    while(i<10)
    {  printf("Question %i\n",i+1);
        scanf(" %c",&gabarito[i]);
        if (gabarito[i]=='a' || gabarito[i]=='b' || gabarito[i]=='c' ||gabarito[i]=='d' || gabarito[i]=='e')
            {
                i++;
            }
            else{
                printf("Trying a answer by 'a' until 'e'\n");
            }
    }

    for (i = 0; i <3; i++)
    {   
        j=0;
        printf("Exam student %i\n",alunos[i]);
        while(j<10){
            printf("Question %i\n",j+1);
            scanf(" %c",&resposta[i][j]);
            if (resposta[i][j]=='a' || resposta[i][j]=='b' || resposta[i][j]=='c' || resposta[i][j]=='d' || resposta[i][j]=='e')
            {
                j++;
            }
            else{
                printf("Trying a answer by 'a' until 'e'\n");
            }}

           for (j = 0; j < 10; j++) {
           if (gabarito[j] == resposta[i][j]) {
            if (i == 0) {
                s1++;
            } else if (i == 1) {
                s2++;
            } else if (i == 2) {
                s3++;
            }
        
            }
                  }
    }

  
        printf("The student %i can acert %i questions",alunos[0],s1);
       printf("The student %i can acert %i questions",alunos[1],s2);
       printf("The student %i can acert %i questions",alunos[2],s3);
       

    }
