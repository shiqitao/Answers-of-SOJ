#include <stdio.h>
int main()
{
    int a, b;
	scanf("%d%d",&a,&b);
	if (b > 0)
	{
	    printf("%d+%d=%d\n",a,b,a+b);
	    printf("%d*%d=%d\n",a,b,a*b);
	    printf("%d/%d=%d\n",a,b,a/b);
	    printf("%d%%%d=%d\n",a,b,a%b);
	}
	else if (b < 0)
	{
	    printf("%d+(%d)=%d\n",a,b,a+b);
	    printf("%d*(%d)=%d\n",a,b,a*b);
	    printf("%d/(%d)=%d\n",a,b,a/b);
	    printf("%d%%(%d)=%d\n",a,b,a%b);
	}
	else
	{
	    printf("%d+0=%d\n",a,a);
	    printf("%d*0=0\n",a);
	    printf("%d/0:Error!\n",a);
	    printf("%d%%0:Error!\n",a);
	}
	return 0;
}
