#include <stdio.h>

int main(){
	int X, H,hasil;
	scanf("%d %d", &X, &H);
	
	int i =0, status;
	if(X>0){
		status = 1;
		hasil=1;
		while(i<=H && status == 1){
			hasil = hasil + X;
			if(hasil > H){
				i++;
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
