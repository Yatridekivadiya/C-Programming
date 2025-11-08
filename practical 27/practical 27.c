#include<stdio.h>

void generateSavings(int n);
int fibonacci(int n);

int main()
{
    int n;

    printf("Enter the number of months: ");
    scanf("%d",&n);

    if(n<1)
    {
        printf("Invalid input");
    }
    generateSavings(n);
    printf("This program is developed by yatri dekivadiya");
    return 0;
}

void generateSavings(int n)
{
    int i,total=0;

    printf("\nMonth wise saving patterns:");
    printf("\n------------------------------\n");

    for(i=1;i<=n;i++)
    {
        int saving = fibonacci(i);
        printf("Month %d: Rs.%d\n",i,saving);
        total += saving;
    }

    printf("------------------------------\n");
    printf("Total saving after %d months = Rs.%d\n",n,total);
}


int fibonacci(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}
