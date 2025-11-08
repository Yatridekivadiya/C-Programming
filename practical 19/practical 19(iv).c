#include<stdio.h>
int main()
{
    int rows,i,j,k;
    char ch='A';
    printf("Enter rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch--;
        for(j=1;j<i;j++)
        {
            ch--;
            printf("%c",ch);
        }
        printf("\n");
    }
    for(i=rows;i>=1;i--)
    {
        for(k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        ch--;
        for(j=1;j<i;j++)
        {
            ch--;
            printf("%c",ch);
        }
        printf("\n");
    }
    printf("\nThis program is developed by yatri dekivadiya");

}
