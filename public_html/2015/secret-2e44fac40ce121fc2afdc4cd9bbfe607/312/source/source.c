#include<stdio.h>

int main(){
	int i,n,m=0;
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=1;i<n;i++){
		if(x[i]>x[m]){
			m=i;
		}
		
	}
	printf("%d",x[m]);
	
	
	
	printf("\n");
	return 0;
}
