
#include<stdio.h>
int main()
{
  int a,b,c;
  scanf("%d  %d %d",&a, &b, &c);
  
  if(a>b && a>c)
  {
	  printf("%d is Greatest", a);
  }
  else if(b>a && b>c)
  {
	  printf("%d Is Greatest", b);
  }
  else
  {
	  printf("%d Is Greatest", c);
  }
return 0;
}


