#include<stdio.h>
int main()
{
 float p,roi,t,i,amt=0;
 printf("Enter the principal,rate,time : ");
 scanf("%f%f%f\n",&p,&roi,&t);
 i=p*roi*t/100;
 amt=p+i;
 printf("Interest is %6.2f\n",i);
 printf("Amount is %6.2f",amt);
 return 0;
}