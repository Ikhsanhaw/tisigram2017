#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	char kata[n][16];
	for (i = 0; i < n; ++i)
	{
		/* code */
		scanf("%s", &kata[i]);
	}
	for (i = 0; i < n; ++i)
	{
		/* code */
		printf("%s\n", kata[i]);
	}

	return 0;
}
