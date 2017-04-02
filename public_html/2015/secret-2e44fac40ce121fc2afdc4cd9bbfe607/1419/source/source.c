#include <stdio.h>

int cek(int k);

int main(){
	int n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&k);
		printf("%d\n",cek(k));
	}
}

int cek(int k){
	int counter=0;
	while(k%10 == 0){
		counter++;
		k = k/10;
	}
	return counter;
}
