#include <stdio.h>

int main(){
	typedef struct{
		char word[16];
	}kata;
	
	kata input[1000];
	int n, i;

	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		/* code */
		gets(input[i].word);
		fflush;		
	}
	
	for (i = 0; i <= n; ++i)
	{
		/* code */
		printf("%s\n", input[i].word);
	}
	return 0;
}
