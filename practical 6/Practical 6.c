//this program contains  Fahrenheit tempreture
#include<stdio.h>
int main()
{
  float Fahrenheit,celsuis;
  printf("enter the value of tempreture in celsius: ");
  scanf("%f",&celsuis);
  Fahrenheit=(celsuis*9.0)/5.0+32;
  printf("\nthe tempreture in Fahrenheit is: %.2f",Fahrenheit);
  scanf("%.2f",&Fahrenheit);
  printf("this program is developed by yatri dekivadiya");
  return 0;
}
