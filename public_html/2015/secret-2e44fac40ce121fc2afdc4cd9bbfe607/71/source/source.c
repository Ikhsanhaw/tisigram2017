#include <stdio.h>

int main(){
	int n, i, t=0;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		scanf("%d\n", &n);
		if(t<n){
			t=n;
		}
	}
	printf("%d\n",t);
	
	return 0;
}
