//Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
//quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
//numero e invalido. 
//Read a value and show your square if the number is negative show invalid number
#include <stdio.h>
    int main(){
        float n;
        printf("Put a number");
        scanf("%f",&n);
            if (n>0){
            n=n*n;
            printf("The square root of this number is%.2f",n);
        }
            else{
            printf("invalid number");
            }
        }
