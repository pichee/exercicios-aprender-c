#include <stdio.h>
int main (){
  char v[100];
  char vo;
  int a = 0,c = 0;
  printf ("Enter a worth\n");
  scanf ("%99[^\n]", v);
  while (a <99){
      if (v[a] == 'a' ||v[a] == 'e' ||v[a] == 'i' ||v[a] == 'o' ||v[a] == 'u'){
          c++;
      }
      a++;}
	printf("This string have %i vogals\n",c);
	printf("Choose some caractere for chance\n");
	scanf("%c%*c", &vo);
	a=0;
	while (a < 99){
      if (v[a] == 'a' ||v[a] == 'e' ||v[a] == 'i' ||v[a] == 'o' ||v[a] == 'u'){
          v[a]=vo;
          
      }
          a++;}
        printf("\n%s",v);
          }
