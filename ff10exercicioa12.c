//Considere um cadastro de produtos de um estoque, com as seguintes informacoes para
//cada produto:
//• Codigo de identificacao do produto: representado por um valor inteiro 
//• Nome do produto: com ate 50 caracteres 
//• Quantidade disponıvel no estoque: representado por um numero inteiro
//• Preco de venda: representado por um valor real
//(a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para
//guardar as informac¸oes de um produto
//(b) Crie um conjunto de N produtos (N e um valor fornecido pelo usuario) e peca ao
//usuario para entrar com as informacoes de cada produto
//(c) Encontre o produto com o maior preco de venda
//(d) Encontre o produto com a maior quantidade disponıvel no estoque

//Make a program read a products the a store
#include  <stdio.h>
struct estoque{
 int ide;
 char name[50];
 int quanto;
 float price;
};
int main(){
 struct estoque estoque;
 int p,maior=0,menor=999,menus=0,m;
    printf("How many products do you want enter:");
    scanf("%i",&p);
    struct estoque *vetor=(struct estoque *)malloc(p*sizeof(struct estoque));
    int i=0;
    for ( i = 0; i < p; i++)
    {
        printf("Enter the id the product:");
        scanf("%i",&vetor[i].ide);
        printf("Enter the name the product:");
        scanf("%s",vetor[i].name);
        printf("How many product there is");
        scanf("%i",&vetor[i].quanto);
        printf("How much is the product:");
        scanf("%f",&vetor[i].price);
        if (vetor[i].price>maior)
        {
            m=i;
            maior=vetor[i].price;
        }
        if (vetor[i].price<menor)
        {
            menus=i;
            menor=vetor[i].price;
        }

    }
    printf("The product with the small product is the %s\n and the bigger is %s",vetor[menus].name,vetor[m].name);
    free(vetor);
}
