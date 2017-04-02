#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i, n, small=1000, x;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
	{
		scanf("%d", &x);
		small = small < x ? small : x;
	}
	printf("%d\n", small);
	return 0;
}