//Faca um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais que
// nao sao multiplos de 7 ou que terminam com 7. 



//Show the first 100 numbers taht isnt multiples 7 and have 7

 #include <stdio.h>
    int main(){
        int v[100],n=0;
        int a=0;
       while(a<100){
            if(n%7==0 || n%10==7){
            }else if(n>70&&n<80){
                }else{
                v[a]=n;
                a++;
            }
       
       n++;
       }
        for(a=0;a<100;a++){
            printf("%i\n",v[a]);
        }}
