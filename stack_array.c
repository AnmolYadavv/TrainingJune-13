#include<stdio.h>
#include<string.h>

int main()
{

	int arr[5],n,top=0;

	printf("\t\t***************************************************************");
        printf("\n Choose the operation :");
	printf("\n\t1. Push");
	printf("\n\t2. Pop");
	printf("\n\t3. Display");
        printf("\n\t4. Exit");
	printf("\nEnter value:");
	scanf("%d", &n);
	char c='y';
	do{
	switch(n)
	{
		case 1:
			break;

		case 2:
			break;

		case 3:
			break;

		case 4:
			break;
		
		default:  printf("\nDo you wish to continue (y/n): ");
		          scanf("%c",&c);
	}
	printf("Enter the value: ");
	scanf("%d",&n);
	}  while(c||n)
