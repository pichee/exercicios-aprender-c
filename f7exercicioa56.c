//Faca uma funcao que recebe, por parametro, uma matriz A[7][6] e uma linha N e retorne
//a soma dos elementos dessa linha.

//Make a function receb a matrix A[7][6] and the user need return a add a line
#include <stdio.h>
    int funcao(int n[7][6]){
        int i=0,s=0;
        printf("How line do you want return the add value:");
        scanf("%i",&i);
        s=n[i][0]+n[i][1]+n[i][2]+n[i][3]+n[i][4]+n[i][5]+n[i][6];
        printf("the add this princiapal and secondary diagonal is %i",s);
    }
    int main(){
        int i=0,a=0,n[7][6];
        for(i=0;i<7;i++){
            a=0;
            for(a=0;a<6;a++){
                printf("Enter a number:");
                scanf("%i",&n[i][a]);
            }
        }
        funcao(n);
    }
