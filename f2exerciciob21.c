//Escreva o menu de opc¸oes abaixo. Leia a opcao do usuario e execute a operacao esco
//lhida. Escreva uma mensagem de erro se a opcao for invalida.
//Escolha a opcao:
//1- Soma de 2 numeros.
//2- Diferenca entre 2 numeros (maior pelo menor).
//3- Produto entre 2 numeros.
//4- Divis~ao entre 2 numeros (o denominador nao pode ser zero).
//Opcao
//Make a frame show 4 options
//1- addition of two numbers
//2- difference of two numbers (bigger of the smaller).
//3- multiplication of two numbers.
//4-division of two numbers(the  denominador can't be zero).
#include <stdio.h>
    int main(){
        float n,n1;
        int c;
        printf("==========\n Chose an operation to make\n 1-addition of two numbers \n 2-difference of two numbers \n 3-multiplication two numbers \n 4-division of two numbers\n==========\nChose:");
        scanf("%i",&c);
        printf("Enter a number\n");
        scanf("%f",&n);
        printf("Enter a other number\n");
        scanf("%f",&n1);
         if(c>4){
                    printf("Wrong number");
                    }
            switch(c){
               case 1:
                n=n+n1;
                printf("The addition is igual %.2f",n);
                break;
                case 2:
                if(n1>n){
                    n=n1-n;
                }else{
                  n=n-n1;  
                }
                printf("The difference is igual %.2f",n);
                break;
                case 3:
                n=n*n1;
                printf("The multiplication is igual %.2f",n);
                break;
                case 4:
                if(n1==0){
                    printf("The denominator can't be zero");
                }else{
                n=n/n1;
                printf("The division is igual %.2f",n);
                break;}
            }
        }
