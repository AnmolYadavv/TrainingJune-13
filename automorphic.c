#include<stdio.h>
int main()
{
   long int ans, cp;
   printf("Enter the number :-");
   scanf("%ld", &ans);
   cp=(ans*ans)%100;
   if(cp==ans)
	   printf("\nAutomorphic number");
   else
	   printf("\nNot automorphic");


	return 0;
}
