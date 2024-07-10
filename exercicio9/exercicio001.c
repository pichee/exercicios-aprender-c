//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de
//cada variavel usando os ponteiros. Imprima os valores das variaveis antes e apos a
//modificacao. 

//Make a pointer that declare if is a int a float and a char and modify the values with the pointer that show the variable
#include <stdio.h>
    int main(){
        int x=10;
        float y=5.5;
        char z='a';
        printf("The value is\n%i\n%.2f\n%c\n",x,y,z);
        int *px=&x;
        float *py=&y;
        char *pz=&z;
        *px=8;
        *py=9.9;
        *pz='c';
        printf("The value is\n%i\n%.2f\n%c\n",*px,*py,*pz);
            }
