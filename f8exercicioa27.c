//Implemente a funcao h definida recursivamente por:
//h(m,n) = m+1 ,se n = 1
//h(m,n) = n+1 ,se m = 1
//h(m,n) = h(m,n-1)+h(m-1,n) ,se m>1,n>1

//make a function that receb
//h(m,n) = m+1 ,se n = 1
//h(m,n) = n+1 ,se m = 1
//h(m,n) = h(m,n-1)+h(m-1,n) ,se m>1,n>1
#include <stdio.h>
int funcao(int m,int n){
    if (m<=0 ||n<=0)
    {
        printf("ERROR");
        return 0;
    }
    if (m==1)
    {
        n=n+1;
    }
    if (n==1)
    {
        m=m+1;
    }
    if (n>1 && m>1)
    {
        m=m+(m-1);
        n=n+(n-1);
    }
    printf("The result is %i,%i",m,n);
}
int main(){
    int m,n;
    printf("Enter a number:");
    scanf("%i",&m);
    printf("Enter a number:");
    scanf("%i",&n);
    funcao(m,n);
}
