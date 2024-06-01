//Um racional e qualquer numero da forma  p/q, sendo p inteiro e q inteiro nao nulo.E
//conveniente representar um racional por um registro:
//struct racional{
//int p, q;
//};
//Vamos convencionar que o campo q de todo racional e estritamente positivo e que o
//maximo divisor comum dos campos p e q e 1. Escreva
//(a) uma funcao reduz que receba inteiros a e b e devolva o racional que representa a/b;
//(b) uma funcao neg que receba um racional x e devolva o racional -x;
//6
//(c) uma funcao soma que receba racionais x e y e devolva o racional que representa a
//soma de x e y;
//(d) uma funcao mult que receba racionais x e y e devolva o racional que representa o
//produto de x por y;
//(e) uma funcao div que receba racionais x e y e devolva o racional que representa o

//// A rational number is any number of the form p/q, where p is an integer and q is a non-zero integer. 
// It is convenient to represent a rational number using a record:
// struct rational{
//int p, q;
// };
// We will agree that the field q of any rational number is strictly positive and that the greatest common divisor of the fields p and q is 1. Write
// (a) a function reduce that receives integers a and b and returns the rational that represents a/b;
// (b) a function neg that receives a rational x and returns the rational -x;
// (c) a function sum that receives rationals x and y and returns the rational that represents the sum of x and y;
// (d) a function mult that receives rationals x and y and returns the rational that represents the product of x by y;
// (e) a function div that receives rationals x and y and returns the rational that represents the division of x by y;
#include <stdio.h>
    racional(int p,int q){
            while (p<=0){
                printf("Enter a number for numerator:");
            scanf("%i",&p);
            }
            
            while (q<=0)
            {
                printf("Enter a number for denominator:");
                scanf("%i",&q);
            }
            printf("The aswer is %i/%i\n",p,q);


            p=0;
            q=0;


            while (p<=0){
                printf("Enter a number for numerator:");
            scanf("%i",&p);
            }
            
            while (q<=0)
            {
                printf("Enter a number for denominator:");
                scanf("%i",&q);
            }
            printf("The aswer is -%i/%i\n",p,q);
            int p1=0,q1=0;
            while (p1<=0){
                printf("Enter a number for numerator:");
            scanf("%i",&p1);
            }
            
            while (q1<=0)
            {
                printf("Enter a number for denominator:");
                scanf("%i",&q1);
            }
            while (p<=0){
                printf("Enter a number for numerator:");
            scanf("%i",&p);
            }
            
            while (q<=0)
            {
                printf("Enter a number for denominator:");
                scanf("%i",&q);
            }
            int numerator=p1+p;
            int denominator=q1+q;
            printf("The aswer is %i/%i\n",numerator,denominator);
             numerator=p1*p;
             denominator=q1*q;
            printf("The aswer is %i/%i\n",numerator,denominator);
            numerator=p1*q;
             denominator=q1*p;
              printf("The aswer is %i/%i\n",numerator,denominator);
                   return 0;
                        };
    int main(){
        int a=0,b=0;
        racional(a,b);
    }
