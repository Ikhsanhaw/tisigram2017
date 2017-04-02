#include<stdio.h>

int main(){
	int n,i,j;
	scanf("%d",&n);
	int x[n],y[n];
	int f,a;
	for(i=0; i<n; i++){
		scanf("%d %d", &x[i],&y[i]);
	}
	for(i=0; i<n; i++){
		a=y[i];
		f=x[i];
		for(j=f; j>0; j--){
			if(a%j == 0 && f%j == 0 && j!= 1){
				a=a/j;
				f=f/j;
				j=f+1;
			}
		}
		printf("%d/%d\n", a,f);
	}
	return 0;
}