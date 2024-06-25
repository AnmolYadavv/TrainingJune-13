
#include<stdio.h>
#define array_size(arr) (sizeof(arr)/sizeof(arr[0]))
int main()
{

 int a[]={1,23,4,5,66};
 int size=sizeof(a)/sizeof(a[1]);
 int size_a= array_size(a);
printf("size =%d\n%d", size, size_a);
//printf("arr+1= %u\n   &arr+1= %u\n", arr+1, &arr+1);

return 0;
}


