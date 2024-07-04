//Leia um numero positivo do usuario, entao, calcule e imprima a sequencia Fibonacci ate
//o primeiro numero superior ao numero lido. Exemplo: se o usuario informou o numero
//30, a sequencia a ser impressa ser a 0 1 1 2 3 5 8 13 21 34.

//Reead a number and show the sequencee the fibonaci under the number exemplo
//30
// 0 1 1 2 3 5 8 13 21 34.
#include <stdio.h>

int main()
{
    int a=0,a1=1,n=0,f,g=0;
    printf("Enter a number\n");
    scanf("%i",&f);
    while(g<f){
        printf("%i ",g);
        g=a+a1;
        a=a1;
        a1=g;
        
    }
    printf("%i",g);
    return 0;
}
