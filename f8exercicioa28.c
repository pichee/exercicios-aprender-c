//Faca uma funcao recursiva para computar a funcao de Ackerman. A funcao de Acherman
//e definida recursivamente nos numeros nao negativos como segue:
//A(m,n) = n+1 se m = 0
//A(m,n) = A(m-1,1) se m > 0 e n = 0
//A(m,n) = A(m-1,A(m,n-1)) se m > 0 e n > 0


//make a function that receb
//A(m,n) = n+1 se m = 0
//A(m,n) = A(m-1,1) se m > 0 e n = 0
//A(m,n) = A(m-1,A(m,n-1)) se m > 0 e n > 0
#include <stdio.h>
int funcao(int m,int n){
    if (m==0)
    {
        printf("0 %i",n+1);
        return 0;
    }
    if (m>0 && n==0)
    {
        printf("%i 1",m-1);
        return 0;
    }
    if (m>0 && n>0)
    {
        printf("%i %i",m-1+m,n-1);
    }
}
int main(){
    int m,n;
    printf("Enter a number:");
    scanf("%i",&m);
    printf("Enter a number:");
    scanf("%i",&n);
    funcao(m,n);
}
