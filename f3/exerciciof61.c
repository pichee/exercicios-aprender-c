//Faca um programa que calcule o maior numero palındromo feito a partir do produto de
//dois numeros de 3 dıgitos. Ex: O maior palındromo feito a partir do produto de dois
//numeros de dois dıgitos e 9009 = 91*99.

//Founde the bigger palındromo by produc by three numbers
#include <stdio.h>
int main(){
    int n=100,p=100,n1,n2,n3,n4,n5,n6,d=0,r=-1;
        while (n<999)
        {       p=100;
            while(p<999){
            d=n*p;
            if(d>10000&&d<100000){
            n1=(d/10000)%10;
            n2=(d/1000)%10;
            n3=(d/100)%10;
            n4=(d/10)%10;
            n5=(d/1)%10;
            if(n1==n5 && n2==n4 && d>r){
            r=d;
            }}
            else if(d>100000){
            n1=(d/100000)%10;
            n2=(d/10000)%10;
            n3=(d/1000)%10;
            n4=(d/100)%10;
            n5=(d/10)%10;
            n6=(d/1)%10;
            if(n1==n6&&n2==n5&&n3==n4 &&d>r){
            r=d;
            }
            }
            p++;}
            n++;
        }
        printf("%i",r);
        return 0;
}
