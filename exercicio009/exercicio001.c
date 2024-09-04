/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para in-
teiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.*/
#include <stdio.h>
int main(){
int numero=10;
float real=9.987654;
char letra='a';
printf("%i \n %f \n %c",numero,real,letra);
int *ponteiro_int=&numero;
float *ponteiro_float=&real;
char *ponteiro_char=&letra;
*ponteiro_int=20;
*ponteiro_float=10.1;
*ponteiro_char='u';
printf("\n%i \n %f \n %c",numero,real,letra);

}
