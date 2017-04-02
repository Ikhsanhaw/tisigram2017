#include<stdio.h>
#include<string.h>

int main()
{
	char A[15];
	char temp;
	int i;
	
	fgets(A, sizeof A, stdin);
	A[strlen(A)-1]='\0';
	
	if(strlen(A) % 2 == 0)
	{
		i = strlen(A)-1;
		while (i>=strlen(A)/2)
		{
			temp = A[i];
			A[i] = A[strlen(A)-1-i];
			A[strlen(A)-1-i] = temp;
			
			i--;
		}
	}
	else
	{
		i = strlen(A)-1;
		while (i>=strlen(A)/2+1)
		{
			temp =A[i];
			A[i] = A[strlen (A)-1-i];
			A[strlen (A)-1-i]=temp;
			
			i--;
		}
	}
	printf("%s\n", A);
	return 0;
}
