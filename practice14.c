#include<stdio.h>
int main()
{
 int num,bit,temp=0;
 printf("Enter the number:   ");
 scanf("%d",&num);
 
 printf("Enter the bit number to be set:   ");
 scanf("%d",&bit);
 
 temp=1<<(bit-1);
 num=num|temp;
 printf("Value after setting bit is %d",num);


 return 0;
}