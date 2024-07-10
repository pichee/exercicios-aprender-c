//Faca uma funcao recursiva que calcule e retorne o N-esimo termo da sequencia Fibo
//nacci. Alguns numeros desta sequencia sao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

//Make a function that calculate the N in the sequence the fibonacii
#include <stdio.h>
int fibo(int n){
    if (n==1)
    {
        printf("0");
        return 0;
    }
    if (n==2)
    {
        printf("1");
        return 0;
    }
    if (n==3)
    {
        printf("1");
        return 0;
    }
    int aux=1,i=3,n1=1,r=2;
    while (i<n-1)
    {   n1=aux;
        aux=r;
        r=r+n1;
        i++;
    }
    printf("%i",r);
    
    
} 
int main(){
    int n;
    printf("Enter a number:");
    scanf("%i",&n);
    fibo(n);
}
