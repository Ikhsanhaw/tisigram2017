#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int N,N1, bagi, sisa;
	
	scanf("%d", &N);
	scanf("%d", &N1);
	bagi= N/N1;
	sisa = N - (N1 * bagi);
	printf("%d ", bagi);
	printf("%d\n", sisa);
	
	
	return 0;
}
