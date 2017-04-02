#include <stdio.h>

int main(){
	char huruf1,huruf2;
	int x;
	scanf("%c %c", &huruf1, &huruf2);
	if(huruf2 < huruf1){
		for(x=huruf1-1;x>huruf2;x--){
			if(x==huruf2-1){
				printf("%c\n",x);
			}else{
				printf("%c ",x);	
			}
		}
		
	}
	return 0;
}
