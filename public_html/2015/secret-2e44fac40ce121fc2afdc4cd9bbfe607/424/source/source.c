#include <stdio.h>

int main(){
	char huruf1,huruf2;
	int x;
	scanf("%c %c", &huruf1, &huruf2);
		for(x=huruf1-1;x>huruf2;x--){
			printf("%c\n",x);	
		}
	return 0;
}
