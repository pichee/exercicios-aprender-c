//Crie uma funcao que receba como parametro um array e o imprima. Nao utilize ındices
//para percorrer o array, apenas aritmetica de ponteiros.

//Make a function that receb a array and showing.Don't use indices for array.

#include <stdio.h>
int funcao(int *v){
  printf("%i\n",*v);
  v++;
  printf("%i\n",*v);
  v++;
  printf("%i\n",*v);
  v++;
  printf("%i\n",*v);
  v++;
  printf("%i\n",*v);
}
int main(){
  int v[5]={10,20,30,40,50};
  funcao(&v);

}
