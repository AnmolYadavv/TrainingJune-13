#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int main()
{
	pid_t pid;
	int rv =10;
	printf("Example code\n");
	pid = fork();

	if(pid==0)
	{
		printf("\nCHILD: This is the child process! \n");
		printf("\nCHILD: My PID is %d\n", getpid());
		printf("\nCHILD: My parent's PID is %d groupid :%d\n", getppid(), getpgrp());
		sleep(100);
		printf("Child :exiting\n");
		exit(rv);
	}
	else
	{
		printf("\nPARENT : My PID is %d, groupid :%d\n", getpid(), getpgrp());
		printf("Parent : My child PID is %d\n", pid);
		printf("PARENT: I'm now waitingfor my child to exit()>>>>\n");
		printf("\nPARENT: My child's exit status is: %d\n", WEXITSTATUS(rv));
		printf("\nPARENT: I am exiting\n");
	}
	printf("\nExits\n");
	return EXIT_SUCCESS;
}

