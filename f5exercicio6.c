//Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
//pessoa e a palavra “ACEITA”, caso contrario imprimir “NAO ACEITA”.

//Read a name gener and how old if the sex is female and old is smaller than 25 showing
//the name and the word accept if showing not accept
#include <stdio.h>
#include <string.h>
    int main(){
      char   name[100];
      char  g [9];
      int a=0;
      int age=0;
        printf("Enter your name:\n");
        scanf("%s", name);
        while(a==0){
        printf("What is your gender female or male?\n");
        scanf("%s", g);
        if(strcmp(g, "female")==0){
            a++;
        }
        else if(strcmp(g, "male")==0){
            a++;
        }else{
            printf("Enter a valid gender:\n");
        }
    }
        printf("What is your age:\n");
        scanf("%d",&age);
        if(age<25 && strcmp(g, "female")==0){
                printf("%i you are Accept",name);
            }
        else{
            printf("%i you are Don't Accept",name);
        }}
