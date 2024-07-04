//Faca um programa que apresente um menu de opc¸oes para o calculo das seguintes
//operacoes entre dois numeros:
//• adicao (opcao 1)
//• subtracao (opcao 2)
//• multiplicacao (opcao 3)
//• divisao (opcao 4).
//• saıda (opcao 5)

//Make a program read two numbers and following the frame
//• addition [1]
//• subtration [2]
//• multiple [3]
//• division [4]
//• leaf [5]
#include <stdio.h>
    int main(){
        int n,n1,l,a=0;
        while (a==0)
        {
            printf("\nEnter a number");
            scanf("%i",&n);
            printf("Enter other number");
            scanf("%i",&n1);
            printf("CHOOSE THE OPTION\naddition(1)\nsubtraction(2)\nmultiple(3)\ndivision(4)\nshut down(5)\n");
            scanf("%i",&l);
            switch(l){
                case 1:
                    n=n+n1;
                    printf("%i",n);
                    break;
                case 2:
                    n=n-n1;
                    printf("%i",n);
                    break;
                case 3:
                    n=n*n1;
                    printf("%i",n);
                    break;
                case 4:
                    n=n/n1;
                    printf("%i",n);
                    break;
                case 5:
                    a++;
            }
        }
        
    }
