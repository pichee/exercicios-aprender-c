//Escreve um programa que verifique quais numeros entre 1000 e 9999 (inclusive) pos
//suem a propriedade seguinte: a soma dos dois dıgitos de mais baixa ordem com os dois
//dıgitos de mais alta ordem elevada ao quadrado e igual ao proprio numero. Por exemplo,
//para o inteiro 3025, temos que:
//30 + 25 = 55
//552 = 3025

//Enter a number between 1000 and 9999 addition ben 2 and make the squarle
#include <stdio.h>
int main(){
    int n,n1=0,n2=0,n3,s;
    printf("Enter a number between 1000 and 9999\n");
    scanf("%i",&n);
    if(n>9999 && n<1000){
        printf("ERROR");
    }else{
        n1=n;
        n2=n;
        n3=n2;
        n=(n/1000)%10;
        n1=(n1/100)%10;
        n2=(n2/10)%10;
        n3=n3%10;
        n1=n*10+n1;
        n3=n2*10+n3;
        n1=n1+n3;
        s=n1*n1;

    }
 printf("%i",s);
}
