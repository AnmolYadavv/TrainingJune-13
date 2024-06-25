#include<stdio.h>
int main()
{
	int ar[10], le=-1,sel=-1;

	printf("Enter elements\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d", &ar[i]);
	}


	for(int i=0;i<5;i++)
	{
          if(le<ar[i])
	  {
		  sel=le;
		  le=ar[i];
	  }
	}
	printf("Second largest element is:-");
	printf("%d", sel);

	return 0;
}
	
