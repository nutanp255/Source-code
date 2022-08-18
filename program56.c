#include"header56.h"

int main()
{
	int iValue1=0;
	int iValue2=0;
	auto ULONG iRet=0;
	
	printf("Enter base:\n");
	scanf("%d",&iValue1);
	
	printf("Enter power:\n");
	scanf("%d",&iValue2);
	
	iRet=Power(iValue1,iValue2);
	printf("Result is :%d",iRet);
	
	return 0;
}