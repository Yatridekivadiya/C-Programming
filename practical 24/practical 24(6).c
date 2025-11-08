#include<stdio.h>
int main()
{
    int i=0;
    char note[100];

    printf("Enter a note: ");
    gets(note);

    while(note[i] != '\0')
    {
        if(note[i] >= 'a' && note[i] <= 'z')
        {
            note[i] = note[i] - 32;
        }
        i++;
    }
    printf("Uppercase Note: %s\n",note);
    printf("\nThis program is developed by yatri dekivadiya");
    return 0;
}
