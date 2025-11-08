#include<stdio.h>
#include<string.h>
#define max_books 5

char books[max_books][50];
int i,found=0,daysLate,available[max_books] = {1,1,1,1,1};


void displayBooks()
{
    printf("\nList of available books:\n");
    for(i=0;i<max_books;i++)
    {
        if(available[i])
        {
            printf("%d. %s\n",i+1,books[i]);
        }
    }
}


int getTotalBooks()
{
    int count=0;
    for(i=0;i<max_books;i++)
    {
        if(available[i])
        {
            count++;
        }
    }
    return count;
}


void borrowBook(char bookName[])
{
    for(i=0;i<max_books;i++)
    {
        if(strcmp(books[i],bookName) == 0)
        {
            found = 1;
            if(available[i])
            {
                available[i] = 0;
                printf("\nYou have borrowed: %s\n",bookName);
            }
            else
            {
                printf("\nSorry, '%s' is already borrowed.\n",bookName);
            }
            break;
        }
    }
    if(!found)
    {
        printf("\nBook not found in the library.\n");
    }
}


float calculateFine(int daysLate)
{
    float finePerDay = 2.0;
    float fine = daysLate*finePerDay;
    return fine;
}


int main()
{
    int choice,days;
    char name[50];

    while(1)
    {
        printf("\n----Library Managment System----\n");
        printf("1. Display available books\n");
        printf("2. get total number of books\n");
        printf("3. borrow a book\n");
        printf("4. calculate fine\n");
        printf("5. exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();

        switch(choice)
        {
        case 1:
            displayBooks();
            break;
        case 2:
            printf("\nTotal available books: %d\n",getTotalBooks());
            break;
        case 3:
            printf("\nEnter book name to borrow: ");
            gets(name);
            borrowBook(name);
            break;
        case 4:
            printf("\nEnter number of days late: ");
            scanf("%d",&days);
            printf("Fine amount: Rs.%.2f\n",calculateFine(days));
            break;
        case 5:
            printf("\nExiting...Thank you!\n");
            printf("This program is developed by yatri dekivadiya");
            return 0;
        default :
            printf("\nInvalid choice. Try again!\n");
        }
    }

    return 0;
}
