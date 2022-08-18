//Compute velocity after time t
 
#include<stdio.h>
int main()
{
 float u,a,v,t=0;
 printf("Enter the value of initial velocity in m/s: ",u);
 scanf("%f",&u);

 printf("Enter the amount of the accelaration: ",a);
 scanf("%f",&a);


 printf("Enter the time in sec: ",t);
 scanf("%f",&t);
 
 v=u+a*t;
 printf("Velocity after %4.2fm/s",v);

 return 0;
}