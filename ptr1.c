#include<stdio.h>
int main()
{
 float arr[]={10.3,43.4,45.34,234.45};
 float *p=NULL;
 float *q=NULL;

 p=arr;
 q=&(arr[3]);
 
 printf("%f\n",p);
 printf("%f\n",q);
 printf("%f\n",*q);
 printf("%f\n",*p);
 printf("%f\n",*(p+2));
 printf("%f\n",0[arr]);
 printf("%f\n",q-p);

 return 0;
}