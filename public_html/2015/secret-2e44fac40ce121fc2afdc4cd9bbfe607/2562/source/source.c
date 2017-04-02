#include <stdio.h>

int main(){
	int n,m,i,j,nilai;
	scanf("%d", &n);
	float rata[n]; int sum[n];
	for(i=0;i<n;i++){
		scanf("%d",&m);
		sum[i]=0;
		for(j=0;j<m;j++){
			scanf("%d",&nilai);
			sum[i] += nilai;
		}
		rata[i] = (float)sum[i]/m;
	}
	
	for(i=0;i<n;i++){
		printf("%.2f\n", rata[i]);
	}
	return 0;
}
