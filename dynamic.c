#include<stdio.h>
#include<stdlib.h>
int main()
{
 
 int size=0;
 int *ptr=NULL;

 printf("Enter number of elements that you want to allocate:");
 scanf("%d",&size);

 ptr=malloc(size*sizeof(int));       //step1:allocate the memory
 if(ptr==NULL)
 {
  printf("Unable to allocate memory\n");
 }
 else
 {
  printf("Memory succesfully allocated\n");
 }

 //step2: use  the memory

 free(ptr);      //step3:free the memory

return 0;
}