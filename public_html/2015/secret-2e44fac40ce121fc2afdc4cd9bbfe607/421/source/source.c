#include <stdio.h>

int main(){
	char huruf1,huruf2,x;
	scanf("%c %c", &huruf1, &huruf2);
	for(x=huruf1-1;x>huruf2;x--){
		if(x==huruf2-1){
			printf("%c\n",x);
		}else{
			printf("%c ",x);	
		}
	}
}
