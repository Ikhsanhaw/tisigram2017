#include <stdio.h>

int main() {
	int i, N, T;
	
	scanf("%d %d", &N, &T);
	
	if(T%2 == 1) {
		for(i=1; i<=N; i++) {
			if(i%2 == 1) {
				if(i == N || i == N-1) {
					printf("%i\n", i);
					return 0;
				}
				printf("%i ", i);
			}
		}
	}
	else {
		for(i=1; i<=N; i++) {
			if(i%2 == 0) {
				if(i == N || i == N-1) {
					printf("%i\n", i);
					return 0;
				}
				printf("%i ", i);
			}
		}
	}
}