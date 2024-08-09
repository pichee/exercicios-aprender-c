//Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.
//Ask the user enter three numbers and show the sum.
#include <stdio.h>
int somanumeros(int a,int b,int c){
return a+b+c;
}
int main ()
{
    int numeros[3],soma=0,a=0;
    for(a=0;a<3;a++){
    printf("Enter the %i°  while number:",a+1);
    scanf("%i",&numeros[a]);
    }
    soma=somanumeros(numeros[1],numeros[2],numeros[0]);
    printf("The add This numbers is %i",soma);

}