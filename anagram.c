#include<stdio.h>
#include<string.h>
int main()
{
   char str[]= "listuiehffuen", str1[]="silent";
   int tmp1[30]={0}, tmp2[30]={0};
   int k=0,f=0;
   for(int i=0;i<strlen(str);i++)
   {
	   k=str[i]-'a';
	   tmp1[k]++;
   }
   for(int i=0;i<strlen(str1);i++)
   {
	   k=str1[i]-'a';
	   tmp2[k]++;}
   for(int i=0;i<30;i++)
   {
        if(tmp1[i]!=tmp2[i])
	{
		f=1;
		printf("\nNot an anagram\n");
		break;}
   }
   if(f!=1)
	   printf("\nAnagram");
   return 0;

   
}

