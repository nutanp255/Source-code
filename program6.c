//write a program which is perform addition of 2 number. with internal documentation

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//Function name: Addtion
//Description:	 Used to perform addition of 2 number.
//Input:		 Integer,Integer.
//Output:		 Integer
//Date:			 12/04/2022
//Author:		 Nutan Santosh Padekar
//
///////////////////////////////////////////////////////////////////

int Addition(int iValue1,int iValue2)
{
	int iAns=0;
	iAns=iValue1+iValue2;
	return iAns;	
}

///////////////////////////////////////////////////////////////////
//write a program which is perform addition of 2 number.
//////////////////////////////////////////////////////////////////
int main()
{	
	int iNo1=0;
	int iNo2=0;
	int iNo3=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iNo2);
	
	iNo3=Addition(iNo1,iNo2);
	printf("Addition is:%d\n",iNo3);
	
	return 0;
}

///////////////////////////////////////////////////////////////////
//
//Input:	11   10
//Output:	21
//
///////////////////////////////////////////////////////////////////