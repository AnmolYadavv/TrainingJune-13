#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
	printf("Char Min : %d\n", CHAR_MIN);
	printf("Char MAX: %d\n", CHAR_MAX);

	printf("Uchar MIN: %d\n", CHAR_MIN);
	printf("UChar MAX: %d\n", UCHAR_MAX);
        
	printf("SHORT MIN: %d\n", SHRT_MIN);
	printf("SHORT MAX: %d\n", SHRT_MAX);
	printf("UShort MAX: %d\n", USHRT_MAX);

	printf("int MIN: %d\n", INT_MIN);
	printf("int MAX:%d\n", INT_MAX);
        printf("Uint MAX: %ud\n", UINT_MAX);

	printf("long MIN: %ld\n", LONG_MIN);
	printf("long MAX: %ld\n", LONG_MAX);
	printf("long MAX: %lu\n", ULONG_MAX);

	printf("Float MIN: %e\n", FLT_MIN);
	printf("Float MAX: %e\n", FLT_MAX);

	printf("Double MIN: %e\n", DBL_MIN);
	printf("Double MAX: %e\n", DBL_MAX);

	printf("Long double MIN: %Le\n", LDBL_MIN);
 	printf("Long double MAX: %Le\n", LDBL_MAX);
	return 0;
}
