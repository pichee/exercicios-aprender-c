//Faca uma funcao que receba dois valores numericos e um sımbolo. Este sımbolo representara a operacao que se deseja efetuar com os numeros. Se o sımbolo for + devera
//ser realizada uma adicao, se for  uma subtracao, se for  uma divisao e se for sera
//efetuada uma multiplicacao.

//Make a function receb two values and make a frame with the math operations the user choose the operation and the numbers after show the result
#include <stdio.h>
    int funcao(char s,int n1,int n2){
        switch (s)
        {
        case '+':
            n1=n1+n2;
            printf("The result is %i",n1);
            break;
        case '-':
            n1=n1-n2;
             printf("The result is %i",n1);
            break;
        case '*':
            n1=n1*n2;
             printf("The result is %i",n1);
            break;
        case '/':
            n1=n1/n2;
            printf("The result is %i",n1);
            break;
        }}
        int main(){
            int n1,n2;
            char t;
            while (t!='+'&&t!='-'&&t!='/'&&t!='*')
            {
                printf("Enter some math operations + or - or / or *:\n");
                scanf(" %c",&t);
            }
            printf("Enter a number:");
            scanf("%i",&n1);
            printf("Enter a other number:");
            scanf("%i",&n2);
            funcao(t,n1,n2);
            
        }
