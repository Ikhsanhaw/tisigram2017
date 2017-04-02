#include <stdio.h>

int main(){
	int i, n;
	typedef char k[15];
	
	scanf("%d", &n);
	k kt[n];
	
	for(i=0; i<n; i++){
		scanf("%s", &kt[i]);
	}	
	
	for(i=0; i<n; i++){
		printf("%s\n", kt[i]);
	}
	
	return 0;
}
