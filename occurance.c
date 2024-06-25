#include<stdio.h>
int main()
{
	int ar[10], temp;
	printf("Enter elements\n");
	for(int i=0; i<10;i++)
	{
		scanf("%d", &ar[i]);
	}
	printf("\nOccurances of array element\n");
		for(int i=0;i<10;i++)
		{
		
			if(ar[i]!=-1){
			temp=1;
			for(int j=i+1;j<10;j++)
			{
				if(ar[j]==ar[i])
				{
					ar[j]=-1;
					temp++;}
			}
			
			printf("\n%d occured %d times", ar[i], temp);}
		        ar[i]=-1;
		}
		return 0;
}
