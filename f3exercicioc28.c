//Faca um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
//conforme a formula a seguir 
//its like the other exercise but now you put in fatorial
#include <stdio.h>

int main() {
    float n, d = 0, a = 1, ad = 2, s = 0;
    
    printf("Enter a whole positive number: ");
    scanf("%f", &n);
    
    if (n < 0) {
        printf("ERROR: Negative number entered.\n");
    } else {
        while (a <= n) {
            float f = 1; 
            float fn = 1;
            
           
            while (f <= a) {
                fn *= f;
                f++;
            }
            
            ad = 1 / fn; 
            s += ad;     
            a++;
        }
        printf("A soma final será %.2f\n", s);
    }
    
    return 0;
}
