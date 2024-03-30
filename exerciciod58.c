include <stdio.h>

int main()
{
    int n;
    printf("Enter a int number");
    scanf("%i",&n);
    n=n % 2;
    if (n==0){
        printf("Esse número é par ");
    }
    else{
        printf("esse número é ímpar ");
}
}
