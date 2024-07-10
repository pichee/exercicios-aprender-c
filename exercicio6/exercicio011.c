//Faca um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), arma
//zenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
//o vetor dos aprovados e o vetor dos reprovados, considerando a media mınima para a
//aprovacao como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos
//dados do vetor de reprovados.

//Showing a lot of intrutions and show if the student has been aproveed

#include <stdio.h>
#include <string.h>

struct vetor{
    char nome[10][31],nomea[10][31],nomean[10][31];
    int matricula[10],aprovado[10],naprovado[10];
    float media[10];
};

    int main(){
        struct vetor vetor;

        int a=0,i=0,n=0;
        for(a=0;a<10;a++){
            printf("Enter a name: ");
            scanf("%30[^\n]",vetor.nome[a]);
            getchar();
            printf("Enter the code the student: ");
            scanf("%i",&vetor.matricula[a]);
            printf("Enter the fian media 0 bewteen 10: ");
            scanf("%f",&vetor.media[a]);
            getchar();
            if(vetor.media[a]>=5){
                strcpy(vetor.nomea[i], vetor.nome[a]);
                i++;
            }else{
                strcpy(vetor.nomean[n], vetor.nome[a]);
                n++;
            }
        }
        a=0;
        printf("Aprove names:");
        for(a=0;a<i;a++){
            printf("%s\n",vetor.nomea[a]);
        }
        a=0;
        printf("Don't aprove names:");
        for(a=0;a<n;a++){
            printf("%s\n",vetor.nomean[a]);
        }}
