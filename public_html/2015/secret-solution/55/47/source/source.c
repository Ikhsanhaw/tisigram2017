#include <stdio.h>

int main(){
	int N,X,Y;
	scanf("%d %d %d",&N,&X,&Y);
	if ( N == 0 && X > 0 || Y > N){
		printf("mustahil!\n");
	}
	else printf("%d\n%d\n%d\n",N,N+X,N-Y); 
	return 0;
}