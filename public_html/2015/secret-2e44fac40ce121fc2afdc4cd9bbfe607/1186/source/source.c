#include <stdio.h>

int main(){
	int n;
	int m;
	scanf("%d %d",&n,&m);
	
	if(n*2>=m){
		printf("PERANG\n");
	}else{
		printf("MUNDUR\n");
	}
	return 0;
}