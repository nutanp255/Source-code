//accept number from user sumation of n number.
//input:5
//output:1+2+3+4+5=15

/*Algorithem
START
	
*/

#include<stdio.h>

int Summation (int iNo)
{
	int iSum=0;
	int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=Summation(iValue);
	printf("Summation is:%d\n",iRet);
	return 0;
}