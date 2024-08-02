#include<stdio.h>
#include<string.h>
typedef struct Sales {

        char PID[6];

        int amt;

} SALES;

int check(SALES r[], SALES s,int k)
{

        int f=1,i;

        for(i=0;i<k;i++)

        {

                if(strcmp(r[i].PID,s.PID)==0)

                {

	f=0; 
                }

        }

        return f;

}
 
int main()

{

        int n,i;

        printf("Enter the number of instances: ");

        scanf("%d",&n);

        SALES sale[n];

        char str[50];

        getchar();

        printf("Enter the string in PID-Amount formal: \n");

        for(int i=0;i<n;i++)

        {

                fgets(str,15,stdin);

                //printf("\n%s\n",str);

                str[strcspn(str,"\n")]='\0';

                sscanf(str,"%10[^-]-%d",sale[i].PID,&sale[i].amt);

                //printf("The Pid is: %s and the amount is: %d",sale[i].PID,sale[i].amt);

        }

        SALES res[n];

        i=0;
	strcpy(res[i].PID,sale[i].PID);

        int k=0;

        for(int i=1;i<n;i++)

        {
 
                if(check(res,sale[i],k)==1)

                {

                        strcpy(res[k].PID,sale[i].PID);

                        res[k].amt=sale[i].amt;

                        k++;

                }

                else

                {

                        int max=-1;

                        for(int j=0;j<n;i++)

                        {

                                if(strcmp(res[k].PID,sale[j].PID))

                                {
 
                                        if(max<sale[j].amt)

                                                max=sale[j].amt;

                                }

                        }

                        res[k].amt=max;

                }

       
	}
        for(int i=0;i<k;i++)

        {

            printf("\n%s:%d\n",res[i].PID,res[i].amt);

        }

        return 0;

}
 

