//Crie um programa que compara duas strings (nao use a funcao strcmp)
//Make a program the compare two strings (Don't use the fuction strcmp)

#include <stdio.h>
#include <string.h>
    int main(){
        char n[30];
        char n1[30];
        int a=0;
        printf("Enter a name:");
        scanf("%29[^\n]%*c", n);
        printf("\nEnter other name:");
        scanf("%29[^\n]%*c", n1);
        while(a<30){
            if(n[a]==n1[a]){
                a++;
            }else{
                break;
            }
            
        }
        if(a==30){
            printf("The names are iguals");
        }else{
            printf("The names aren't iguals");
        }
        
    }
