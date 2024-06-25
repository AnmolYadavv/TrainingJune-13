#include<stdio.h>
#include<math.h>
int main()
{
 
   long int num, n=0, temp=0,res=0,k=0;
   printf("Enter number:- ");

   scanf("%ld",&num);
   temp=num;
   while(temp)
   {
	   temp=temp/10;
   n++;
   }
   temp=num;
   while(temp)
   {
	   k= temp%10;
       res+= pow(k,n);
      // printf("\n res= %ld",res);
       temp/=10;
   }
   if(res==num)
	   printf("\nNumber is Armstrong\n ");
   else 
	   printf("\nNumber is not Armstrong\n");

	return 0;
}
