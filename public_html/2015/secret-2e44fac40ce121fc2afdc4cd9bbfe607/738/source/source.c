#include <stdio.h>

int main(){
	int n, x, temp=0;
	scanf("%d", &n);
	while(n>0){
		scanf("%d", &x);
		n--;
		if(temp<x){
			temp=x;
		}
	}
	
	printf("%d\n", temp);
	
	return 0;
}
