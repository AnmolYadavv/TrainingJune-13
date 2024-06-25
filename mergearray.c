#include<stdio.h>
int main()
{
	int ar1[10], ar2[10], ar3[20];
	printf("Enter first array:-\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&ar1[i]);
	}
	printf("\nEnter second array\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &ar2[i]);
	}
	printf("Merged Array\n");
	for(int i=0;i<10;i++)
	{
		ar3[i]=ar1[i];
	}
	for(int i=0;i<10;i++)
	{
		ar3[i+10]=ar2[i];
	}
	for(int i=0;i<20;i++)
	{
		printf("%d \t", ar3[i]);
	}
	return 0;
}
