//Crie um programa que receba tres valores (obrigatoriamente maiores que zero), repre
//sentando as medidas dos tres lados de um triangulo. Elabore funcoes para:
//(a) Determinar se eles lados formam um triangulo, sabendo que: 
//• O comprimento de cada lado de um triangulo e menor do que a soma dos outros
//dois lados.
//(b) Determinar e mostrar o tipo de triangulo, caso as medidas formem um triangulo.
//Sendo que:
//• Chama-se equilatero o triangulo que tem tres lados iguais.
//• Denominam-se isosceles o triangulo que tem o comprimento de dois lados
//iguais.
//• Recebe o nome de escaleno o triangulo que tem os tres lados diferentes.

//Make a function teell if is a triangule or not
#include <stdio.h>
    int triangulo(float n3,float n1,float n2){
        if(n3<n1+n2 && n1<n3+n2  && n2<n1+n3){
            if(n1==n2 && n2==n3){
                printf("This is a equilateral triangule");
            }else if(n1!=n2 && n2!=n3 && n3!=n1){
                printf("This is a scalene triangule");
            }else{
                printf("This is a isosceles triangule");
            }
        }else{
            printf("This can't be a triangule");
        }
    }
    int main(){
        float n1=0,n2=0,n3=0;
        while(n1<=0 ||n2<=0 ||n3<=0){
        printf("Enter a number bigger than zero:");
        scanf("%f",&n1);
        printf("Enter a number bigger than zero:");
        scanf("%f",&n2);
        printf("Enter a number bigger than zero:");
        scanf("%f",&n3);
    }
        triangulo(n1,n2,n3);
    }
