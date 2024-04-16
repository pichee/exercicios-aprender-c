//Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e
//quantas vezes o maior numero foi lido. A quantidade de numeros a serem lidos deve ser
//fornecida pelo usuario.

//Write an algorithm that reads a certain amount of numbers and prints the largest one, as well as how many times
//the largest number was read. The amount of numbers to be read should be provided by the user.
#include <stdio.h>
int main(){
    int a,r,n;
    int c=1;
    int m=-2147483648;
    printf("Enter how many numbers are be read\n");
    scanf("%i",&r);
    if(r!=0){
    while (a<r){
        printf("Enter a number\n");
        scanf("%i",&n);
        if(n>m){
            m=n;
        }else if(n==m){
            c++;
        }
    
    a++;
        
    }
    if(c==0||c!=1){
        c=c+1;
    }
    printf("The bigger number is %i and it is enter %i times",m,c);
}}
