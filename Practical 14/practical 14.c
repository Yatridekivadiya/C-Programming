#include<stdio.h>
int main()
{
    int choice;
    float withdraw_amount, total_amount=5000;
    label1:
    printf("\nenter 1 for withdraw and 2 for exit:");
    scanf("%d",&choice);
    while(1)
        switch(choice)
    {
    case 1:
        printf("\nenter the amount you want to withdraw :");
        scanf("%f",&withdraw_amount);
        if(withdraw_amount<=total_amount)
        {
            total_amount-=withdraw_amount;
            printf("now your total balance is : %f",total_amount);
            goto label1;
        }
        else
        {
            printf("your balance is insufficient");
        }
    case 2:
        return 1;
    }
    printf("this program is developed by yatri dekivadiya");
}
