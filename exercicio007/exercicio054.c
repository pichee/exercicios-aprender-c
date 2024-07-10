//Faca uma funcao que recebe por parametro uma matriz A[4][4] e retorna a soma dos
//seus elementos.

//Make a function receb a matrix A[4][4] and return the add your elements
#include <stdio.h>
    int funcao(int n[4][4]){
        int i,a,s=0;
        for(i=0;i<4;i++){
            a=0;
            for(a=0;a<4;a++){
                s+=n[i][a];
            }
        }
        printf("the add is %i this vectore is 16",s);
    }
    int main(){
        int i=0,a=0,n[4][4];
        for(i=0;i<4;i++){
            a=0;
            for(a=0;a<4;a++){
                printf("Enter a number:");
                scanf("%i",&n[i][a]);
            }
        }
        funcao(n);
    }
