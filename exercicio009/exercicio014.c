//Crie uma funcao que receba dois parametros: um array e um valor do mesmo tipo do
//array. A funcao dever a preencher os elementos de array com esse valor. Nao utilize
//ındices para percorrer o array, apenas aritmetica de ponteiros.

//Make a function that receb two values array and a other value .the elements this array showing the number the user enter:

#include <stdio.h>
int funcao(int *v,int numero){
  int i=0;
  for (i = 0; i < 10; i++)
  {
    v[i]=numero;
    printf("%i\n",v[i]);
  }
  
}
int main(){
  int v[10],nume;
  printf("Enter a number:");
  scanf("%i",&nume);
  funcao(v,nume);
}
