//(a) Crie um vetor Cadastro com 5 elementos.
//(b) Permita ao usuario entrar com dados para preencher esse 5 cadastros.X
//(c) Encontre a pessoa com maior idade entre os cadastrados X
//(d) Encontre as pessoas do sexo masculino X
//(e) Encontre as pessoas com salario maior que 1000.X
//(f) Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo
//usuario 

//make a vector with five elements
//fill in this five elements
//found and show the people is masculine
//show who win more than 1000
//enter a number for showing the files
#include <stdio.h>
#include <string.h>
struct dados{
    char nome[30],estadocivil[30],sexo[30];
    char endereco[30],rua[30],bairro[30],cidade[30],estado[30];
    int cep,ide,cpf,telephone,idade;
    float sala;
};
int main(){
    struct dados dados[5];
    int a=0,maior=0,p=0,p1=0,select=0;
    char mname[30],sexom[5][31],salary[5][31];
    for(a=0;a<5;a++){
        printf("What is your name:");
        scanf("%29[^\n]",dados[a].nome);
        printf("What is your salary:");
        scanf("%f",&dados[a].sala);
        printf("What is your indenty:");
        scanf("%i",&dados[a].ide);
         printf("What is your cpf:");
        scanf("%i",&dados[a].cpf);
        printf("What is your civil status:");
        getchar();
        scanf("%29[^\n]",dados[a].estadocivil);
        printf("What is your telephone:");
        scanf("%i",&dados[a].telephone);
        printf("What is your age:");
        scanf("%i",&dados[a].idade);
        printf("What is your gener[M/F]:");
        getchar();
        scanf("%29[^\n]",dados[a].sexo);
        getchar();
        printf("What is your street:");
        scanf("%29[^\n]",dados[a].rua);
        getchar();
        printf("What is your neigboorhood:");
        getchar();
        scanf("%29[^\n]",dados[a].bairro);
        printf("What is your city:");
        getchar();
        scanf("%29[^\n]",dados[a].cidade);
        printf("What is your state:");
        getchar();
        scanf("%29[^\n]",dados[a].estado);
        printf("What is your cep:");
        scanf("%i",&dados[a].cep);
        getchar();
    }
    for (a = 0; a < 5; a++)
    {
        if (maior<dados[a].idade)
        {
            maior=dados[a].idade;
            strcpy(mname, dados[a].nome);
        }
        if(dados[a].sexo=='m'||dados[a].sexo=='M'){
            strcpy(sexom[p], dados[a].nome);
            p++;
        }if(dados[a].sala>1001){
            strcpy(salary[p1], dados[a].nome);
            p1++;
        }

        
    }
    printf("The %s is the person more old",mname);
    a=0;
    for (a = 0; a < p; a++)
    {
        printf("The person yo is masculine is %s",sexom[a]);
    }
    for (a = 0; a < p1; a++)
    {
        printf("The person more salary is more than 1000 is  %s",salary[a]);
    }
    printf("select a number to shoow the files:");
    scanf("%i",&select);
    printf("Name:%s\n",dados[select].nome);
    printf("Salary:%f\n",dados[select].sala);
    printf("Indenty:%i\n",dados[select].ide);
    printf("Cpf:%i\n",dados[select].cpf);
    printf("civil status:%s",dados[select].estadocivil);
    printf("telephone:%i\n",dados[a].telephone);
    printf("age:%i",dados[a].idade);
    printf("gener[M/F]:%s",dados[a].sexo);
    printf("street:%s",dados[a].rua);
    printf("neigboorhood:%s",dados[a].bairro);
    printf("city:",dados[a].cidade);
    printf("state:",dados[a].estado);
    printf("cep:",dados[a].cep);


    
    
    
}
