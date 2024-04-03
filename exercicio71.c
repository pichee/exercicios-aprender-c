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
        printf("Put the number attached\n");
        scanf("%i",&c);
        if (c<=4 && c>0){
            switch(c){
                case 1:
                printf("Enter a whole number\n");
                scanf("%i",&n1);
                printf("Enter other whole number\n");
                scanf("%i",&n2);
                n1=n1+n2;
                printf("The addition of this numbers is %i\n",n1);
                break;
                case 2:
                printf("Enter a whole number\n");
                scanf("%i",&n1);
                printf("Enter other whole number\n");
                scanf("%i",&n2);
                n1=n1*n2;
                printf("The multiplication of this numbers is %i\n",n1);
                break;
                case 3:
                printf("Enter a whole number\n");
                scanf("%i",&n1);
                printf("Enter other whole number\n");
                scanf("%i",&n2);
                n1=n1-n2;
                printf("The subtraction of this numbers is %i\n",n1);
                break;
                case 4:
                printf("Enter a whole number\n");
                scanf("%i",&n1);
                printf("Enter other whole number\n");
                scanf("%i",&n2);
                n1=n1/n2;
                printf("The division of this numbers is %i\n",n1);
                break;
                }}else {
                    printf("Invalid number\n");
            }
        }
    