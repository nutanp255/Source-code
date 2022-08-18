#include<stdio.h>
 int main()
{
 float radius,circle,area=0;
 printf("Enter the radius of circle: ");
 scanf("%f",&radius);
 circle=2*22.0/7*radius;
 area=22.0/7*radius*radius;
 printf("Cercumference of the circle is %6.2f\n",circle); 
 printf("Area of the circle is %6.2f\n",area);

 return 0;
}