//Faca uma funcao recursiva para calcular os numeros de Pell. Os numeros de Pell sao
//definidos pela seguinte recursao
//p(n) = 0 se n = 0
//p(n) = 1 se n = 1
//p(n) = 2p(n-1)+ p(n-2) se n > 1 

//make a function that receb
//p(n) = 0 se n = 0
//p(n) = 1 se n = 1
//p(n) = 2p(n-1)+ p(n-2) se n > 1 
#include <stdio.h>
int funcao(int n){
    if (n==0)
    {
        printf("0");
        return 0;
    }
    if (n==1)
    {
        printf("1");
        return 0;
    }
    if (n>1)
    {
        printf("%i",n-1+n-2);
    }
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%i",&n);
    funcao(n);
}
