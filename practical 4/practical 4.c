#include<stdio.h>
#include<limits.h>
void main()
{
    printf("the size of char is:%zu",sizeof(char));
    printf("\nthe range of char is from %d to %d",CHAR_MIN,CHAR_MAX);
    printf("\nthe size of int is:%zu",sizeof(int));
    printf("\nthe range of int is from %d to %d",INT_MIN,INT_MAX);
    printf("\nthe size of unsigned int is:%zu",sizeof(unsigned int));
    printf("\nthe range of unsigned int is from %0 to %u",UINT_MAX);
    printf("\nthe size of long is:%zu",sizeof(long));
    printf("\nthe range of long is from %ld to %ld",LONG_MIN,LONG_MAX);
    printf("\nthe size of unsigned long is:%zu",sizeof(unsigned long));
    printf("\nthe range of unsigned long is from %0 to %lu",ULONG_MAX);
    printf("\nthe size of long long is:%zu",sizeof(long long));
    printf("\nthe range of long long is from %lld to %lld",LLONG_MIN,LLONG_MAX);
    printf("\nthe size of unsigned long long is:%zu",sizeof(unsigned long long));
    printf("\nthe range of unsigned long long is from %0 to %llu",ULLONG_MAX);
    printf("\nthe size of float is:%zu",sizeof(float));
    printf("\nthe range of float is from %e to %e",INT_MIN,INT_MAX);
    printf("\nthe size of double is:%zu",sizeof(double));
    printf("\nthe range of double is from %e to %e",INT_MIN,INT_MAX);
    printf("\nthe size of long double is:%zu",sizeof(long double));
    printf("\nthe range of long double is from %d to %d",LONG_MIN,LONG_MAX);
    printf("\nthis program is");
}
