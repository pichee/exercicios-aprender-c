//Faca uma funcao recursiva que calcule o valor da serie S descrita a seguir para um valor
//n > 0 a ser fornecido como parametro para a mesma. 

//Make a function that calcule the value of S if n isd bigger than 0
#include <stdio.h>
    int formula(int n){
        if(n<=0){
        printf("Error");
        return 0;
        }
        float i=1;
        float r=0;
        for (i = 1; i <= n; i++)
        {
            r=r+((1+i*i)/i);
            i++;
        }
        printf("The result is %.2f",r);
    }
    int main(){
        int n;
        printf("Enter a number:");
        scanf("%i",&n);
        formula(n);

    }
