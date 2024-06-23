#include<stdio.h>

int main()
{
	int a, b;
	int r;
	printf("Enter two numbers\n");
	r=scanf("%d%d", &a, &b);
	printf("Number of input %d", r);
	r=a+b;
	printf("\n Sum is %d\n", r);
return 0;
}

	
