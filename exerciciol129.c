//Enter a number between 1000 and 9999 addition ben 2 and make the squarle
#include <stdio.h>
int main(){
    int n,n1=0,n2=0,n3,s;
    printf("Enter a number between 1000 and 9999\n");
    scanf("%i",&n);
    if(n>9999 && n<1000){
        printf("ERROR");
    }else{
        n1=n;
        n2=n;
        n3=n2;
        n=(n/1000)%10;
        n1=(n1/100)%10;
        n2=(n2/10)%10;
        n3=n3%10;
        n1=n*10+n1;
        n3=n2*10+n3;
        n1=n1+n3;
        s=n1*n1;

    }
 printf("%i",s);
}
