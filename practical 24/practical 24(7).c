#include<stdio.h>
int main()
{
    int i=0;
    char note[100];

    printf("Enter your note: ");
    gets(note);

    while(note[i] != '\0')
    {
        if(note[i] >= 'A' && note[i] <= 'Z')
        {
            note[i] += 32;
        }
        i++;
    }
    printf("Lowercase Note: %s\n",note);
    printf("\nThis program is developed by yatri dekivadiya");
}
