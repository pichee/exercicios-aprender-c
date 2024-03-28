//Be a and b  peccariesde of a  triangle,where hypotenuse and obtained for equation:
//√a2 + b2.Make a program what receive  the  values  a and b so calculete
//the value  from peccariesde.Show the result this operation.
#include <stdio.h>
#include <math.h>
    int main(){
        float a,b;
        double c;
        printf("What is the value the a ");
        scanf("%f",&a);
        printf("What is the value the b ");
        scanf("%f",&b);
        c=sqrt((a*a)+(b*b));
        printf("the peccariesde is igual %.2f",c);
        }
