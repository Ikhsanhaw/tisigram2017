#include <stdio.h>

int main(){
	int X, H,hasil;
	scanf("%d %d", &X, &H);
	
	int i =1, status;
	if(X>=1){
		status = 1;
		hasil=0;
		while(i<H && status == 1){
			hasil = hasil + X;
			if(hasil >= H){
				printf("%d\n", i);
				status = 0;
			}else{
				i++;
			}
		}		
	}else{
		printf("mustahil\n");
	}
	return 0;
}
