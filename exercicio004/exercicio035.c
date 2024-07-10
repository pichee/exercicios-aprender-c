//. Faca um programa que leia dois numeros a e b (positivos menores que 10000) e:
//• Crie um vetor onde cada posicao e um algarismo do numero. A primeira posicao e
//o algarismo menos significativo;
//• Crie um vetor que seja a soma de a e b, mas faca-o usando apenas os vetores
//construıdos anteriormente.

//Make two vectores a and b next each numbers is a algorsth 
//after add both

#include <stdio.h>

int main() {
    int a=0,va[5],vb[5],p=0,i=0,i1=0,b,pb,aux,s=0;
    while(i==0){
    printf("What is the value of a:\n");
    scanf("%i",&a);
    if(a<10000){
        i++;
    }
    else{
        printf("This can't be value of a\n");
    }}
    while(i1==0){
    printf("What is the value of b:\n");
    scanf("%i",&b);
    if(a<10000){
        i1++;
    }
    else{
        printf("This can't be value of b\n");
    }
    }
    if(a<=1000){
        va[0]=(a/1000)%10;
        va[1]=(a/100)%10;
        va[2]=(a/10)%10;
        va[3]=(a%10);
        p=4;
    }
    else if(a<=100 && a>=999){
        va[0]=(a/100)%10;
        va[1]=(a/10)%10;
        va[2]=(a%10);
        p=3;
    }
    else if(a<=10 && a>=99){
        va[0]=(a/10)%10;
        va[1]=(a%10);
        p=2;
    }
    else{
        va[0]=(a%10);
        p=1;
    }
        if(b<=1000){
        vb[0]=(b/1000)%10;
        vb[1]=(b/100)%10;
        vb[2]=(b/10)%10;
        vb[3]=(b%10);
        pb=4;
    }
    else if(b<=100 && b>=999){
        vb[0]=(b/100)%10;
        vb[1]=(b/10)%10;
        vb[2]=(b%10);
        pb=3;
    }
    else if(b<=10 && b>=99){
        vb[0]=(b/10)%10;
        vb[1]=(b%10);
        pb=2;
    }
    else{
        vb[0]=(b%10);
        pb=1;
    }
    for(aux=0;aux<p;aux++){
        s+=va[aux];
    }
    for(aux=0;aux<pb;aux++){
        s+=vb[aux];
    }
    printf("The add is %i",s);
    }
