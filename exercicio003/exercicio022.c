//Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
//uma sequencia arbitraria de notas (validas no intervalo de 10 a 20) e que mostre na tela,
//como resultado, a correspondente media aritmetica. O numero de notas com que o aluno
//pretenda efetuar o calculo nao ser a fornecido ao programa, o qual terminar a quando for
//introduzido um valor que nao seja valido como nota de aprovacao.

//Write a complete program that allows any student to input, via keyboard, an arbitrary sequence of grades (valid in the range from 10 to 20) and displays on the screen, as a
//result, the corresponding arithmetic mean. The program should not be provided with the number
//of grades the student intends to calculate, and it should end when an invalid value, not representing a passing grade, is entered.
#include <stdio.h>

int main() {
    float n,a=1,s=0,m;
        while (a==1){
        printf("Enter a note between 10 and 20\n");
        scanf("%f",&n);
        if(n<=20 && n>=10){
            m++;
            s+=n;
        }
        else{
            a++;
        }
        
        }
        m=s/m;
    
    printf("The media is igual %.2f",m);
}
