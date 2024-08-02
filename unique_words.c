#include<stdio.h>
#include<string.h>
int check(char res[20][20], char s[20],int k)
{
	int f=1;
	for(int i=0;i<k;i++)
	{
		//printf("\nInside print function:- %s, s= %s,  f=%d", res[i],s, f);
		if(strcmp(res[i],s)==0)
		{
			f=0;}
			//printf("\nInside print function:- %s, s= %s,  f=%d", res[i],s, f);
		
	}
	return f;
}
int main()
{
	char str[100], s[20][20],deli[]=" ",res[20][20];
	char *token;
	int n=0;
	printf("Enter string\n");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	token =strtok(str,deli);
	strcpy(s[0],token);
	while(token)
	{
	        strcpy(s[n],token);
		token= strtok(NULL, deli);
		n++;
	}

	strcpy(res[0],s[0]);
	int k=1;
	for(int i=1;i<n;i++)
	{//printf("\n%s,%s\n",res[i],s[i]);
	  if(check(res,s[i],k)==1)
	  { strcpy( res[k],s[i]);
		  k++;
	   // printf("\t %s  , s=%s", res[k-1], s[i]);
	  }

	}

	printf("\nUnique words are:  ");
	for(int i=0;i<k;i++)
	{
		printf ("\t%s\t", res[i]);
	}
	return 0;
}
