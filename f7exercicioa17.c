//Faca uma funcao que receba dois numeros inteiros positivos por parametro e retorne a 
//soma dos N numeros inteiros existentes entre eles.

//Make a function reeceb two int value and return the set betwen they
#include <stdio.h>
    int maio(int n1,int n2,int conta){
            conta=0;
        while(n1!=n2){
            n1++;
            conta+=n1;
            
        }
        printf("The addition in this set is %i",conta);
    }
    int main(){
        int a=0,b=0,c=0;
        printf("Enter a number:");
        scanf("%i",&a);
        printf("Other number:");
        scanf("%i",&b);
        if(a>b){
            c=a;
            a=b;
            b=c;
            
        }
        maio(a,b,c);
    }
