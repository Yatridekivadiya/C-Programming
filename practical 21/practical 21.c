#include<stdio.h>
int main()
{
    int i,num,even_count=0,odd_count=0,negative_count=0,positive_count=0;
    printf("Enter 25 intigers :\n");
    for(i=1;i<=25;i++)
    {
        printf("Enter integer %d :",i);
        scanf("%d",&num);

        if(num>0)
        {
            positive_count++;
        }
        else if(num<0)
        {
            negative_count++;
        }

        if(num%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("\nThe total number of positive numbers : %d",positive_count);
    printf("\nThe total number of negative numbers : %d",negative_count);
    printf("\nThe total number of even numbers : %d",even_count);
    printf("\nThe total number of odd numbers : %d",odd_count);
    return 0;
}
