#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int diff,i;

    printf("Enter word 1 : ");
    gets(s1);
    printf("Enter word 2 : ");
    gets(s2);

    for(i=0;s1[i]!='0' || s2[i]!='0';i++)
    {
        diff=(s1[i]-s2[i]);
        if(diff!=0)
        break;
    }
    if(diff<0)
    {
        printf("s1 is less than s2 with diff of %d ",diff);
    }
    else if(diff>0)
    {
        printf("s2 is less than s1 with diff of %d ",diff);
    }
    else
    {
        printf("s1 and s2 are equal. diff is %d ",diff);
    }
    printf("\nThis program is developed by yatri dekivadiya");
}
