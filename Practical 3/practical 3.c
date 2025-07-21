// this program contains how BMI is calculated
#include<stdio.h>
int main()
{
   float height,weight,BMI;
   printf("\nEnter your height(in meter): ");
   scanf("%f,&height");
   printf("\nEnter your weight(in kilograms):");
   scanf("%f,&weight");
   BMI=weight/(height*height);
   printf("your BMI is: %f",BMI);
   if(BMI<18.5)
   {
       printf("you are under weight");
   }
   else if(BMI>=18.5 | BMI<24.9)
   {
       printf("you are healthy");
   }
   printf("\n this program is developed by yatri");
   return 0;
}
