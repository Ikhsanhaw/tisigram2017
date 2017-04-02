#include <stdio.h>

int main(){
	int n, i, j;
	char a[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	scanf("%d %d", &n, &i);
	
	for(j=0; j<n; j++){
		printf("%c ", a[i-1]);
		i--;
	}
	
	printf("\n");
	
	return 0;
}
