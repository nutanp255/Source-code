//Area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,s,area=0;
 printf("Enter the sides of the triangle: ");
 scanf("%f%f%f",&a,&b,&c);
 
 s=(a+b+c)/2;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("Area of the triangle is %6.2fsq.units",area);

 return 0;
}