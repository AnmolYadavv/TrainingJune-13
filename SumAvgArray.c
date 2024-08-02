

#include<limits.h>
#include<stdio.h>
int main()
{

	int avg,sum=0;
	int ar[10];
	printf("Enter the elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &ar[i]);
	}

	printf("\nSum and Avereage elements are displayed below respectively\n");
        

	for(int i=0;i<10;i++)
	{
	    sum+=ar[i];      
	}
	avg=sum/10;
	printf("%d \t %d", sum, avg);
	return 0;

}

