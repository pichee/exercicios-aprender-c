//Faca uma funcao recursiva que receba um numero N e retorne o N-esimo termo da
//sequencia de tribonacci. Os numeros tribonacci sao definidos pela seguinte recursao
//f(n) = 0 se n = 0
//f(n) = 0 se n = 1
//f(n) = 1 se n = 2
//f(n) = f(n-1)+f(n-2)+f(n-3) se n > 3

//Make a sequence the tribonacci
#include <stdio.h>
int seque(int s){
    if (s==0)
    {
        printf("0");
        return 0;
    }
     if (s==1)
    {
        printf("0");
        return 0;
    }
     if (s==2)
    {
        printf("1");
        return 0;
    }
    int i=3,r=1;
    for ( i = 3; i <= s; i++)
    {
        r=(i-1)+(i-2)+(i-3);

    }
    printf("The result is %i",r);
    
    
}
    int main(){
        int s;
        printf("Enter a number:");
        scanf("%i",&s);
        seque(s);
    }
