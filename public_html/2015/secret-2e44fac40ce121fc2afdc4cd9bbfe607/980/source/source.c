#include<stdio.h>
#include<stdbool.h>
	int i,t,q,w[1000000001];
main(){
	long long h;
	scanf("%d",&q);
	int max=0;
	for(i=0;i<q;++i){
		scanf("%d",&t);
		if(max<t)max=t;
		++w[t];
	}
	bool bo=false;
	for(i=0;i<100000;++i){
		if(w[i]>i)bo=true;
	}
	if(bo==true)printf("-1\n");else{
		printf("%d\n",(max*max+max)/2);
	}
}
