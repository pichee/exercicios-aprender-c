//Make a program for read the sequences
//1 + 2 + 3 + 4 + 5 + ... + n
//1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
//1 + 3 + 5 + 7 + ... + (2n +1)
#include <stdio.h>
int main(){
    int n,a=1,s2,s3=0;
    int s1=1;
    printf("Enter a whole number ");
    scanf("%i",&n);
    while(a<=n){
        printf("%i ",s1);
        s1=s1+1;
        a++;
        }
        printf("\n");
    if(a!=0){
        a=1;
    }
    while(a<=n){
         s2=2*a-1;
        printf("%i ",s2);
        a++;
    }
    if(a!=0){
        a=1;
    }
    printf("\n");
    while(a<=n){
        s3=s3+1;
        printf("%i ",s3);
        a++;
        s3=2*a;
    }
}
