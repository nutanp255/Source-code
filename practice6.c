#include<stdio.h>
int main()
{
 float no1,no2,no3=0;
  float Avg=0;
 printf("Enter the first number:",no1);
 scanf("%f\n",&no1);

 printf("Enter the second number:",no2);
 scanf("%f\n",&no2);

 printf("Enter the third number:",no3);
 scanf("%f\n",&no3);

 Avg=(no1+no2+no3)/3;
 printf("Average of the numbers are: %6.2f\n",Avg);

 return 0;
}