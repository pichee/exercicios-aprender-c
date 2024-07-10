//Faca uma funcao que receba a data atual (dia, mes e ano em inteiro) e exiba-a na tela
//no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
//2000.

//Make a function receb the actually data and showing
#include <stdio.h>
    int data(int d,int m,int a){
            switch(m){
            case 1:
            printf("Janery %i,%i",d,a);
            break;
            case 2:
            printf("February %i,%i",d,a);
            break;
            case 3:
            printf("March %i,%i",d,a);
            break;
            case 4:
            printf("April %i,%i",d,a);
            break;
            case 5:
            printf("May %i,%i",d,a);
            break;
            case 6:
            printf("June %i,%i",d,a);
            break;
            case 7:
            printf("July %i,%i",d,a);
            break;
            case 8:
            printf("August %i,%i",d,a);
            break;
            case 9:
            printf("September%i,%i",d,a);
            break;
            case 10:
            printf("October %i,%i",d,a);
            break;
            case 11:
            printf("November %i,%i",d,a);
            break;
            case 12:
            printf("December %i,%i",d,a);
            break;
        }
    }
    int main(){
        int dia=0,ano=0,mes=0,aux,a=0;
        while(a==0){
        printf("Enter a day:");
        scanf("%i",&dia);
        printf("Enter a month:");
        scanf("%i",&mes);
        printf("Enteer a year:");
        scanf("%i",&ano);
        if(dia>31 || mes>12 ||ano<0){
            printf("ERROR\n");
        }else{
            a++;
        }
            aux=data(dia,mes,ano);
        }
        
    }
