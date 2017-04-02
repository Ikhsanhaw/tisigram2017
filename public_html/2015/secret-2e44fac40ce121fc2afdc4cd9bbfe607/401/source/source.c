#include<stdio.h>

int main (){
	char kata[10];
	int n,i;
	
	gets(kata);
	n = strlen(kata);
	for(i=n-1; i>=0; i--)
	{
		if (i==0)
		{
			printf("%c\n", kata[i]);	
		} else {
			printf("%c", kata[i]);
		}
	}
	
	return 0;
}
