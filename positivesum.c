#include<stdio.h>
int main()
{
	long int num;
	int res=0;
	printf(" Enter number :-");
	scanf("%ld", &num);
	while(num)
	{
          res+=num%10;
	  num/=10;
	}
	printf(" Sum= %d", res);

return 0;
}
