#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int mysort(char s1[], char s2[])
{
  /*
     for(int i=0;i<strlen(s1);i++)
     {
	     for(int j=0;j<strlen(s2);j++)
	     {
		     if(strcmp(s1[i],s2[j])>0)
			     return 1;
	     }
     }*/
	if(strcmp(s1,s2)>0)
		return 1;
     return 0;
}


int main()
{

   char str[10][10], temp[10];
   int n=0;
   printf("Enter the number of strings you want to enter \t");
	   scanf("%d",&n);
   printf("\nEnter the strings: ");
   system("clear");
   n++;
   for(int i=0;i<n;i++)
   { 
           //printf("%d\t ",i);
	   fgets(str[i],10,stdin);
   }

   for(int i=0;i<n-1;i++)
   {
	   for(int j=0;j<n-i-1;j++)
	   {
		   if(mysort(str[j],str[j+1])==1)
				   {
				       strcpy(temp,str[j]);
				      strcpy( str[j],str[j+1]);
				      strcpy( str[j+1],temp);
				   }
	   }
   }

   printf("\n Sorted strings are:- \n");
   for(int i=0;i<n;i++)
   {
	   printf("\n%s\t",str[i]);
   }

	return 0;
}
