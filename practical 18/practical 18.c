#include<stdio.h>
int main()
{
    int rows,cols,i,j;
    printf("Enter the size of table vertically :");
    scanf("%d",&rows);
    printf("Enter the size of table horizontally :");
    scanf("%d",&cols);
    printf("Multiplication Table (%d x %d) :\n",rows,cols);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=cols;j++)
        {
            printf("\t%d",i*j);
        }
        printf("\n");
    }
    return 0;
}
