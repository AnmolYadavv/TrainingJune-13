
#include<stdio.h>
#include<math.h>
int main()
{
    int  num,res=0,n,l1=0, r=1;
    
    scanf("%d", &num);
    while(num)
    {
      
       l1=num%10;
       num=num/10;
       res+=l1* r;
       r*=2;
       
    }
    printf("Number in Decimal %d\n", res);
return 0;
}

