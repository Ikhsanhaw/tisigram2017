#include <stdio.h>

int main(){
	int N,X,Y;
	scanf("%d %d %d",&N,&X,&Y);
	printf("%d\n",N);

	if (N == 0 && X > 0) printf("mustahil\n");
	else printf("%d\n",N+Y);

	if (Y > N) printf("mustahil!\n");
	else printf("%d\n",N-Y);

	return 0;
}