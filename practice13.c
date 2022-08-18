#include<stdio.h>
int main()
{
 int num=0,oc=0,tc=0;
 printf("Enter the number:  ");
 scanf("%d",&num);
 oc=~num;
 tc=oc+1;
 printf("One's complement is %d\n",oc);
 printf("Two's complement is %d\n",tc);

 return 0;
}