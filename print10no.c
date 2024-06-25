
#include<stdio.h>
int main()
{

	int ar[10];
	printf("Enter the elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &ar[i]);
	}

	printf("\nEneterd elements will be displayed below\n");

	for(int i=0;i<10;i++)
	{
		printf("%d \t", ar[i]);
	}
	return 0;

}

