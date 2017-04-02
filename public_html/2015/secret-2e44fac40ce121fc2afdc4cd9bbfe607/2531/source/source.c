#include <stdio.h>
#include <math.h>

int main(){
	int T;
	
	scanf("%d", &T);
	int N[T];
	float total[T];
	
	for(int i=0;i<T;i++){
		scanf("%d", &N[i]);
		total[i] = 0;
		float S[N[i]];
		for(int j=0; j<N[i]; j++){
			scanf("%f",&S[j]);
			total[i] = total[i] + S[j];
		}
		total[i] = total[i]/N[i];
	}
	
	for(int i=0;i<T;i++){
		printf("%.2f\n",total[i]);
	}
	
}
