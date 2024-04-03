//Make a program read a area the trapeze
#include <stdio.h>

int main()
{
    float sb,bb,h,r;
    printf("Enter the smaller base ");
    scanf("%f",&sb);
    printf("Enter the bigger base ");
    scanf("%f",&bb);
    printf("Enter the height the trapeze ");
    scanf("%f",&h);
    if(sb==0 || bb==0){
            printf("ERROR");
    }else{
    r=(sb+bb)*h;
    printf("The area this trapeze is %.2f",r);
    }
}
