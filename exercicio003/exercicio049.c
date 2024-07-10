//O funcionario chamado Carlos tem um colega chamado Joao que recebe um salario que
//equivale a um terc¸o do seu salario. Carlos gosta de fazer aplicacoes na caderneta de 
//poupanc¸a e vai aplicar seu salario integralmente nela, pois esta rendendo 2% ao mes.
//Joao aplicara seu salario integralmente no fundo de renda fixa, que esta rendendo 5%
//ao mes. Construa um programa que dever ˆ a calcular e mostrar a quantidade de meses
//necessarios para que o valor pertencente a Joao igual  ou ultrapasse o valor pertencente
//a Carlos. Teste com outros valores para as taxas.

//Joao is an employee and has a friend called Carlos. Carlos receives one third
//of Joao's salary. Carlos invests his money in a bank that yields 5%,
//while Joao invests in a bank that yields 2%. How many months will it take
//for Carlos to have more money than Joao?
int main(){
    int sc=1812;
    int sj=604,m=0;
    while (sj<=sc)
    {
        sj=sj+(sj*0.5);
        sc=sc+(sc*0.2);
        m++;
        }
    printf("It will take %i months for Joao to have %i and over\nand Carlos will have %i",m,sj,sc);
    }
    
