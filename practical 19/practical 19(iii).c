#include<stdio.h>
int main()
{
    int n=5,a,i,j;
    for(i=n;i>=1;i--)
    {
        for(a=5;a>i;a--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(a=5;a>i;a--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
