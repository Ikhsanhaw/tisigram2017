#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[16];
	int i,ii,x,z=0,t,u,o,p;
	char w,s;
	bool e=false;
	scanf("%d",&t);
	for(i=0;i<t;++i){
		scanf("%d",&x);
		e=false;
		for(ii=0;ii<x;++ii){
			scanf("%d",&z);
			if(z<60)e=true;
		}
		if(e==true)printf("anda harus remedial\n");else printf("lulus\n");
	}
		//printf("%c\n",(char)(x));
}
	//printf("%d\n",(int)(w));
//	printf("%c\n",(char)(u));
	//if(u>=50000)printf("%d\n",u-u*i/100);else printf("%d\n",u);
