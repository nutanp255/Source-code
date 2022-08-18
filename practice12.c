#include<stdio.h>
int main()
{
 float a=0.9;
 double b=0.9;
 char *p;
 int i=0;
 p=(char*)&a;
 
 printf("Float is stored in memory as:  ");

 for(i=0;i<=3;i++)
printf("%02X",(unsigned char)p[i]);

 p=(char*)&b;
 printf("\nDouble is stored in memory as:  ");

 for(i=0;i<=7;i++)
 printf("%02X",(unsigned char)p[i]);
 return 0;
}