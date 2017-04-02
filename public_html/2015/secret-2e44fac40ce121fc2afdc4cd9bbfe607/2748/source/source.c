#include<stdio.h>

int main(){
	int ar[100],ar1[100],n,q,k,m,i;
	scanf("%d %d %d",&n,&k,&q);
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++){
		ar1[(i+k)%n]=ar[i];
	}
	for(i=0;i<q;i++){
		scanf("%d",&m);
		printf("%d\n",ar1[m]);
	}
	return 0;
}
