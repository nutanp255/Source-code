/*
1gram  4000
2gram  8000
5gram  20000
10gram 40000

*/
#include<stdio.h>

void JwelersPortal(int iWeigth)
{
	switch(iWeigth)
	{
		case 1:
		printf("your bill is 4000\n");
		break;
		
		case 2:
		printf("your bill amount is 8000\n");
		break;
		
		case 5:
		printf("your bill amount is 20000");
		break;
		
		case 10:
		printf("your bill amount is 20000");
		break;
		
		default:
		printf("Invalid weigth\n");
		
	}
}
int main()
{
	int iValue=0;
	printf("Enter the gold coin size that you want to puechase\n");
	scanf("%d",&iValue);
	
	JwelersPortal(iValue);
	
	return 0;
}