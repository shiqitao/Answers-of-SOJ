#include <stdio.h>
#define Offset 29
int main()
{
	char a[5];
	scanf("%s",a);
	if (a[3] > '9' || a[3] < '0')
	{
		printf("Error!");
	}
	else
	{
		a[0] += Offset; a[1] += Offset; a[2] += Offset; a[3] += Offset;
		printf("%s",a);
	}
	return 0;
}
