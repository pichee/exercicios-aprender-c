//Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia
//da semana correspondente a este numero. Isto e, domingo se1, segunda-feira se 2, e
//assim por diante.
//Using switch,write a program what read a int number that 1 and  7 and  show the day of the
//week.
#include <stdio.h>
int main(){
    int d;
    printf("Choose a number between 1 and 7\n ");
    scanf("%i",&d);
    switch(d){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }
}
