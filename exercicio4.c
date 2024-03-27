//Leia um numero real e imprima o resultado do quadrado desse numero.
#include <stdio.h>

int
main ()
{
    float n;
  printf ("Digite um número");
  scanf("%f",&n);
  n=n*n;
  printf("O quadrado desse número é %.2f",n);    
  return 0;
}
