#include<stdio.h>
int main()
{
 float f=0;
 float c=0;
 printf("Enter the temperature in Fahrenheit\n");
 scanf("%f",&f);
 
 c=5.0/9.0*(f-32);
 printf("Temperature in celsius is %6.2f",c);
 return 0;
}