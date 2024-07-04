//A multiplicacao de dois numeros inteiros pode ser feita atraves de somas sucessivas.
//Proponha um algoritmo recursivo Multip Rec(n1,n2) que calcule a multiplicacao de dois
//inteiros.

//Make a function that calculate two product the two numbers:
#include <stdio.h>
int mult(int n,int n1){
    if(n<0 || n1<0){
        printf("ERROR");
        return 0;
    }
    n=n*n1;
    printf("%i",n);
}

int main(){
    int n,n1;
    printf("Enter a number:");
    scanf("%i",&n);
    printf("Enter other number:");
    scanf("%i",&n1);
    mult(n,n1);
}
