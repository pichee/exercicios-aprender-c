//Faca um programa que possua uma funcao para
//• ler 2 notas e retorna-las por parametro (chamar uma funcao dedicada a ler 2 notas
//validas e que devolver os 2 numeros lidos); 
//• calcular a media simples e a media ponderada e retorna-las por parametro, onde a
//segunda nota tem peso 2 media ponderada = (n1 + n2 ∗ 2)/3;

//Make a programação for calculate the mediq
#include <stdio.h>
float funcao(float  *n1,float  *n2){
float media=(*n1+*n2);
media=media/2;
printf("The média is %.2f\n",media);
media=(*n1+(*n2*2))/3;
printf("The weighted média is %.2f",media);
return 0;
}

int main(){
float n1,n2;
printf("Enter the First note:");
scanf("%f",&n1);
printf("Enter the second note:");
scanf("%f",&n2);
funcao(&n1,&n2);
}