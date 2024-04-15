//show the addicion the prime number in the sequencee;
#include <stdio.h>

int main() {
    int n,n1,tro,s = 0, c = 0, i = 2, j, p;
    
    printf("Enter a number:\n");
    scanf("%i", &n);
    printf("Enter other number\n");
    scanf("%i", &n1);
    if(n>n1){
        n=tro;
        n=n1;
        n1=tro;
    }

    

    while (n<n1) {
        p = 1;
        for (j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                p = 0; 
                break;
            }
        }
        if (p) {
            s += n; 
        }
        if(n==1){
            s--;
        }

        n++; 
    }

    printf("The add in the sequencee is %i",s);

    return 0;
}
