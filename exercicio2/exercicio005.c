//Faca um programa que receba um numero inteiro e verifique se este numero e par ou ımpar.
//enter a number and show If he is pair our odd

include <stdio.h>

int main()
{
    int n;
    printf("Enter a int number");
    scanf("%i",&n);
    n=n % 2;
    if (n==0){
        printf("This number is pair ");
    }
    else{
        printf("This number is odd ");
}
}
