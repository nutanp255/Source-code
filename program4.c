//write a program which is perform addition of 2 number.

#include<stdio.h>

int main()
{	
	int iNo1=0;
	int iNo2=0;
	int iNo3=0;
	
	printf("Enter the first number:\n");
	scanf("%d",&iNo1);
	
	printf("Enter the second number:\n");
	scanf("%d",&iNo2);
	
	iNo3=iNo1+iNo2;
	printf("Addition is:%d",iNo3);
	
	return 0;
}