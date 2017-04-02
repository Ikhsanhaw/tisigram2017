#include<stdio.h>

int main()
{
	char A[30],m,n;
	int i;
	
	gets(A);
	scanf("%c%c",&m,&n);
	
	for(i=0;i<=30;i++)
	{
		if(m==A[i])
		{
			A[i]=n;
		}
		else if(n==A[i])
		{
			A[i]=m;
		}
	}
	
	puts(A);
	
	return 0;
}
