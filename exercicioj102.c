//Enter 10 numbers and show the bigger and the smaleer.
#include <stdio.h>
    int main(){
        int a;
        float n,m;
        float anao=999999999999999999999999999999999;
        
        while(a<10){
            printf("Enter a number\n");
            scanf("%f",&n);
            if(n>m){
                m=n;
            }
            if(n<=anao){
                anao=n;
            }
            a++;
        }
        printf("The bigger value is %.2f and the smaller value is %.2f",m,anao);
    }
