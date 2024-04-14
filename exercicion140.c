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
    
