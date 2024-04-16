//Fac¸a um programa que receba um numero inteiro maior do que 1, e verifique se o numero 
//fornecido e primo ou nao.
//verify if is a number prime or not
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number bigger than 1\n");
    scanf("%i",&n);
    if(n>1 && n%2==1){
        printf("This number is prime");
    }
    else{
        printf("ERROR");
    }
    
    
    return 0;
}
