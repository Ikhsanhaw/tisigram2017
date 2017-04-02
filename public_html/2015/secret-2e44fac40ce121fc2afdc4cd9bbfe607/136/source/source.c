#include <stdio.h>

int main(){
	int tgl;
	
	scanf("%d",&tgl);
	switch(tgl%7){
		case 0 : printf("rabu"); break;
		case 1 : printf("kamis"); break;
		case 2 : printf("jumat"); break;
		case 3 : printf("sabtu"); break;
		case 4 : printf("minggu"); break;
		case 5 : printf("senin"); break;
		case 6 : printf("selasa"); break;
	}
		
	return 0;
}
