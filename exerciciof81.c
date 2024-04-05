//Make a program that reads three positive integer numbers and performs 
//the calculation of one of the following means according to a numerical value entered by the user:
#include <stdio.h>
#include <math.h>
int main(){
    int m;
    float n,n1,n2;
    printf("Chose a media for make\n---------------\n1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n---------------\n");
    scanf("%i",&m);
        if(m>4){
            printf("ERROR");
        }else{
            printf("Enter a number\n");
            scanf("%f",&n);
            printf("Enter a number\n");
            scanf("%f",&n1);
            printf("Enter a number\n");
            scanf("%f",&n2);
        }
    switch(m){
        case 1:
        n=n*n1*n2;
        n=cbrt(n);
        printf("The media is %.2f",n);
        break;
        case 2:
        n=(n + (2 * n1) + (3 * n2)) / 6.0;
         printf("The media is %.2f",n);
        break;
        case 3:
        n = 3.0 / ((1.0 / n) + (1.0 / n1) + (1.0 / n2));
        printf("The media harmonica is %.2f\n", n);
        break;
        case 4:
        n=(n+n1+n2)/3;
        printf("The media Aritmetica is %.2f\n", n);
        
        
            
    }
}
