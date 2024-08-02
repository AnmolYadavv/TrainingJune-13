#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void upper(char *str)

{
	int n=strlen(str);
       for(int i=0;i<n;i++)
       {
           str[i]=toupper(str[i]);
       }
      // printf("\n%s,\n", str);

}

int main()
{

	int fd[2],fd1[2];
	char *str= "message to be modified";
	char s1[30];   //s1 acts as BUFFER
         pid_t pid;
	// str[0]=toupper(str[0]);
	// printf("%s\n",str);
	if((pipe(fd)<0)||(pipe(fd1)<0))
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
	{                                 //parent
		close(fd[0]);
		close(fd1[1]);
		write(fd[1],str,strlen(str)+1);
		//close(fd[1]);
		wait();
		read(fd1[0],s1,sizeof(s1));
		printf("\nMessage received from child : %s\n", s1);
		close(fd1[0]);
		close(fd[1]);
	}
	else if(pid==0)
	{
		close(fd[1]);
		close(fd1[0]);
		read(fd[0],s1,sizeof(s1));
	  	printf("\nMessage from parent which is to be modified : %s",s1);
               // close(fd[0]);
		upper(s1);
	//	printf("\n In child the message:- %s\n", s1);
	//	close(fd[0]);
		write(fd1[1],s1,strlen(s1)+1);
		close(fd[0]);
		close(fd1[1]);
	}
	return 0;



}
