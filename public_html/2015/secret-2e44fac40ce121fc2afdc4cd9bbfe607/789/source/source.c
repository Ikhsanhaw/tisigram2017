#include <stdio.h>

int main(){
	int s, m, h;
	scanf("%d", &s);
	scanf("%d", &m);
	
	h=s*2;
	if(m<=h){
		printf("PERANG\n");
	}else{
		printf("MUNDUR\n");
	}
	return 0;
}
