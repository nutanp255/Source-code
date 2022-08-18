//accept number from user and check wheather number is perfect or not.

#include<stdio.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;((iCnt<=(iNo/2))&&(iSum<=iNo)); iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum = iSum+iCnt;
		}
	}
	if (iSum==iNo)
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
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet=Checkperfect(iValue);

	if(bRet==true)
	{
		printf("%d is a perfect number\n ",iValue);
	}
	else
	{
		printf("%d is not a perfect number\n ",iValue);
	}
	return 0;
}