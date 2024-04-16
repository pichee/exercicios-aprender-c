//Leia um numero real e imprima o resultado do quadrado desse numero.
//Read a float number and show the result in the square.
#include <stdio.h>

int
main ()
{
    float n;
  printf ("Enter a number:");
  scanf("%f",&n);
  n=n*n;
  printf("The square is %.2f",n);    
  return 0;
}
