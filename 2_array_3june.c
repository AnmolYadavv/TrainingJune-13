#include<stdio.h>

int main()
{
  int arr[20], arr1[20];
  int n=0;
  printf("\n Enter length ; ");
  scanf("%d", &n);

  printf("\n Enter array elements for printing duplicate and unique elements. ");
  for(int i=0;i<n;i++)
  {
	  scanf("%d", &arr[i]);
  }

  int t;
  for(int i=0;i<n-1;i++)
  {
	  for(int j=0;j<n-i-1; j++)
	  {
	     if(arr[j]>arr[j+1])
	     {
		     t=arr[j];
		     arr[j]=arr[j+1];
		     arr[j+1]=arr[j];
	     }
	  }
  }

  printf("\n unique elements: ");
  for(int i=1;i<n;i++)
 {
     if(arr[i]==arr[i-1])
	     continue;
     else
	     printf("\t%d",arr[i-1]);
 }
  printf("\t %d", arr[n-1]); 

	return 0;
}

