//Faca uma funcao para verificar se um numero  e um quadrado perfeito. Um quadrado
//perfeito e um numero inteiro nao negativo que pode ser expresso como o quadrado de
//outro numero inteiro. Ex: 1, 4, 9...

//Verify if the number is a perfect squarle
#include <stdio.h>  
    int quadrado(int quadrado){
        if(quadrado<0){
            printf("This can't be a perfect squarle");
        }
        if(quadrado>0){
            printf("This can be a perfect squarle");
    }}
    int main(){
            int a=0,p=0;
            printf("Enter a number:");
            scanf("%i",&a);
            p=quadrado(a);
        } 
