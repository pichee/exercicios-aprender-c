//Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores
//lidos na ordem inversa.

//Read a value read 6 whole numbers pairs and,showing the descresent order
#include <stdio.h>
    int main(){
        int v[6];
        int a=0,c;
        while(a<6){
            printf("Enter a number pair:");
            scanf("%i",&v[a]);
            if(v[a]%2==1){
                printf("This number is doesn't pair\ntrying again\n");
                
            }
            else{
                a++;
            }
        }
        for(a=5;a>-1;a--){
            printf("%i\n",v[a]);
        }
    }
