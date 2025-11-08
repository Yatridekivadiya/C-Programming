#include<stdio.h>
int main()
{
    char s[100];
    int count=0,i;

    printf("Enter the word : ");
    gets(s);

    while(s[count]!='\0')
    count++;

    printf("Reversed word is : ");
    for(i=count-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
    printf("\nThis program is developed by yatri dekivadiya");
}
