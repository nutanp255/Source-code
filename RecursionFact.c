#include<stdio.h>

int FactorialR(int iNo)
{
	static int iFact=1;
	
	if(iNo>0)
	{
		iFact=iFact*iNo;
		iNo--;
		FactorialR(iNo);
	}
	return iFact;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	iRet=FactorialR(iValue);
	
	printf("Factorial is:%d",iRet);
	
	return 0;
}