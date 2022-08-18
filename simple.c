#include<stdio.h>

 int main()
{
 char st='nutan';
 int in=334;
 float fl=56.8;
 double dl=78.9998;
 
 printf("%c\n",st);
 printf("%d\n",in);
 printf("%f\n",fl);
 printf("%lf\n",dl);
 printf("%c\n",&st);
 printf("%f\n",&fl);
printf("%d\n",&in);
printf("%c\n",sizeof(st));
printf("%d\n",sizeof(in));
printf("%f\n",sizeof(fl));
 return 0;
}