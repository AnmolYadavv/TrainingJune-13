#include<stdio.h>
#include<string.h>
int check(char s1[30], char s2[30])
{
       if(strcmp(s1,s2)>0)
	       return 1 ;
       else
	       return 2;
}

int main()
{
	char str[20][20], s[30], res[20][20];
	char temp[20];
	char deli[]="|";
	char *token;
	int n=0;
	printf("Enter the string :");
	fgets(s,30,stdin);
	token =strtok(s,deli);
	while(token)
	{
		strcpy(str[n],token);
	//	printf("%s :n=%d ",str[n],n);
		token=strtok(NULL,deli);
		n++;
	}
	strcpy(res[0],str[0]);
	for(int i=0;i<n-1;i++)
	{ 
	for(int j=0;j<n-i-1;j++)
		{
			    if(check(str[j],str[j+1])==1)
			    {
				    strcpy(temp,str[j]);
				    strcpy(str[j],str[j+1]);
			 	    strcpy(str[j+1],temp);
	//		     printf("\n In if temp=%s  string=%s\n",temp,str[j]);
			    }

			}
	}
	printf("Sorted strings: \t\n");
	for(int i=0;i<n;i++)
	{
		if(i<n-1)
		printf("%s|",str[i]);
		else
			printf("%s",str[i]);
	}
	return 0;
}


         
