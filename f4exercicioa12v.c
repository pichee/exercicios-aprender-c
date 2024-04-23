//Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
//juntamente com o maior, o menor e a media dos valores.

//Make a vector for read five numbers and showing the bigger the smaller and the media this values;

#include <stdio.h>
int main(){
    int v[5],m,me,a,s=0;
    float d;
    printf("Enter a number:\n");
    scanf("%i",&v[0]);
    m=v[0];
    me=v[0];
    s+=v[0];
    for(a=1;a<5;a++){
    printf("Enter a number:\n");
    scanf("%i",&v[a]);
    if(v[a]>m){
        m=v[a];
    }
    if(v[a]<me){
        me=v[a];
    }
    s+=v[a];

    }
    d=(float)s/5;
    a=0;
    while(a<5){
        printf("%i\n",v[a]);
        a++;
    }
    printf("The bigger number is %i the smaller is %i and the media is %.2f",m,me,d);
}
