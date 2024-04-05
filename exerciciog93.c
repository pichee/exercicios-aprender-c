//Make a program that read the final of cust the  a car

#include <stdio.h>
    int main(){
        float c;
        printf("What is the factory cust of this car\n");
        scanf("%f",&c);
        if(c<=12000){
            c=c+(c*0.05);
            printf("So the final value is %.2f",c);
        }else if(c>12000&&c<25000){
            c=c+(c*0.1)+(c*0.15);
             printf("So the final value is %.2f",c);
        }else{
            c=c+(c*0.15)+(c*0.2);
            printf("So the final value is %.2f",c);
        }
    }
