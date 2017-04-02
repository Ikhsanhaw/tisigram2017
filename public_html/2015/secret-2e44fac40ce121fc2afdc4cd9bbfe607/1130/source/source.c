#include<stdio.h>
#include<stdbool.h>
	int i,q,w[100001];
int main(){
	long long h,t,max=0;
	scanf("%d",&q);
	for(i=0;i<q;++i){
		scanf("%lld",&t);
		if(max<t)max=t;
		if(t<=100000){
			++w[t];
		}
	}
	bool bo=false;
	for(i=0;i<=100000;++i){
		if(w[i]>i)bo=true;
	}
	if(bo==true)printf("-1\n");else{
	h=(max*max+max)/2;
		printf("%lld\n",h);
	}
	return 0;
}
