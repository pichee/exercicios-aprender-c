//Faca um algoritmo que leia um numero positivo e imprima seus divisores. 
//Show de divisors the a number
#include <stdio.h>
int main(){
    int n,a=1,d;
    printf("Enter a number\n");
    scanf("%i",&n);
    while(a<=n){
        d=n%a;
        if(d==0){
            printf("%i is divisors this number\n",a);
        }
        a++;
    }
}
