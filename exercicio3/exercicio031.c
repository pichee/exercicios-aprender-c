//Faca um programa que calcule e escreva o valor de S
//Make a program resolv the equation 1/2+3/2+5/3.....

#include <stdio.h>
    int main(){
        float a=1,d=1,s=0,a1=0;
        while (a<99){
            a1=a/d;
            s=a1+s;
            a=a+2;
            d=d+1;
        }
        s=s-60;
        printf("the addition is %f",s);
    }
