//calcule quatnto voce devera pagar ao parque
//Calculate how much the user should be pay in the parking: ˜
//• 1 and 2 hours - R$ 1,00 each
//• 3 and 4 hours - R$ 1,40 each
//• bigger them 5  - R$ 2,00 each
#include <stdio.h>
    int main(){
        float t;
        printf("How much time do you stay\n");
        scanf("%f",&t);
        if(t<=2){
            t=t*1;
            printf("You need pay %.2f",t);
        }else if(t>2&&t<=4){
            t=t*1.4;
            printf("You need pay %.2f",t);
            
        }else{
            t=t*2;
            printf("You need pay %.2f",t);
            
        }
    }
    
