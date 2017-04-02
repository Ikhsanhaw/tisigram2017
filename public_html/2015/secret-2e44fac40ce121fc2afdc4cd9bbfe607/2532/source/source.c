#include <stdio.h>

int main(){
	int T;
	scanf("%d", &T);
	int total[T], n;
	
	for(int i=0; i<T; i++){
		total[i] = 0;
		for(int j=1; j<=6; j++){
			scanf("%d", &n);
			total[i] = total[i] + n;
		}
	}
	
	for(int i=0;i<T;i++){
		printf("%d\n",total[i]);
	}
}
