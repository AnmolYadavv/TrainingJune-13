#include<stdio.h>
#include<string.h>

int main()
{
	char str[]={"abcabbcbabcbc"};
	char str1[100]={""};
	int n=1,f=0;
	str1[0]=str[0];
        printf("Original string %s/n",str);
  	for(int i=1;i<strlen(str);i++)
	{
		f=1;
		for(int j=0;j<strlen(str1);j++)
		{
		//	printf("\n%c %c\n",str[i],str1[j]);
			if(str[i]==str1[j])
		        	{
				f=0;
			       break;}
			else
			{f=1;					
		
			}
		}
		if(f==1)
		{   str1[n]=str[i];
                  //   printf("\n %d", n);
			n++;
		}
	}
//printf("%s\n", str1);

	for(int i=0;i<strlen(str1);i++)
	{
		printf("%c\t",str1[i]);
	}
	return 0;
}


