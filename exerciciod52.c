//three friends playing in the lotery.If they won,The  must be divid the value
//proportiona to the amont each contributed to the bet.Make a Program that reads
//each friend invest,the  value the award is proportional to the invest.
#include <stdio.h>
	int main(){
	    float a1,a2,a3,ap,ax;
		printf("How much did the better one invest");
		scanf("%f",&a1);
		printf("How much did the better two invest?");
		scanf("%f",&a2);
		printf("How much did the better three invest");
		scanf("%f",&a3);
		printf("How much was the prize amount");
		scanf("%f",&ap);
        ax=ap/(a1+a2+a3);
        a1=ax*a1;
        a2=ax*a2;
        a3=ax*a3;
        printf("The invest 1 receb%.2f\nThe invest 2 receb%.2f\nThe invest 3 receb%.2f",a1,a2,a3);
}
