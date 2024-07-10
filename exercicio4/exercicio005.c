//Leia um vetor de 10 posicoes. Contar e escrever quantos valores pares ele possui.

//Reaad a vector the ten positions and cont how many values pairs there is.

#include <stdio.h>
    int main(){
        int v[10];
        int a=0,c;
        for(a==0;a<10;a++){
            printf("Enter a number:");
            scanf("%i",&v[a]);
            if(v[a]%2==0){
                c+=1;
            }
        }
        printf("This vectore have %i values pairs",c);
        
    }
