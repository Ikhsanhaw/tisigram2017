#include <stdio.h>
#include <math.h>

int main(){
	int n, a, i, t;
	scanf("%d", &n);
	for(i=1;i<n;i++){
		scanf("%d\n", &a);
		if(t<a){
			t=a;
		}
	}
	printf("%d\n",t);
}
