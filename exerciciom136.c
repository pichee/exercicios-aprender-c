#include <stdio.h>
int main(){
    float c,km,ms;
    char a='y';
    while (a=='y' || a=='Y')
    {
      
    
    printf("\nDo you want tranform m/s for km/h [1]\nOur do you want transform km/h for m/s[2]\n");
    scanf("%f",&c);
    if(c==1){
        printf("Enter your km/h ");
        scanf("%f",&km);
        ms=km/3.6;
        printf("this equivalent a %f m/s",ms);
    }
    else if(c==2){
        printf("Enter your m/s ");
        scanf("%f",&ms);
        km=ms*3.6;
        printf("this equivalent a %f km",km);

    }
    else{
        printf("trying again something is wrong");
    }
        printf("\ndo you want transform other speed?[Y/N]");
        scanf(" %c", &a);
    }
}
