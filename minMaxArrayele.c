
#include<limits.h>
#include<stdio.h>
int main()
{

	int mi,ma;
	int ar[10];
	printf("Enter the elements");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &ar[i]);
	}

	printf("\nMinimum and Maximun elements are displayed below respectively\n");
         ma=0;
	 mi=INT_MAX;

	for(int i=0;i<10;i++)
	{
	 if(mi>ar[i])
		 mi=ar[i];
	 if(ma<ar[i])
		 ma=ar[i];
	}
	printf("%d \t %d", mi, ma);
	return 0;

}

