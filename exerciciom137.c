//Make a program geranete a number between 1 than 1000 and make the user accept
//show if the number is bigger or smaller.



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main(){
        int a=1,n1;
        srand(time(NULL));
        int n=rand()%1001;
        while(a==1){
            printf("\nEnter a number between 1 than 1000 for discovery the number\n");
            scanf("%i",&n1);
            if(n1<n){
                printf("\n%i is bigger than the number",n1);
                
            }
            if(n1>n){
                printf("\n%i is smaller than the number",n1);
                
            }
            if (n1==n)
            {
                printf("\nCongradulations you discover the number");
                a++;
            }
            
        }
    }
