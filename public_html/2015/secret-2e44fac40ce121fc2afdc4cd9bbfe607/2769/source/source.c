#include <stdio.h>

int main(){
	int n,jml,bns = 0;
	
	scanf("%d",&n);
	jml = n*6;
	bns = bns + n;
	
	if ((jml / 20) > 0){
		bns = bns + (jml / 20);
		jml = jml + ((jml / 20) * 6);
		
	}
	
	jml = jml + bns;
	
	printf("%d\n",jml);
	return 0;
}
