#include<stdio.h>
int subtraction(int no1,int no2)
{
int Ans=0;
 Ans=no1-no2;
 return Ans;
}
int main()
{
  int A=1049;
  int B=355;
  int C=0;

   C=subtraction(A,B);
   printf("%d",C);
   return 0; 
}