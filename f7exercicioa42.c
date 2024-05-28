//Faca uma funcao que receba um vetor de reais e retorne a media deles

//Make a function that make a media the a vector
#include <stdio.h>
    int bigger(float n[]){
        int a=0;
        float b;
        while(a<10){
            b+=n[a];
            a++;
        }
        b=b/10;
        printf("The media is %2.f",b);
    }
    int main(){
        float n[10];
        int a;
        while(a<10){
            printf("Enter a number:");
            scanf("%f",&n[a]);
            a++;
        }
        bigger(n);
        }
