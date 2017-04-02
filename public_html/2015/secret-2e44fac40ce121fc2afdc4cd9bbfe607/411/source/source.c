#include<stdio.h>
#include<math.h>

main()
{
	int N, i, bil[100], maks;
	scanf("%d", &N);
	for (i=0; i<N; i++)
	{
		scanf("%d", &bil[i]);
	}
	maks = bil[0];
	for (i=1; i<N;i++)
	{
		if (bil[i] > maks) {
			maks = bil[i];
		}
	}
	
	printf("%d", maks);
	
	return 0;
}
