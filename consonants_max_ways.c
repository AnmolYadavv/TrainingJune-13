#include<stdio.h>
#include<string.h>
int main()
{
char str[20], s[]="aeiouAEIOU";
int n=0;
int ar1[20],ar2[20]; 
 printf("Enter the string : ");
 fgets(str,20,stdin);
 str[strcspn(str,"\n")]='\0';
n=strlen(str);
int k=0,f=0;
 for(int i=0;i<strlen(str);i++)
 {
     f=0;
     for(int j=0;j<strlen(s);j++)
     {
	     if(str[i]==s[j])
	     {
		     f=1;
		     break;
	     }
     }
     if(f==0)
	     k++;
  //   printf("\nar1 : %d",k);
     ar1[i]=k;
 }

k=0;
for(int i=n-1;i>=0;i--)
{
	f=0;
	for(int j=0;j<strlen(s);j++)
	{
		if(str[i]==s[j])
		{	f=1;
		break;}
	}
	if(f==0)
		k++;
	ar2[i]=k;
//	printf("\nar2 : %d",k);
}
int res=0;
for(int i=0;i<n-1;i++)
{
//  printf("\n res=  %d ",res);
	if(ar1[i]>ar2[i])
		res++;
}

printf("Poosible ways are : %d",res);


   





	return 0;
}
