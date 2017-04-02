#include <stdio.h>

int main(){
	int n;
	int a,b;
	scanf("%d",&n);
	int x[100][100];
	int sum[100];
	int i;
	int j;
	int k;
	int max[100];
	int win[100];
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		for(j=0;j<100;j++){
			sum[j]=0;
		}
		for(j=0;j<b;j++){
			for(k=0;k<a;k++){
				scanf("%d",&x[j][k]);
				sum[k]+=x[j][k];
			}
		}
		max[i]=sum[0];
		win[i]=1;
		for(j=1;j<a;j++){
			if(max[i]<sum[j]){
				max[i]=sum[j];
				win[i]=j+1;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",win[i]);
	}
	
	
}