#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Uma pesquisa sobre algumas características físicas da população de uma determinada
// região coletou os seguintes dados, referentes a cada habitante, para serem analisados:
// Sexo (masculino, feminino)
// Cor dos olhos (azuis, verdes, castanhos)
// Cor dos cabelos (louros, castanhos, pretos)
// Idade em anos.
// Para cada habitante, foi digitada uma linha com esses dados e a última linha, que não
// corresponde a ninguém, conterá o valor de idade igual a -1. Fazer um programa que determine e
// escreva:
// A maior idade dos habitantes;
// A porcentagem cd indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
// inclusive e que tenham olhos verdes e cabelos louros.

main() {
    float porcentagemFeminina;
    int idade, maiorIdade, contPorcentagem, cont;
    char sexo[40], corOlhos[40], corCabelos[40];

    contPorcentagem = 0;
    maiorIdade = 0;
    cont = 0;

    do {
        cont++;
        printf("Informe o sexo:\n");
        scanf("%s", &sexo);
        printf("Informe a cor dos olhos:\n");
        scanf("%s", &corOlhos);
        printf("Informe a cor dos cabelos:\n");
        scanf("%s", &corCabelos);
        printf("Informe a idade:\n");
        scanf("%d", &idade);
        if ((strcmp (sexo,"feminino") == 0) && ((idade >= 18) && (idade <= 35)) && (strcmp (corOlhos,"verdes") == 0) && (strcmp (corCabelos,"louros") == 0)) {
            contPorcentagem++;
        }
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
    }
    while (idade != -1);
    printf("Maior idade: %d\n", maiorIdade);
    porcentagemFeminina = (100 * contPorcentagem)/cont;
    printf("Porcentagem feminina com olhos verdes, cabelos louros que estão entre 18 e 35 anos: %.2f\n", porcentagemFeminina);
