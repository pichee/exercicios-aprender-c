//Faca uma funcao que receba um numero inteiro positivo N e retorne o 
//superfatorial desse numero. O superfatorial de um numero N e definida pelo produto dos 
//N primeiros fatoriais de N. Assim, o superfatorial de 4 e sf(4) = 1! * 2! * 3! * 4! = 288.

//make a function the receb a int number and return your superfactorial
#include <stdio.h>
           int factorial (int n){
               int aux=0,auxjr,r=1;
               
               for(aux=0;aux<=n;aux++){
               auxjr=1;
               while(auxjr<=aux){
               r=auxjr*r;
               auxjr++;
               }}
               printf("the result This number in superfatorial is %i",r);
               }
               int main(){
               int a=0;
               printf("Enter a number:");
               scanf("%i",&a);
               factorial(a);
               }
