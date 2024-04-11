//Make a program show the multiple the a number in 1 between a 20.
#include <stdio.h>
int main(){
    int a=1,n;
    printf("enter a whole positive whole number");
    scanf("%i",&n);
    while(a<=20){
        if(n%a==0){
            printf("this number is division by %i\n",a);
        }
        a++;
    }
}
