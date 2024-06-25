

#include<stdio.h>
int main()
{

  int ar[10], n,f=0;
  printf("Enter elements\n");
  for(int i=0;i<10;i++)
  {
        scanf("%d", &ar[i]);
  }
  printf("\n Enter element to be found:-\n");
  scanf("%d", &n);
  for(int i=0;i<10;i++)
  {
        if(ar[i]==n)
	{
		printf("\nElement found!");
		f=1;
		break;}
  }

  if(f==0)
	  printf("\nElement not found");

return 0;


}

