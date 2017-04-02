#include<stdio.h>
int main(){
	unsigned int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	if((x*2)<y){
		printf("MUNDUR\n");
	}else{
		printf("PERANG\n");
	}
	return 0;
}
