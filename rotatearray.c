#include<stdio.h>
int main()
{
	int ar[10], n, temp;
	printf("Enter elements:- \n");
        for(int i=0;i<10;i++)
	{
		scanf("%d", &ar[i]);
	}
		printf("\n Enter the posiion\n");
		scanf("%d", &n);
		
	//	int a= ar[0];
	
	
		for(int i=0;i<n;i++)
		{
                   temp=ar[0];
		   for(int j=0;j<9;j++)
		   {
			   ar[j]=ar[j+1];
		   }
		   ar[9]=temp;
		}
	
	
	
		printf("\nFinal result is:-\n ");

		for(int i=0;i<10;i++)
		{
			printf("\n %d",  ar[i]);
		}
		return 0;
}

