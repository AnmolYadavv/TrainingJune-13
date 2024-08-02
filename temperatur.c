
#include<stdio.h>
int main()
{

   float f,c,F,C;	
   printf("Enter the temp in C");
   scanf("%f", &c);
   printf("Enter the temp in F");
   scanf("%f", &f);
   F= ((9/5)*c) + 32;
   C= (f-32)* (5/9);
   printf("Temperature in *F= %f, Temperature in*C= %f/n",F,C);

}

