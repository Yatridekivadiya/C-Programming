#include<stdio.h>
int main()
{
    int minute=0;
    float distance=0.0;
    while(1)
    {
        minute++;
        distance+=0.5;
        printf("\nminute %d: Distance covered = %.1f km",minute,distance);
        if (distance>=10.0)
        {
            printf("\nMarathon complete!");
            break;
        }
    }
    return 0;
}
