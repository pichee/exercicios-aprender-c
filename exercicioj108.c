//Make a program read the a number and show the number pairs  until  in order decrescent;
#include <stdio.h>
int main(){
    int c;
    int n,a,a1;

    printf("Enter a  whole number par\n");
    scanf("%i",&n);
    c=n%2;
    a1=n;
    if(c==0){
    while(a<=n){
        
        printf("\n%i",a1);
        a1=a1-2;
        a++;
        a++;
    }}}
