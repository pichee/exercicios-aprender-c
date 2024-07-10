//Fac¸a um programa que gera um numero aleatorio de 1 a 1000. O usuario deve tentar
//acertar qual o numero foi gerado, a cada tentativa o programa dever a informar se o
//chute e menor ou maior que o numero gerado. O programa acaba quando o usuario
//acerta o numero gerado. O programa deve informar em quantas tentativas o numero foi 
//descoberto.

//Make a program geranete a number between 1 than 1000 and make the user accept
//show if the number is bigger or smaller.



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
        int a=1,n1;
        srand(time(NULL));
        int n=rand()%1001;
        while(a==1){
            printf("\nEnter a number between 1 than 1000 for discovery the number\n");
            scanf("%i",&n1);
            if(n1<n){
                printf("\n%i is bigger than the number",n1);
                
            }
            if(n1>n){
                printf("\n%i is smaller than the number",n1);
                
            }
            if (n1==n)
            {
                printf("\nCongradulations you discover the number");
                a++;
            }
            
        }
    }
