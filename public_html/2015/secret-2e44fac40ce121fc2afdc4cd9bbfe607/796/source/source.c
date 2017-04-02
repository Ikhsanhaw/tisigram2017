#include<string.h>
#include<stdio.h>
main(){
	int i,ii,q,w,iii,max,e,t,h;
	scanf("%d",&q);
	for(ii=0;ii<q;++ii){
		scanf("%d%d",&w,&e);
		int qwe[6];
		for(i=0;i<w;++i){
			qwe[i]=0;
		}
		for(i=0;i<e;++i){
			for(iii=0;iii<w;++iii){
				scanf("%d",&t);
				qwe[iii]+=t;
			}
		}
		int max=0;
		for(i=0;i<w;++i){
			if(max<qwe[i]){
				max=qwe[i];
				h=i+1;
			}
		}
		printf("%d\n",h);	
	}
}
