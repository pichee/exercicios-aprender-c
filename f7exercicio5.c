#include <stdio.h>
    int formula(float r,float v){
        v = 4/3 * 3.14 * (r*3);
        printf("The volume the ball is %f",v);
    }
    int main(){
        float x=0,a=0;
        printf("Enter the volumee the ray:");
        scanf("%f",&x);
        a=formula(x);
    }
