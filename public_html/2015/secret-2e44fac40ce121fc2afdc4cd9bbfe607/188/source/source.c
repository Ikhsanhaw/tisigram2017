#include <stdio.h>

int main(){
	int maks = 0, n,i;
	int angka[100];
	
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
