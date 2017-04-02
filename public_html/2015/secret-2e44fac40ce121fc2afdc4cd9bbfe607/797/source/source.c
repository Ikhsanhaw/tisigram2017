#include <stdio.h>

int main(){
	int x,y;
	scanf("%d %d",&x,&y);
	
	if((x*2)>=y){
		printf("PERANG\n");
	}
	else if((x*2)<y){
		printf("MUNDUR\n");
	}

return 0;
}
