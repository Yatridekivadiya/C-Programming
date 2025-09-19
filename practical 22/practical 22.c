#include<stdio.h>
int main()
{
    int n,rows=5,cols=10,i,j,r,c;
    int seats[rows][cols];

    printf("Enter the number of rows :");
    scanf("%d",&rows);
    printf("Enter the number of cols :");
    scanf("%d",&cols);

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            seats[i][j]=0;
        }
    }

    printf("Enter the number of reserved seats :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("\nEnter row and seat number for reserved seat %d (e.g.,2 5):",i+1);
        scanf("%d %d",&r,&c);
        if(r>0 && r<=rows && c>0 && c<=cols)
        {
            seats[r-1][c-1]=1;
        }
        else
        {
            printf("\nInvalid row/seat number!");
        }
    }

    printf("\nseating chart :");
    for(i=0; i<rows; i++)
    {
        printf("\nRow %d :",i+1);
        for(j=0; j<cols; j++)
        {
            if(seats[i][j]==1)
            {
                printf("X");
            }
            else
            {
                printf("o");
            }
        }
        printf("\n");
    }
    return 0;
}
