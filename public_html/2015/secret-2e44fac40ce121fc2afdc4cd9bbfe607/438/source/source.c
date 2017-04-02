#include <stdio.h>

int main(){
	int i;
	scanf("%d",&i);
	i = i%7;
	switch(i){
		case 1: printf("Kamis\n");
				break;
		case 2: printf("Jumat\n");
				break;
		case 3: printf("Sabtu\n");
				break;
		case 4: printf("Minggu\n");
				break;
		case 5: printf("Senin\n");
				break;
		case 6: printf("Selasa\n");
				break;
		case 7: printf("Rabu\n");
				break;
	}
	
	return 0;
	
	
}
