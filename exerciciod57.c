//Read a number and if the number is positive make the square and your square root
#include <stdio.h>
#include <math.h>
    int main(){
        float q,r;
        printf("Enter a number");
        scanf("%f",&r);
        if(r>0){
        q=r*r;
        r=sqrt(r);
        printf("the square root is %.2f and your square is %.2f",r,q);
        }else{
            printf("put one number positive");
        }
    }
