#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	pid_t pid;
	printf("\n Assignment 1");
	pid =fork();

	if(pid==0)
		{printf("\n Hello from the child!");
		 }
	else
	{
		printf("\n Hello from parent process");
		printf("\nMy child pid: %d", pid);
	}
	return 0;
}

