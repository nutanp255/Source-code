#include<stdio.h>
struct Demo
{
int iNo;
float fvalue;
int ivalue;
};
int main()
{
struct Demo obj;

obj.iNo=11;
obj.fvalue=10.11;
obj.ivalue=21;

printf("%d\n",obj.ivalue);
printf("%d\n",sizeof(obj));
return 0;
}