//Faca uma funcao que receba por parametro dois valores X e Z. Calcule e retorne o
//resultado de XZ para o programa principal. Atencao nao utilize nenhuma funcao pronta
//de exponenciacao.

//Make a function receb a potency
#include <stdio.h>
    int raiz(int n1,int n2,int aux,int r){
        aux=0;
        while(aux<n2){
            r=r*n1;
            aux++;
        }
        printf("The result is %i",r);
    }
    int main(){
        int a=0,b=0,c=0,r=1;
        printf("Choose a number:");
        scanf("%i",&a);
        printf("Choose your potency:");
        scanf("%i",&b);
        raiz(a,b,c,r);
    }
