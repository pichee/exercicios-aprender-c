//O maximo divisor comum dos inteiros x e y  e o maior inteiro que e divisıvel por x e y.
//Escreva uma funcao recursiva  mdc que retorna o maximo divisor comum de x e y. O
//mdc de x e y e definido como segue: se y e igual a 0, entao mdc(x,y) e x; caso contrario,
//mdc(x,y) e mdc (y, x%y), onde % e o operador resto.

//make a function that show the mdc and the bigger divisor betwen the numbers:

#include <stdio.h>
int mdc(int n,int m){
    int i=2,mdc=1;
    for (i = 2; n !=1 && m!=1; i++)
    {
        if (n%i==0 && m%i==0)
        {
            mdc=mdc*i;
            n=n/i;
            m=m/i;
        }
        else if (n%i==0)
        {
            n=n/i;
            mdc=mdc*i;
        }
        else if (m%i==0)
        {
            m=m/i;
            mdc=mdc*i;
        }    
    }
    printf("The mdc is %i",mdc);
}
int main(){
    int n,n1;
    printf("Enter a number:");
    scanf("%i",&n);
    printf("Enter a number:");
    scanf("%i",&n1);
    mdc(n,n1);
    
}
