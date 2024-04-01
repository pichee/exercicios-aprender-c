//a program what read two notes to evaluation and show the final note,if the note is above ten
//show is Something is incorret
#include <stdio.h>
    int main(){
        float n,n1,a;
        printf("Enter the first note ");
        scanf("%f",&n);
        printf("Enter the second note ");
        scanf("%f",&n1);
        if ((n1<10)&&(n<10)){
            a=(n1+n)/2;
            printf("The mean is  %.2f",a);
        }else{
            printf("Something is incorret");
        }
    }
