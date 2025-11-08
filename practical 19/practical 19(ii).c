#include<stdio.h>
int main()
{
    int i,j,n=9;

    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=2;i<=5;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j || j==(n-i+1))
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("This program is developed by yatri dekivadiya");
}
