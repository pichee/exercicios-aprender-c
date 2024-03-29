//Read a integer value in seconds,and show in hours,minutes and seconds.
#include <stdio.h>
    int main(){
        float s,h,m;
        printf("How many seconds is?");
        scanf("%f",&s);
        m=s/60;
        h=m/60;
        printf("%.0f seconds equivalent a %.2f minutes and  %.2f hours",s,m,h);
    }
