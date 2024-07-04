//Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se
//ter os seguintes dados:
//• Nome X
//• E-mail X
//• Endereco (contendo campos para Rua, numero, complemento, bairro, cep, cidade, ´
//estado, paıs).X
//• Telefone (contendo campo para DDD e numero)X
//• Data de aniversario (contendo campo para dia, mes, ano).X
//• Observacoes: Uma linha (string) para alguma observacao especial.X
//(a) Definir a estrutura acima.X
//(b) Declarar a variavel agenda (vetor) com capacidade de agendar ate 100 nomes.X
//(c) Definir um bloco de instrucoes busca por primeiro nome: Imprime os dados da
//pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
//(d) Definir um bloco de instruc¸oes busca por mes de aniversario: Imprime os dados de
//todas as pessoas que fazem aniversario nesse mes.
//(e) Definir um bloco de instrucoes busca por dia e mes de aniversario: Imprime os
//dados de todas as pessoas que fazem aniversario nesse dia e mes.
//(f) Definir um bloco de instrucoes insere pessoa: Insere por ordem alfabetica de nome.
//(g) Definir um bloco de instrucoes retira pessoa: Retira todos os dados dessa pessoa e
//desloca todos os elementos seguintes do vetor para a posicao anterior.
//(h) Definir um bloco de instrucoes imprime agenda com as opcoes:
//• Imprime nome, telefone e e-mail.
//• Imprime todos os dados.
//(i) O programa deve ter um menu principal oferecendo as opcoes acima.

//Make a agend

#include <stdio.h>
#include <string.h>
    struct agenda{
      char name[30];  
      char email[30];
      char rua[30];
      int numero;
      char comple[30];
      char bairro[30];
      int cep;
      char cidade[30];
      char estado[30];
      char pais[30];
      int dd;
      int tele;
      int dia;
      int mes;
      int ano;
    };
    int main(){
        struct agenda agenda[100];
        int a,c,contatos=0,files=0,conta=1;
        a=1;
        while(a!=0){
            c=6;
            while(c>3 || c<0){
            printf("----Menu----\nTurn off the agenda[0]\nDo you want Add a contat[1]\nDo you want Imprime the files something user[2]\n");
            printf("Do you want see all the files [3]\n");
            scanf("%i",&c);
            if(c==0){
                a=0;
                break;
            }
            if(c==1){
                printf("Contat %i\n",conta);
            getchar();
               printf("Enter a Name:");
               scanf("%29[^\n]",agenda[contatos].name);
             getchar();
               printf("Enter a email:");
               scanf("%29[^\n]",agenda[contatos].email);
              getchar();
               printf("Enter a street:");
               scanf("%29[^\n]",agenda[contatos].rua);
                getchar();
               printf("Enter a street number:");
               scanf("%i",&agenda[contatos].numero);
                getchar();
               printf("Enter a complement:");
               scanf("%29[^\n]",agenda[contatos].comple);
                getchar();
               printf("Enter a neighboorhood:");
               scanf("%29[^\n]",agenda[contatos].bairro);
                getchar();
               printf("Enter a cep:");
               scanf("%i",&agenda[contatos].cep);
                getchar();
               printf("Enter a city:");
               scanf("%29[^\n]",agenda[contatos].cidade);
                getchar();
               printf("Enter a state:");
               scanf("%29[^\n]",agenda[contatos].estado);
                getchar();
               printf("Enter a country:");
               scanf("%29[^\n]",agenda[contatos].pais);
                getchar();
               printf("Enter the dd:");
               scanf("%i",&agenda[contatos].dd);
                getchar();
               printf("Enter the telephone:");
               scanf("%i",&agenda[contatos].tele);
               printf("Enter day you born:");
               scanf("%i",&agenda[contatos].dia);
               printf("Enter month you born:");
               scanf("%i",&agenda[contatos].mes);
               printf("Enter year you born:");
               scanf("%i",&agenda[contatos].ano);
               getchar();
               conta++;
               if(contatos>100){
                   contatos=0;
               }else{
               contatos++;
                }}
            if(c==2){
                getchar();
                printf("What Enter the number the contant you can see the files:");
                scanf("%i",&files);
                if(agenda[files].name[0]=='\0'){
                    printf("contant don't located\n");
                }else{
                    printf("Nome:%s\n",agenda[files-1].name);
                    printf("telephone:%i\n",agenda[files-1].tele);
                    printf("Email:%s\n",agenda[files-1].email);
                }
            }
            if(c==3){
                if(agenda[files].name[0]=='\0'){
                    printf("contant don't located\n");
                }else{
                    printf("Nome:%s\n",agenda[files-1].name);
                    printf("telephone:%i\n",agenda[files-1].tele);
                    printf("Email:%s\n",agenda[files-1].email);
                    printf("This street:%s\n",agenda[files-1].rua);
                    printf("complement%s\n",agenda[files-1].comple);
                    printf("neighboorhood:%s\n",agenda[files-1].bairro);
                    printf("cep:%i\n",agenda[files-1].cep);
                    printf("city:%s\n",agenda[files-1].cidade);
                    printf("state:%s\n",agenda[files-1].estado);
                    printf("country:%s\n",agenda[files-1].pais);
                     printf("dd:%i\n",agenda[files-1].dd);
                     printf("telephone:%i\n",agenda[files-1].tele);
                     printf("day born:%i\n",agenda[files-1].dia);
                     printf("month born:%i\n",agenda[files-1].mes);
                     printf("year born:%i\n",agenda[files-1].ano);
            }
            
        }}}}
