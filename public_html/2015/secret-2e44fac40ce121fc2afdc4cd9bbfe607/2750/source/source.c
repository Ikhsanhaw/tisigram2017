#include<stdio.h>

int main(){
	long int ar[100000],ar1[100000],n,q,k,m,i;
	scanf("%ld %ld %ld",&n,&k,&q);
	for(i=0;i<n;i++){
		scanf("%ld",&ar[i]);
	}
	for(i=0;i<n;i++){
		ar1[(i+k)%n]=ar[i];
	}
	for(i=0;i<q;i++){
		scanf("%ld",&m);
		printf("%ld\n",ar1[m]);
	}
	return 0;
}
