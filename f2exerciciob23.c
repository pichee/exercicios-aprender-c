//Determine se um determinado ano lido e bissexto

//Check if is a leap year
#include <stdio.h>
   int main(){
        int y,a,a1;
        printf("Enter a year\n");
        scanf("%i",&y);
        a=y;
        a1=y;
        y=y%400;
        a=a%4;
        a1=a1%100;
        
        if(y==0 || a==0 && a1!=0){
        printf("This is a leap year");
        }else{
            printf("This is not a leap year");
        }}
    
