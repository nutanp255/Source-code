#include<stdio.h>

struct Demo
{
int i;
int j;
float f;
};

union Hello
{
int i;
int j;
float f;
};

int main()
{
struct Demo dobj;
union Hello hobj;

printf("%d\n",sizeof(dobj));
printf("%d\n",sizeof(hobj));

return 0;
}