#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, i, j, sum=0, a;
	scanf("%d", &n);
	int a[n][n];
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d", &a);
			sum += a;
		}
	}
	printf("%d\n", sum);
	return 0;
}