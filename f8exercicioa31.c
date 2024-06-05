//Uma palavra de Fibonacci e definida por
//f(n) = b se n = 0
//f(n) = a se n = 1
//f(n) = f(n-1)+f(n-2) se n > 1
//Aqui o sımbolo “+” denota a concatenacao de duas strings. Esta sequencia inicia com as
//seguintes palavras:
//b, a, ab, aba, abaab, abaababa, abaababaabaab, ...
//Faca uma funcao recursiva que receba um numero N e retorne a N-esima palavra de
#include <stdio.h>
#include <string.h>
    int fibo(int n){
        if (n==0)
        {
            printf("b");
            return 0;

        }
        if (n==1)
        {
            printf("a");
            return 0;
            
        }
        int i=2;
        char v[n][n*n*n];
        v[0][n]=strdup("b");
        v[1][n]=strdup("a");
        for ( i = 2; i <=n; i++)
        {
            sprintf(v[i][n], "%s%s",v[i-1],v[i-2]);
            
        }
        printf("%s",v[i][n]);
        
        
    }
 int main(){
    int t;
    printf("Enter a number:");
    scanf("%i",&t);
    fibo(t);
 }
