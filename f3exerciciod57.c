//Faca um programa que conte quantos numeros primos existem entre a e b, onde a e b
//sao numeros informados pelo usuario
//The user enter a sequence and you show how many prime numbers is
#include <stdio.h>

int main() {
    int n,n1,tro, s = 0, c = 0, i = 2, j, p;
    
    printf("Enter a number:\n");
    scanf("%i", &n);
    printf("Enter other number\n");
    scanf("%i", &n1);
    if(n>n1){
        tro=n1;
        n1=n;
        n=tro;
        
    }
    while (n < n1) {
        p = 1;
      
        for (j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                p = 0; 
                break;
            }
        }

        if (p) {
            c++; 
        }
        if(n==1){
            c--;
        }
        n++;
    }

    printf("The sum of the first %i",c);

    return 0;
}
