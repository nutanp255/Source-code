#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
 int pid;
  pid=fork(); 
  if (pid<0) 
  {
  fprintf(stderr,"Fork Failede");
  return 1;
  }
  else if(pid==0) 
	execlp("/bin/wc","wc",NULL);
    else 
	{
	wait(NULL); 
	printf("Child Complete");
	}
	return 0;
}
  