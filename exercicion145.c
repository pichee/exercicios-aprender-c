//verify if is a number odd or not
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number bigger than 1\n");
    scanf("%i",&n);
    if(n>1 && n%2==1){
        printf("This number is odd");
    }
    else{
        printf("ERROR");
    }
    
    
    return 0;
}
