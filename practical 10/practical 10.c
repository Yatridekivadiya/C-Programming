#include<stdio.h>
int main()
{
    int choice;
    int total=0;
    printf("\n welcome to foodies restaurant(established in 2020)");
    printf("\n please select item from the menu below:");

    printf("\n menu:");
    printf("\n 1.Burger - Rs.150");
    printf("\n 2.Pizza - Rs.200");
    printf("\n 3.Pasta - Rs.120");
    printf("\n 4.Sandwich - Rs.100");
    printf("\n 5.French Fries - Rs.80");
    printf("\n Enter 0 to finish order");

    menu : printf("\n Enter the number of your choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        total=total+=150;
        printf("Burger is added to your cart, your total amount is: %d",total);
        break;
        case 2:
        total=total+=200;
        printf("Pizza is added to your cart, your total amount is: %d",total);
        break;
        case 3:
        total=total+=120;
        printf("Pasta is added to your cart, your total amount is: %d",total);
        break;
        case 4:
        total=total+=100;
        printf("Sandwich is added to your cart, your total amount is: %d",total);
        break;
        case 5:
        total=total+=80;
        printf("French Fries is added to your cart, your total amount is: %d",total);
        break;
        case 0:
        printf("your order is complate");
        printf("total amount: %d",total);
        break;
        default:
        printf("the number you have coosed is not valid. please enter the valid number");
    }
    if(choice!=0)
    {
        goto menu;
    }
    printf("this program is developed by yatri dekivadiya");
}

