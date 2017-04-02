#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
main(){
	char q[16];
	int i,x,z=0,t,u,o,p;
	char w;
	bool e=false;
	scanf("%d",&u);
	u=u%7;
	switch(u){
		case 0:
			printf("Rabu\n");
			break;
		case 1:
			printf("Kamis\n");
			break;
		case 2:
			printf("Jum'at'\n");
			break;
		case 3:
			printf("Sabtu\n");
			break;
		case 4:
			printf("Minggu\n");
			break;
		case 5:
			printf("Senin\n");
			break;
		case 6:
			printf("Selasa\n");
			break;
	}
//	for(i=0;i<x;++i){
//		
//	}
	//if(u>=50000)printf("%d\n",u-u*i/100);else printf("%d\n",u);
}
