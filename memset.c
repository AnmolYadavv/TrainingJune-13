#include<stdio.h>
#include<string.h>
int main()
{
  char str[50]= "today is a beautiful day";
 printf("Printing before application of memeset: %s\n",str);
memset(str+6,'.',5*(sizeof(char))); 
printf("\n After application  :- %s\n", str);
	return 0;
}
