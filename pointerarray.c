#include<stdio.h>
int main()
{
 ‌int Arr[5] = {10,20,30,40,50};

int *p= &(Arr[0]);
int *q= &(Arr[4]);

printf("value of p before increment is %d\n",p);
p++;
printf("value of p after increment is %d\n",p);
return 0;
}