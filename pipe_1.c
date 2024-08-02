#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{

	int fd[2];
	char *str= "HI message is send from parent";
	char s1[30];
         pid_t pid;
	if(pipe(fd)<0)
	{
		printf("Pipe allocation erroe");
		exit(EXIT_FAILURE);
	}
	if((pid=fork())<0)
			{
			printf("Forking error");
			exit(1);
			}
	else if(pid>0)
	{
		close(fd[0]);
		write(fd[1],str,strlen(str)+1);
		close(fd[1]);
	}
	else
	{
		close(fd[1]);
		read(fd[0],s1,sizeof(s1));
	  	printf("\nMessage from parent : %s",s1);
		close(fd[0]);
	}
	return 0;



}
