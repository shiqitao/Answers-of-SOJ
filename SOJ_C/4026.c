#include <stdio.h>
#define Offset 29
int main()
{
	char a[5];
	scanf("%s", a);
	if (a[4] != '\0') {
		printf("Error!");
		return 0;
	}
	int i;
	for (i = 0; i < 4; i++)
		a[i] += Offset;
	printf("%s", a);
	return 0;
}
