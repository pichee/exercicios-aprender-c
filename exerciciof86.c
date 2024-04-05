//show the price the new product because the tax
//smaller R$ 50 ´ 5%
//between R$ 50 and R$ 100 10%
//aboveR$ 100 15%
#include <stdio.h>
    int main(){
        float p;
        printf("What is the price of the product\n");
        scanf("%f",&p);
        if(p<50){
            p=p+(p*0.05);
            printf("The new price is %.2f",p);
        }else if(p>=50&&p<=100){
            p=p+(p*0.10);
            printf("The new price is %.2f",p);
            
        }else{
            p=p+(p*0.15);
            printf("The new price is %.2f",p);
        }
        }
