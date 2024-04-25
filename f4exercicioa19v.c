//Faca um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo
//i a posicao do elemento no vetor. Em seguida imprima o vetor na tela.


//Showing a vector with 50 numbers and the value of each is in this formula 
//(i+ 5 ∗ i)%(i+ 1);

#include <stdio.h>
    int main(){
        int a=0,v[50],m,m1;
        for (a=0;a<50;a++)
        {
            m=(a+5*a);
            m1=(a+1);
            m=m%m1;
            v[a]=m;
        
        }
        for (a=0;a<50;a++)
        {
            printf("%i\n",v[a]);
         }
    }
