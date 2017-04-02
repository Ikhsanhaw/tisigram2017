#include <stdio.h>

int main(){
	int maks = 1000000, n=0,i;
	int angka[100];
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]);
		if(angka[i]>maks){
			maks = angka[i];
		}
	}
	
	printf("%d\n", maks);

	return 0;
}
