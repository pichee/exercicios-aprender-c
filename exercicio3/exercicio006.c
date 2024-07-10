//Fac¸a um programa que leia 10 inteiros e imprima sua media
//Enter 10 numbers and show the media;
#include <stdio.h>
    int main(){
    int a=0;
    int n;
    float s;
    while(a<10){
    printf("Enter a whole number\n");
    scanf("%i",&n);
    s=s+n;
    a++;
    }
    s=s/10;
    printf("The media is igual %.2f",s);
    }

    
