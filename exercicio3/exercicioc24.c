//Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores 
//desse numero, com excecao dele proprio. Ex: a soma dos divisores do numero 66  e
//1 + 2 + 3 + 6 + 11 + 22 + 33 = 78

//Addition your divisirors;
#include <stdio.h>
int main(){
    int n,a=1,d,s;
    printf("Enter a number\n");
    scanf("%i",&n);
    while(a<=n){
        d=n%a;
        if(d==0){
            s=s+a;
        }
        
        a++;
    }
    printf("The addition of your divisirors is %i",s);
}
