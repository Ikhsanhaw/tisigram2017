#include <stdio.h>

int main(){
	int i,j;
	char nilai[16][16] = {"S","S-","A+","A","A-","B+","B","B-","C+","C","C-","D+","D","D-","E+","E"};
	int hasil=0;
	
	char kemampuan[3][2];
	for(i=0;i<3;i++){
		gets(kemampuan[i]);
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<=16;j++){
			if(strcmp(kemampuan[i],nilai[j]) == 0){
				hasil = hasil+j;
			}
		}
	}
	
	hasil = hasil/3;
	
	printf("%s\n", nilai[hasil]);
	return 0;
}
