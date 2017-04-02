#include <stdio.h>

int main(){
	int N[100], n, max=0;
	int i;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		scanf("%d", &N[i]);
	}
	
	
	i=0;
	
	while(i<n){
		if(max!=i){
			if(N[max]<N[i]){
				max=i;
			}
		}
		i++;
	}
	
	printf("%d\n", N[max]);
	
	
	return 0;
}
