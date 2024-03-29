//Receb the height of step and the heith the user want to reach ´
//heighting the step. Calculet and show how many steps the user be  move up for reach your goal.
#include <stdio.h>
int main(){
    float g,l;
    printf("How is the heith of the ladder");
    scanf("%f",&l);
    printf("How many heith do you want go?");
    scanf("%f",&g);
    g=l/g;
    printf("The user needs heith %.1f steps",g);
}
