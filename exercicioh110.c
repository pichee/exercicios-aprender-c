//Make a program read the a number and show the odd number  in order decrescent;
#include <stdio.h>
int main(){
    int c;
    int n,a;
    int a1;

    printf("Enter a  whole number odd\n");
    scanf("%i",&n);
    c=n%2;
    a1=n;
    if(c==1)
    {
    while(a<=n){
        
        printf("\n%i",a1);
        a1=a1-2;
        a++;
        a++;
    }}else{
        printf("ERROR");
    }}
