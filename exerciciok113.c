//Read a sequencee until one thousand and show the numbeers in thw sequencee and the pairs numbers;
#include <stdio.h>
    int main(){
        int a,n,p,c,cp;
        printf("Enter a number until 1000\n");
        scanf("%i",&n);
        while(n<1000){
            p=n%2;
            if(p==0){
                cp++;
            }
           n++;
           c++;
        }
        printf("This number until 1000 is %i numbers and there is %i pairs numbers",c,cp);
    }
