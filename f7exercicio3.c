//Faca uma funcao para verificar se um numero  e positivo ou negativo. Sendo que o valor
//de retorno sera 1 se positivo, -1 se negativo e 0 se for igual a 0.

//Show what is thee bigger number
#include <stdio.h>
    int verify(int n1,int n2){
        if(n1>n2){
            printf("The bigger number:%i",n1);
        }else if(n2>n1) {
            printf("The bigger number:%i",n2);
        }else{
            printf("the numbers are iguals");
        }
        
    }
    int main(){
        int a=0,b=0,aux;
        printf("Enter a number:");
        scanf("%i",&a);
        printf("Enter a other:");
        scanf("%i",&b);
        aux=verify(a,b);
    }
