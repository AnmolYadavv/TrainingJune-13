
#include<stdio.h>
int main()
{

  int marks;
  printf("Enetr marks\n");
  scanf("%d", &marks);

  if(marks>90 &&marks<100)
  {
	  printf("\nGrade is A");
  }
  else if(marks>80 && marks<89)
  {
	  printf("\n Grade is B");
  }
  else if(marks>70 && marks<79)
  {
	  printf("\n Grade is C");
  }
  else if(marks >60 && marks<69)
  {
	  printf("\n Grade is D");
  }
  else if(marks<60)
  {
	  printf("\n Grade is F");
  }
  return 0;
}

