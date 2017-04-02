#include<stdio.h>

int main(){
	char c[10];
	int time,i;
	scanf("%d%s",&time,&c);
	
	if (time==12&&c[6]=='A'){
		printf("00");
		for(i=0;i<6;i++){
			printf("%c",c[i]);
		}
	}
	else if (time==12&&c[6]=='P'){
		printf("12");
		for(i=0;i<6;i++){
			printf("%c",c[i]);
		}
	}
	else{
		if(c[6]=='P')
			time+=12;
		if(time<10){
			printf("0");
		}
		printf("%d",time);
		for(i=0;i<6;i++){
			printf("%c",c[i]);
		}
	}
	printf("\n");
	return 0;
}
