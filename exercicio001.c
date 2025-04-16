#include <stdio.h>
#include <stdlib.h>

//Aqui é o nó padrão
typedef struct no
{
    int conteudo;
    struct no *direta;
    struct no *esquerda;
} No;
//Comeca minha arvore
typedef struct 
{
    No *raiz;
}ArvB;

//Aqui cria o no e coloca o ponteiro tanto para a esquerda quanto direita
No* criarNo(int valor){
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL)
    {
        printf("Erro ao alocar memoria");
        return 1;
    }
    novoNo->conteudo = valor;
    novoNo->direta = NULL;
    novoNo->esquerda = NULL;
    return novoNo;
}

No* adicionarNo(No* raiz,int valor){
    if (valor < raiz->conteudo) {
        raiz->esquerda = adicionarNo(raiz->esquerda, valor); 
    }
    
    else if (valor > raiz->conteudo) {
        raiz->direita = adicionarNo(raiz->direita, valor);  
    }
  
    else {
        printf("Valor %i já existe na árvore.\n", valor);
    }


    return raiz;
}#include <stdio.h>
#include <stdlib.h>

// Definição do nó da árvore binária
typedef struct no {
    int conteudo;
    struct no *esquerda;
    struct no *direita;
} No;

// Função para criar um novo nó
No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->conteudo = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// Função recursiva para adicionar um nó na árvore
No* adicionarNo(No* raiz, int valor) {
    // Se a raiz for NULL, o nó será inserido aqui
    if (raiz == NULL) {
        return criarNo(valor);
    }

    // Se o valor é menor que o nó atual, inserimos à esquerda
    if (valor < raiz->conteudo) {
        raiz->esquerda = adicionarNo(raiz->esquerda, valor);
    }
    // Se o valor é maior que o nó atual, inserimos à direita
    else if (valor > raiz->conteudo) {
        raiz->direita = adicionarNo(raiz->direita, valor);
    }
    // Se o valor for igual, não fazemos nada (não permite duplicatas)
    return raiz;
}

// Função para mostrar a árvore (in-order)
void mostrarArvore(No* raiz) {
    if (raiz == NULL) {
        return;
    }

    mostrarArvore(raiz->esquerda);  // Vai para a subárvore esquerda
    printf("%d ", raiz->conteudo);   // Imprime o valor do nó
    mostrarArvore(raiz->direita);   // Vai para a subárvore direita
}

int main() {
    No* raiz = NULL;

    // Inserir nós na árvore
    raiz = adicionarNo(raiz, 10);
    raiz = adicionarNo(raiz, 5);
    raiz = adicionarNo(raiz, 3);

    // Exibir a árvore (in-order)
    printf("Árvore em ordem (in-order): ");
    mostrarArvore(raiz);  // Isso deve exibir: 3 5 10
    printf("\n");

    return 0;
}

