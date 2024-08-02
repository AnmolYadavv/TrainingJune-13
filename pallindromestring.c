
#include<stdio.h>
#include<string.h>
int main()
{

	char str[]="olaolo",ch;
	int i=0,j=0,f=0;
	printf("Original string : %s", str);
	j=strlen(str)-1;
	while(i<j)
	{
		if(str[i]!=str[j])
		{
		        f=1;
			printf("\nNot pallindrome\n");
			break;
		}
		i++;
		j--;
	}
	if(f==0)
	printf("\nPallindrme  string : %s", str);
	return 0;
}	
