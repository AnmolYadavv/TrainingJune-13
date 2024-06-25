#include<stdio.h>
int main()
{
	int ar[10],n=10,temp;
	printf("\nEnter array value");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &ar[i]);
	}
  printf("\nSorted array:- \n");
  for(int i=0;i<n;i++)
  {
	  for(int j=i+1; j<n;j++)
	  {
                if(ar[j]<ar[i])
		{
			temp=ar[j];
			ar[j]=ar[i];
			ar[i]=temp;
		}
	  }
  }


  for(int i=0;i<10;i++)
  {
	  printf("\n %d\t", ar[i]);
  }
  return 0;
}
