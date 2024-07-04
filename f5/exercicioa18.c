//Faca um programa em que troque todas as ocorrencias de uma letra L1 pela letra L2 em
//uma string. A string e as letras L1 e L2 devem ser fornecidas pelo usuario.

//make a program chance a letter for other
//the letteers neeed provided that user.

#include <stdio.h>
    int main(){
        char v[100],l1,l2;
        int a=0;
        printf("Enter something:");
        scanf("%99[^\n]",v);
        getchar();
        printf("What letter do you chance:\n");
        scanf("%c", &l1);
        getchar();
        printf("What letter do you want?:\n");
        scanf("%c", &l2);
        while(a<100){
            if(v[a]==l1){
                v[a]=l2;
            }
            a++;
        }
        printf("%s",v);
    }
