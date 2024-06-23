

#include<stdio.h>
int main()
{

  int marks,w ,h;
  printf("Eneter Weight and Height\n");
  scanf("%d", &w);
  scanf("%d", &h);

  marks= w/(h*h);

 if(marks<18.5)
  {
	  printf("\nUnderWeight");
  }
  else if(marks>24.9 && marks<18.5)
  {
	  printf("\n Normal weight");
  }
  else if(marks>24.9 && marks<25)
  {
	  printf("\n OverWeight");
  }
  else if(marks>30)
  {
	  printf("\n Obesity");
  }
  
  return 0;
}

