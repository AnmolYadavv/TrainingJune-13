
#include<stdio.h>
#include<string.h>

typedef struct process
{
	char id[30];
	int price;
}process;

int check(process *p, char id[20], int at, int n)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(p[i].id,id)==0)
		{
			p[i].price+=at;
			return 0;
		}
	}

	return 1;
}


void sort(process *p, int n)
{

  // strcpy(res[0].id,p[0].id);
  // res[0].amt=p[0].amt;

  //process temp;
  char tmp[20];
  int t;

       	for(int i=0;i<n-1;i++)
   {
		for(int j=0;j<n-i-1;j++)
		{
			if(p[j].price<p[j+1].price)
			{
				/*temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;*/

				strcpy(tmp,p[j].id);
				strcpy(p[j].id,p[j+1].id);
				strcpy(p[j+1].id,tmp);

				t=p[j].price;
				p[j].price=p[j+1].price;
				p[j+1].price=t;

							
			}
	//	printf("\n in loop, %d", p[j].price);
		}
   }
   
}




int main()
{
	process p[20], res[20];
	char str[20][20], tmp[20];
	int n=0, t=0,nn=0;

	printf("Enter number of enetries\n");
	scanf("%d",&n);
	getchar();

	for(int i=0;i<n;i++)
	{
		fgets(str[i],20,stdin);
		str[i][strcspn(str[i],"\n")]='\0';
	}

	nn=n;
	for(int i=0;i<n;i++)
	{

		sscanf(str[i], "%[^-]-%d", &tmp,&t);
		//sscanf(str, "%d-%[^-]", p[i].amt);
		if(check(p,tmp,t,n)==1)
		{
		          strcpy(p[i].id,tmp);
			  p[i].price=t;
	                 // nn--;
		}
		else	
			nn--;
	}


   sort(p,nn);




    printf("\n Enetries are :- \n");

    for(int i=0;i<nn;i++)
    {
	    printf("\t%s, amt= %d\n", p[i].id, p[i].price);
    }

    return 0;
}



