#include<stdio.h>

int main()
{
	int A, B, H,i;
	int n=0;
	scanf("%d\t%d\t%d", &A,&B,&H);
	if(A > B){
		while(H >= A)
		{
			H=(H-A)+B;	
			n++;
		}
		printf("%d\n", n);
	}
	else{
			printf("mustahil\n");
	}

		return 0;
}
