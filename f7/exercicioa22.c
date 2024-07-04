//Crie uma funcao que receba como parametro um valor inteiro e gere como saıda n linhas
//com pontos de exclamacao conforme o exemplo abaixo (para n = 5):
//!
//!!
//!!!
//!!!!
//!!!!!

//Make a program than user digit how much lines the ! he want see
#include <stdio.h>
int excla(int l,int a,int c,int a1){
    a=0;
    while (a<l)
    {

        while (a1<=c)
        {
           printf("!");
           a1++;
        }
        printf("\n");
        c++;
        a++;
        a1=0;
            }
    
    
    
}
int main(){
    int l,a=0,c=0,a1=0;
    printf("Enter How ! lines do you want:");
    scanf("%i",&l);
    excla(l,a,c,a1);
}
