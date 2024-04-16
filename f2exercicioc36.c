// Escreva um programa que, dado o valor da venda, imprima a comissao que dever a ser
//paga ao vendedor. Para calcular a comissao, considere a tabela abaixo:

//Write a program that, given the value of the sale, prints the commission that should be paid to the seller. 
//To calculate the commission, consider the table below:
#include <stdio.h>
    int main(){
        float s;
        printf("How much did you sell\n");
        scanf("%f",&s);
        if(s>=100000){
            s=700+(s*0.16);
            printf("You will receb %.2f",s);
        }else if(s<100000&&s>=80000){
            s=650+(s*0.14);
            printf("You will receb %.2f",s);
        }else if(s<80000&&s>=60000){
            s=600+(s*0.14);
            printf("You will receb %.2f",s);
        }else if(s<60000&&s>=40000){
            s=550+(s*0.14);
            printf("You will receb %.2f",s);
        }else if(s<40000&&s>=20000){
            s=500+(s*0.14);
            printf("You will receb %.2f",s);
        }else{
            s=400+(s*0.14);
            printf("You will receb %.2f",s);
        }
            
        }
        
