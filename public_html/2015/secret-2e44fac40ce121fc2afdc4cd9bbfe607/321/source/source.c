#include <stdio.h>

int main(){
	int x;
	int y;
	
	scanf("%c\n",&x);
	scanf("%c",&y);
	
	while((y+1)<x){
		x--;
		printf("%c\n",x);
	}
}
