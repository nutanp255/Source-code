//Input: 2  4
//output: 16(2*2*2*2)

#include<stdio.h>

typedef unsigned long int ULONG;

 ULONG Power(int iNo1,int iNo2)
{
	ULONG iMult=1;
	register int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iMult = iMult * iNo1;
	}
	return iMult;
}
int main()
{
	auto int iValue1=0;
	auto int iValue2=0;
	ULONG lRet=0;
	
	printf("Enter Base:");
	scanf("%d",&iValue1);
	
	printf("Enter power:");
	scanf("%d",&iValue2);
	
	lRet=Power(iValue1,iValue2);
	printf("Result is:%d",lRet);
	
	return 0;
}