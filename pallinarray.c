#include<stdio.h>
int main()
{
	int i=0,j=4,ar[10],f=0;
	printf("Enter elements:-\n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &ar[i]);
	}
	printf("The given array is ");
	for(i=0,j=4;i<5/2;i++,j--)
	{
		printf("%d  %d\n", ar[i],ar[j]);
		if(ar[i]!=ar[j])
		{   f=1;
			printf("not pallindrome");
			break;}
	}

	if(f==0)
		printf("pallindrome");
	return 0;
}
