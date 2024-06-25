#include<stdio.h>
int main()
{
    int ar[3][3],res[3][3];
    printf("Enter elements\n");
    for(int i=0;i<3;i++)
	    for(int j=0;j<3;j++)
	    {
		    scanf("%d",&ar[i][j]);
	    }
    for(int i=0;i<3;i++)
    {
	    for(int j=0;j<3;j++)
	    {
		    res[i][j]=ar[j][i];
	    }
    }
    printf("\n Traansposed matrix :\n");

    for(int i=0;i<3;i++)
    { for(int j=0;j<3;j++)
	    { printf("%d \t", res[i][j]);
	    }
  printf("\n");        
}




	return 0;
}
