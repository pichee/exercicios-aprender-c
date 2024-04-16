//Fac¸a um programa que some os numeros impares contidos em um intervalo definido
//pelo usuario. O usuario define o valor inicial do intervalo e o valor final deste intervalo
//e o programa deve somar todos os numeros ımpares contidos neste intervalo. Caso o
//usuario digite um intervalo invalido (comec¸ando por um valor maior que o valor final) deve
//ser escrito uma mensagem de erro na tela, “Intervalo de valores invalido” e o programa
//termina. Exemplo de tela de sa´ıda: Digite o valor inicial e valor final: 5 10
//Soma dos ´ımpares neste intervalo: 21

//Make a program that adds the odd numbers contained in a range defined by the user.
// The user defines the initial value of the range and the final value of this range,
// and the program must add all the odd numbers contained in this range. If the user enters an invalid range (starting with a value greater than the final value),
// an error message should be displayed on the screen,
//'Invalid range of values,' and the program terminates. Example of
//  output screen: Enter the initial value and final value: 5 10 Sum of odds in this range: 21"
#include <stdio.h>
int main(){
    int f,e,a=0,s=0;
    printf("What is the first number the sequence\n");
    scanf("%i",&f);
    printf("What is the end number the sequence\n");
    scanf("%i",&e);
    if(f>e){
        printf("ERROR");
    }
    else{
        a=f;
        while(a<e){
            if(a%2==1){
                s=a+s;
           
            }
           a++; 
        }

    }
    printf("addition by the numbers odd in the sequence %i",s);
}
