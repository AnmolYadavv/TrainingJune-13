#include<stdio.h>
int main()
{
	int ar[10], n=10,temp, f=0;
	printf("\nEnter elements\n");
	for(int i=0;i<10;i++)
	{

		scanf("%d", &ar[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
	//			f++;
				ar[j]=-1;
			}
		}
	}
	int i=9;
	for(int j=0;j<n;j++)
	{
               if(ar[j]==-1)
	       {
		       while(i>0)
		       {
			       if(ar[i]!=-1)
                                 {
					 temp=ar[i];
					 ar[i]=ar[j];
					 ar[j]=temp;
				 }
			       i--;
		       }
	       }
	}


printf("\nArray:- ");
for(int i=0;i<n;i++)
{
   if(ar[i]==-1)
	   f++;
	printf(" %d\t ", ar[i]);}

  printf("\nNew size %d   n=%d,  f=%d", n-f,n,f);
  return 0;
}
	


		 
