#include<stdio.h>

    int maxprofit(int prices[],int n)
    {
        int minprice=prices[0];
        int maxprofit=0;

        for(int i=1;i<n;i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
            }
            else
            {
                int profit=prices[i]-minprice;
                if(profit > maxprofit)
                {
                    maxprofit=profit;
                }
            }
        }
      return maxprofit;
    }


int main()
{
    int n;
    printf("Enter the number of days :");
    scanf("%d",&n);

    int prices[n];
    printf("Enter prices for %d days:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }
    int result=maxprofit(prices,n);
    printf("maximum profit = %d\n",result);
    return 0;
}
