#include <stdio.h>

int main(){
	int X,Y;
	scanf("%d %d",&X,&Y);
	if(X<=0){
		printf("mustahil\n");
	}else{
		printf("%d\n",Y/X);
	}
	return 0;
}