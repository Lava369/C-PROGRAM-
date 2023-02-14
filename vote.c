#include<stdio.h>
int main()
{
  int age,diff;
  printf("Enter the age :");
  scanf("%d",&age);
  diff=18-age;
  if(age>=18)
  {
    printf("you are eligible to vote");
  }
  printf("You are allowed to vote after %d\n",diff);
  return 0;
}
