#include<stdio.h>
#include<math.h>

void inputSides(float*a, float*b, float*c);
int validateTriangle(float a, float b, float c);
float calculateArea(float a, float b, float c);

int main()
{
    float a,b,c,area;

    inputSides(&a,&b,&c);

    if(a<=0 || b<=0 || c<=0)
    {
        printf("Invalid number. please enter positive sides");
    }
    else
    {
        printf("This triangle is valid");
    }

    area = calculateArea(a,b,c);
    printf("\nArea of garden is : %.2f",area);
    printf("\nThis program is developed by yatri dekivadiya");
    return 0;
}


    void inputSides(float*a, float*b, float*c)
    {
        printf("Enter three sides of triangle: ");
        scanf("%f %f %f",a,b,c);
    }

    int validateTriangle(float a, float b, float c)
    {
        if((a+b>c) && (b+c>a) && (a+c>b))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


    float calculateArea(float a, float b, float c)
    {
        float s,area;
        s=(a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }


