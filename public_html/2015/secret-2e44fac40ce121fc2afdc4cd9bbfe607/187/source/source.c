#include <stdio.h>
#define indeksmaks 100

int main(){
	int maks = 1, n,i;
	int angka[indeksmaks];
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &angka[i]);
	}
	
	for(i=0;i<n;i++){
		if(angka[i]>maks){
			maks = angka[i];
		}
	}
	
	printf("%d\n", maks);

	return 0;
}
