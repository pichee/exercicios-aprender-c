//Faca um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
//e imprima a media geral.

//Make a vector and read the note of fifteen students and show the media;
#include <stdio.h>
    int main(){
        int v[15];
        int a=0,s;
        float m;
        while(a<15){
            printf("Enter a note than 0 between 10\n");
            scanf("%i",&v[a]);
            if(v[a]<0 || v[a]>10){
                printf("This note is wrong\n");
                    }
            else{
                s+=v[a];
                a++;
            }
            m=s/15;
        }
        printf("The media this fifteen students is %.2f",m);
    }
