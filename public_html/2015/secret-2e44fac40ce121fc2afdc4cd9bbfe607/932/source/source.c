#include<stdio.h>
#include<stdbool.h>
#include<math.h>
main(){
	int i,w,q,t,tt;bool bo=false;
	scanf("%d",&tt);
	for(i=0;i<tt;++i){
		scanf("%d%d",&q,&w);
			t=w/2;
		while(t!=1){
			if(w%t==0&&q%t==0){
				q/=t;
				w/=t;
				t=w/2;
				//printf("[]%d[%d]%d[]",q,t,w);
			}
			t--;
		}
		printf("%d/%d\n",w,q);
	}
}
