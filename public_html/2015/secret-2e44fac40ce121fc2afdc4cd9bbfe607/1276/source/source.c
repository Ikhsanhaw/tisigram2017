#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int N, total=0;
	
	scanf("%d", &N);
	total = total + (N/2);
	total = total + (N/3);
	total = total + (N/4);
	
	printf("%d\n", total);
	
	
	return 0;
}
