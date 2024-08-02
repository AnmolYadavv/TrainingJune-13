#include<stdio.h>
#include<string.h>
int main()
{

	char s[20][20], word[20], str[30];
	char *token;
	char deli[]=" ";
	printf("Enter the string: ");
	fgets(str,30,stdin);
	str[strcspn(str,"\n")]='\0';
        printf("Enter word to be find: ");
	fgets(word,20,stdin);
	word[strcspn(word,"\n")]='\0';
        token= strtok(str,deli);
        int n=0;
	while(token)
	{
                strcpy(s[n],token);
		token= strtok(NULL, deli);
		n++;
	}
//printf("N: %d", n);
  	int idx=-1;
	for(int i=n-1;i>=0;i--)
	{
	      if(!strcmp(word,s[i]))
	      {
		      idx=i;
		      break;
	      }
	}
	
	printf("Required string: idx: %d \n",idx);
	for(int i=0;i<n;i++)
	{
		if(i!=idx)
			printf("%s ",s[i]);
	}



	return 0;
}

