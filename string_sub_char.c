#include<stdio.h>
#include<string.h>
int main()
{
   char str[20], sub[10], ch;
   fgets(str,20,stdin);
   fgets(sub,10,stdin);
   scanf("%c",&ch);

   int n=0,res1=0,res2=0,j,f=0;
   for(int i=0;i<strlen(str)-strlen(sub);i++)
   {
	   f=-1;
	   j=0;
	   if(str[i]==sub[j])
	   for(int k=0;k<strlen(sub);k++)
	   {
	//	  printf("In loop");
		   if(str[i+k]!=sub[k])
		   {
		      f=1;
		      break;
		   }
		   else
			   f=0;
	//	   if(k=strlen(sub)-1&&f!=1)
	//		   f=3;
	   }

	   if(f==0)
	   {  printf("Substring found at %d",i);
		   break;}

   }
//   printf("Substring %s found at index: %d", sub,res1);

for(int i=0;i<strlen(str);i++)
{
	if(ch==str[i])
	{
		printf("\nCharacter %c found at : %d",ch,i);
		break;
	}
}



	return 0;
}
