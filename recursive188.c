//123
//3 2 1 

#include<stdio.h>

void DisplayI(int no)
{
	auto int iCnt=0;
	while(no!=0)
	{
		printf("%d\t",no%10);
		no=no/10;
	}
	printf("\n");

}
void DisplayR(int no)
{
	auto int iCnt=0;
	if(no!=0)
	{
		printf("%d\t",no%10);
		no=no/10;
		DisplayR(no);
	}
}
int main()
{
	DisplayI(123);
	DisplayR(123);
	return 0;
}