//accept number from user and check it palindrom or not.

#include<stdio.h>
#include<stdbool.h>

bool Pallindrom(int iNo)
{
	int iDigit=0;
	int iRev=0;
	int iTemp=0;
	if(iNo<0)
	{
	  iNo=-iNo;
	}
	iTemp=iNo;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
		if(iRev==iTemp)
		{
			return true;
		}
		else
		{
			return false;
		}
}
 int main()
{
	int iValue=0;
	bool bRet=0;
	
	printf("enter number:\n");
	scanf("%d",&iValue);
	
	bRet=Pallindrom(iValue);
	if(bRet==true)
	{
		printf("%d Number is pallindrom",iValue);
	}
	else
	{
		printf("%d Number is not pallindrom",iValue);
	}
		
	return 0;
}