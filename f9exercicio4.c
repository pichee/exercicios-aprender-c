//Faca um programa que leia 2 valores inteiros e chame uma funcao que receba estas
//2 variaveis e troque o seu conteudo, ou seja, esta funcao e chamada passando duas
//variaveis A e B por exemplo e, apos a execucao da funcao, A contera o valor de B e B
//tera o valor de A.

//Make a function that receb two numbers after chance this numbers
#include <stdio.h>
int funcao(int *ponteiro,int *ponteiro1){
    int aux;
    aux=*ponteiro;
    *ponteiro=*ponteiro1;
    *ponteiro1=aux;
    printf("Now the value of A is %i and the value of B is %i:",*ponteiro,*ponteiro1);
}
int main(){
    int a,b;
    printf("What is the value the A:");
    scanf("%i",&a);
    printf("What is the value the B:");
    scanf("%i",&b);
    funcao(&a,&b);  
}
