//write a program for help sellers.Show:
//•The total to pay with 10% discont;
//•The value of each portion,in portion of 3x without fees;
//•The sellers Commission,In case the  sell be in cash  (5% Upon the discounted value)
//•The sellers Commission,In case the sell be Payment in installments(5% Upon the discounted value)
#include <stdio.h>
int main(){
    float p,c,pa,sc,sc1;
    printf("\nCould you write the price of the product");
    scanf("%f",&p);
    c=p-(p*0.1);
    printf("\nThe value in cash is %.2f",c);
    pa=p /3;
    printf("\nThe value installments is %.2f",pa);
    sc=(c *0.5);
    sc1=(p *0.5);
    printf("\nIf the payment is paid in cash the Commission is %.2f",sc);
    printf("\nIf the payment is paid in installments the Commission is %.2f\n",sc1);
}
