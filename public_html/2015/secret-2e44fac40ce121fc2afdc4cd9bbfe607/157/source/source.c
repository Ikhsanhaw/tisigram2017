#include <stdio.h>

int main(){
	int x,n,max;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&x);
		if(max<x){
			max = x;
		}
		n--;
	}
	printf("%d\n",max);
	return 0;
}
