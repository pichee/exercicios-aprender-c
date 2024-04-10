/Make a program read a harmony number
#include <stdio.h>

int main()
{
    float n,d=0,a=1,ad=2;
    float s=0;
    printf("Enter a whole positive number\n");
    scanf("%f",&n);
    if(n<0){
        printf("ERROR");
    }else{while(a<=n){
        ad=1/a;
        s=s+ad;
         a++;
        
    }
    printf("A soma final sera %.2f",s);

    
}}
