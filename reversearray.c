
#include<stdio.h>
int main()
{

  int ar[10], n=10,temp=0;
  printf("Enter elements\n");
  for(int i=0;i<10;i++)
  {
        scanf("%d", &ar[i]);
  }

  n--;
  for(int i=0;i<5;i++)
  {
    temp=ar[i];
    ar[i]=ar[n];
    ar[n]=temp;
    n--;
  }
 
  printf("\n Reveresed array:-\n");
  for(int i=0;i<10;i++)
  {
        printf("%d \t",ar[i]);
  }

return 0;


}

