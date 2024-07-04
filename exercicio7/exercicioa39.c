//Faca uma funcao ‘Troque’, que recebe duas variaveis reais A e B e troca o valor delas
//(i.e., A recebe o valor de B e B recebe o valor de A)

//Make a function chance receb two variable in float A and B and chance the value they
//A receb B B receb A.

#include <stdio.h>
    void chance(int n1,int n2){
        int aux=n1;
        n1=aux;
        n1=n2;
        n2=aux;
        printf("The New value A is %i and the new value B is %i",n1,n2);
        
    }
    int main(){
        int s,s1;
        printf("Enter a number:");
        scanf("%i",&s);
        printf("Enter a other number:");
        scanf("%i",&s1);
        chance(s,s1);
        
    }
