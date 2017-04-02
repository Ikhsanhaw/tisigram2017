#include <stdio.h>

int main(){
	char a,b;
	scanf("%c\n%c", &a, &b);
//	printf("%c %c",a,b);
	a--;
	while(a>b){
		printf("%c\n",a);
		a--;	
	}
	return 0;
}
