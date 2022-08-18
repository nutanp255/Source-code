//accept number from user and return addition of factor of that number.

#include<stdio.h>

int DisplayFactorAdd(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=DisplayFactorAdd(iValue);
	printf("Sum of factors: %d\n",iRet);
	return 0;
}