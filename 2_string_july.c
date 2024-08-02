#include<stdio.h>
#include<string.h>
 
 
int check2( char s1[20], char s2[20])
{
        int a1[26]={0}, a2[26]={0};
        for(int i=0;i<strlen(s1);i++)
        {
                a1[s1[i]-'a']++;
                a2[s2[i]-'a']++;
        }
 
        for(int i=0;i<26;i++)
        {
                if(a1[i]!=a2[i])
                        return 0;
        }
 
        //printf("\n is anagram %s,  %s:\n ",s1,s2);
 
        return 1;
 
 
}
 
 
int check( char str[20], char res[20][20], int n)
{
 
   int ar[20], ar1[20], f=0;
 
   for(int i=0;i<n;i++)
   {
               //         printf("\tHIIIIIIII %s,  %s\n", res[i], str);
 
           if(strlen(res[i])==strlen(str))
           {
 
 
                   f= check2(res[i],str);
             //      printf("\n String going for check 2 : %s,  %s,    f=%d\n", res[i],str,f);

    
   }
 
 
   if(f==1)
                return i;
 
   }
 
return -1;
 
}
 
 
int main()
{
 
        char str[50],res[20][20], s[20][20];
        int ar[20]={0};
        char *token, deli[]="|";
 
        printf("\nEnter the string : ");
        fgets(str,50,stdin);
        str[strcspn(str, "\n")]='\0';
        token =strtok(str,deli);
         int k=0;
        while(token)
        {
                strcpy(s[k],token);
                k++;
                token=strtok(NULL,deli);
        }
 
        int n=0;
        strcpy(res[0],s[0]);
        ar[0]++;
        n=1;
        for(int i=1;i<k;i++)
        {
               int f=check(s[i],res,n);
               if(f==-1)
               {
                //      printf("In loop %s  , %s \n", res[n], s[i]);

         //   printf("In loop %s  , %s \n", res[n], s[i]);
            //           n++;
                       strcpy(res[n],s[i]);
                      // n++;
                       ar[n]++;
           //            printf("In loop; %s,  %s, ar: %d\t", res[n],s[i],ar[n]);
                      n++;
               }
               else
                       ar[f]++;
               printf("\n%d\t", f);
        }
 
        printf("\nList of unique words: \t");
        for(int i=0;i<n;i++)
        {
                if(ar[i]==1)
                {printf("%s\t",res[i]);
                }
        }
        printf("\n Duplicate elements: \t");
        for(int i=0;i<n;i++)
        {
                if(ar[i]>1)
                {
                        printf("%s\t", res[i]);
                }
        }
 
 
        return 0;
}

