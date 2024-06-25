#include<stdio.h>
#include<math.h>
int main() 
{
long double  num=0,temp=0;
printf("Enter the number\n");
scanf("%Lf", &num);
printf("Number :- %Lf", num);
temp=sqrt(num);
printf("\n Temp - %Lf", temp);
temp=round(temp);
printf("\n temp- %Lf", temp);
printf("\nThe nearest whole number square root is of %Lf\n", temp*temp);


	return 0;
}
