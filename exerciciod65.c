//Show a number and if is positive show the log if is negative show invalid number
#include <stdio.h>
#include <math.h>
    int main(){
        float n;
        printf("Enter a number ");
        scanf("%f",&n);
        if (n>0){
            n=log10(n);
            printf("The log of this number is %f",n);
        }
        else{
            printf("Invalid number");
        }
    }
