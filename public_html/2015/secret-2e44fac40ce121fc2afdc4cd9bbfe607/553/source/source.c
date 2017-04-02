#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[11]={'A','a','I','i','U','u','E','e','O','o'};
	int i,x,z=0,t;
	char w;
	bool e=false;
	scanf("%d",&x);
	for(i=0;i<x;++i){
		scanf("%d",&t);
		if(t>=z)z=t;
		//printf("Halo, Indah!\n");	
	}
	printf("%d",z);
}
