//Escreva um programa que contenha duas variaveis inteiras. Leia essas variaveis do
//teclado. Em seguida, compare seus enderecos e exiba o conteudo do maior endereco.

//Read two variable.Next show the bigger adress:

#include <stdio.h>
    int main(){
        int n,n1;
        printf("Enter a number:");
        scanf("%i",&n);
        printf("Enter a number:");
        scanf("%i",&n1);
        int *ponteiro=&n;
        int *ponteiro1=&n1;
        printf("The adress the first is:%i\n",ponteiro);
        printf("The adress the first is:%i\n",ponteiro1);
        if (ponteiro>ponteiro1)
        {
            printf("The bigger adress is %i",ponteiro);
        }
        else
        {
            printf("The bigger adress is %i",ponteiro1);
        }
    }
