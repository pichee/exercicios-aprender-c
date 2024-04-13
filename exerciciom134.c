//Read numbers until the user put a negative number or zero and
//show the square thee cube and thee squaree root this number.
#include <stdio.h>
#include <math.h>
int main()
{
    int n=1,s,c,r;
    while(n>0){
    printf("Enter a number\n");
    scanf("%i",&n);
    s=n*n;
    c=s*n;
    r=sqrt(n);
    if(n>0){
        printf("The square this number is %i\n",s);
        printf("the cube is %i\n",c);
        printf("and the square root is %i\n",r);
    }
    if(n<0){
        printf("Error trying a positive number");
    }
    }
}
