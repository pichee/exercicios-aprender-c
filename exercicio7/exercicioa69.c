//Faca um programa que faca operacoes simples de fracoes: 
//• Crie e leia duas fracoes  p e q, compostas por numerador e denominador.
//• Encontre o maximo divisor comum entre o numerador e o denominador, e simplifique as fracoes.
//• Apresente a soma, a subtracao, o produto e o quociente entre as fracoes lidas.
//Obs.: Cria uma funcao para cada item.

//Make a function that simply weaknesses:
//•Make and read two weaknesses p and q,with numerator and denominator
//• Find the greatest common divisor beetwen numerator and denominator and simply the weaknesses
//•Showinh the add,subtration,product and thee quotient about the weaknesses read.
//• Make a function for each question.
#include <stdio.h>
int mdc(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


void simplificar(int *numerador, int *denominador) {
    int divisor = mdc(*numerador, *denominador);
    *numerador /= divisor;
    *denominador /= divisor;
}


void lerFracao(int *numerador, int *denominador) {
    printf("Digite o numerador: ");
    scanf("%d", numerador);
    printf("Digite o denominador: ");
    scanf("%d", denominador);
    simplificar(numerador, denominador);
}

void somarFracoes(int pn, int pd, int qn, int qd, int *rn, int *rd) {
    *rn = pn * qd + qn * pd;
    *rd = pd * qd;
    simplificar(rn, rd);
}


void subtrairFracoes(int pn, int pd, int qn, int qd, int *rn, int *rd) {
    *rn = pn * qd - qn * pd;
    *rd = pd * qd;
    simplificar(rn, rd);
}

void multiplicarFracoes(int pn, int pd, int qn, int qd, int *rn, int *rd) {
    *rn = pn * qn;
    *rd = pd * qd;
    simplificar(rn, rd);
}


void dividirFracoes(int pn, int pd, int qn, int qd, int *rn, int *rd) {
    *rn = pn * qd;
    *rd = pd * qn;
    simplificar(rn, rd);
}

int main() {
    int pn, pd, qn, qd;
    int rn, rd;

    printf("Fracao 1:\n");
    lerFracao(&pn, &pd);
    printf("Fracao 2:\n");
    lerFracao(&qn, &qd);


    somarFracoes(pn, pd, qn, qd, &rn, &rd);
    printf("Soma: %d/%d\n", rn, rd);


    subtrairFracoes(pn, pd, qn, qd, &rn, &rd);
    printf("Subtracao: %d/%d\n", rn, rd);

    multiplicarFracoes(pn, pd, qn, qd, &rn, &rd);
    printf("Produto: %d/%d\n", rn, rd);

  
    dividirFracoes(pn, pd, qn, qd, &rn, &rd);
    printf("Divisao: %d/%d\n", rn, rd);

    return 0;
}
