#include<stdio.h>
int main()
{
    int i=0,flag=1;
    char note[100];

    printf("Enter your note: ");
    gets(note);

    while(note[i] != '\0')
    {
        if((note[i] >= 'A' && note[i] <= 'Z') || (note[i] >= 'a' && note[i] <= 'z'))
        {
            if(flag == 1)
            {
                if(note[i] >= 'a' && note[i] <= 'z')
                {
                    note[i] -= 32;
                }
                flag = 0;
            }
            else
            {
                if(note[i] >= 'A' && note[i] <= 'Z')
                {
                    note[i] += 32;
                }
            }
        }
            else
            {
                flag = 1;
            }
        i++;
    }
    printf("Capitalized Note: %s\n",note);
    printf("\nThis program is developed by yatri dekivadiya");
    return 0;
}
