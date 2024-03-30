//Create a program to read the dimensions of a plot of land (length c and width l),
// as well as the price per meter of fencing p. Print the cost to fence this same
// plot of land with fencing.
#include <stdio.h>
    int main(){
        float c,l,m;
        printf("Put the lenght the lend (In meters) ");
        scanf("%f",&c);
        printf("Put the width the lend(In meters) ");
        scanf("%f",&l);
        printf("How much is the cust of the meter of fencing ");
        scanf("%f",&m);
        c=c*l;
        c=c*m;
        printf("You will pay %.2f reais for plot if kabd with fencing",c);
    }
