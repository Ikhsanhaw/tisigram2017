#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[16];
	long int i,x,z=0,t,u,o,p;
	char w;
	bool e=false;
	scanf("%d %d %d %d",&u,&i,&o,&p);
	z=o-u;
	if(z<0){
		abs(z);
	}
	t=p-i;abs(t);
	printf("%d\n",z+t);
}
