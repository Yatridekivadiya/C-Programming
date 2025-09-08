#include<stdio.h>
int main()
{
    int n,i,ids[n-1],expected_sum,original_sum,missing_id;
    printf("Enter the total number of participants :");
    scanf("%d",&n);

    printf("Enter %d participants ids :",n-1);

    for(i=0;i<n-1;i++)
    {
        scanf("%d",&ids[i]);
    }
    expected_sum=n*(n+1)/2;
    original_sum=0;
    for(i=0;i<n-1;i++)
    {
        original_sum+=ids[i];
    }
    missing_id=expected_sum-original_sum;
    printf("\nthe missing participants ID is : %d",missing_id);
    return 0;
}
