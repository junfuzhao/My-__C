#include <stdio.h>
int main()
{
	int n,sum=0;
	int i=1,temp=1;
	printf("ÇëÊäÈënµÄÖµ\n");
	scanf_s("n=%d\n", &n);
	for (i = 1; i <= n; i++)
	{
		temp = temp*i;
		sum = sum + temp;
	}
	printf("sum=%d\n", sum);
	return 0;
}