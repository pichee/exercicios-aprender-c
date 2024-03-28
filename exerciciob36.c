//Read the height and the raidios from a  cylinder circule and show the volume from cylinder.The volume
//the cylinder circule is calculating by means of formulaV = π ∗ raio2 ∗ height,
//considering π = 3.141592.
#include <stdio.h>
int main(){
    float h,r,c;
    float pi=3.14;
    printf("What is the height of the cylinder");
    scanf("%f",&h);
    printf("What is the raidios of the raidios");
    scanf("%f",&r);
    c=pi*(r*r)*h;
    printf("the volume this cylinder is igual %.2f",c);
}
