#include<stdio.h>
int main(){
	long int S,M;
	scanf("%d",&S);
	scanf("%d",&M);
	S=S*2;
	if(S>=M){
		printf("PERANG\n");
	}else{
		printf("MUNDUR\n");
	}
	return 0;
}
