#include<stdio.h>
int main()
{
    int n,i;
    float total=0,first=1,second=1,next;
    printf("Enter the number of months(n) : ");
    scanf("%d",&n);
    printf("----------------------------------");
    if(n<1)
    {
        printf("\ninvalid number! please enter valid number");
    }
    if(n>=1)
    {
        printf("\nMonth 1 : %.2f",first);
        total+=first;
    }
    if(n>=2)
    {
        printf("\nMonth 2 : %.2f",second);
        total+=second;
    }
    for(i=3;i<=n;i++)
    {
        next=first+second;
        printf("\nMonth %d : %.2f",i,next);
        total+=next;
        first=second;
        second=next;
    }
    printf("\n----------------------------------");
    printf("\nTotal Saving after %d months : %.2f",n,total);
    printf("\n----------------------------------");
    return 0;
}
