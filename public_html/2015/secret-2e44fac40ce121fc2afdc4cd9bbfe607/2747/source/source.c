#include<stdio.h>

int main(){
	int n,m,c,i;
	scanf("%d",&n);
	scanf("%d",&c);
	for(i=1;i<n;i++){
		scanf("%d",&m);
		if(m<c)
			c=m;
	}
	printf("%d\n",c);
	return 0;
}
