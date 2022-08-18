// accept two number and subtraction of two number.

#include<stdio.h>

 int Addition(int ino1, int ino2);
{
  auto int iAns=0;
 iAns=ino1+ino2;
 return iAns;
}

int Substraction(int ino1, int ino2);
{
  auto int iAns=0;
 iAns=ino1-ino2;
 return iAns;
}
int main()
{
 auto int iValue1=0,iValue2=0,iRet=0;
 printf("Enter the first number:\n");
 scanf("%d",&iValue1);

 printf("Enter the second number:\n");
 scanf("%d",&iValue2);

 iRet=Addition(iValue1,iValue2);
 printf("Addition is: %d\n",iRet);
 
 iRet=Substration(iValue1,iValue2);
 printf("Substration is: %d\n",iRet);

 return 0;
}