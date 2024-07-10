//Implemente um programa que leia o nome, a idade e o endereco de uma pessoa e
//armazene os dados em uma estrutura.

//showing the name the person the how old is and the adress
#include <stdio.h>    
struct dados
        {
            char endereco[100];
            int idade;
            char name[51];

        };
    int main(){
        struct dados dados;
        printf("What is your adress:");
        scanf("%99[^\n]",&dados.endereco);
        getchar();
        printf("What is your name:");
        scanf("%50[^\n]",&dados.name);
        printf("How old are you:");
        scanf("%i",&dados.idade);
        printf("NAME:%s\nAdress:%s\nOld:%i",dados.name,dados.endereco,dados.idade);
        
    }
