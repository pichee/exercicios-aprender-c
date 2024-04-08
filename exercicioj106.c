//Make a program show descending order of the a number;
#include <stdio.h>
int main(){
    int c;
    int n,a;

    printf("Enter a  whole number\n");
    scanf("%i",&n);
    c=n;
    while(a<=n){
        printf("\n%i",c);
        c=c-1;
        a++;
    }
}
