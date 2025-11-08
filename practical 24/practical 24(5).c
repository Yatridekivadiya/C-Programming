#include<stdio.h>
int main()
{
    int i=0,j=0;
    char str1[100],str2[100];

    printf("Enter first note: ");
    gets(str1);

    printf("Enter second note: ");
    gets(str2);

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated note: %s\n",str1);
    printf("\nThis program is developed by yatri dekivadiya");
    return 0;
}
