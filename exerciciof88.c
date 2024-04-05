//Read a data and verific if is valid
#include <stdio.h>
int main(){
    int a2,a1,a,s,m,d,y;
    printf("What day is\n");
    scanf("%i",&d);
    printf("What month is\n");
    scanf("%i",&m);
    printf("What year is?\n");
    scanf("%i",&y);
    a2=m % 2;
    a=y % 400;
    a1=y% 4;
    s=y%100;
    if(d>31 || m>12){
        printf("This data is invalid");
    }else if(a==0||a1==0&&s!=0&&d<=29){
        printf("This data is correct");
    }else if(a==0||a1==0&&s!=0&&d>29){
        printf("This data is invalid");
    }else if(a2==0 && d>30){
        printf("This data is invalid");
    }else{
        printf("This data is correct");
    }
    }
    
    
