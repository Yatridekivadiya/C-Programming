#include<stdio.h>
int main()
{
    int matchsticks=21,user_matchsticks,computer_matchsticks;
    while(matchsticks>1)
    {
        printf("\nthe number of matchsticks  is : %d",matchsticks);
        printf("\nchoose the number from 1 to 4 : ");
        scanf("%d",&user_matchsticks);
        if(user_matchsticks<1 || user_matchsticks>4)
        {
            printf("\ninvalid number.please enter the valid number");
            continue;
        }
        matchsticks-=user_matchsticks;
        if(matchsticks==1)
        {
            printf("\ncomputer wins");
            break;
        }
        computer_matchsticks=(5-user_matchsticks);
        printf("\nthe number of matchsticks choose by computer is : %d",computer_matchsticks);
        matchsticks-=computer_matchsticks;
        if(matchsticks==1)
        {
            printf("\nonly 1 matchstick left");
            printf("\ncomputer wins!");
            break;
        }
    }
    return 0;
}

