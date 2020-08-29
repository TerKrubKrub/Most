#include <stdio.h>
int main()
{
	int i,n,z,max=-999999;
	scanf_s("%d", &n);
	int x[10000];
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &x[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (x[i] > max)
		{
			max = x[i];
		}
	}
	printf("%d", max);
	return 0;
}