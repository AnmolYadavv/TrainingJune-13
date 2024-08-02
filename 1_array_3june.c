#include<stdio.h>

int main()
{

	int arr[20];
	int n, nn=0, sum=0;
	printf("Input number of elements");
		scanf("%d", &n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
				
					 nn+=arr[i];}
					sum=(n*(n+1))/2;
					sum+=arr[n-1];
					sum-=nn;
     printf("\n Mising element is :%d", sum);


	return 0;
}
