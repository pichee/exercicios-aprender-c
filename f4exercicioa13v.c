//Fazer um programa para ler 5 valores e, em seguida, mostrar a posic¸ao onde se encon
//tram o maior e o menor valor.

//Make a vector for read five numbers and showing the bigger the smaller and the media this values;

#include <stdio.h>
int main(){
    int m,me,pm,pme,v[5],a;
        printf("Enter a number:");
        scanf("%i",&v[0]);
        m=v[0];
        me=v[0];
        pm=v[0];
        pme=v[0];
        for (a=1;a<5;a++)
        {
            printf("Enter a number:");
            scanf("%i",&v[a]);
            if(m<v[a]){
                m=v[a];
                pm=a+1;
            }
            if(me>v[a]){
                me=v[a];
                pme=a+1;
            }
        }
        printf("The bigger value is %i and is in the %i position\nThe smaller value is %i and is in the %i position",m,pm,me,pme);
}
