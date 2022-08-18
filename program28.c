//acccept number from user and display factor of that number.
//input:  10
//output: 1 2 5 

//input: 9
//output: 1 3

//input: 17
//output: 1

//input: 20
//output: 1 2 4 5 10

//input: -20
//output:1 2 4 5 10

#include<stdio.h>

void DisplayFactor(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1; iCnt<= (iNo/2); iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}

/*
Time complexity: O(N/2)
Time complexity: O(N)
Time complexity: O(2N)
Time complexity: O(N^2)