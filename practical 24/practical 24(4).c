#include<stdio.h>
int main()
{
    int i=0;
    char str1[50],str2[50];

    printf("Enter the original note: ");
    gets(str1);

    for(i=0;str1[i] != '\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("Copied note: %s\n",str2);
    printf("\nThis program is developed by yatri dekivadiya");
    return 0;
}
