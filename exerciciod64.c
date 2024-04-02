//Make a program that soma the numbers exemplo
//987=(9+8+7),if the number is zero show invalid number
#include <stdio.h>

int main()
{
    int n,a,s;
    printf("Enter a number bigger than zero");
    scanf("%i",&n);
    if(n>0){
        while(n>0){
            a=n%10;
            s=s+a;
            n=n/=10;
        }
           printf("The soma is %d\n",s);
    } else {
        printf("invalid number\n");
    }
}
