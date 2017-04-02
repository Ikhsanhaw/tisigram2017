#include<stdio.h>

int main()
{
	int A, B, H, n;
		scanf("%d\t%d\t%d", &A,&B,&H);
	if(A < B)
	{
	printf("mustahil\n");
	}
	else{
	for(n=0; n<H ;n++)
	{
		H=H-A;
		H=H+B;	
		n++;
		}
		printf("%d", n);
	}

		printf("\n");
		return 0;
}
