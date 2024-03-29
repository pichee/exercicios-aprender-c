//Read a integer number between ( 1000 and 9999) and show one number by line 1
#include <stdio.h>
    int main(){
        float n,n2,n3,n1,n4;
        printf("Enter a number between 1000 and 9999 ");
        scanf("%f",&n);
           if((n >= 1000) && (n <= 9999))
            {
                n4=((int)(n/1000))%10;
                n3=((int)(n/100))%10;
                n2=((int)(n/10)) % 10;
                n1=((int)n) % 10;
            }
            if((n<1000)||(n>9999)){
            printf("This number is not allowed");
            }else{
            printf("%.0f\n",n4);
            printf("%.0f\n",n3);
            printf("%.0f\n",n2);
            printf("%.0f\n",n1);
            }
    }
    
