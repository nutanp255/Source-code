#include<stdio.h>
int main()
{
 int no1,no2,no3=0;
 printf("Enter the number\t");
 scanf("%d%d",&no1,&no2);

 printf("Numbers before swaps:%d %d\n",no1,no2);
 
 no3=no1;
 no1=no2;
 no2=no3;

 printf("Numbers after swaps:%d %d\n",no1,no2);

 return 0;
}