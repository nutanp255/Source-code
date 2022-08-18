//addition of digit.

#include<stdio.h>

int AddDigit(int iNo)
{
	int iDigit=0,iSum=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	int iValue=0,iRet=0;
	printf("enter number:\n");
	scanf("%d",&iValue);
	
	iRet=AddDigit(iValue);
	printf("Addition is: %d",iRet);
	
	return 0;
}