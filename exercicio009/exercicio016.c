//Considere a seguinte declaracao: int A, *B, **C, ***D; Escreva um programa que leia a
//variavel a e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas
//os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
//o quadruplo.

//Make a program tha calculate the double triple and quadruple:
#include <stdio.h>
int main(){
  int n,valor=2;
  int *a,*b=&valor,*c=&valor,*d=&valor;
  printf("Enter a number:");
  scanf("%i",&n);
  printf("%i\n",*b*n);
  valor=valor+1;
  printf("%i\n",*c*n);
  valor++;
  printf("%i",*d*n);
}
