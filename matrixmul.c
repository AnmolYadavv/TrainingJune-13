#include<stdio.h>
int main(){

  int arr[3][3], res[3][3];
  printf("Enter the values of matrix ");
  for(int i=0;i<3;i++)
  {
     for(int j=0;j<3;j++)
     {
	     scanf("%d",&arr[i][j]);
     }
  }


 for(int i=0;i<3;i++)
 {
	 
	 for(int j=0;j<3;j++)
	 {
	 
		 res[i][j]=0;
	    for(int k=0;k<3;k++)
		 res[i][j]+= arr[i][k]* arr[k][i];
	 }
 }

printf("\n Matrix after multiplication\n");

for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		printf("%d\t",res[i][j]);
	}

printf("\n");
}

	return 0;
}
