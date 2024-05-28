//Faca uma funcao que calcule o desvio padrao de um vetor v contendo n numeros
//Desvio Padrao:

//Make a function and calculate a desvio padrao of a vector hold n numbers
#include <stdio.h>
#include <math.h>
int desvio(int max){
    float soma=1,n[max];
    int a=0;
    for ( a = 0; a < max; a++)
    {
        printf("Enter a number:");
        scanf("%f",&n[a]);
        soma+=n[a];
    }
    soma=soma/max;
    a=0;
    float desvio[max];
    for ( a = 0; a < max; a++)
    {
        if(soma>n[a]){
        desvio[a]=soma-n[a];
    }else{
        desvio[a]=n[a]-soma;
    }
    }
    soma=0;
    for (a = 0; a < max; a++)
    {
        soma+=desvio[a]*desvio[a];
    }
    soma=soma/max;
    printf("The Desvio padrao is %.2f",soma);
}
    int main(){
        int b;
        printf("How much numbers do you want:");
        scanf("%i",&b);
        desvio(b);
    }
