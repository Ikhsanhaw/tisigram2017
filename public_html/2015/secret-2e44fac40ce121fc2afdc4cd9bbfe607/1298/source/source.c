#include<stdio.h>
#include<math.h>
int main()
{
	int N, total=0;
	
	scanf("%d", &N);
	total = total + (N/2);
	total = total + (N/3);
	total = total + (N/4);
	if(total < N)
	{
		printf("%d\n", N);
	} else {
		printf("%d", total);
	}
	
	
	return 0;
}
