//Make a program that reads a positive integer number with three digits (from 100 to 999). 
//Generate another number formed by the inverted digits of the number read.
#include <stdio.h>
    int main(){
        float n,n2,n3,n1;
        printf("Enter a number between 100 and 999 ");
        scanf("%f",&n);
           if((n >= 100) && (n <= 999))
            {
                n3=((int)(n/100));
                n2=((int)(n/10)) % 10;
                n1=((int)n) % 10;
            }
            if((n<100)||(n>1000)){
            printf("This number is not allowed");
            }else{
            printf("%.0f%.0f%.0f",n1,n2,n3);   
            }
    }
    
