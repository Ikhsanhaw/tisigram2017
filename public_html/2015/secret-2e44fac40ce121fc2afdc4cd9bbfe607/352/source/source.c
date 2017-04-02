#include <stdio.h>

int main(){
	int i, j, N[100], n, max=0;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &N[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=1;j<=n;j++){
			if(N[max]<N[j]){
				max = j;			
			}
		}
	}
	
	printf("%d\n", N[max]);
	
	
	return 0;
}
