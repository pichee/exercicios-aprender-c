//Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.
//Ask the user enter three numbers and show the sum.
#include <stdio.h>

int
main ()
{
    int a=0;
    int n,s;
     while (a<3){
         printf("Enter a number:");
         scanf("%i",&s);
         n=n+s;
         a++;
                }
    printf("the sum is igual %i",n);

}
