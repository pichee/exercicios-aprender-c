//Read how old is of a employee and show if he can retire:
//•be at least 65 years old;
// our be thirty work;
//be at least 60 years old and work for at least twenty five years.
#include <stdio.h>
    int main(){
        int i,w;
        printf("How old are you?\n ");
        scanf("%i",&i);
        printf("How long do you work?\n ");
        scanf("%i",&w);
        if(i>=65 || w>=30 || (i>=60 && w>=25)){
            printf("You can retire");
            
        }else{
            printf("You can't retire");
        }
    }
