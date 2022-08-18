#include<stdio.h>

struct demo
{
 int i;
 float f;
 double d;
};

 int main()
{
 struct demo obj;
 
 obj.i=11;
 obj.f=10.11;
 obj.d=21.22;

 printf("%d\n",sizeof(obj));

return 0;
}