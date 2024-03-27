//Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.
#include <stdio.h>

int
main ()
{
    int a=0;
    int n,s;
     while (a<3){
         printf("digite um número inteiro");
         scanf("%i",&s);
         n=n+s;
         a++;
                }
    printf("a soma dos tres valores é igual a %i",n);

}
