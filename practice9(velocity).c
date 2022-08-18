//convert units of velocity
#include<stdio.h>
int main()
{
 float velk,velm=0;
 printf("Enter the velocity in Km/hr: ");
 scanf("%f",&velk);

 velm=velk*5/18;
 printf("Equivanlent velocity is %fm/sec",velm);

 return 0;
}