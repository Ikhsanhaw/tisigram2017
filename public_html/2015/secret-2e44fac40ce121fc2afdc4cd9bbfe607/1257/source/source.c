#include<stdio.h>
int main(){
	int q,w;
	scanf("%d%d",&q,&w);
	if(w!=0)printf("%d %d\n",q/w,q%w);
	else printf("0 %d\n",q);
	return 0;
}
