#include<stdio.h>
#include<string.h>

int check(char s1[20], char s2[20])
 {
      int ar1[26]={0}, ar2[26]={0};
   for(int i=0;i<strlen(s1);i++)
   {
	ar1[s1[i]-'a']++;
   }

	for(int i=0;i<strlen(s2);i++)
	{
	   ar2[s2[i]-'a']++;
	}

for(int i=0;i<26;i++)
{
   if(ar1[i]!=ar2[i]) 
    return 1;

}

return 0;
 
 }


int main()

{

    char s1[20],s2[20],s3[20];

    printf("Enter the strings:- ");

   // getch();

    fgets(s1,20,stdin);

    s1[strcspn(s1,"\n")]='\0';

    fgets(s2,20,stdin);

    s2[strcspn(s2,"\n")]='\0';

    fgets(s3,20,stdin);

    s3[strcspn(s3,"\n")]='\0';

    int n = strlen(s2);

    strcat(s1,s2);

   // printf("%s :\n", s1);
    if(check(s1,s3)==0)

            printf("\nYes");

    else

            printf("\nNo");
 
 
        return 0;

}
 
 
