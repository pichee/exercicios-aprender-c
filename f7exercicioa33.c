//Faca uma funcao que receba um numero N e retorne a soma dos algarismos de N!. Ex:
//se N = 4, N! = 24. Logo, a soma de seus algarismos e 2 + 4 = 6

//Make a function receb a numbeer N and return the add the algharistm de N! Ex
//N=4,N! = 24. 2+4=6;

#include <stdio.h>
    int funcao(int aux,int n){
        int result=1;
        aux=1;
        while(aux<=n){
            result=aux*result;
            aux++;
        }
        aux=result;
        result=0;
        while(aux!=0){
        result=aux%10+result;
        aux=aux-(aux%10);
        aux=aux*0.1;
        }
        printf("%i",result);}
    int main(){
        int a=0,b=1;
        printf("Enter a number:");
        scanf("%i",&a);
        funcao(b,a);
        
    }
