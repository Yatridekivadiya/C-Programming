#include<stdio.h>
int main()
{
    long long population,men,women,overall;
    population=1441981744;
    women=(48.4/100)*1441981744;
    printf("the total number of women: %d",women);
    men=population-women;
    printf("\nthe total number of men: %d",men);
    overall literacy=(85.95/100)*1441981744;
}
