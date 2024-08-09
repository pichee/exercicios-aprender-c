//Leia um numero real e imprima o resultado do quadrado desse numero.
//Read a float number and show the result in the square.
#include <stdio.h>

int
main ()
{
   float numero=0,quadrado=0;
  printf ("Enter a number:");
  scanf("%f",&numero);
  quadrado=numero*numero;
  printf("The square is %.2f",quadrado);    
  return 0;
}