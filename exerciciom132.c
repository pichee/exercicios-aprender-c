//Read numbers until the user enter a negative number and show the bigger and the smaller;
#include <stdio.h>
       int main(){
                int n,m=0,me=0;
                printf("Enter  a number ");
                scanf("%i",&n);
                while (n>=0)
                {
                    printf("Enter  a number ");
                    scanf("%i",&n);
                    if(n>m){
                        m=n;
                    }else if(n<=me){
                        me=n;
                    }
                        
                }
                printf("The bigger value is %i and the small is %i",m,me);}
