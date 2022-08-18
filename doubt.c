#include<stdio.h>
int main()
{
 double d=3.14;
 float f=6.10;
 
 printf("%d\n",sizeof(d));
 printf("%d\n",sizeof(6.10));
 printf("%d\n",sizeof d);
 printf("%d\n",sizeof(3.14f));

 return 0;
}