#include<stdio.h>
int main
{

  int iValue=21;
  int *iptr=&iValue;

  float fValue=10.11;
  float *fptr=&fValue;

  double dValue=20.11;
  double *dptr=&dValue;
 
  printf("%d\n",iValue);

  return 0; 

}