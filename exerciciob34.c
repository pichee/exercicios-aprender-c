//Read the value the radius the a circule and calculate and show a area do cırcule mathes.
//Area the circule is:π ∗ raio2,consider π = 3.141592.
#include <stdio.h>
    int main(){
        float r,s;
        float pi=3.141592;
        printf("How is the value of your radius ");
        scanf("%f",&r);
        s=pi*(r*r);
        printf("The area of your circule is igual %.2f",s);
        
    }
