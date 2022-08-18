#include<stdio.h>
int main()
{
 int age=0;
 float age_in_sec=0;
 printf("How old are you(years):   ");
 scanf("%d",&age);

 age_in_sec=3.156E7*age;
 printf("Your age in seconds is %5.2E",age_in_sec);

 return 0;
}