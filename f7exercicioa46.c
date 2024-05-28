//Crie um programa contendo as seguintes funcoes que recebem um vetor V numeros reais como parametro:
//• Impressao normal do vetor.
//• Impressao inversa.
//• Funcao que retorna a media aritmetica dos elementos do vetor.

//Make a vector that follow te next options make a vector with float numbers:
//*Showing the vector
//*Showing the vector in opposite order
//*Calculate the aritmetica media
#include <stdio.h>
    int media(float aux[10]){
        int a;
        float soma=0;

        for (a = 0; a < 10; a++)
        {
            soma+=aux[a];
        }
        soma=soma/10;
        printf("The media this numbers is:%.2f",soma);
        
    }
    int main(){
        float v[10];
        int aux;

        for (aux = 0; aux < 10; aux++)
        {
            printf("Enter a number:");
            scanf("%.2f",&v[aux]);
        }
        aux=0;
        printf("This is the numbers the vector:\n");
        for (aux = 0; aux < 10; aux++)
        {
            printf("%.2f\n",v[aux]);
        }
        printf("This is the numbers the vector in opposite order:\n");
        for (aux = 9; aux >= 0; aux--)
        {
            printf("%.2f\n",v[aux]);
        }
        media(v);
    }
