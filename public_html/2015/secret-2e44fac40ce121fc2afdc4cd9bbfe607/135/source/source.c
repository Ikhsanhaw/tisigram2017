#include <stdio.h>

int main(){
	int tgl;
	
	scanf("%d",&tgl);
	switch(tgl%7){
		case 1 : printf("kamis\n"); break;
		case 2 : printf("jumat\n"); break;
		case 3 : printf("sabtu\n"); break;
		case 4 : printf("minggu\n"); break;
		case 5 : printf("senin\n"); break;
		case 6 : printf("selasa\n"); break;
		case 0 : printf("rabu\n"); break;
	}
		
	return 0;
}
