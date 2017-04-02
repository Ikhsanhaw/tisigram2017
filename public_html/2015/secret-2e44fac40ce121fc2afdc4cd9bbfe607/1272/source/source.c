#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int N,N1, bagi, sisa;
	
	scanf("%d", &N);
	scanf("%d", &N1);
	if (N1 == 0)
	{
		bagi = 0;
		sisa = N;
	} else {
	bagi= N/N1;
	sisa = N - (N1 * bagi);
	}

	printf("%d ", bagi);
	printf("%d\n", sisa);
	
	
	return 0;
}
