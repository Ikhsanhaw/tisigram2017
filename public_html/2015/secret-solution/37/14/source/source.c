#include <stdio.h>
#include <string.h>

int main(){
	int N;
	scanf("%d",&N);
	int angka = 2, i = 6;
	while(--N){
		angka+= i;
		i+=4;
	}
	printf("%d\n",angka);
	return 0;
}