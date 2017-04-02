#include <stdio.h>

int main(){
	unsigned int p,k,n;
	int i;
	scanf("%d %d %d",&p,&k,&n);
	
	for(i = 0; i < n; i++){
		p++;
		if(p > k){
			p = 0;
		}
	}
	
	printf("%d\n",p);
	
	return 0;
}
