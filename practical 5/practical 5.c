#include<stdio.h>
int main()
{
    long long population,men,women,overallliteracy,literacy_women,literacy_men,illiteracy_men,illiteracy_women;
    population=1441981744;
    women=population*(48.4/100);
    printf("\nthe total number of women: %lld",women);
    men=population-women;
    printf("\n the total number of men: %lld\n",men);
    overallliteracy=1441981744*(85.95/100);
    printf("\n the total number of overall literacy: %lld",overallliteracy);
    literacy_women=overallliteracy*(62.84/100);
    printf("\n the total number of literacy_women: %lld",literacy_women);
    literacy_men=overallliteracy-literacy_women;
    printf("\n the total number of literacy_men: %lld",literacy_men);
    illiteracy_women=women-literacy_women;
    printf("\n the total number of illiteracy_women: %lld",illiteracy_women);
    illiteracy_men=men-literacy_men;
    printf("\n the total number of illiteracy_men: %lld",illiteracy_men);
    return 0;
}
