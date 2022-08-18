#include<stdio.h>
 int main()
{
 int no1,no2=0;
  printf("Enter the numbers\t");
  scanf("%d%d",&no1,&no2);

 printf("Numbers befor swap:%d %d\n",no1,no2);
  
 no2=no1+no2;
 no1=no2- no1;
 no2=no1- no2;

 printf("Numbers after swap:%d %d\n",no1,no2);

}