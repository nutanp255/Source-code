//accept array from user and perform the addition of element in that array by using recursion.

#include<stdio.h>

int Sum(int Arr[],int size)
{
	int i=0;
	int iSum=0;
	while(i<size)
	{
		iSum=iSum+Arr[i];
		i++;
	}
	return iSum;
}
int main()
{
	int Brr[]={10,20,30,40};
	int iRet=0;
	
	iRet=Sum(Brr,4);
	
	printf("Summation is: %d",iRet);
	
	return 0;
}