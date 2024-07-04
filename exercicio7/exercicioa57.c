//Faca uma funcao que recebe, por parametro, uma matriz A[7][6] e uma coluna N e retorne
//a soma dos elementos dessa coluna.

//Make a function receb a matrix A[7][6] and the user need return a add a colune
#include <stdio.h>
    int funcao(int n[7][6]){
        int i=0,s=0;
        printf("How colune do you want return the add value:");
        scanf("%i",&i);
        s=n[0][i]+n[1][i]+n[2][i]+n[3][i]+n[4][i]+n[5][i]+n[6][i];
        printf("the add this princiapal colune is %i",s);
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
