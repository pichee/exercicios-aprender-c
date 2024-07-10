//Faca uma funcao que recebe, por parametro, uma matriz A[3][3] e retorna a soma dos ˆ
//elementos da sua diagonal principal e da sua diagonal secundaria

//Make a function receb a matrix A[3][3] and return the add your principal diagonal and secondary diagonal
#include <stdio.h>
    int funcao(int n[3][3]){
        int i,a,s=0;
        for(i=0;i<3;i++){
            a=0;
            for(a=0;a<3;a++){
                
            }
        }s=n[0][0]+n[1][1]+n[2][2]+n[0][2]+n[2][0];
        printf("the add this princiapal and secondary diagonal is %i",s);
    }
    int main(){
        int i=0,a=0,n[3][3];
        for(i=0;i<3;i++){
            a=0;
            for(a=0;a<3;a++){
                printf("Enter a number:");
                scanf("%i",&n[i][a]);
            }
        }
        funcao(n);
    }
