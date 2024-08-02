
#include<stdio.h>
#include<string.h>
int main()
{

  char str[100];
  int res=0,t=0,f1=0,f2=0;
  printf("\n Enter string: ");
  scanf("%s",str);

  for(int i=0;i<strlen(str);i++)
  {
	 f2=0;
	f1=0; 
	t=0;
        if(i+3<strlen(str))	
	  for(int j= i,k=i+3;j<k;j++,k--)
	   {
		//  printf("%d %d\t",i,t);
		   if(str[j]!=str[k])
		   {
			   f1=1;
			   break;
		   }
		   else
			   t++;

	   }
	if(f1==0&&t>0)
		res+=5;
//	printf("\n");
	t=0;
	if(i+4<strlen(str))
	   for(int j=i,k=i+4;j<k;j++,k--)
	   {
//		  printf("%d %d\t",i,t);
		   if(str[j]!=str[k])
		   {
			   f2=1;
			   break;
		   }
		   else
			   t++;
	   }
  //      printf("\nBefore l2:  %d %d",f2,t);
	   if(f2==0 && t>0)
	   {
//		   printf("score +10 at %c",str[i]);
		   res+=10;
	   }
  }
 printf("Final scoring: %d",res);





	return 0;
}
