#include <stdio.h>
#include <math.h>

int main(){
	int n,m;

	scanf("%d",&n);
	scanf("%d",&m);
		
	printf("%d %d",n/m, n-(m*(n/m)));
	printf("\n");
	
	return 0;
}
