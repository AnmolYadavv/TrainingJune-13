#include<stdio.h>
#include<string.h>
int main()
{

	char str[]="Reverse",ch;
	int i=0,j=0;
	printf("Original string : %s", str);
	j=strlen(str)-1;
	while(i<j)
	{
		ch= str[i];
		str[i]=str[j];
		str[j]=ch;
		i++;
		j--;
	}
	printf("\nReversed string : %s", str);
	return 0;
}	
