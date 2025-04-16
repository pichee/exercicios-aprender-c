#include <stdio.h>
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
    if (novoNo == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);  // Encerra o programa em caso de erro
    }
    novoNo->conteudo = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// Função recursiva para adicionar um nó na árvore
No* adicionarNo(No* raiz, int valor) {
    if (raiz == NULL) {
        return criarNo(valor);
    }

    if (valor < raiz->conteudo) {
        raiz->esquerda = adicionarNo(raiz->esquerda, valor);
    } else if (valor > raiz->conteudo) {
        raiz->direita = adicionarNo(raiz->direita, valor);
    } else {
        printf("Valor %d já existe na árvore.\n", valor);
    }

    return raiz;
}

// Função para mostrar a árvore em ordem (in-order)
void mostrarArvore(No* raiz) {
    if (raiz == NULL) return;
    mostrarArvore(raiz->esquerda);
    printf("%d ", raiz->conteudo);
    mostrarArvore(raiz->direita);
}

// Função principal
int main() {
    No* raiz = NULL;

    // Inserir valores na árvore
    raiz = adicionarNo(raiz, 10);
    raiz = adicionarNo(raiz, 5);
    raiz = adicionarNo(raiz, 3);
    raiz = adicionarNo(raiz, 15);
    raiz = adicionarNo(raiz, 7);

    // Exibir a árvore
    printf("Árvore em ordem (in-order): ");
    mostrarArvore(raiz);
    printf("\n");

    return 0;
}
