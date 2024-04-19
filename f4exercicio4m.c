//Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois va
//lores X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu programa
//devera escrever a soma dos valores encontrados nas respectivas posicoes X e Y .

//Make a program read a vector(8 positions )and show the add x and y;

#include <stdio.h>
int main(){
    int v[8];
    int a,y,x,a1=1,s=0;
    for(a=0;a<8;a++){
        printf("Enter a number:");
        scanf("%i",&v[a]);
    }
    while (a1==1)
    {
    printf("Enter a value of X\n");
    scanf("%i",&x);
    printf("Enter a value of Y\n");
    scanf("%i",& y);
    if(x>7||y>7 ||x<0 ||y<0){
        printf("Enter a value until 7");
    }
    else{
        a1++;
    }
    }
    s=v[x]+v[y];
    printf("The somation of x and y is %i",s);
}
