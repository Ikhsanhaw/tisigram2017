#include <stdio.h>

int fak(int x){
	int res = 1;
	while(x--)
		res = res*x;
	return res;
}
int main(){
	int X,Y;
	scanf("%d %d",&X,&Y);
	printf("%d\n",fak(X)/fak(X-Y));
	return 0;
}

