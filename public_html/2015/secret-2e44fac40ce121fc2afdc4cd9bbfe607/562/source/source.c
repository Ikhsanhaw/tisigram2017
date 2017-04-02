#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[16];
	int i,x,z=0,t,u,o,p;
	char w,s;
	bool e=false;
	scanf("%c %c",&w,&s);
	x=(int)(w);
	for(i=(int)(w)-(int)(s)-1;i>0;--i){
		--x;
		printf("%c\n",(char)(x));
	}
	//printf("%d\n",(int)(w));
//	printf("%c\n",(char)(u));
	//if(u>=50000)printf("%d\n",u-u*i/100);else printf("%d\n",u);
}
