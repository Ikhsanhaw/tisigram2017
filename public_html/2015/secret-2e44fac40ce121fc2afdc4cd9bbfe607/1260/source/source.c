#include<stdio.h>
#include<string.h>
int main()
{
	int N, true=0,i,j, total = 1;
	
	scanf("%d", &N);
	i = 0;
	if (N == 1)
	{
		printf("TRUE\n");
		true = 1;
	}
	while(true == 0 && i <= 20){
		total = total * 2;
		if (N == total)
		{
			true = 1;
		}
		if(total > N)
		{
			i = 20;
		}
		i++;
	}
	
	if (true == 1)
	{
		printf("TRUE\n");
	} else  {
		printf("FALSE\n");
	}
	
	
	return 0;
}
