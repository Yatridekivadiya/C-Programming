#include<stdio.h>
void main()
{
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    if(age<18)
    {
        printf("you are not eligible for open saving account");
    }
    else if(age>=18 & age<60)
    {
        printf("you are eligible for open saving account");
    }
    else if(age>=60)
    {
        printf("you are eligible for senior citizen ");
    }
    else if(age<=0)
    {
    printf("please enter a valid age");
    }
    printf("\n this program is developed by yatri dekivadiya");
    return 0;
}
