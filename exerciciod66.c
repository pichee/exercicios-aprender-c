//Show a person how is your media with 3 notes for spend in test the note is 6;
#include <stdio.h>
int main(){
    float n,n1,n2,s;
    printf("Enter the first note ");
    scanf("%f",&n);
    printf("Enter the double note");
    scanf("%f",&n1);
    printf("Enter the three note");
    scanf("%f",&n2);
    s=(n+n1+n2)/3;
    if (s > 6 && n1 < 10 && n2 < 10 && n < 10)
    {
        printf("Congradulations you pass");
    }
    if (n1>10 || n2>10 || n>10)
    {
        printf("Something is wrong");
    }
    if (s < 6 && n1 < 10 && n2 < 10 && n < 10)
    {
        printf("you don't   pass");
    }
}
