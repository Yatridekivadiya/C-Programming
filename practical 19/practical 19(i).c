#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    printf("This program is developed by yatri dekivadiya");
}
