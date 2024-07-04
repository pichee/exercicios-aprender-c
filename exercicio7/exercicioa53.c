//Faca uma funcao que verifica se uma matriz quadrada de ordem N e a matriz identidade.

//Make a function receb a matrix the order  And verify if is a indendity matrix
#include <stdio.h>
    int inde(int max){
        int r[max][max],a=0,b=0;
        for(a=0;a<max;a++){
            b=0;
         for(b=0;b<max;b++){
         printf("Enter a number for a matrix position[%i][%i]",a+1,b+1);
         scanf("%i",&r[a][b]);
         }   
        }
        a=0;
        b=0;
        int c=0;
        for(a=0;a<max;a++){
             b=0;
         for(b=0;b<max;b++){
             if(a==b && r[a][b]==1){
                 c++;
             }else if(a!=b && r[a][b]==0){
                 c++;
             }else{
                 break;
             }
         }
        }
        if(c==max*max){
            printf("This is a indendity matrix");
        }else{
            printf("This is not a indendity matrix");
        }
        
        
    }
    int main(){
        int c;
        printf("Enter How many lines and colunes do you want the matrix have:");
        scanf("%i",&c);
        inde(c);
    }
