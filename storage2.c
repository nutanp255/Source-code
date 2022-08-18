#include<stdio.h>
void Data()
{
auto int B=111;
B++;
printf("%d\n",B);
}
void Hello()
{
static int B=111;
B++;
printf("%d\n",B);
}
int main()
{
Data();
Data();

Hello();
Hello();
Hello();

return 0;
}