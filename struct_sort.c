#include<stdio.h>
#include<string.h>
typedef struct info{
	char str[20];
} info;


int check(char s1[20], char s2[20])
{

	char t1[20], t2[20];
	strncpy(t1,s1+1,3);
	strncpy(t2,s2+1,3);
        printf("%s  t2=%s \n", t1,t2);
	if(strcmp(t1,t2)==0)
//		irintf("\nInside print function:- %s, s= %s,  f=%d", res[i],s, f);
	{
		printf("%c   %c\n",s1[6], s2[6]);
		if(s1[6]>s2[6])
		       return 1;
	}
return 0;
}




int main()
{

info s[10],res[10];
char inp[20][20];
int n;
printf("Enter the number of enteries :");
scanf("%d", &n);
printf("\nEnter values:- ");
for(int i=0;i<n;i++)
{
	    scanf("%s",inp[i]);
	    strcpy(s[i].str,inp[i]);
      	// scanf("%19[^\n]", &s[i].str);
    //   s[i].str[strcspn(s[i].str,"\n")]='\0';

 
}

strcpy(res[0].str,s[0].str);
int k=1;
for(int i=1;i<n;i++)
{
	printf("Inside loop 1. \n");  
	for(int j=0;j<k;j++)
	  {
		 printf("Inside the loop\n");
		  if(check(res[j].str, s[i].str)==0)
		  {
			  strcpy(res[j].str,s[i].str);
		    	k++;
			break;
		  }
	  }
}

   

printf("Sorted structure :\n");


for(int i=0;i<k;i++)
{
	printf("%s\n", res[i].str);}

	return 0;
}
