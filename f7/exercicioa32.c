//Faca uma funcao chamada ‘simplifica’ que recebe como parametro o numerador e o de
//nominador de uma fracao. Esta funcao deve simplificar a fracao recebida dividindo o 
//numerador e o denominador pelo maior fator possıvel. Por exemplo, a fracao 36/60 sim-
//plifica para 3/5 dividindo o numerador e o denominador por 12. A funcao deve modificar 
//as variaveis passadas como parametro.

//Make a function the simply a fracion 
#include <stdio.h>
    void simplifica(int n,int n1){
        int d=2;
        while(d<9999){
            if(n%d==0 && n1%d==0){
                n=n/d;
                n1=n1/d;
                d=2;
            }
            d++;
        }
     printf("The simply stay %i/%i",n,n1);
    }
    int main(){
        int n=0,n1=0;
        printf("Enter a number:");
        scanf("%i",&n);
        printf("Enter a number:");
        scanf("%i",&n1);
        simplifica(n,n1);
       
    return 0;
    }
