//Calcule as raızes da equacao de 2 o grau.
//calculatee the quadratic equations
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,d,r,x,x1;
    printf("What is the value of a\n");
    scanf("%f",&a);
    printf("What is the value of b\n");
    scanf("%f",&b);
    printf("What is the value of c\n");
    scanf("%f",&c);
    d = b*b - (4*a*c);
    r=sqrt(-d);
    x1=(-b + r) /(2*a);
    x=(-b - r) /(2*a);
    if(a==0 || d<0){
        printf("The squares is %.2f and %.2f",x1,x);
    }else{
        printf("ERROR");
}
}
