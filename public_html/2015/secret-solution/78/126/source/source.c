#include <stdio.h>

int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		int N,sum = 0;
		scanf("%d",&N);
		int iN = N;
		while(iN--){
			int nilai;
			scanf("%d",&nilai);
			sum+=nilai;
		}
		printf("%.2f\n",(double) sum/N);
	}
	return 0;
}