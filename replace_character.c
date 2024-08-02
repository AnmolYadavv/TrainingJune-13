#include<stdio.h>
#include<string.h>
int main()
{

 char str[20], ch, ch1;
 printf("Enter the string :\n");
 fgets(str,20,stdin);
 str[strcspn(str,"\n")]='\0';
 printf("\n Enter character to be found: ");
 scanf("%c", &ch);
 printf("\nEnter the character to be replaced with: ");
 scanf(" %c", &ch1);


 for(int i=0;i<strlen(str);i++)
 {
       if(str[i]==ch)
       {
	       str[i]=ch1;
	       break;
       }

 } 
 printf("\n String after editing : %s", str);
  return 0;
}
