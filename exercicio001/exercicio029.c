//Leia quatro notas, calcule a media aritmetica e imprima o resultado.
//read four numbers, calculate the Arithmetic Mean and showing the result.
#include <stdio.h>
int main(){
    int i=0;
    int a,n;
    while (i<4)
    {
        printf("type a entire number");
        scanf("%i",&n);
        a = n+a;
        i++;
    }
    a=a/4;
    printf("The Arithmetic mean is equal %.2i",a);
    
}
