//A multiplicac¸ao de dois numeros inteiros pode ser feita atraves de somas sucessivas.
//Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a multiplicacao de dois
//inteiros.

//Make a multiplication the two numbers using pointer 
#include <stdio.h>
int main(){
int a=0,n=0;
printf("Enter a number:");
scanf("%i",&a);
printf("Enter a number:");
scanf("%i",&n);
int resultado=a*n;
int *ponteiro=&resultado;
printf("The result is %i",*ponteiro);
}
