//Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mes
//correspondente a este numero. Isto e, janeiro se 1, fevereiro se 2, e assim por diante.
//The user chose a number between 1 and 12;
//And the program show the month Related;
#include <stdio.h>
    int main(){
        int n;
        printf("Enter a number between 1 and 12 ");
        scanf("%i",&n);
            switch(n){
                case 1:
                    printf("January\n");
                break;
                case 2:
                    printf("February\n");
                break;
                case 3:
                    printf("March\n");
                break;
                case 4:
                    printf("April\n");
                break;
                case 5:
                    printf("May\n");
                break;
                case 6:
                    printf("June\n");
                break;
                case 7:
                    printf("July\n");
                break;
                case 8:
                    printf("August\n");
                break;
                case 9:
                    printf("September\n");
                break;
                case 10:
                    printf("October\n");
                break;
                case 11:
                    printf("November\n");
                break;
                case 12:
                    printf("December\n");
                break;
                
            }
    }
