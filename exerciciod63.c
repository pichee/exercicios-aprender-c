//Make a program what show  the ideal weight for you  the formula is
//• Man: (72.7 ∗ h) − 58
//• woman: (62, 1 ∗ h) − 44, 7
#include <stdio.h>
    int main(){
        char s;
        float h,a;
        const char m = 'm', w = 'w';
        printf("what is your tall? ");
        scanf("%f",&h);
        printf("you are Man or Woman [M/W] ");
        scanf(" %c", &s);
        if (s==m){
           a=(72.7*h)-58;
          printf("\nthe ideal weight for you is %.2f",a);
        }
        if (s==w){
           a=(62.1*h)-44.7;
          printf("\nthe ideal weight for you is%.2f",a);
        }
        if((s!=m)&&(s!=w)){
            printf("\ntrying put m or w");
        }
        
    }
