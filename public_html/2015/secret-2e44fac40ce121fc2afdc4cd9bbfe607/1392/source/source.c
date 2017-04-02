#include <stdio.h>

int main(){
	int a,c=0;
	scanf("%d",&a);
	while (a>1){
		if (a%2 == 0){
			c = 1;
		} else {
			c = 0;
			break;
		}
		a = a/2;
	}
	if (c == 1){
		printf("TRUE\n");
	} else {
		printf("FALSE\n");
	}
}
