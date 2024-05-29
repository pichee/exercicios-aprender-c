//Faca uma funcao que receba, por parametro, duas matrizes quadradas de orden N, A e
//B, e retor na uma matriz C, tambem por parametro, que seja o produto matricial de A e B.

//Make a function receb two matrix in ordem n,and return a matrix c is the product the matrix A and B:
#include <stdio.h>
    int produto(int r,int d[r][r],int e[r][r]){
        int c[r][r];
        int a=0,b=0;
        for(a=0;a<r;a++){
            b=0;
            for(b=0;b<r;b++){
                c[a][b]=d[a][b]*e[a][b];
            }
        }
        printf("The product this function is \n");
        a=0;
        b=0;
        int pula=0;
        for(a=0;a<r;a++){
            b=0;
            for(b=0;b<r;b++){
                if(pula==b){
                    printf("\n");
                    pula=0;
                }
                printf("%i ",c[a][b]);
                
        }
    }}
    int main(){
        int max;
        printf("How many lines and colunes do you want in your matrixs: ");
        scanf("%i",&max);
        int i=0,c=0;
        int a[max][max],b[max][max];
        for(i=0;i<max;i++){
            c=0;
            for(c=0;c<max;c++){
                printf("Enter a [%i][%i] value the Matrix A:",i+1,c+1);
                scanf("%i",&a[i][c]);
            }
        }
        i=0;
        c=0;
        for(i=0;i<max;i++){
            c=0;
            for(c=0;c<max;c++){
                printf("Enter a [%i][%i] value the Matrix B:",i+1,c+1);
                scanf("%i",&b[i][c]);
            }
        }
         produto(max,a,b);
    }
   
