#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[16];
	long i,x,z=0,t,u,o,p;
	char w;
	bool e=false;
	scanf("%d %d %d %d",&u,&i,&o,&p);
	z=u-o;if(z<0)z*=(-1);
	t=i-p;if(t<0)t*=(-1);
//	for(i=0;i<x;++i){
//		
//	}
	printf("%d\n",z+t);
}
