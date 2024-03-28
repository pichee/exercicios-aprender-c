//Read a whole number and show  the sum of sucessor your triple with the predecessor
//your double.
#include <stdio.h>
    int main(){
        int n,n1,n2;
        printf("type a whole number");
        scanf("%i",&n);
        n1=n+1;
        n1=n1*3;
        n2=n-1;
        n2=n2*n2;
        n=n2+n1;
        printf("The sum of the sucessor triple of your \n number more double predecessor is %i",n);
    }
