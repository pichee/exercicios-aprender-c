//Faca um programa que leia varios numeros, calcule e mostre:
//(a) A soma dos numeros digitados
//(b) A quantidade de numeros digitados
//(c) A media dos numeros digitados
//(d) O maior numero digitado
//(e) O menor numero digitado
//(f) A media dos numeros pares

//Create a program that reads several numbers, calculates, and shows:
//(a) The sum of the numbers entered
//(b) The quantity of numbers entered
//(c) The average of the numbers entered
//(d) The largest number entered
//(e) The smallest number entered
//(f) The average of the even numbers


#include <stdio.h>
int main(){
    float a=1,s,m,me=99999999,d,c,d1,sp;
    int n;
    while(a==1){
        printf("Enter a number\n");
        scanf("%i",&n);
        s+=n;
        if(n%2==0){
            sp+=n;
                    }
        if(n>m){
            m=n;
                }
        if(n<me&&n!=0){
            me=n;
                }
        if(n==0){
            a++;
                }
        else{
            c++;
        }
    }
    d=s/c;
    d1=sp/c;
    printf("the some is %.2f\n",s);
    printf("Will enter %.2f numbers\n",c);
    printf("the media is %.2f\n",d);
    printf("The bigger enter number is %.2f\n",m);
    printf("The smaller enter number is %.2f\n",me);
    printf("The media of numbers pairs is %.2f\n",d1);
    
}
