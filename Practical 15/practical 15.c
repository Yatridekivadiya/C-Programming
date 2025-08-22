#include<stdio.h>
void main()
{
    int seconds;
    printf("enter the number of seconds :");
    scanf("%d",&seconds);
    while(seconds>=0)
    {
        sleep(1);
        printf("\n\a%d",seconds);
        seconds--;
    }
    printf("\ncountdown complated!");
    printf("\nthis program is developed by yatri dekivadiya");
}
