#include<stdio.h>
#include<string.h>

int main(){
	int p,k,n;
	scanf("%d %d %d",&p,&k,&n);
	printf("%d\n",(n+p)%(k+1));
	return 0;
}
