#include <stdio.h>

int main(){
	int T, i;
	scanf("%d", &T);
	int hasil[T];
	for(i=0; i<T; i++){
		int K, P, x, y, temp, max=0;
		scanf("%d", &K);
		scanf("%d", &P);
		int jml[5] = {0};
		for(x=0; x<P; x++){
			for(y=0; y<K; y++){
				scanf("%d", &temp);
				jml[y] = jml[y] + temp;
			}
		}
		for(x=0; x<K; x++){
			if(jml[x] > jml[max]){
				max = x;
			}
		}
		hasil[i] = max;
	}
	for(i = 0; i<T; i++){
		printf("%d", hasil[i]+1);
	}
	return 0;
}
