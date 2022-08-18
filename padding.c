#include<stdio.h>

 struct demo
{
 int arr[3];
 float f;
 char c;
 double d;
};

 int main()
{
 struct demo obj;

 printf("The size of the structure demo is: %d\n ",sizeof(obj));

 return 0;
}