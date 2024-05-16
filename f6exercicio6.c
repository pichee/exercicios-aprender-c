//Faca um programa que realize a leitura dos seguintes dados relativos a um conjunto de
//alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de
//ate 10 alunos. Apos ler todos os dados digitados, e depois de armazena-los em um vetor
//de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias
//finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).

//make a progam read a the name of the students the code of the disciplena note 1 and note 2
//and in the final show the media final

#include <stdio.h>
    struct dados
    {
      char  name[10][31];
      int matricula[10];
      float p1,p2,media[10];
      
    };
    int main(){
        struct dados dados;
            int a=0,i=0;
            for (a = 0; a < 10; a++)
            {
                i=0;
                printf("Enter a name:");
                scanf("%30[^\n]",dados.name[a]);
                getchar();
                printf("What is the code this student:");
                scanf("%d",&dados.matricula[a]);
                getchar();
                while (i==0)
                {
                printf("How much did you get in the first exam:(0 between 1):");
                scanf("%f",&dados.p1);
                getchar();
                printf("How much did you get in the second exam:(0 between 2):");
                scanf("%f",&dados.p2);
                if (dados.p1<=1 && dados.p1>=0 && dados.p2>=0 && dados.p2<=2)
                {
                    i++;
                }else{
                    printf("Something was wrong try again\n");
                }
                }
                dados.media[a]=(dados.p1+(dados.p2*2))/3;
                getchar();
            }
            a=0;
            for (a = 0; a < 10; a++)
            {
                printf("The %s has media %.2f\n",dados.name[a],dados.media[a]);
            }
            
            
    }
