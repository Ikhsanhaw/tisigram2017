#include<stdio.h>

int main()
{
	int a[3], b,n;
	for(n=1;n<=3;n++)
	{
		scanf("%d", &a[n]);
	}
	if(a[1] < a[2])
	{
	printf("mustahil\n");
	}else{
	b=0;
	while(a[3]>=a[1])
	{
		a[3]=a[3]-a[1];
		a[3]=a[3]+a[2];	
		b++;
		}
		printf("%d", b);
	}

		printf("\n");
		return 0;
}
