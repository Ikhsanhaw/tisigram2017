#include <stdio.h>

int cek(long k);

int main(){
	int n,i;
	long k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%ld",&k);
		printf("%d",cek(k));
	}
	printf("\n");
}

int cek(long k){
	int counter=0;
	if(k != 0){
		while(k%10 == 0){
			counter++;
			k = k/10;
		}
	}
	return counter;
}
