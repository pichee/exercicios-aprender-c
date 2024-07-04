//Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto 
//escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o
//produto escalar, sendo que o produto escalar e dado por: x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.


//Read two vectors with  five numbers and show the product escalar.

 #include <stdio.h>
    int main(){
        int a,v[5],v1[5],va[5],s=0;
        for (a = 0; a < 5; a++)
        {
         printf("Enter a number:");
         scanf("%i",&v[a]);
        }
         for (a = 0; a < 5; a++)
        {
         printf("Enter a number:");
         scanf("%i",&v1[a]);
         va[a]=v[a]*v1[a];
            s+=va[a];
        }
        printf("The product escalar is %i",s);
        
    }
