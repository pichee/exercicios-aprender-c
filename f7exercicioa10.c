//Faca uma funcao que receba dois numeros e retorne qual deles e o maior

//Make a program receb two numbers and return how is bigger
#include <stdio.h>
    int maior(int n1,int n2){
        if(n1>n2){
            printf("%i Is the bigger number",n1);
        }else{
            printf("%i Is the bigger number",n2);
        }}
    int main(){
        int n1,n2,aux;
        printf("Enter a number:");
        scanf("%i",&n1);
        printf("Enter a other number:");
        scanf("%i",&n2);
        aux=maior(n1,n2);
    }
