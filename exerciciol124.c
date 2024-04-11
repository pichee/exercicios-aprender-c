//Make a program for to dices rolling and show the if they is bigger smallingor igual.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int d1,d2,n,a;
    printf("Enter the number how many times the dices wil be rolling\n");
    scanf("%i",&n);
    srand(time(NULL));
    while(a<n){
        
        d1=(rand())%6+1;
        d2=(rand())%6+1;

    
    if(d1<d2){
        printf("%i  is smalling than %i\n",d1,d2);
    }else if (d1>d2){
        printf("%i  is bigger than %i\n",d2,d1);
    }else{
        printf("%i  is igual than %i\n",d2,d1);
    }
    a++;
    }}
