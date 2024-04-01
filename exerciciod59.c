//Read two numbers show the bigger and the difference betewen them
#include <stdio.h>
    int main(){
        float n,n1;
        printf("Enter a number ");
        scanf("%f",&n);
        printf("Enter other number ");
        scanf("%f",&n1);
        if (n>n1){
            printf("%.2f, is bigger than %.2f",n,n1);
        }
        else{
            printf("%.2f, is bigger than %.2f",n1,n);
        }
        n=n-n1;
        printf("\nand the difference betewen them %.2f",n);
    }
