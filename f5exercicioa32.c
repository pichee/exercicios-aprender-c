//Leia uma cadeia de caracteres no formato “DD/MM/AAAA” e copie o dia, mes e ano para
//3 variaveis inteiras. Antes disso, verifique se as barras estao no lugar certo, e se DD, MM
//e AAAA sao numericos.

//Make a program read a data and convert the tip char for int.
#include <stdio.h>
#include <stdlib.h>
int main(){
char dd[3],aaaa[5];
int a=0;
while (a==0){
printf("Insert the day this data:DD/MM/AAAA:");
scanf("%2[^\n]",dd);
if(dd>0 || dd<=31){
    a++;
}
}
int d=atoi(dd);
a=0;
getchar();
while (a==0){
printf("Insert the month this :%i/MM/AAAA:",d);
scanf("%2[^\n]",dd);
if(dd>0 || dd>12){
    a++;
}
}
int m=atoi(dd);
a=0;
getchar();
while (a==0){
printf("Insert the year this :%i/%i/AAAA:",d,m);
scanf("%4[^\n]",aaaa);
if(dd>0){
    a++;
}
}
int y=atoi(aaaa);
printf("%i/%i/%i",d,m,y);


}
