#include<stdio.h>
#include<string.h>
int main()
{
	char str[20][20];
	int n,h1,h2,m1,m2,s1,s2;
	printf("\nEnter value");
	scanf("%d", &n);
	getchar();
	int f=-1;
	for(int i=0;i<n;i++)
	{
		fgets(str[i],20,stdin);
	}

	for(int i=0;i<n;i++)
	{
		sscanf(str[i], "%d|%d|%d %d|%d|%d", &h1,&m1,&s1,&h2,&m2,&s2);

		if(h1>h2||(h1==h2&&(m1>m2 ||(m1==m2&&(s1>s2)))))
			f=1;

		if(h1<h2||(h1==h2&&(m1<m2||(m1==m2&&(s1<s2)))))
			f=2;

	switch(f)
	{
		case 1: printf("\nLate\n");
			break;
		case 2: printf("\nEarly\n");
			break;
		default: printf("\nEqual\n");
	}

	}	return 0;
}


	
