#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[16];
	int i,x,z=0,t,u,o,p;
	char w;
	bool e=false;
	scanf("%d %d",&u,&x);
	for(i=0;i<u-1;++i){
		printf("%c ",(char)(64+x-i));
	}
	printf("%c\n",(char)(64+x-i));
//	printf("%c\n",(char)(u));
	//if(u>=50000)printf("%d\n",u-u*i/100);else printf("%d\n",u);
}
