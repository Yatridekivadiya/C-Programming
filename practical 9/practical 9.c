#include<stdio.h>
int main()
{
    float total_amount,discount1,discount2;
    printf("welcome to the shop");
    printf("\n Enter your total_amount :",total_amount);
    scanf("%f",&total_amount);
    if(total_amount<=0)
    {
        printf("invalid amount");
    }
    else if(total_amount<1000)
    {
        printf("\n No discount is applied");
    }
    else if(total_amount>=1000&&total_amount<5000)
    {
        printf("you get discount1");
        discount1=(total_amount-(total_amount*10)/100);
        printf("\n your final amount is : %f",discount1);
        scanf("%f",&discount1);
    }
    else
    {
        printf("you get discount2");
        discount2=(total_amount-(total_amount*20)/100);
        printf("\n your final amount is : %f",discount2);
        scanf("%f",&discount2);
    }
}
