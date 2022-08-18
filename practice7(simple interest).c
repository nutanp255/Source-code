#include<stdio.h>
int main()
{
 float p,roi,t,i,amt=0;
 printf("Enter the principal: ");
 scanf("%f\n",&p);

 printf("Enter the rate of interest: ");
 scanf("%f\n",&roi);

 printf("Enter the time period: ");
 scanf("%f\n",&t);

 i=p*roi*t/100;
 amt=p+i;
 printf("Interest is %6.2f\n",i);
 printf("Amount is %6.2f",amt);
 return 0;
}