#include<stdio.h>
#include<stdlib.h>
int main()
{
 
 int *ptr=NULL;

 
 ptr=(int*)malloc(5*sizeof(int));       //step1:allocate the memory

ptr=(int*)realloc(ptr,7*sizeof(int));

 free(ptr);      //step3:free the memory

return 0;
}