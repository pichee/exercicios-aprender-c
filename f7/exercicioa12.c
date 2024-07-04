//Escreva uma funcao que receba um numero inteiro maior do que zero e retorne a soma
//de todos os seus algarismos. Por exemplo, ao numero 251 corresponder a o valor 8 (2
//+ 5 + 1). Se o numero lido n ´ ao for maior do que zero, o programa terminar a com a
//mensagem “Numero invalido”.

//Make a function receb a int number(bigger than zero)and return the add your digits.
#include <stdio.h>
    
        int funcao(int n,int aux){
if (n>=0)
        {while (n!=0)
        {       
         aux=n%10+aux;
         n=n-(n%10);
        n=n*0.1;
        }
        printf("This number correspond a value %i",aux);
        }else{
            printf("This value is not allowed:");
        }}
     int main(){
        int n,aux=0;
        printf("Enter a number:");
        scanf("%i",&n);
        funcao(n,aux);

    }
