#include<stdio.h>
#include<string.h>

int main()
{
	char X[10]="";
	int a,i=0;
	char A[10];
	scanf("%[^\n]s", &X);
	a=strlen(X);
	while(a!=0)
	{
		A[i]=X[a-1];
		a--;
		i++;
	}
	printf("%s\n", A);
	return 0;
}
