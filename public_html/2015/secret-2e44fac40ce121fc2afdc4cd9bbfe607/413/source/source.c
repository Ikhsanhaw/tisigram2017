#include<stdio.h>
#include<math.h>

main()
{
	int N, n,i,j;
	char kata[15];
	
	scanf("%d", &N);
	for (i=0; i<N; i++)
	{
		gets(kata);
		n=strlen(kata);
		for(j=0; j<n; j++)
		{
			if(j==n-1)
			{
				printf("%c\n", kata[j]);
			} else {
				printf("%c", kata[j]);
			}
		}
	}
	
	return 0;
}
