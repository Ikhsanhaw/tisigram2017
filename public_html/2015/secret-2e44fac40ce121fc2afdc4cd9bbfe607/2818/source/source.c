#include<stdio.h>

int main(){
	char c[10];
	int time;
	scanf("%d%s",&time,&c);
	
	if (time==12&&c[6]=='A'){
		printf("00%s",c);
	}
	else if (time==12&&c[6]=='P'){
		printf("12%s",c);
	}
	else{
		if(c[6]=='P')
			time+=12;
		if(time<10){
			printf("0");
		}
		printf("%d%s",time,c);
	}
	printf("\n");
	return 0;
}
