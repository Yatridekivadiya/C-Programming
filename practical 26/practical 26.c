#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,A;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    printf("Enter c: ");
    scanf("%d",&c);
    if(a>0 && b>0 && c>0)
    {
        if(a+b>c && a+c>a && b+c>a)
        {
            printf("This triangle is valid");
            s=(a+b+c)/2;
            printf("\n s is : %.2f",s);
            A=sqrt(s*(s-a)*(s-b)*(s-c));
            printf("\nThe area of garden is : %.2f",A);
        }
        else
        {
            printf("This triangle is not valid");
        }
    }
    else
    {
        printf("The  number is negative. please enter positive numbers.");
    }

}
