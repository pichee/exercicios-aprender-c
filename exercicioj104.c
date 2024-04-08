//calculate the addition of the 50 firsts pair numbers;
#include <stdio.h>
int main(){
    int n,a,s,c;
    while(a<100){
        n=n+1;
        s=n%2;
        if(s==0){
            
           c=n+c;
        }
        a++;
    }
    printf("The addition of the 50 firts  pairs numbers is %i",c);

}
