//Accept number from user and count digit of that number.

#include<stdio.h>

//Input:7856
//Output:
//6
//5
//8
//7
int CounterDigits(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}
int main()
{  
	int iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CounterDigits(iValue);
	printf("Number of digit are:%d\n",iRet);
	
	return 0;
}