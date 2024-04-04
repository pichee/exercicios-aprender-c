//Read the olds of a swimmer and classify your category
//Years category:
//Children A 5 a 7
//Children B 8 a 10
//Juvenile A 11 a 13
//Juvenile B 14 a 17
//Senior bigger than or igual 18 years old
#include <stdio.h>
int main ()
{
    float y;
    printf ("How old is the swimmer?\n");
    scanf("%f",&y);
    if(y>=5 && y<=7){
        printf("Children A");}
    if(y>=8 && y<=10){
        printf("Children B");}
    if(y>=11 && y<=13){
        printf("Juvenile A");}
    if(y>=14 && y<=17){
        printf("Juvenile B");}
    if(y>=18){
        printf("Senior");}
    if(y<5){
        printf("ERROR");}
}
