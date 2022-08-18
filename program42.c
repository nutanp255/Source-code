//accept number from user and count number of factor of that number.

#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt=0;
	int iFactCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iFactCnt++;
		}
	}
	return iFactCnt;
}
bool Checkprime(int iNo)
{
	int iRet=0;
	iRet=CountFactor(iNo);
	if(iRet==0)
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
	bool bRet;
	
	printf("Enter number:\n ");
	scanf("%d",&iValue);
	
	bRet=CountFactor(iValue);
	if(bRet==true)
	{
		printf("%d is prime number",iValue);
	}
	else
	{
		printf("%d is not prime number",iValue);
	}

	return 0;
}