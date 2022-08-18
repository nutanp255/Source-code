#include<stdio.h>
int main()
{
 int iValue=11;
 int cValue='A';
 float fValue=10.30;
 double dValue=20.111;

  void *ptr=NULL;
  ptr= &iValue;
  printf("%d\n",*(int*)ptr);

  ptr=NULL;
  ptr=&fValue;
  printf("%f\n",*(float*)ptr);
 
  ptr=NULL;
  ptr=&cValue;
  printf("%c\n",*(char*)ptr);

  return 0;

}