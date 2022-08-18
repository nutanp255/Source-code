#include<stdio.h>
struct Demo
{
int iNo;
float fvalue;
int ivalue;
};
int main()
{
struct Demo obj1={11,10.11,21};

struct Demo obj2;

obj2.iNo=11;
obj2.fvalue=10.11;
obj2.ivalue=21;

printf("%d\n",obj1.iNo);
printf("%d\n",sizeof(obj1));
return 0;
}