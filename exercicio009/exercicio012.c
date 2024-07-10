//Faca um programa que leia tres valores inteiros e chame uma funcao que receba estes 3
//valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel,
//o segundo menor valor na variavel do meio, e o maior valor na ultima variavel. A funcao˜
//deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes.
// Exibir os valores ordenados na tela.

//Make program that receb int three values and return in crescent order

#include <stdio.h>
int funcao(int *ponteiro1,int *ponteiro2,int *ponteiro3){
  if (*ponteiro1==*ponteiro2 && *ponteiro1==*ponteiro3)
  {
    printf("This numbers are iguals");
    return 1;
  }


  if (*ponteiro1 <= *ponteiro2 && *ponteiro1<= *ponteiro3)
  {
    printf("%i\n",*ponteiro1);
    if (*ponteiro2<*ponteiro3)
    {
      printf("%i\n",*ponteiro2);
      printf("%i\n",*ponteiro3);
    }
    else
    {
      printf("%i\n",*ponteiro3);
      printf("%i\n",*ponteiro2);
    }
    
  }


   if (*ponteiro2 <= *ponteiro1 && *ponteiro2<= *ponteiro3)
  {
    printf("%i\n",*ponteiro2);
    if (*ponteiro1<*ponteiro3)
    {
      printf("%i\n",*ponteiro1);
      printf("%i\n",*ponteiro3);
      return 0;
    }
    else
    {
      printf("%i\n",*ponteiro3);
      printf("%i\n",*ponteiro1);
      return 0;
    }
    
  }

  if (*ponteiro3 <= *ponteiro1 && *ponteiro3<= *ponteiro1)
  {
    printf("%i\n",*ponteiro3);
    if (*ponteiro1<*ponteiro2)
    {
      printf("%i\n",*ponteiro1);
      printf("%i\n",*ponteiro2);
      return 0;
    }
    else
    {
      printf("%i\n",*ponteiro2);
      printf("%i\n",*ponteiro1);
      return 0;
    }
    
  }
  

}
int main(){
  int n1,n2,n3;
  printf("Enter Number:");
  scanf("%i",&n1);
  printf("Enter Number:");
  scanf("%i",&n2);
  printf("Enter Number:");
  scanf("%i",&n3);
  funcao(&n1,&n2,&n3);
          }
