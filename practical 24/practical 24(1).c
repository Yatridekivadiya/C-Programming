#include<stdio.h>
int main()
{
    char s[100];
    int count=0;

    printf("Enter the world : ");
    gets(s);

    while(s[count]!='\0')
    count++;

    printf("The length is : %d",count);
    printf("\nThis program is developed by yatri dekivadiya ");
}
