//Addition your divisirors;
#include <stdio.h>
int main(){
    int n,a=1,d,s;
    printf("Enter a number\n");
    scanf("%i",&n);
    while(a<=n){
        d=n%a;
        if(d==0){
            s=s+a;
        }
        
        a++;
    }
    printf("The addition of your divisirors is %i",s);
}
