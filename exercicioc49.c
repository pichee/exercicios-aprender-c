//Make a program to read the time.The start to duration in seconds
//from biological experiment.The program Should show the result the new time.
#include <stdio.h>
    int main(){
        float h,m,s,e;
        printf("Aproximately how  many hours were the experiment?");
        scanf("%f",&h);
        printf("Aproximately how many minutes were?");
        scanf("%f",&m);
        printf("Aproximately how many seconds were?");
        scanf("%f",&s);
        printf("Aproximately how many secunds lasted the  experiment");
        scanf("%f",&e);
            e=s+e;
            while(e>=60){
                m=m+1;
                e=e-60;
            }
            while(m>=60){
                h=h+1;
                m=m-60;
            }
            
        printf("Aproximately the experiment took \n%.0f hours\n%.0f minutes and \n%.0fseconds",h,m,e);
}
