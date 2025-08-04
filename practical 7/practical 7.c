#include<stdio.h>
int main()
{
  int age,adults;
  const int ticketprice=500;
  float discount;
  printf("enter your age: ");
  scanf("%d",&age);
  if(age>=60)
  {
      printf("\n you are a senior sitizen");
      printf("\n you are eligible for free entry");
      return 0;
  }
  else if(age<=0)
  {
      printf("\n invalid age");
      return 0;
  }
  else if(age<=12)
  {
      printf("\n you are a child");
      printf("\n you are eligible for free entry");
      return 0;
  }
  else if(age>12&&age<60)
  {
      printf("\n you are adult");
      printf("\n enter the number of adults: ");
      scanf("%d",&adults);
  }
  else if(adults=5)
  {
      printf("\n you are eligible for discount");
      discount=(ticketprice-(ticketprice*10)/100)*adults;
      printf("\n adults ticket: %f",discount);
  }
  else if(adults<5&adults>5)
  {
      printf("\n total ticket: %d",(adults*ticketprice));
  }
  return 0;
}
