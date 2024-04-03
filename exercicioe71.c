//8. Fac¸a um programa que mostre ao usuario um menu com 4 opc¸ ´ oes de operac¸ ˜ oes ma- ˜
//tematicas (as b ´ asicas, por exemplo). O usu ´ ario escolhe uma das opc¸ ´ oes e o seu pro- ˜
//grama entao pede dois valores num ˜ ericos e realiza a operac¸ ´ ao, mostrando o resultado e ˜
//saindo.
#include <stdio.h>
    int main(){
        int c,n1,n2;
        printf("Choose what you can do\n");
        printf("--------------\n");
        printf("addition[1]\n");
        printf("multiplication[2]\n");
        printf("subtraction[3]\n");
        printf("division[4]\n");
        printf("--------------\n");
        printf("Put the number attached");
        scanf("%i",&c);
        if (c<4 && c>0){
            switch(c){
                case 1:
                printf("Enter a whole number");
                scanf("%i",n1);
                printf("Enter other whole number");
                scanf("%i",n2);
                n1=n1+n2;
                printf("The addition of this numbers is %i",n1);
                case 2:
                printf("Enter a whole number");
                scanf("%i",n1);
                printf("Enter other whole number");
                scanf("%i",n2);
                n1=n1*n2;
                printf("The multiplication of this numbers is %i",n1);
                case 3:
                printf("Enter a whole number");
                scanf("%i",n1);
                printf("Enter other whole number");
                scanf("%i",n2);
                n1=n1-n2;
                printf("The subtraction of this numbers is %i",n1);
                case 4:
                printf("Enter a whole number");
                scanf("%i",n1);
                printf("Enter other whole number");
                scanf("%i",n2);
                n1=n1/n2;
                printf("The division of this numbers is %i",n1);
                }else{
                    printf("Invalid number");
            }
        }
    }
